---
title: Classe CRecentDockSiteInfo | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CRecentDockSiteInfo
- AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo
- AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::CleanUp
- AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::GetRecentDefaultPaneDivider
- AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::GetRecentDockedPercent
- AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::GetRecentDockedRect
- AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::GetRecentListOfPanes
- AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::GetRecentPaneContainer
- AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::GetRecentTabContainer
- AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::Init
- AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::IsRecentLeftPane
- AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::SaveListOfRecentPanes
- AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::SetInfo
- AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::StoreDockInfo
dev_langs:
- C++
helpviewer_keywords:
- CRecentDockSiteInfo class
ms.assetid: 2dd14f95-d5a2-4461-a7a5-2c6c36a3a165
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: ae700ae78485ca4e5cfd68da0d0ae1448d1f1d5d
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="crecentdocksiteinfo-class"></a>Classe CRecentDockSiteInfo
Il `CRecentDockSiteInfo` classe è una classe helper che archivia informazioni sullo stato recenti per il [CPane classe](../../mfc/reference/cpane-class.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CRecentDockSiteInfo : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CRecentDockSiteInfo::CRecentDockSiteInfo`|Costruttore predefinito.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRecentDockSiteInfo::CleanUp](#cleanup)||  
|[CRecentDockSiteInfo::GetRecentDefaultPaneDivider](#getrecentdefaultpanedivider)||  
|[CRecentDockSiteInfo::GetRecentDockedPercent](#getrecentdockedpercent)||  
|[CRecentDockSiteInfo::GetRecentDockedRect](#getrecentdockedrect)||  
|[CRecentDockSiteInfo::GetRecentListOfPanes](#getrecentlistofpanes)||  
|[CRecentDockSiteInfo::GetRecentPaneContainer](#getrecentpanecontainer)||  
|[CRecentDockSiteInfo::GetRecentTabContainer](#getrecenttabcontainer)||  
|[CRecentDockSiteInfo::Init](#init)||  
|[CRecentDockSiteInfo::IsRecentLeftPane](#isrecentleftpane)||  
|[CRecentDockSiteInfo::operator =](#operator_eq)||  
|[CRecentDockSiteInfo::SaveListOfRecentPanes](#savelistofrecentpanes)||  
|[CRecentDockSiteInfo::SetInfo](#setinfo)||  
|[CRecentDockSiteInfo::StoreDockInfo](#storedockinfo)||  
  
## <a name="remarks"></a>Note  
 La classe `CRecentDockSiteInfo` è una classe di gestione dati. Consente di tenere traccia dell'ultimo stato di `CPane` durante la transizione tra lo stato ancorato e lo stato mobile. Quando un utente fa doppio clic su un riquadro ancorato mobile, il riquadro diventa ancorato. Per ripristinare la posizione, le dimensioni e lo stato precedenti, fare doppio clic sul riquadro ancorato. In modo analogo, quando il riquadro viene ancorato di nuovo, esso torna alla posizione di ancoraggio precedente. Ciò è reso possibile da questa classe di dati. Dato che archiviano le informazioni sullo stato del riquadro ancorato, i membri di questa classe non devono essere modificati direttamente dall'applicazione.  
  
 Viene creato un oggetto `CRecentDockSiteInfo` ogni volta che viene creato un riquadro. Ogni `CPane` oggetto dispone di una variabile membro, [CPane::m_recentDockInfo](../../mfc/reference/cpane-class.md#m_recentdockinfo), per archiviare queste informazioni.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CRecentDockSiteInfo](../../mfc/reference/crecentdocksiteinfo-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrecentDockSiteInfo.h  
  
##  <a name="cleanup"></a>CRecentDockSiteInfo::CleanUp  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void CleanUp();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="crecentdocksiteinfo"></a>CRecentDockSiteInfo::CRecentDockSiteInfo  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CRecentDockSiteInfo(CPane* pBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
  
### <a name="remarks"></a>Note  
  
##  <a name="getrecentdefaultpanedivider"></a>CRecentDockSiteInfo::GetRecentDefaultPaneDivider  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CPaneDivider* GetRecentDefaultPaneDivider();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getrecentdockedpercent"></a>CRecentDockSiteInfo::GetRecentDockedPercent  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetRecentDockedPercent(BOOL bForSlider);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bForSlider`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getrecentdockedrect"></a>CRecentDockSiteInfo::GetRecentDockedRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CRect& GetRecentDockedRect(BOOL bForSlider);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bForSlider`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getrecentlistofpanes"></a>CRecentDockSiteInfo::GetRecentListOfPanes  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CList<HWND, HWND>& GetRecentListOfPanes(BOOL bForSlider);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bForSlider`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getrecentpanecontainer"></a>CRecentDockSiteInfo::GetRecentPaneContainer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CPaneContainer* GetRecentPaneContainer(BOOL bForSlider);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bForSlider`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getrecenttabcontainer"></a>CRecentDockSiteInfo::GetRecentTabContainer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CPaneContainer* GetRecentTabContainer(BOOL bForSlider);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bForSlider`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="init"></a>CRecentDockSiteInfo::Init  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void Init();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="isrecentleftpane"></a>CRecentDockSiteInfo::IsRecentLeftPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsRecentLeftPane(BOOL bForSlider);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bForSlider`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="operator_eq"></a>CRecentDockSiteInfo::operator =  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CRecentDockSiteInfo& operator=(CRecentDockSiteInfo& src);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `src`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="savelistofrecentpanes"></a>CRecentDockSiteInfo::SaveListOfRecentPanes  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SaveListOfRecentPanes(CList<HWND,  
    HWND>& lstOrg,  
    BOOL bForSlider);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `CList<HWND`  
 [in] `lstOrg`  
 [in] `bForSlider`  
  
### <a name="remarks"></a>Note  
  
##  <a name="setinfo"></a>CRecentDockSiteInfo::SetInfo  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void SetInfo(
    BOOL bForSlider,  
    CRecentDockSiteInfo& srcInfo);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bForSlider`  
 [in] `srcInfo`  
  
### <a name="remarks"></a>Note  
  
##  <a name="storedockinfo"></a>CRecentDockSiteInfo::StoreDockInfo  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void StoreDockInfo(
    CPaneContainer* pRecentContainer,  
    CDockablePane* pTabbedBar = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pRecentContainer`  
 [in] `pTabbedBar`  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CDockSite](../../mfc/reference/cdocksite-class.md)

