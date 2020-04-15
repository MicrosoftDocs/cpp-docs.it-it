---
title: Classe CMFCToolBarInfo
ms.date: 11/04/2016
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
ms.openlocfilehash: 593d1665751f7322fc2a9cee307620df88d46876
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376186"
---
# <a name="cmfctoolbarinfo-class"></a>Classe CMFCToolBarInfo

Contiene gli ID risorsa delle immagini della barra degli strumenti in vari stati. `CMFCToolBarInfo`è una classe helper utilizzata come parametro del [metodo CMFCToolBar::LoadToolBarEx.](../../mfc/reference/cmfctoolbar-class.md#loadtoolbarex)

## <a name="syntax"></a>Sintassi

```
class CMFCToolBarInfo
```

## <a name="members"></a>Membri

### <a name="data-members"></a>Membri dei dati

|Nome|Descrizione|
|----------|-----------------|
|[CMFCToolBarInfo::m_uiColdResID](#m_uicoldresid)|ID risorsa della bitmap della barra degli strumenti che contiene immagini normali (fredde).|
|[CMFCToolBarInfo::m_uiDisabledResID](#m_uidisabledresid)|ID risorsa della bitmap della barra degli strumenti che contiene le immagini della barra degli strumenti disabilitate.|
|[CMFCToolBarInfo::m_uiHotResID](#m_uihotresid)|ID risorsa della bitmap della barra degli strumenti che contiene le immagini selezionate (hot) della barra degli strumenti.|
|[CMFCToolBarInfo::m_uiLargeColdResID](#m_uilargecoldresid)|ID risorsa della bitmap della barra degli strumenti che contiene immagini grandi e normali della barra degli strumenti.|
|[CMFCToolBarInfo::m_uiLargeDisabledResID](#m_uilargedisabledresid)|ID risorsa della bitmap della barra degli strumenti che contiene immagini della barra degli strumenti grandi e disattivate.|
|[CMFCToolBarInfo::m_uiLargeHotResID](#m_uilargehotresid)|ID risorsa della bitmap della barra degli strumenti che contiene grandi immagini della barra degli strumenti selezionate.|
|[CMFCToolBarInfo::m_uiMenuDisabledResID](#m_uimenudisabledresid)|ID risorsa della bitmap della barra degli strumenti che contiene le immagini di menu disabilitate.|
|[CMFCToolBarInfo::m_uiMenuResID](#m_uimenuresid)|ID risorsa della bitmap della barra degli strumenti che contiene immagini di menu.|

## <a name="remarks"></a>Osservazioni

Una bitmap completa della barra degli strumenti è costituita da piccole immagini della barra degli strumenti (pulsanti) di dimensioni fisse. Ogni ID risorsa archiviato `CMFCToolBarInfo` in un oggetto è una bitmap che contiene un set completo di immagini della barra degli strumenti in un unico stato (ad esempio, immagini selezionate, disabilitate, di grandi dimensioni o di menu).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CMFCToolBarInfo](../../mfc/reference/cmfctoolbarinfo-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtoolbar.h

## <a name="cmfctoolbarinfom_uicoldresid"></a><a name="m_uicoldresid"></a>CMFCToolBarInfo::m_uiColdResID

Specifica un ID risorsa per tutte le immagini dei pulsanti normali di una barra degli strumenti.

```
UINT m_uiColdResID;
```

## <a name="cmfctoolbarinfom_uidisabledresid"></a><a name="m_uidisabledresid"></a>CMFCToolBarInfo::m_uiDisabledResID

Specifica un ID risorsa per le immagini non disponibili da pulsanti di una barra degli strumenti.

```
UINT m_uiDisabledResID;
```

## <a name="cmfctoolbarinfom_uihotresid"></a><a name="m_uihotresid"></a>CMFCToolBarInfo::m_uiHotResID

Specifica un ID risorsa per tutte le immagini dei pulsanti evidenziati di una barra degli strumenti.

```
UINT m_uiHotResID
```

## <a name="cmfctoolbarinfom_uilargecoldresid"></a><a name="m_uilargecoldresid"></a>CMFCToolBarInfo::m_uiLargeColdResID

Specifica un ID risorsa per tutte le immagini dei pulsanti normali di grandi dimensioni di una barra degli strumenti.

```
UINT m_uiLargeColdResID
```

## <a name="cmfctoolbarinfom_uilargedisabledresid"></a><a name="m_uilargedisabledresid"></a>CMFCToolBarInfo::m_uiLargeDisabledResID

Specifica un ID risorsa per tutte le immagini dei pulsanti disabilitati di grandi dimensioni di una barra degli strumenti.

```
UINT m_uiLargeDisabledResID;
```

## <a name="cmfctoolbarinfom_uilargehotresid"></a><a name="m_uilargehotresid"></a>CMFCToolBarInfo::m_uiLargeHotResID

Specifica un ID risorsa per tutte le immagini evidenziate di grandi dimensioni di una barra degli strumenti.

```
UINT m_uiLargeHotResID;
```

## <a name="cmfctoolbarinfom_uimenudisabledresid"></a><a name="m_uimenudisabledresid"></a>CMFCToolBarInfo::m_uiMenuDisabledResID

Specifica un ID risorsa per le immagini non disponibili per i comandi di una barra degli strumenti.

```
UINT m_uiMenuDisabledResID;
```

## <a name="cmfctoolbarinfom_uimenuresid"></a><a name="m_uimenuresid"></a>CMFCToolBarInfo::m_uiMenuResID

Specifica un ID risorsa per tutte le normali immagini delle voci di menu di una barra degli strumenti.

```
UINT m_uiMenuResID;
```

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCToolBar (classe)](../../mfc/reference/cmfctoolbar-class.md)
