﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/InstanceStatus.h>
#include <aws/codedeploy/model/InstanceType.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a list deployment instances operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeploymentInstancesInput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API ListDeploymentInstancesRequest : public CodeDeployRequest
  {
  public:
    ListDeploymentInstancesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The unique ID of a deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The unique ID of a deployment.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The unique ID of a deployment.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * <p>The unique ID of a deployment.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p>The unique ID of a deployment.</p>
     */
    inline ListDeploymentInstancesRequest& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The unique ID of a deployment.</p>
     */
    inline ListDeploymentInstancesRequest& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of a deployment.</p>
     */
    inline ListDeploymentInstancesRequest& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}

    /**
     * <p>An identifier returned from the previous list deployment instances call. It
     * can be used to return the next set of deployment instances in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier returned from the previous list deployment instances call. It
     * can be used to return the next set of deployment instances in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An identifier returned from the previous list deployment instances call. It
     * can be used to return the next set of deployment instances in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An identifier returned from the previous list deployment instances call. It
     * can be used to return the next set of deployment instances in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An identifier returned from the previous list deployment instances call. It
     * can be used to return the next set of deployment instances in the list.</p>
     */
    inline ListDeploymentInstancesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier returned from the previous list deployment instances call. It
     * can be used to return the next set of deployment instances in the list.</p>
     */
    inline ListDeploymentInstancesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier returned from the previous list deployment instances call. It
     * can be used to return the next set of deployment instances in the list.</p>
     */
    inline ListDeploymentInstancesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>A subset of instances to list by status:</p> <ul> <li> <p>Pending: Include
     * those instance with pending deployments.</p> </li> <li> <p>InProgress: Include
     * those instance where deployments are still in progress.</p> </li> <li>
     * <p>Succeeded: Include those instances with successful deployments.</p> </li>
     * <li> <p>Failed: Include those instance with failed deployments.</p> </li> <li>
     * <p>Skipped: Include those instance with skipped deployments.</p> </li> <li>
     * <p>Unknown: Include those instance with deployments in an unknown state.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<InstanceStatus>& GetInstanceStatusFilter() const{ return m_instanceStatusFilter; }

    /**
     * <p>A subset of instances to list by status:</p> <ul> <li> <p>Pending: Include
     * those instance with pending deployments.</p> </li> <li> <p>InProgress: Include
     * those instance where deployments are still in progress.</p> </li> <li>
     * <p>Succeeded: Include those instances with successful deployments.</p> </li>
     * <li> <p>Failed: Include those instance with failed deployments.</p> </li> <li>
     * <p>Skipped: Include those instance with skipped deployments.</p> </li> <li>
     * <p>Unknown: Include those instance with deployments in an unknown state.</p>
     * </li> </ul>
     */
    inline void SetInstanceStatusFilter(const Aws::Vector<InstanceStatus>& value) { m_instanceStatusFilterHasBeenSet = true; m_instanceStatusFilter = value; }

    /**
     * <p>A subset of instances to list by status:</p> <ul> <li> <p>Pending: Include
     * those instance with pending deployments.</p> </li> <li> <p>InProgress: Include
     * those instance where deployments are still in progress.</p> </li> <li>
     * <p>Succeeded: Include those instances with successful deployments.</p> </li>
     * <li> <p>Failed: Include those instance with failed deployments.</p> </li> <li>
     * <p>Skipped: Include those instance with skipped deployments.</p> </li> <li>
     * <p>Unknown: Include those instance with deployments in an unknown state.</p>
     * </li> </ul>
     */
    inline void SetInstanceStatusFilter(Aws::Vector<InstanceStatus>&& value) { m_instanceStatusFilterHasBeenSet = true; m_instanceStatusFilter = std::move(value); }

    /**
     * <p>A subset of instances to list by status:</p> <ul> <li> <p>Pending: Include
     * those instance with pending deployments.</p> </li> <li> <p>InProgress: Include
     * those instance where deployments are still in progress.</p> </li> <li>
     * <p>Succeeded: Include those instances with successful deployments.</p> </li>
     * <li> <p>Failed: Include those instance with failed deployments.</p> </li> <li>
     * <p>Skipped: Include those instance with skipped deployments.</p> </li> <li>
     * <p>Unknown: Include those instance with deployments in an unknown state.</p>
     * </li> </ul>
     */
    inline ListDeploymentInstancesRequest& WithInstanceStatusFilter(const Aws::Vector<InstanceStatus>& value) { SetInstanceStatusFilter(value); return *this;}

    /**
     * <p>A subset of instances to list by status:</p> <ul> <li> <p>Pending: Include
     * those instance with pending deployments.</p> </li> <li> <p>InProgress: Include
     * those instance where deployments are still in progress.</p> </li> <li>
     * <p>Succeeded: Include those instances with successful deployments.</p> </li>
     * <li> <p>Failed: Include those instance with failed deployments.</p> </li> <li>
     * <p>Skipped: Include those instance with skipped deployments.</p> </li> <li>
     * <p>Unknown: Include those instance with deployments in an unknown state.</p>
     * </li> </ul>
     */
    inline ListDeploymentInstancesRequest& WithInstanceStatusFilter(Aws::Vector<InstanceStatus>&& value) { SetInstanceStatusFilter(std::move(value)); return *this;}

    /**
     * <p>A subset of instances to list by status:</p> <ul> <li> <p>Pending: Include
     * those instance with pending deployments.</p> </li> <li> <p>InProgress: Include
     * those instance where deployments are still in progress.</p> </li> <li>
     * <p>Succeeded: Include those instances with successful deployments.</p> </li>
     * <li> <p>Failed: Include those instance with failed deployments.</p> </li> <li>
     * <p>Skipped: Include those instance with skipped deployments.</p> </li> <li>
     * <p>Unknown: Include those instance with deployments in an unknown state.</p>
     * </li> </ul>
     */
    inline ListDeploymentInstancesRequest& AddInstanceStatusFilter(const InstanceStatus& value) { m_instanceStatusFilterHasBeenSet = true; m_instanceStatusFilter.push_back(value); return *this; }

    /**
     * <p>A subset of instances to list by status:</p> <ul> <li> <p>Pending: Include
     * those instance with pending deployments.</p> </li> <li> <p>InProgress: Include
     * those instance where deployments are still in progress.</p> </li> <li>
     * <p>Succeeded: Include those instances with successful deployments.</p> </li>
     * <li> <p>Failed: Include those instance with failed deployments.</p> </li> <li>
     * <p>Skipped: Include those instance with skipped deployments.</p> </li> <li>
     * <p>Unknown: Include those instance with deployments in an unknown state.</p>
     * </li> </ul>
     */
    inline ListDeploymentInstancesRequest& AddInstanceStatusFilter(InstanceStatus&& value) { m_instanceStatusFilterHasBeenSet = true; m_instanceStatusFilter.push_back(std::move(value)); return *this; }

    /**
     * <p>The set of instances in a blue/green deployment, either those in the original
     * environment ("BLUE") or those in the replacement environment ("GREEN"), for
     * which you want to view instance information.</p>
     */
    inline const Aws::Vector<InstanceType>& GetInstanceTypeFilter() const{ return m_instanceTypeFilter; }

    /**
     * <p>The set of instances in a blue/green deployment, either those in the original
     * environment ("BLUE") or those in the replacement environment ("GREEN"), for
     * which you want to view instance information.</p>
     */
    inline void SetInstanceTypeFilter(const Aws::Vector<InstanceType>& value) { m_instanceTypeFilterHasBeenSet = true; m_instanceTypeFilter = value; }

    /**
     * <p>The set of instances in a blue/green deployment, either those in the original
     * environment ("BLUE") or those in the replacement environment ("GREEN"), for
     * which you want to view instance information.</p>
     */
    inline void SetInstanceTypeFilter(Aws::Vector<InstanceType>&& value) { m_instanceTypeFilterHasBeenSet = true; m_instanceTypeFilter = std::move(value); }

    /**
     * <p>The set of instances in a blue/green deployment, either those in the original
     * environment ("BLUE") or those in the replacement environment ("GREEN"), for
     * which you want to view instance information.</p>
     */
    inline ListDeploymentInstancesRequest& WithInstanceTypeFilter(const Aws::Vector<InstanceType>& value) { SetInstanceTypeFilter(value); return *this;}

    /**
     * <p>The set of instances in a blue/green deployment, either those in the original
     * environment ("BLUE") or those in the replacement environment ("GREEN"), for
     * which you want to view instance information.</p>
     */
    inline ListDeploymentInstancesRequest& WithInstanceTypeFilter(Aws::Vector<InstanceType>&& value) { SetInstanceTypeFilter(std::move(value)); return *this;}

    /**
     * <p>The set of instances in a blue/green deployment, either those in the original
     * environment ("BLUE") or those in the replacement environment ("GREEN"), for
     * which you want to view instance information.</p>
     */
    inline ListDeploymentInstancesRequest& AddInstanceTypeFilter(const InstanceType& value) { m_instanceTypeFilterHasBeenSet = true; m_instanceTypeFilter.push_back(value); return *this; }

    /**
     * <p>The set of instances in a blue/green deployment, either those in the original
     * environment ("BLUE") or those in the replacement environment ("GREEN"), for
     * which you want to view instance information.</p>
     */
    inline ListDeploymentInstancesRequest& AddInstanceTypeFilter(InstanceType&& value) { m_instanceTypeFilterHasBeenSet = true; m_instanceTypeFilter.push_back(std::move(value)); return *this; }

  private:
    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    Aws::Vector<InstanceStatus> m_instanceStatusFilter;
    bool m_instanceStatusFilterHasBeenSet;
    Aws::Vector<InstanceType> m_instanceTypeFilter;
    bool m_instanceTypeFilterHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
