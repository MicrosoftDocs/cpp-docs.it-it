---
title: Classe CMFCToolBarInfo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCToolBarInfo
- AFXTOOLBAR/CMFCToolBarInfo
- AFXTOOLBAR/CMFCToolBarInfo::m_uiColdResID
- AFXTOOLBAR/CMFCToolBarInfo::m_uiDisabledResID
- AFXTOOLBAR/CMFCToolBarInfo::m_uiHotResID
- AFXTOOLBAR/CMFCToolBarInfo::m_uiLargeColdResID
- AFXTOOLBAR/CMFCToolBarInfo::m_uiLargeDisabledResID
- AFXTOOLBAR/CMFCToolBarInfo::m_uiLargeHotResID
- AFXTOOLBAR/CMFCToolBarInfo::m_uiMenuDisabledResID
- AFXTOOLBAR/CMFCToolBarInfo::m_uiMenuResID
dev_langs: C++
helpviewer_keywords:
- CMFCToolBarInfo [MFC], m_uiColdResID
- CMFCToolBarInfo [MFC], m_uiDisabledResID
- CMFCToolBarInfo [MFC], m_uiHotResID
- CMFCToolBarInfo [MFC], m_uiLargeColdResID
- CMFCToolBarInfo [MFC], m_uiLargeDisabledResID
- CMFCToolBarInfo [MFC], m_uiLargeHotResID
- CMFCToolBarInfo [MFC], m_uiMenuDisabledResID
- CMFCToolBarInfo [MFC], m_uiMenuResID
ms.assetid: 6dc84482-eaaa-491f-aa5d-dd7a57886b46
caps.latest.revision: "22"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c47be3ddb2302124b233c39aaf8bd829cd481d79
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cmfctoolbarinfo-class"></a>Classe CMFCToolBarInfo
Contiene gli ID risorsa delle immagini della barra degli strumenti in vari stati. `CMFCToolBarInfo`è una classe helper che viene utilizzata come un parametro del [CMFCToolBar::LoadToolBarEx](../../mfc/reference/cmfctoolbar-class.md#loadtoolbarex) metodo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCToolBarInfo  
```  
  
## <a name="members"></a>Membri  
  
### <a name="data-members"></a>Membri di dati  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarInfo::m_uiColdResID](#m_uicoldresid)|ID risorsa della bitmap della barra degli strumenti che contiene immagini regolare barra degli strumenti (freddo).|  
|[CMFCToolBarInfo::m_uiDisabledResID](#m_uidisabledresid)|ID risorsa della bitmap della barra degli strumenti che contiene immagini disabilitate della barra degli strumenti.|  
|[CMFCToolBarInfo::m_uiHotResID](#m_uihotresid)|ID risorsa della bitmap della barra degli strumenti che contiene le immagini selezionate barra degli strumenti (attivo).|  
|[CMFCToolBarInfo::m_uiLargeColdResID](#m_uilargecoldresid)|ID risorsa della bitmap della barra degli strumenti che contiene le immagini di grandi dimensioni, regolare della barra degli strumenti.|  
|[CMFCToolBarInfo::m_uiLargeDisabledResID](#m_uilargedisabledresid)|ID risorsa della bitmap della barra degli strumenti che contiene una grande, disabilitato le immagini della barra degli strumenti.|  
|[CMFCToolBarInfo::m_uiLargeHotResID](#m_uilargehotresid)|ID risorsa della bitmap della barra degli strumenti che contiene le immagini di grandi dimensioni, selezionata sulla barra degli strumenti.|  
|[CMFCToolBarInfo::m_uiMenuDisabledResID](#m_uimenudisabledresid)|ID risorsa della bitmap che contiene immagini disabilitate del menu della barra degli strumenti.|  
|[CMFCToolBarInfo::m_uiMenuResID](#m_uimenuresid)|ID risorsa della bitmap della barra degli strumenti che contiene le immagini di menu.|  
  
## <a name="remarks"></a>Note  
 Una bitmap della barra degli strumenti completa è costituito da immagini piccola barra degli strumenti (pulsanti) a dimensione fissa. Ogni ID di risorsa che viene archiviato in un `CMFCToolBarInfo` oggetto è una bitmap che contiene un set completo di immagini della barra degli strumenti in un singolo stato (ad esempio, selezionato disabilitato, grandi dimensioni o le immagini di menu).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CMFCToolBarInfo](../../mfc/reference/cmfctoolbarinfo-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxtoolbar. h  
  
##  <a name="m_uicoldresid"></a>CMFCToolBarInfo::m_uiColdResID  
 Specifica un ID di risorsa per tutte le immagini di pulsante normale di una barra degli strumenti.  
  
```  
UINT m_uiColdResID;  
```  
  
##  <a name="m_uidisabledresid"></a>CMFCToolBarInfo::m_uiDisabledResID  
 Specifica un ID di risorsa per le immagini disponibili con pulsante della barra degli strumenti.  
  
```  
UINT m_uiDisabledResID;  
```  
  
##  <a name="m_uihotresid"></a>CMFCToolBarInfo::m_uiHotResID  
 Specifica un ID di risorsa per tutte le immagini evidenziato di una barra degli strumenti.  
  
```  
UINT m_uiHotResID  
```  
  
##  <a name="m_uilargecoldresid"></a>CMFCToolBarInfo::m_uiLargeColdResID  
 Specifica un ID di risorsa per tutte le immagini di grandi dimensioni pulsante normale di una barra degli strumenti.  
  
```  
UINT m_uiLargeColdResID  
```  
  
##  <a name="m_uilargedisabledresid"></a>CMFCToolBarInfo::m_uiLargeDisabledResID  
 Specifica un ID di risorsa per tutte le immagini di grandi dimensioni pulsante disabilitato di una barra degli strumenti.  
  
```  
UINT m_uiLargeDisabledResID;  
```  
  
##  <a name="m_uilargehotresid"></a>CMFCToolBarInfo::m_uiLargeHotResID  
 Specifica un ID di risorsa per tutte le immagini evidenziate grandi dimensioni di una barra degli strumenti.  
  
```  
UINT m_uiLargeHotResID;  
```  
  
##  <a name="m_uimenudisabledresid"></a>CMFCToolBarInfo::m_uiMenuDisabledResID  
 Specifica un ID di risorsa per le immagini del comando-disponibile di una barra degli strumenti.  
  
```  
UINT m_uiMenuDisabledResID;  
```  
  
##  <a name="m_uimenuresid"></a>CMFCToolBarInfo::m_uiMenuResID  
 Specifica un ID di risorsa per tutte le immagini di elemento di menu regolari di una barra degli strumenti.  
  
```  
UINT m_uiMenuResID;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)
