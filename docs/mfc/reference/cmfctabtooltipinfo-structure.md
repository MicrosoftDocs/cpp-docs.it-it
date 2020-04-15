---
title: Struttura CMFCTabToolTipInfo
ms.date: 11/04/2016
f1_keywords:
- CMFCTabToolTipInfo
helpviewer_keywords:
- CMFCTabToolTipInfo struct
ms.assetid: 9c3b3fb9-1497-4d59-932b-0da9348dd5e2
ms.openlocfilehash: a507d1e69b3524074e50fde0e87fc5ebb6e5ca03
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367336"
---
# <a name="cmfctabtooltipinfo-structure"></a>Struttura CMFCTabToolTipInfo

Questa struttura fornisce informazioni sulla scheda MDI su cui l'utente passa il mouse.

## <a name="syntax"></a>Sintassi

```
struct CMFCTabToolTipInfo
```

## <a name="members"></a>Membri

### <a name="data-members"></a>Membri dei dati

|Nome|Descrizione|
|----------|-----------------|
|[CMFCTabToolTipInfo::m_nTabIndex](#m_ntabindex)|Specifica l'indice del controllo struttura a schede.|
|[CMFCTabToolTipInfo::m_pTabWnd](#m_ptabwnd)|Puntatore al controllo Struttura a schede.|
|[CMFCTabToolTipInfo::m_strText](#m_strtext)|Testo della descrizione comando.|

## <a name="remarks"></a>Osservazioni

Un puntatore `CMFCTabToolTipInfo` a una struttura viene passato come parametro del messaggio di AFX_WM_ON_GET_TAB_TOOLTIP. Questo messaggio viene generato quando le schede MDI sono abilitate e l'utente passa il mouse su un controllo struttura a schede.

## <a name="example"></a>Esempio

Nell'esempio seguente `CMFCTabToolTipInfo` viene illustrato come viene utilizzato nell'esempio [MDITabsDemo: applicazione MDI a schede MFC](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MDITabsDemo#2](../../mfc/reference/codesnippet/cpp/cmfctabtooltipinfo-structure_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CMFCTabToolTipInfo](../../mfc/reference/cmfctabtooltipinfo-structure.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxbasetabctrl.h

## <a name="cmfctabtooltipinfom_ntabindex"></a><a name="m_ntabindex"></a>CMFCTabToolTipInfo::m_nTabIndex

Specifica l'indice del controllo struttura a schede.

```
int m_nTabIndex;
```

### <a name="remarks"></a>Osservazioni

Indice della scheda su cui l'utente è al passaggio del mouse.

### <a name="example"></a>Esempio

Nell'esempio seguente `m_nTabIndex` viene illustrato come viene utilizzato nell'esempio [MDITabsDemo: applicazione MDI a schede MFC](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MDITabsDemo#2](../../mfc/reference/codesnippet/cpp/cmfctabtooltipinfo-structure_1.cpp)]

## <a name="cmfctabtooltipinfom_ptabwnd"></a><a name="m_ptabwnd"></a>CMFCTabToolTipInfo::m_pTabWnd

Puntatore al controllo Struttura a schede.

```
CMFCBaseTabCtrl* m_pTabWnd;
```

### <a name="example"></a>Esempio

Nell'esempio seguente `m_pTabWnd` viene illustrato come viene utilizzato nell'esempio [MDITabsDemo: applicazione MDI a schede MFC](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MDITabsDemo#2](../../mfc/reference/codesnippet/cpp/cmfctabtooltipinfo-structure_1.cpp)]

## <a name="cmfctabtooltipinfom_strtext"></a><a name="m_strtext"></a>CMFCTabToolTipInfo::m_strText

Testo della descrizione comando.

```
CString m_strText;
```

### <a name="remarks"></a>Osservazioni

Se la stringa è vuota, la descrizione comando non viene visualizzata.

### <a name="example"></a>Esempio

Nell'esempio seguente `m_strText` viene illustrato come viene utilizzato nell'esempio [MDITabsDemo: applicazione MDI a schede MFC](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MDITabsDemo#2](../../mfc/reference/codesnippet/cpp/cmfctabtooltipinfo-structure_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
