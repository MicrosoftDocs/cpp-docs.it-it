---
title: CRecentFileList Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CRecentFileList
- AFXADV/CRecentFileList
- AFXADV/CRecentFileList::CRecentFileList
- AFXADV/CRecentFileList::Add
- AFXADV/CRecentFileList::GetDisplayName
- AFXADV/CRecentFileList::GetSize
- AFXADV/CRecentFileList::ReadList
- AFXADV/CRecentFileList::Remove
- AFXADV/CRecentFileList::UpdateMenu
- AFXADV/CRecentFileList::WriteList
dev_langs:
- C++
helpviewer_keywords:
- CRecentFileList [MFC], CRecentFileList
- CRecentFileList [MFC], Add
- CRecentFileList [MFC], GetDisplayName
- CRecentFileList [MFC], GetSize
- CRecentFileList [MFC], ReadList
- CRecentFileList [MFC], Remove
- CRecentFileList [MFC], UpdateMenu
- CRecentFileList [MFC], WriteList
ms.assetid: a77f0524-7584-4582-849a-7e97b76d186e
caps.latest.revision: 19
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
ms.openlocfilehash: c3bda8ecbd413769fe3d4d12baf40b57f9da622a
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="crecentfilelist-class"></a>CRecentFileList Class
Supports control of the most recently used (MRU) file list.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CRecentFileList  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CRecentFileList::CRecentFileList](#crecentfilelist)|Constructs a `CRecentFileList` object.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CRecentFileList::Add](#add)|Adds a file to the MRU file list.|  
|[CRecentFileList::GetDisplayName](#getdisplayname)|Provides a display name for menu display of an MRU filename.|  
|[CRecentFileList::GetSize](#getsize)|Retrieves the number of files in the MRU file list.|  
|[CRecentFileList::ReadList](#readlist)|Reads the MRU file list from the registry or .INI file.|  
|[CRecentFileList::Remove](#remove)|Removes a file from the MRU file list.|  
|[CRecentFileList::UpdateMenu](#updatemenu)|Updates the menu display of the MRU file list.|  
|[CRecentFileList::WriteList](#writelist)|Writes the MRU file list from the registry or .INI file.|  
  
### <a name="public-operators"></a>Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CRecentFileList::operator [ ]](#operator_at)|Returns a `CString` object at a given position.|  
  
## <a name="remarks"></a>Remarks  
 Files can be added to or deleted from the MRU file list, the file list can be read from or written to the registry or an .INI file, and the menu displaying the MRU file list can be updated.  
  
 For more information about MRU menu items, see  
  
-   Knowledge Base article Q243751 : HOWTO: Add Command Handlers for MRU Menu Items in MFC Application  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 `CRecentFileList`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxadv.h  
  
##  <a name="add"></a>  CRecentFileList::Add  
 Adds a file to the most recently used (MRU) file list.  
  
```  
virtual void Add(LPCTSTR lpszPathName);

 
virtual void Add(
    LPCTSTR lpszPathName,
    LPCTSTR lpszAppID);

 
void Add(
    IShellItem* pItem,
    LPCTSTR lpszAppID);

 
void Add(
    IShellLink* pLink,
    LPCTSTR lpszAppID);

 
void Add(
    PIDLIST_ABSOLUTE pidl,
    LPCTSTR lpszAppID);
```  
  
### <a name="parameters"></a>Parameters  
 `lpszPathName`  
 Specifies pathname to be added to the list.  
  
 `lpszAppID`  
 Specifies Application User Model ID for the application.  
  
 `pItem`  
 Specifies a pointer to Shell Item to be added to the list.  
  
 `pLink`  
 Specifies a pointer to Shell Link to be added to the list.  
  
 `pidl`  
 Specifies the IDLIST for the shell item that should be added to the recent docs folder.  
  
### <a name="remarks"></a>Remarks  
 The file name will be added to the top of the MRU list. If the file name already exists in the MRU list, it will be moved to the top.  
  
##  <a name="crecentfilelist"></a>  CRecentFileList::CRecentFileList  
 Constructs a `CRecentFileList` object.  
  
```  
CRecentFileList(
    UINT nStart,  
    LPCTSTR lpszSection,  
    LPCTSTR lpszEntryFormat,  
    int nSize,  
    int nMaxDispLen = AFX_ABBREV_FILENAME_LEN);
```  
  
### <a name="parameters"></a>Parameters  
 `nStart`  
 Offset for the numbering in the menu display of the MRU (most recently used) file list.  
  
 `lpszSection`  
 Points to the name of the section of the registry or the application's .INI file where the MRU file list is read and/or written.  
  
 `lpszEntryFormat`  
 Points to a format string to be used for the names of the entries stored in the registry or the application's .INI file.  
  
 `nSize`  
 Maximum number of files in the MRU file list.  
  
 `nMaxDispLen`  
 Maximum length, in characters, available for the menu display of a filename in the MRU file list.  
  
### <a name="remarks"></a>Remarks  
 The format string pointed to by `lpszEntryFormat` should contain "%d", which will be used for substituting the index of each MRU item. For example, if the format string is `"file%d"` then the entries will be named `file0`, `file1`, and so on.  
  
##  <a name="getdisplayname"></a>  CRecentFileList::GetDisplayName  
 Obtains a display name for a file in the MRU file list, for use in the menu display of the MRU list.  
  
```  
virtual BOOL GetDisplayName(
    CString& strName,  
    int nIndex,  
    LPCTSTR lpszCurDir,  
    int nCurDir,  
    BOOL bAtLeastName = TRUE) const;  
```  
  
### <a name="parameters"></a>Parameters  
 `strName`  
 Full path of the file whose name is to be displayed in the menu list of MRU files.  
  
 `nIndex`  
 Zero-based index of the file in the MRU file list.  
  
 *lpszCurDir*  
 String holding the current directory.  
  
 *nCurDir*  
 Length of the current directory string.  
  
 `bAtLeastName`  
 If nonzero, indicates that the base name of the file should be returned, even if it exceeds the maximum display length (passed as the `nMaxDispLen` parameter to the `CRecentFileList` constructor).  
  
### <a name="return-value"></a>Return Value  
 **FALSE** if there is no filename at the specified index in the most recently used (MRU) file list.  
  
### <a name="remarks"></a>Remarks  
 If the file is in the current directory, the function leaves the directory off the display. If the filename is too long, the directory and extension are stripped. If the filename is still too long, the display name is set to an empty string unless `bAtLeastName` is nonzero.  
  
##  <a name="getsize"></a>  CRecentFileList::GetSize  
 Retrieves the number of files in the MRU file list.  
  
```  
int GetSize() const;  
```  
  
### <a name="return-value"></a>Return Value  
 The number of files in the current most recently used (MRU) file list.  
  
##  <a name="operator_at"></a>  CRecentFileList::operator [ ]  
 The overloaded subscript ( `[]`) operator returns a single `CString` specified by the zero-based index in `nIndex`.  
  
```  
CString& operator[ ](int nindex);
```  
  
### <a name="parameters"></a>Parameters  
 `nIndex`  
 Zero-based index of a `CString` in a set of `CString`s.  
  
##  <a name="readlist"></a>  CRecentFileList::ReadList  
 Reads the most recently used (MRU) file list from the registry or the application's .INI file.  
  
```  
virtual void ReadList();
```  
  
##  <a name="remove"></a>  CRecentFileList::Remove  
 Removes a file from the MRU file list.  
  
```  
virtual void Remove(int nIndex);
```  
  
### <a name="parameters"></a>Parameters  
 `nIndex`  
 Zero-based index of the file to be removed from the most recently used (MRU) file list.  
  
##  <a name="updatemenu"></a>  CRecentFileList::UpdateMenu  
 Updates the menu display of the MRU file list.  
  
```  
virtual void UpdateMenu(CCmdUI* pCmdUI);
```  
  
### <a name="parameters"></a>Parameters  
 `pCmdUI`  
 A pointer to the [CCmdUI](../../mfc/reference/ccmdui-class.md) object for the most recently used (MRU) file list menu.  
  
##  <a name="writelist"></a>  CRecentFileList::WriteList  
 Writes the most recently used (MRU) file list into the registry or the application's .INI file.  
  
```  
virtual void WriteList();
```  
  
## <a name="see-also"></a>See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)




