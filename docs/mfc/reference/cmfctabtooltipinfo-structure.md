---
title: Struttura CMFCTabToolTipInfo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCTabToolTipInfo
dev_langs:
- C++
helpviewer_keywords:
- CMFCTabToolTipInfo struct
ms.assetid: 9c3b3fb9-1497-4d59-932b-0da9348dd5e2
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4cfb12ca9660259a4451d2841a921a566cf54505
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cmfctabtooltipinfo-structure"></a>Struttura CMFCTabToolTipInfo
Questa struttura fornisce informazioni sulla scheda MDI sul quale si trova l'utente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct CMFCTabToolTipInfo  
```  
  
## <a name="members"></a>Membri  
  
### <a name="data-members"></a>Membri di dati  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CMFCTabToolTipInfo::m_nTabIndex](#m_ntabindex)|Specifica l'indice del controllo scheda.|  
|[CMFCTabToolTipInfo::m_pTabWnd](#m_ptabwnd)|Puntatore al controllo struttura a schede.|  
|[CMFCTabToolTipInfo::m_strText](#m_strtext)|Il testo della descrizione comando.|  
  
## <a name="remarks"></a>Note  
 Un puntatore a un `CMFCTabToolTipInfo` struttura viene passata come parametro del `AFX_WM_ON_GET_TAB_TOOLTIP` messaggio. Questo messaggio viene generato quando sono abilitate schede MDI e l'utente viene posizionato su un controllo struttura a schede.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente mostra come `CMFCTabToolTipInfo` viene utilizzata per la [esempio MDITabsDemo: applicazione MDI a schede MFC](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_MDITabsDemo#2](../../mfc/reference/codesnippet/cpp/cmfctabtooltipinfo-structure_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CMFCTabToolTipInfo](../../mfc/reference/cmfctabtooltipinfo-structure.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxbasetabctrl.h  
  
##  <a name="m_ntabindex"></a>CMFCTabToolTipInfo::m_nTabIndex  
 Specifica l'indice del controllo scheda.  
  
```  
int m_nTabIndex;  
```  
  
### <a name="remarks"></a>Note  
 Indice della scheda su cui si trova l'utente.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente mostra come `m_nTabIndex` viene utilizzata per la [esempio MDITabsDemo: applicazione MDI a schede MFC](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_MDITabsDemo#2](../../mfc/reference/codesnippet/cpp/cmfctabtooltipinfo-structure_1.cpp)]  
  
##  <a name="m_ptabwnd"></a>CMFCTabToolTipInfo::m_pTabWnd  
 Puntatore al controllo struttura a schede.  
  
```  
CMFCBaseTabCtrl* m_pTabWnd;  
```  
  
### <a name="example"></a>Esempio  
 L'esempio seguente mostra come `m_pTabWnd` viene utilizzata per la [esempio MDITabsDemo: applicazione MDI a schede MFC](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_MDITabsDemo#2](../../mfc/reference/codesnippet/cpp/cmfctabtooltipinfo-structure_1.cpp)]  
  
##  <a name="m_strtext"></a>CMFCTabToolTipInfo::m_strText  
 Il testo della descrizione comando.  
  
```  
CString m_strText;  
```  
  
### <a name="remarks"></a>Note  
 Se la stringa è vuota, la descrizione comando non viene visualizzata.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente mostra come `m_strText` viene utilizzata per la [esempio MDITabsDemo: applicazione MDI a schede MFC](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_MDITabsDemo#2](../../mfc/reference/codesnippet/cpp/cmfctabtooltipinfo-structure_1.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)
