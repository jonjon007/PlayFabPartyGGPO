#pragma once

#ifndef DISABLE_PLAYFABENTITY_API

#include <playfab/PlayFabCallRequestContainer.h>
#include <playfab/PlayFabApiSettings.h>
#include <playfab/PlayFabAuthenticationContext.h>
#include <playfab/PlayFabGroupsDataModels.h>
#include <memory>

namespace PlayFabInternal
{
    /// <summary>
    /// Main interface for PlayFab Sdk, specifically all Groups APIs
    /// </summary>
    class PlayFabGroupsInstanceAPI
    {
    private:
        std::shared_ptr<PlayFabApiSettings> settings;
        std::shared_ptr<PlayFabAuthenticationContext> authContext;

    public:
        PlayFabGroupsInstanceAPI();
        explicit PlayFabGroupsInstanceAPI(std::shared_ptr<PlayFabApiSettings> apiSettings);
        explicit PlayFabGroupsInstanceAPI(std::shared_ptr<PlayFabAuthenticationContext> authenticationContext);
        PlayFabGroupsInstanceAPI(std::shared_ptr<PlayFabApiSettings> apiSettings, std::shared_ptr<PlayFabAuthenticationContext> authenticationContext);
        ~PlayFabGroupsInstanceAPI();
        PlayFabGroupsInstanceAPI(const PlayFabGroupsInstanceAPI& source) = delete; // disable copy
        PlayFabGroupsInstanceAPI(PlayFabGroupsInstanceAPI&&) = delete; // disable move
        PlayFabGroupsInstanceAPI& operator=(const PlayFabGroupsInstanceAPI& source) = delete; // disable assignment
        PlayFabGroupsInstanceAPI& operator=(PlayFabGroupsInstanceAPI&& other) = delete; // disable move assignment

        std::shared_ptr<PlayFabApiSettings> GetSettings() const;
        void SetSettings(std::shared_ptr<PlayFabApiSettings> apiSettings);
        std::shared_ptr<PlayFabAuthenticationContext> GetAuthenticationContext() const;
        void SetAuthenticationContext(std::shared_ptr<PlayFabAuthenticationContext> authenticationContext);
        size_t Update();
        void ForgetAllCredentials();

