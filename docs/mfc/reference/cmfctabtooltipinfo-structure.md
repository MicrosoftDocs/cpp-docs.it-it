---
title: Struttura CMFCTabToolTipInfo
ms.date: 11/04/2016
f1_keywords:
- CMFCTabToolTipInfo
helpviewer_keywords:
- CMFCTabToolTipInfo struct
ms.assetid: 9c3b3fb9-1497-4d59-932b-0da9348dd5e2
ms.openlocfilehash: 87c8820bc33f3a344933faa797a9fc60d2422b13
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58773164"
---
# <a name="cmfctabtooltipinfo-structure"></a>Struttura CMFCTabToolTipInfo

Questa struttura fornisce informazioni sulla scheda MDI che l'utente ha posizionato il failover.

## <a name="syntax"></a>Sintassi

```
struct CMFCTabToolTipInfo
```

## <a name="members"></a>Membri

### <a name="data-members"></a>Membri di dati

|Nome|Descrizione|
|----------|-----------------|
|[CMFCTabToolTipInfo::m_nTabIndex](#m_ntabindex)|Specifica l'indice del controllo scheda.|
|[CMFCTabToolTipInfo::m_pTabWnd](#m_ptabwnd)|Puntatore al controllo struttura a schede.|
|[CMFCTabToolTipInfo::m_strText](#m_strtext)|Il testo della descrizione comando.|

## <a name="remarks"></a>Note

Un puntatore a un `CMFCTabToolTipInfo` struttura viene passata come parametro del messaggio AFX_WM_ON_GET_TAB_TOOLTIP. Questo messaggio viene generato quando sono abilitate le schede MDI e l'utente passa su un controllo struttura a schede.

## <a name="example"></a>Esempio

L'esempio seguente illustra come `CMFCTabToolTipInfo` viene utilizzata la [esempio MDITabsDemo: Applicazione MDI a schede MFC](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MDITabsDemo#2](../../mfc/reference/codesnippet/cpp/cmfctabtooltipinfo-structure_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CMFCTabToolTipInfo](../../mfc/reference/cmfctabtooltipinfo-structure.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxbasetabctrl.h

##  <a name="m_ntabindex"></a>  CMFCTabToolTipInfo::m_nTabIndex

Specifica l'indice del controllo scheda.

```
int m_nTabIndex;
```

### <a name="remarks"></a>Note

Indice della scheda in cui si trova l'utente.

### <a name="example"></a>Esempio

L'esempio seguente illustra come `m_nTabIndex` viene utilizzata la [esempio MDITabsDemo: Applicazione MDI a schede MFC](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MDITabsDemo#2](../../mfc/reference/codesnippet/cpp/cmfctabtooltipinfo-structure_1.cpp)]

##  <a name="m_ptabwnd"></a>  CMFCTabToolTipInfo::m_pTabWnd

Puntatore al controllo struttura a schede.

```
CMFCBaseTabCtrl* m_pTabWnd;
```

### <a name="example"></a>Esempio

L'esempio seguente illustra come `m_pTabWnd` viene utilizzata la [esempio MDITabsDemo: Applicazione MDI a schede MFC](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MDITabsDemo#2](../../mfc/reference/codesnippet/cpp/cmfctabtooltipinfo-structure_1.cpp)]

##  <a name="m_strtext"></a>  CMFCTabToolTipInfo::m_strText

Il testo della descrizione comando.

```
CString m_strText;
```

### <a name="remarks"></a>Note

Se la stringa è vuota, la descrizione comando non viene visualizzato.

### <a name="example"></a>Esempio

L'esempio seguente illustra come `m_strText` viene utilizzata la [esempio MDITabsDemo: Applicazione MDI a schede MFC](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MDITabsDemo#2](../../mfc/reference/codesnippet/cpp/cmfctabtooltipinfo-structure_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
