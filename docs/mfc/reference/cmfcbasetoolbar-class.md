---
title: Classe CMFCBaseToolBar | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCBaseToolBar::CreateObject
- ~CMFCBaseToolBar
- CMFCBaseToolBar
- CMFCBaseToolBar::CMFCBaseToolBar
- CMFCBaseToolBar::~CMFCBaseToolBar
- CMFCBaseToolBar.~CMFCBaseToolBar
- CreateObject
- CMFCBaseToolBar.CMFCBaseToolBar
- CMFCBaseToolBar.CreateObject
dev_langs:
- C++
helpviewer_keywords:
- CMFCBaseToolBar class, constructor
- CMFCBaseToolBar class, destructor
- ~CMFCBaseToolBar destructor
- CreateObject method
- CMFCBaseToolBar class
ms.assetid: 5d79206d-55e4-46f8-b1b8-042e34d7f9da
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
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: f608b23c0dbee3ec0e2d2b234612365e3c2461b0
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcbasetoolbar-class"></a>Classe CMFCBaseToolBar
Classe di base per le barre degli strumenti.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCBaseToolBar : public CPane  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCBaseToolBar::CMFCBaseToolBar`|Costruttore predefinito.|  
|`CMFCBaseToolBar::~CMFCBaseToolBar`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCBaseToolBar::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|  
|[CMFCBaseToolBar::GetDockingMode](#getdockingmode)|Restituisce la modalità di ancoraggio. (Esegue l'override di [CBasePane::GetDockingMode](../../mfc/reference/cbasepane-class.md#getdockingmode).)|  
|[CMFCBaseToolBar::GetMinSize](#getminsize)|Restituisce la dimensione minima di una barra degli strumenti. (Esegue l'override di [CPane::GetMinSize](../../mfc/reference/cpane-class.md#getminsize).)|  
|[CMFCBaseToolBar::OnAfterChangeParent](#onafterchangeparent)|Chiamato dal framework dopo aver modificato padre del riquadro. (Esegue l'override di [CBasePane::OnAfterChangeParent](../../mfc/reference/cbasepane-class.md#onafterchangeparent).)|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxbasetoolbar.h  
  
##  <a name="a-namegetdockingmodea--cmfcbasetoolbargetdockingmode"></a><a name="getdockingmode"></a>CMFCBaseToolBar::GetDockingMode  
 Restituisce la modalità di ancoraggio.  
  
```  
virtual AFX_DOCK_TYPE GetDockingMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La modalità di ancoraggio.  
  
##  <a name="a-namegetminsizea--cmfcbasetoolbargetminsize"></a><a name="getminsize"></a>CMFCBaseToolBar::GetMinSize  
 Restituisce la dimensione minima di una barra degli strumenti.  
  
```  
virtual void GetMinSize(CSize& size) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `size`  
 La dimensione minima di una barra degli strumenti.  
  
##  <a name="a-nameonafterchangeparenta--cmfcbasetoolbaronafterchangeparent"></a><a name="onafterchangeparent"></a>CMFCBaseToolBar::OnAfterChangeParent  
 Chiamato dal framework dopo aver modificato padre del riquadro.  
  
```  
virtual void OnAfterChangeParent(CWnd* pWndOldParent);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndOldParent`  
 Puntatore alla finestra padre precedente.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)