        // ------------ Generated API calls
        void AcceptGroupApplication(GroupsModels::AcceptGroupApplicationRequest& request, const ProcessApiCallback<GroupsModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        void AcceptGroupInvitation(GroupsModels::AcceptGroupInvitationRequest& request, const ProcessApiCallback<GroupsModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        void AddMembers(GroupsModels::AddMembersRequest& request, const ProcessApiCallback<GroupsModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        void ApplyToGroup(GroupsModels::ApplyToGroupRequest& request, const ProcessApiCallback<GroupsModels::ApplyToGroupResponse> callback, const ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        void BlockEntity(GroupsModels::BlockEntityRequest& request, const ProcessApiCallback<GroupsModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        void ChangeMemberRole(GroupsModels::ChangeMemberRoleRequest& request, const ProcessApiCallback<GroupsModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        void CreateGroup(GroupsModels::CreateGroupRequest& request, const ProcessApiCallback<GroupsModels::CreateGroupResponse> callback, const ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        void CreateRole(GroupsModels::CreateGroupRoleRequest& request, const ProcessApiCallback<GroupsModels::CreateGroupRoleResponse> callback, const ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        void DeleteGroup(GroupsModels::DeleteGroupRequest& request, const ProcessApiCallback<GroupsModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        void DeleteRole(GroupsModels::DeleteRoleRequest& request, const ProcessApiCallback<GroupsModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        void GetGroup(GroupsModels::GetGroupRequest& request, const ProcessApiCallback<GroupsModels::GetGroupResponse> callback, const ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        void InviteToGroup(GroupsModels::InviteToGroupRequest& request, const ProcessApiCallback<GroupsModels::InviteToGroupResponse> callback, const ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        void IsMember(GroupsModels::IsMemberRequest& request, const ProcessApiCallback<GroupsModels::IsMemberResponse> callback, const ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        void ListGroupApplications(GroupsModels::ListGroupApplicationsRequest& request, const ProcessApiCallback<GroupsModels::ListGroupApplicationsResponse> callback, const ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        void ListGroupBlocks(GroupsModels::ListGroupBlocksRequest& request, const ProcessApiCallback<GroupsModels::ListGroupBlocksResponse> callback, const ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        void ListGroupInvitations(GroupsModels::ListGroupInvitationsRequest& request, const ProcessApiCallback<GroupsModels::ListGroupInvitationsResponse> callback, const ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        void ListGroupMembers(GroupsModels::ListGroupMembersRequest& request, const ProcessApiCallback<GroupsModels::ListGroupMembersResponse> callback, const ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        void ListMembership(GroupsModels::ListMembershipRequest& request, const ProcessApiCallback<GroupsModels::ListMembershipResponse> callback, const ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        void ListMembershipOpportunities(GroupsModels::ListMembershipOpportunitiesRequest& request, const ProcessApiCallback<GroupsModels::ListMembershipOpportunitiesResponse> callback, const ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        void RemoveGroupApplication(GroupsModels::RemoveGroupApplicationRequest& request, const ProcessApiCallback<GroupsModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        void RemoveGroupInvitation(GroupsModels::RemoveGroupInvitationRequest& request, const ProcessApiCallback<GroupsModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        void RemoveMembers(GroupsModels::RemoveMembersRequest& request, const ProcessApiCallback<GroupsModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        void UnblockEntity(GroupsModels::UnblockEntityRequest& request, const ProcessApiCallback<GroupsModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        void UpdateGroup(GroupsModels::UpdateGroupRequest& request, const ProcessApiCallback<GroupsModels::UpdateGroupResponse> callback, const ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        void UpdateRole(GroupsModels::UpdateGroupRoleRequest& request, const ProcessApiCallback<GroupsModels::UpdateGroupRoleResponse> callback, const ErrorCallback errorCallback = nullptr, void* customData = nullptr);

        // ------------ Generated result handlers
        void OnAcceptGroupApplicationResult(int httpCode, const std::string& result, const std::shared_ptr<CallRequestContainerBase>& reqContainer);
        void OnAcceptGroupInvitationResult(int httpCode, const std::string& result, const std::shared_ptr<CallRequestContainerBase>& reqContainer);
        void OnAddMembersResult(int httpCode, const std::string& result, const std::shared_ptr<CallRequestContainerBase>& reqContainer);
        void OnApplyToGroupResult(int httpCode, const std::string& result, const std::shared_ptr<CallRequestContainerBase>& reqContainer);
        void OnBlockEntityResult(int httpCode, const std::string& result, const std::shared_ptr<CallRequestContainerBase>& reqContainer);
        void OnChangeMemberRoleResult(int httpCode, const std::string& result, const std::shared_ptr<CallRequestContainerBase>& reqContainer);
        void OnCreateGroupResult(int httpCode, const std::string& result, const std::shared_ptr<CallRequestContainerBase>& reqContainer);
        void OnCreateRoleResult(int httpCode, const std::string& result, const std::shared_ptr<CallRequestContainerBase>& reqContainer);
        void OnDeleteGroupResult(int httpCode, const std::string& result, const std::shared_ptr<CallRequestContainerBase>& reqContainer);
        void OnDeleteRoleResult(int httpCode, const std::string& result, const std::shared_ptr<CallRequestContainerBase>& reqContainer);
        void OnGetGroupResult(int httpCode, const std::string& result, const std::shared_ptr<CallRequestContainerBase>& reqContainer);
        void OnInviteToGroupResult(int httpCode, const std::string& result, const std::shared_ptr<CallRequestContainerBase>& reqContainer);
        void OnIsMemberResult(int httpCode, const std::string& result, const std::shared_ptr<CallRequestContainerBase>& reqContainer);
        void OnListGroupApplicationsResult(int httpCode, const std::string& result, const std::shared_ptr<CallRequestContainerBase>& reqContainer);
        void OnListGroupBlocksResult(int httpCode, const std::string& result, const std::shared_ptr<CallRequestContainerBase>& reqContainer);
        void OnListGroupInvitationsResult(int httpCode, const std::string& result, const std::shared_ptr<CallRequestContainerBase>& reqContainer);
        void OnListGroupMembersResult(int httpCode, const std::string& result, const std::shared_ptr<CallRequestContainerBase>& reqContainer);
        void OnListMembershipResult(int httpCode, const std::string& result, const std::shared_ptr<CallRequestContainerBase>& reqContainer);
        void OnListMembershipOpportunitiesResult(int httpCode, const std::string& result, const std::shared_ptr<CallRequestContainerBase>& reqContainer);
        void OnRemoveGroupApplicationResult(int httpCode, const std::string& result, const std::shared_ptr<CallRequestContainerBase>& reqContainer);
        void OnRemoveGroupInvitationResult(int httpCode, const std::string& result, const std::shared_ptr<CallRequestContainerBase>& reqContainer);
        void OnRemoveMembersResult(int httpCode, const std::string& result, const std::shared_ptr<CallRequestContainerBase>& reqContainer);
        void OnUnblockEntityResult(int httpCode, const std::string& result, const std::shared_ptr<CallRequestContainerBase>& reqContainer);
        void OnUpdateGroupResult(int httpCode, const std::string& result, const std::shared_ptr<CallRequestContainerBase>& reqContainer);
        void OnUpdateRoleResult(int httpCode, const std::string& result, const std::shared_ptr<CallRequestContainerBase>& reqContainer);
        bool ValidateResult(PlayFabResultCommon& resultCommon, const CallRequestContainer& container);
    private:
        std::shared_ptr<PlayFabAuthenticationContext> GetOrCreateAuthenticationContext();
    };
}

#endif
