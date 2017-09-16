---
title: CUserToolsManager Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CUserToolsManager
- AFXUSERTOOLSMANAGER/CUserToolsManager
- AFXUSERTOOLSMANAGER/CUserToolsManager::CUserToolsManager
- AFXUSERTOOLSMANAGER/CUserToolsManager::CreateNewTool
- AFXUSERTOOLSMANAGER/CUserToolsManager::FindTool
- AFXUSERTOOLSMANAGER/CUserToolsManager::GetArgumentsMenuID
- AFXUSERTOOLSMANAGER/CUserToolsManager::GetDefExt
- AFXUSERTOOLSMANAGER/CUserToolsManager::GetFilter
- AFXUSERTOOLSMANAGER/CUserToolsManager::GetInitialDirMenuID
- AFXUSERTOOLSMANAGER/CUserToolsManager::GetMaxTools
- AFXUSERTOOLSMANAGER/CUserToolsManager::GetToolsEntryCmd
- AFXUSERTOOLSMANAGER/CUserToolsManager::GetUserTools
- AFXUSERTOOLSMANAGER/CUserToolsManager::InvokeTool
- AFXUSERTOOLSMANAGER/CUserToolsManager::IsUserToolCmd
- AFXUSERTOOLSMANAGER/CUserToolsManager::LoadState
- AFXUSERTOOLSMANAGER/CUserToolsManager::MoveToolDown
- AFXUSERTOOLSMANAGER/CUserToolsManager::MoveToolUp
- AFXUSERTOOLSMANAGER/CUserToolsManager::RemoveTool
- AFXUSERTOOLSMANAGER/CUserToolsManager::SaveState
- AFXUSERTOOLSMANAGER/CUserToolsManager::SetDefExt
- AFXUSERTOOLSMANAGER/CUserToolsManager::SetFilter
dev_langs:
- C++
helpviewer_keywords:
- CUserToolsManager [MFC], CUserToolsManager
- CUserToolsManager [MFC], CreateNewTool
- CUserToolsManager [MFC], FindTool
- CUserToolsManager [MFC], GetArgumentsMenuID
- CUserToolsManager [MFC], GetDefExt
- CUserToolsManager [MFC], GetFilter
- CUserToolsManager [MFC], GetInitialDirMenuID
- CUserToolsManager [MFC], GetMaxTools
- CUserToolsManager [MFC], GetToolsEntryCmd
- CUserToolsManager [MFC], GetUserTools
- CUserToolsManager [MFC], InvokeTool
- CUserToolsManager [MFC], IsUserToolCmd
- CUserToolsManager [MFC], LoadState
- CUserToolsManager [MFC], MoveToolDown
- CUserToolsManager [MFC], MoveToolUp
- CUserToolsManager [MFC], RemoveTool
- CUserToolsManager [MFC], SaveState
- CUserToolsManager [MFC], SetDefExt
- CUserToolsManager [MFC], SetFilter
ms.assetid: bdfa37ae-efca-4616-abb5-9d0dcd2d335b
caps.latest.revision: 26
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: MT
ms.sourcegitcommit: 4e0027c345e4d414e28e8232f9e9ced2b73f0add
ms.openlocfilehash: 68a6b8e0ebbc5b3aa50ea910eb868d17c9a27ce6
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cusertoolsmanager-class"></a>CUserToolsManager Class
Maintains the collection of [CUserTool Class](../../mfc/reference/cusertool-class.md) objects in an application. A user tool is a menu item that runs an external application. The `CUserToolsManager` object enables the user or developer to add new user tools to the application. It supports the execution of the commands associated with user tools, and it also saves information about user tools in the Windows registry.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CUserToolsManager : public CObject  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CUserToolsManager::CUserToolsManager](#cusertoolsmanager)|Constructs a `CUserToolsManager`.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CUserToolsManager::CreateNewTool](#createnewtool)|Creates a new user tool.|  
|[CUserToolsManager::FindTool](#findtool)|Returns the pointer to the `CMFCUserTool` object that is associated with a specified command ID.|  
|[CUserToolsManager::GetArgumentsMenuID](#getargumentsmenuid)|Returns the resource ID that is associated with the **Arguments** menu on the **Tools** tab of the **Customize** dialog box.|  
|[CUserToolsManager::GetDefExt](#getdefext)|Returns the default extension that the **File Open** dialog box ( [CFileDialog](../../mfc/reference/cfiledialog-class.md#cfiledialog)) uses in the **Command** field on the **Tools** tab of the **Customize** dialog box.|  
|[CUserToolsManager::GetFilter](#getfilter)|Returns the file filter that the **File Open** dialog box ( [CFileDialog Class](../../mfc/reference/cfiledialog-class.md)) uses in the **Command** field on the **Tools** tab of the **Customize** dialog box.|  
|[CUserToolsManager::GetInitialDirMenuID](#getinitialdirmenuid)|Returns the resource ID that is associated with the **Initial directory** menu on the **Tools** tab of the **Customize** dialog box.|  
|[CUserToolsManager::GetMaxTools](#getmaxtools)|Returns the maximum number of user tools that can be allocated in the application.|  
|[CUserToolsManager::GetToolsEntryCmd](#gettoolsentrycmd)|Returns the command ID of the menu item placeholder for user tools.|  
|[CUserToolsManager::GetUserTools](#getusertools)|Returns a reference to the list of user tools.|  
|[CUserToolsManager::InvokeTool](#invoketool)|Executes an application associated with the user tool that has a specified command ID.|  
|[CUserToolsManager::IsUserToolCmd](#isusertoolcmd)|Determines whether a command ID is associated with a user tool.|  
|[CUserToolsManager::LoadState](#loadstate)|Loads information about user tools from the Windows registry.|  
|[CUserToolsManager::MoveToolDown](#movetooldown)|Moves the specified user tool down in the list of user tools.|  
|[CUserToolsManager::MoveToolUp](#movetoolup)|Moves the specified user tool up in the list of user tools.|  
|[CUserToolsManager::RemoveTool](#removetool)|Removes the specified user tool from the application.|  
|[CUserToolsManager::SaveState](#savestate)|Stores information about user tools in the Windows registry.|  
|[CUserToolsManager::SetDefExt](#setdefext)|Specifies the default extension that the **File Open** dialog box ( [CFileDialog Class](../../mfc/reference/cfiledialog-class.md)) uses in the **Command** field on the **Tools** tab of the **Customize** dialog box.|  
|[CUserToolsManager::SetFilter](#setfilter)|Specifies the file filter that the **File Open** dialog box ( [CFileDialog Class](../../mfc/reference/cfiledialog-class.md)) uses in the **Command** field on the **Tools** tab of the **Customize** dialog box.|  
  
## <a name="remarks"></a>Remarks  
 To incorporate user tools into your application, you must:  
  
 1. Reserve a menu item and an associated command ID for a user tool menu entry.  
  
 2. Reserve a sequential command ID for each user tool that a user can define in your application.  
  
 3. Call the [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) method and supply the following parameters: menu command ID, first user tool command ID, and last user tool command ID.  
  
 There should be only one global `CUserToolsManager` object per application.  
  
 For an example of user tools, see the VisualStudioDemo sample project.  
  
## <a name="example"></a>Example  
 The following example demonstrates how to retrieve a reference to a `CUserToolsManager` object and how to create new user tools. This code snippet is part of the [Visual Studio Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#38](../../mfc/codesnippet/cpp/cusertoolsmanager-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CUserToolsManager`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxusertoolsmanager.h  
  
##  <a name="createnewtool"></a>  CUserToolsManager::CreateNewTool  
 Creates a new user tool.  
  
```  
CUserTool* CreateNewTool();
```  
  
### <a name="return-value"></a>Return Value  
 A pointer to the newly created user tool, or `NULL` if the number of user tools has exceeded the maximum. The returned type is the same as the type that is passed to `CWinAppEx::EnableUserTools` as the `pToolRTC` parameter.  
  
### <a name="remarks"></a>Remarks  
 This method finds the first available menu command ID in the range that is supplied in the call to [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) and assigns the user tool this ID.  
  
 The method fails if the number of tools has reached the maximum. This occurs when all command IDs within the range are assigned to user tools. You can retrieve the maximum number of tools by calling [CUserToolsManager::GetMaxTools](#getmaxtools). You can get access to the tools list by calling the [CUserToolsManager::GetUserTools](#getusertools) method.  
  
##  <a name="cusertoolsmanager"></a>  CUserToolsManager::CUserToolsManager  
 Constructs a `CUserToolsManager`. Each application must have at most one user tools manager.  
  
```  
CUserToolsManager();

 
CUserToolsManager(
    const UINT uiCmdToolsDummy,  
    const UINT uiCmdFirst,  
    const UINT uiCmdLast,  
    CRuntimeClass* pToolRTC=RUNTIME_CLASS(CUserTool),  
    UINT uArgMenuID=0,  
    UINT uInitDirMenuID=0);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `uiCmdToolsDummy`  
 An unsigned integer that the framework uses as a placeholder for the command ID of the user tools menu.  
  
 [in] `uiCmdFirst`  
 The command ID for the first user tool command.  
  
 [in] `uiCmdLast`  
 The command ID for the last user tool command.  
  
 [in] `pToolRTC`  
 The class that [CUserToolsManager::CreateNewTool](#createnewtool) creates. By using this class, you can use a derived type of [CUserTool Class](../../mfc/reference/cusertool-class.md) instead of the default implementation.  
  
 [in] `uArgMenuID`  
 The menu resource ID of the arguments popup menu.  
  
 [in] `uInitDirMenuID`  
 The menu resource ID of the initial directory popup menu.  
  
### <a name="remarks"></a>Remarks  
 Do not call this constructor. Instead, call [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) to enable user tools, and call [CWinAppEx::GetUserToolsManager](../../mfc/reference/cwinappex-class.md#getusertoolsmanager) to obtain a pointer to the `CUserToolsManager`. For more information, see [User-defined Tools](../../mfc/user-defined-tools.md).  
  
##  <a name="findtool"></a>  CUserToolsManager::FindTool  
 Returns the pointer to the [CUserTool Class](../../mfc/reference/cusertool-class.md) object that is associated with a specified command ID.  
  
```  
CUserTool* FindTool(UINT uiCmdId) const;  
```  
  
### <a name="parameters"></a>Parameters  
 [in] `uiCmdId`  
 A menu command identifier.  
  
### <a name="return-value"></a>Return Value  
 A pointer to a [CUserTool Class](../../mfc/reference/cusertool-class.md) or `CUserTool`-derived object if success; otherwise `NULL`.  
  
### <a name="remarks"></a>Remarks  
 When `FindTool` is successful, the returned type is the same as the type of the `pToolRTC` parameter to [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools).  
  
##  <a name="getargumentsmenuid"></a>  CUserToolsManager::GetArgumentsMenuID  
 Returns the resource ID that is associated with the **Arguments** menu on the **Tools** tab of the **Customize** dialog box.  
  
```  
UINT GetArgumentsMenuID() const;  
```  
  
### <a name="return-value"></a>Return Value  
 The identifier of a menu resource.  
  
### <a name="remarks"></a>Remarks  
 The `uArgMenuID` parameter of [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) specifies the ID of the resource.  
  
##  <a name="getdefext"></a>  CUserToolsManager::GetDefExt  
 Returns the default extension that the **File Open** dialog box ( [CFileDialog](../../mfc/reference/cfiledialog-class.md#cfiledialog)) uses in the **Command** field on the **Tools** tab of the **Customize** dialog box.  
  
```  
const CString& GetDefExt() const;  
```  
  
### <a name="return-value"></a>Return Value  
 A reference to the `CString` object that contains the extension.  
  
##  <a name="getfilter"></a>  CUserToolsManager::GetFilter  
 Returns the file filter that the **File Open** dialog box ( [CFileDialog Class](../../mfc/reference/cfiledialog-class.md)) uses in the **Command** field on the **Tools** tab of the **Customize** dialog box.  
  
```  
const CString& GetFilter() const;  
```  
  
### <a name="return-value"></a>Return Value  
 A reference to the `CString` object that contains the filter.  
  
##  <a name="getinitialdirmenuid"></a>  CUserToolsManager::GetInitialDirMenuID  
 Returns the resource ID that is associated with the **Initial directory** menu on the **Tools** tab of the **Customize** dialog box.  
  
```  
UINT GetInitialDirMenuID() const;  
```  
  
### <a name="return-value"></a>Return Value  
 A menu resource identifier.  
  
### <a name="remarks"></a>Remarks  
 The returned ID is specified in the `uInitDirMenuID` parameter of [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools).  
  
##  <a name="getmaxtools"></a>  CUserToolsManager::GetMaxTools  
 Returns the maximum number of user tools that can be allocated in the application.  
  
```  
int GetMaxTools() const;  
```  
  
### <a name="return-value"></a>Return Value  
 The maximum number of user tools that can be allocated.  
  
### <a name="remarks"></a>Remarks  
 Call this method to retrieve the maximum number of tools that can be allocated in the application. This number is the number of IDs in the range from the `uiCmdFirst` through the `uiCmdLast` parameters that you pass to [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools).  
  
##  <a name="gettoolsentrycmd"></a>  CUserToolsManager::GetToolsEntryCmd  
 Returns the command ID of the menu item placeholder for user tools.  
  
```  
UINT GetToolsEntryCmd() const;  
```  
  
### <a name="return-value"></a>Return Value  
 The command ID of the placeholder.  
  
### <a name="remarks"></a>Remarks  
 To enable user tools, you call [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools). The `uiCmdToolsDummy` parameter specifies the command ID of the tools entry command. This method returns the tools entry command ID. Wherever that ID is used in a menu, it is replaced by the list of user tools when the menu appears.  
  
##  <a name="getusertools"></a>  CUserToolsManager::GetUserTools  
 Returns a reference to the list of user tools.  
  
```  
const CObList& GetUserTools() const;  
```  
  
### <a name="return-value"></a>Return Value  
 A const reference to a [CObList Class](../../mfc/reference/coblist-class.md) object that contains a list of user tools.  
  
### <a name="remarks"></a>Remarks  
 Call this method to retrieve a list of user tools that the [CUserToolsManager](../../mfc/reference/cusertoolsmanager-class.md) object maintains. Each user tool is represented by an object of type [CUserTool Class](../../mfc/reference/cusertool-class.md) or a type derived from `CUserTool`. The type is specified by the `pToolRTC` parameter when you call [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) to enable user tools.  
  
##  <a name="invoketool"></a>  CUserToolsManager::InvokeTool  
 Executes an application associated with the user tool that has a specified command ID.  
  
```  
BOOL InvokeTool(UINT uiCmdId);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `uiCmdId`  
 The menu command ID associated with the user tool.  
  
### <a name="return-value"></a>Return Value  
 Nonzero if the command associated with user tool was executed successfully; otherwise 0.  
  
### <a name="remarks"></a>Remarks  
 Call this method to execute an application associated with the user tool that has the command ID specified by `uiCmdId`.  
  
##  <a name="isusertoolcmd"></a>  CUserToolsManager::IsUserToolCmd  
 Determines whether a command ID is associated with a user tool.  
  
```  
BOOL IsUserToolCmd(UINT uiCmdId) const;  
```  
  
### <a name="parameters"></a>Parameters  
 [in] `uiCmdId`  
 A command ID of the menu item.  
  
### <a name="return-value"></a>Return Value  
 Nonzero if a given command ID is associated with a user tool; otherwise 0.  
  
### <a name="remarks"></a>Remarks  
 This method checks whether the given command ID is in the command ID range. You specify the range when you call [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) to enable user tools.  
  
##  <a name="loadstate"></a>  CUserToolsManager::LoadState  
 Loads information about user tools from the Windows registry.  
  
```  
BOOL LoadState(LPCTSTR lpszProfileName=NULL);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `lpszProfileName`  
 The path of the Windows registry key.  
  
### <a name="return-value"></a>Return Value  
 Nonzero if the state was loaded successfully; otherwise 0.  
  
### <a name="remarks"></a>Remarks  
 This method loads the state of the `CUserToolsManager` object from the Windows registry.  
  
 Usually, you do not call this method directly. [CWinAppEx::LoadState](../../mfc/reference/cwinappex-class.md#loadstate) calls it as part of workspace initialization process.  
  
##  <a name="movetooldown"></a>  CUserToolsManager::MoveToolDown  
 Moves the specified user tool down in the list of user tools.  
  
```  
BOOL MoveToolDown(CUserTool* pTool);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `pTool`  
 Specifies the user tool to move.  
  
### <a name="return-value"></a>Return Value  
 Nonzero if the user tool was moved down successfully; otherwise 0.  
  
### <a name="remarks"></a>Remarks  
 The method fails if the tool that the `pTool` specifies is not in the internal list or if the tool is last in the list.  
  
##  <a name="movetoolup"></a>  CUserToolsManager::MoveToolUp  
 Moves the specified user tool up in the list of user tools.  
  
```  
BOOL MoveToolUp(CUserTool* pTool);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `pTool`  
 Specifies the user tool to move.  
  
### <a name="return-value"></a>Return Value  
 Nonzero if the user tool was moved up successfully; otherwise 0.  
  
### <a name="remarks"></a>Remarks  
 The method fails if the tool that the `pTool` parameter specifies is not in the internal list or if the tool is the first tool item in the list.  
  
##  <a name="removetool"></a>  CUserToolsManager::RemoveTool  
 Removes the specified user tool from the application.  
  
```  
BOOL RemoveTool(CUserTool* pTool);
```  
  
### <a name="parameters"></a>Parameters  
 [in, out] `pTool`  
 A pointer to a user tool to be removed.  
  
### <a name="return-value"></a>Return Value  
 `TRUE` if the tool is successfully removed. Otherwise, `FALSE`.  
  
### <a name="remarks"></a>Remarks  
 If the tool is successfully removed, this method deletes `pTool`.  
  
##  <a name="savestate"></a>  CUserToolsManager::SaveState  
 Stores information about user tools in the Windows registry.  
  
```  
BOOL SaveState(LPCTSTR lpszProfileName=NULL);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `lpszProfileName`  
 A path to the Windows registry key.  
  
### <a name="return-value"></a>Return Value  
 Nonzero if the state was saved successfully; otherwise 0.  
  
### <a name="remarks"></a>Remarks  
 The method stores the current state of the `CUserToolsManager` object in the Windows registry.  
  
 Usually, you do not need to call this method directly, [CWinAppEx::SaveState](../../mfc/reference/cwinappex-class.md#savestate) calls it automatically as a part of the workspace serialization process of the application.  
  
##  <a name="setdefext"></a>  CUserToolsManager::SetDefExt  
 Specifies the default extension that the **File Open** dialog box ( [CFileDialog Class](../../mfc/reference/cfiledialog-class.md)) uses in the **Command** field on the **Tools** tab of the **Customize** dialog box.  
  
```  
void SetDefExt(const CString& strDefExt);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `strDefExt`  
 A text string that contains the default file name extension.  
  
### <a name="remarks"></a>Remarks  
 Call this method to specify a default file name extension in the **File Open** dialog box, which is displayed when the user selects an application to associate with the user tool. The default is "exe".  
  
##  <a name="setfilter"></a>  CUserToolsManager::SetFilter  
 Specifies the file filter that the **File Open** dialog box ( [CFileDialog Class](../../mfc/reference/cfiledialog-class.md)) uses in the **Command** field on the **Tools** tab of the **Customize** dialog box.  
  
```  
void SetFilter(const CString& strFilter);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `strFilter`  
 Specifies the filter.  
  
## <a name="see-also"></a>See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CWinAppEx Class](../../mfc/reference/cwinappex-class.md)   
 [CUserTool Class](../../mfc/reference/cusertool-class.md)

