---
description: 'Altre informazioni su: struttura CMFCTabToolTipInfo'
title: Struttura CMFCTabToolTipInfo
ms.date: 11/04/2016
f1_keywords:
- CMFCTabToolTipInfo
helpviewer_keywords:
- CMFCTabToolTipInfo struct
ms.assetid: 9c3b3fb9-1497-4d59-932b-0da9348dd5e2
ms.openlocfilehash: ce9e9f4fdbcf367921e7f0559a4d04e66f4303dc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97164068"
---
# <a name="cmfctabtooltipinfo-structure"></a>Struttura CMFCTabToolTipInfo

Questa struttura fornisce informazioni sulla scheda MDI sulla quale l'utente sta passando il mouse.

## <a name="syntax"></a>Sintassi

```
struct CMFCTabToolTipInfo
```

## <a name="members"></a>Members

### <a name="data-members"></a>Membri dei dati

|Nome|Description|
|----------|-----------------|
|[CMFCTabToolTipInfo:: m_nTabIndex](#m_ntabindex)|Specifica l'indice del controllo struttura a schede.|
|[CMFCTabToolTipInfo:: m_pTabWnd](#m_ptabwnd)|Puntatore al controllo struttura a schede.|
|[CMFCTabToolTipInfo:: m_strText](#m_strtext)|Testo della descrizione comando.|

## <a name="remarks"></a>Commenti

Un puntatore a una `CMFCTabToolTipInfo` struttura viene passato come parametro del messaggio AFX_WM_ON_GET_TAB_TOOLTIP. Questo messaggio viene generato quando le schede MDI sono abilitate e l'utente posiziona il mouse su un controllo struttura a schede.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come `CMFCTabToolTipInfo` usare nell'esempio [MDITabsDemo: applicazione MDI a schede MFC](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MDITabsDemo#2](../../mfc/reference/codesnippet/cpp/cmfctabtooltipinfo-structure_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CMFCTabToolTipInfo](../../mfc/reference/cmfctabtooltipinfo-structure.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxbasetabctrl.h

## <a name="cmfctabtooltipinfom_ntabindex"></a><a name="m_ntabindex"></a> CMFCTabToolTipInfo:: m_nTabIndex

Specifica l'indice del controllo struttura a schede.

```
int m_nTabIndex;
```

### <a name="remarks"></a>Commenti

Indice della scheda su cui è posizionato l'utente.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come `m_nTabIndex` usare nell'esempio [MDITabsDemo: applicazione MDI a schede MFC](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MDITabsDemo#2](../../mfc/reference/codesnippet/cpp/cmfctabtooltipinfo-structure_1.cpp)]

## <a name="cmfctabtooltipinfom_ptabwnd"></a><a name="m_ptabwnd"></a> CMFCTabToolTipInfo:: m_pTabWnd

Puntatore al controllo struttura a schede.

```
CMFCBaseTabCtrl* m_pTabWnd;
```

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come `m_pTabWnd` usare nell'esempio [MDITabsDemo: applicazione MDI a schede MFC](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MDITabsDemo#2](../../mfc/reference/codesnippet/cpp/cmfctabtooltipinfo-structure_1.cpp)]

## <a name="cmfctabtooltipinfom_strtext"></a><a name="m_strtext"></a> CMFCTabToolTipInfo:: m_strText

Testo della descrizione comando.

```
CString m_strText;
```

### <a name="remarks"></a>Commenti

Se la stringa è vuota, la descrizione comando non viene visualizzata.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come `m_strText` usare nell'esempio [MDITabsDemo: applicazione MDI a schede MFC](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MDITabsDemo#2](../../mfc/reference/codesnippet/cpp/cmfctabtooltipinfo-structure_1.cpp)]

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
