---
title: Deprecated ANSI APIs | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- MFC, ANSI deprecated methods
ms.assetid: c7c5a6fd-95e4-4bee-b3d5-d3826c30947d
caps.latest.revision: 8
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
ms.translationtype: HT
ms.sourcegitcommit: 4e0027c345e4d414e28e8232f9e9ced2b73f0add
ms.openlocfilehash: 09c55884f9ea1dcd9d69aa7520c665d14f0d8fd8
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="deprecated-ansi-apis"></a>Deprecated ANSI APIs
The Microsoft Foundation Class (MFC) library is migrating toward classes and methods that are based on the Unicode character set. Consequently, the ANSI versions of several MFC methods are deprecated. Use the Unicode versions of these methods in your future applications.  
  
 Starting with Windows Common Controls version 6.1, which ships in [!INCLUDE[windowsver](../build/reference/includes/windowsver_md.md)], the following ANSI methods are deprecated.  
  
## <a name="cbutton-class"></a>CButton class  
  
```  
AFX_ANSI_DEPRECATED BOOL GetIdealSize(LPSIZE psize) const;

 
AFX_ANSI_DEPRECATED BOOL GetImageList(PBUTTON_IMAGELIST pbuttonImagelist) const;

 
AFX_ANSI_DEPRECATED BOOL GetTextMargin(LPRECT pmargin) const;

 
AFX_ANSI_DEPRECATED BOOL SetImageList(PBUTTON_IMAGELIST pbuttonImagelist);

AFX_ANSI_DEPRECATED BOOL SetTextMargin(LPRECT pmargin);
```  
  
## <a name="ccomboboxex-class"></a>CComboBoxEx class  
  
```  
AFX_ANSI_DEPRECATED HRESULT SetWindowTheme(LPCWSTR pszSubAppName);
```  
  
## <a name="cedit-class"></a>CEdit class  
  
```  
AFX_ANSI_DEPRECATED BOOL GetCueBanner(LPWSTR lpszText,
    int cchText) const;

 
AFX_ANSI_DEPRECATED BOOL SetCueBanner(LPCWSTR lpszText,
    BOOL fDrawIfFocused = FALSE);
```  
  
## <a name="clinkctrl-class"></a>CLinkCtrl class  
 The entire class is deprecated.  
  
## <a name="clistctrl-class"></a>CListCtrl class  
  
```  
AFX_ANSI_DEPRECATED void CancelEditLabel();

AFX_ANSI_DEPRECATED int EnableGroupView(BOOL fEnable);

AFX_ANSI_DEPRECATED int GetGroupInfo(int iGroupId,
    PLVGROUP pgrp) const;

 
AFX_ANSI_DEPRECATED void GetGroupMetrics(PLVGROUPMETRICS pGroupMetrics) const;

 
AFX_ANSI_DEPRECATED BOOL GetInsertMark(LPLVINSERTMARK lvim) const;

 
AFX_ANSI_DEPRECATED COLORREF GetInsertMarkColor() const;

 
AFX_ANSI_DEPRECATED int GetInsertMarkRect(LPRECT pRect) const;

 
AFX_ANSI_DEPRECATED COLORREF GetOutlineColor() const;

 
AFX_ANSI_DEPRECATED UINT GetSelectedColumn() const;

 
AFX_ANSI_DEPRECATED BOOL GetTileInfo(PLVTILEINFO pti) const;

 
AFX_ANSI_DEPRECATED BOOL GetTileViewInfo(PLVTILEVIEWINFO ptvi) const;

 
AFX_ANSI_DEPRECATED DWORD GetView() const;

 
AFX_ANSI_DEPRECATED BOOL HasGroup(int iGroupId) const;

 
AFX_ANSI_DEPRECATED int InsertGroup(int index,
    PLVGROUP pgrp);

AFX_ANSI_DEPRECATED void InsertGroupSorted(PLVINSERTGROUPSORTED pStructInsert);

AFX_ANSI_DEPRECATED int InsertMarkHitTest(LPPOINT pPoint,
    LPLVINSERTMARK lvim) const;

 
AFX_ANSI_DEPRECATED BOOL IsGroupViewEnabled() const;

 
AFX_ANSI_DEPRECATED void MoveGroup(int iGroupId,
    int toIndex);

AFX_ANSI_DEPRECATED void MoveItemToGroup(int idItemFrom,
    int idGroupTo);

AFX_ANSI_DEPRECATED void RemoveAllGroups();

AFX_ANSI_DEPRECATED int RemoveGroup(int iGroupId);

AFX_ANSI_DEPRECATED BOOL SetGroupInfo(int iGroupId,
    PLVGROUP pGroup);

AFX_ANSI_DEPRECATED void SetGroupMetrics(PLVGROUPMETRICS pGroupMetrics);

AFX_ANSI_DEPRECATED BOOL SetInfoTip(PLVSETINFOTIP plvInfoTip);

AFX_ANSI_DEPRECATED BOOL SetInsertMark(LPLVINSERTMARK lvim);

AFX_ANSI_DEPRECATED COLORREF SetInsertMarkColor(COLORREF color);

AFX_ANSI_DEPRECATED COLORREF SetOutlineColor(COLORREF color);

AFX_ANSI_DEPRECATED void SetSelectedColumn(int iCol);

AFX_ANSI_DEPRECATED BOOL SetTileInfo(PLVTILEINFO pti);

AFX_ANSI_DEPRECATED BOOL SetTileViewInfo(PLVTILEVIEWINFO ptvi);

AFX_ANSI_DEPRECATED DWORD SetView(int iView);

AFX_ANSI_DEPRECATED BOOL SortGroups(PFNLVGROUPCOMPARE _pfnGroupCompare,
    LPVOID _plv);
```  
  
## <a name="crebarctrl-class"></a>CReBarCtrl class  
  
```  
AFX_ANSI_DEPRECATED void GetBandMargins(PMARGINS pMargins) const;

 
AFX_ANSI_DEPRECATED HRESULT SetWindowTheme(LPCWSTR pszSubAppName);
```  
  
## <a name="ctoolbarctrl-class"></a>CToolBarCtrl class  
  
```  
AFX_ANSI_DEPRECATED void GetMetrics(LPTBMETRICS ptbm) const;

 
AFX_ANSI_DEPRECATED void SetMetrics(LPTBMETRICS ptbm);

AFX_ANSI_DEPRECATED HRESULT SetWindowTheme(LPCWSTR pszSubAppName);
```  
  
## <a name="ctooltipctrl-class"></a>CToolTipCtrl class  
  
```  
AFX_ANSI_DEPRECATED HRESULT SetWindowTheme(LPCWSTR pszSubAppName);
```  
  
## <a name="see-also"></a>See Also  
 [Build Requirements for Windows Vista Common Controls](../mfc/build-requirements-for-windows-vista-common-controls.md)


