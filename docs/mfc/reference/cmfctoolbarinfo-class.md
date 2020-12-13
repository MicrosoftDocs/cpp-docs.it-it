---
description: 'Altre informazioni su: classe CMFCToolBarInfo'
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
ms.openlocfilehash: 9b85ef4f39c8b42c35975a15836a21e7cc6dd6b1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331709"
---
# <a name="cmfctoolbarinfo-class"></a>Classe CMFCToolBarInfo

Contiene gli ID risorsa delle immagini della barra degli strumenti in vari stati. `CMFCToolBarInfo` è una classe helper utilizzata come parametro del metodo [CMFCToolBar:: LoadToolBarEx](../../mfc/reference/cmfctoolbar-class.md#loadtoolbarex) .

## <a name="syntax"></a>Sintassi

```
class CMFCToolBarInfo
```

## <a name="members"></a>Members

### <a name="data-members"></a>Membri dei dati

|Nome|Description|
|----------|-----------------|
|[CMFCToolBarInfo:: m_uiColdResID](#m_uicoldresid)|ID risorsa della bitmap della barra degli strumenti che contiene immagini della barra degli strumenti regolari (a freddo).|
|[CMFCToolBarInfo:: m_uiDisabledResID](#m_uidisabledresid)|ID risorsa della bitmap della barra degli strumenti che contiene le immagini della barra degli strumenti disabilitate.|
|[CMFCToolBarInfo:: m_uiHotResID](#m_uihotresid)|ID risorsa della bitmap della barra degli strumenti che contiene le immagini della barra degli strumenti (Hot) selezionate.|
|[CMFCToolBarInfo:: m_uiLargeColdResID](#m_uilargecoldresid)|ID risorsa della bitmap della barra degli strumenti che contiene immagini regolari della barra degli strumenti.|
|[CMFCToolBarInfo:: m_uiLargeDisabledResID](#m_uilargedisabledresid)|ID risorsa della bitmap della barra degli strumenti che contiene immagini della barra degli strumenti grandi e disabilitate.|
|[CMFCToolBarInfo:: m_uiLargeHotResID](#m_uilargehotresid)|ID risorsa della bitmap della barra degli strumenti che contiene immagini della barra degli strumenti selezionate di grandi dimensioni.|
|[CMFCToolBarInfo:: m_uiMenuDisabledResID](#m_uimenudisabledresid)|ID risorsa della bitmap della barra degli strumenti che contiene le immagini di menu disabilitate.|
|[CMFCToolBarInfo:: m_uiMenuResID](#m_uimenuresid)|ID risorsa della bitmap della barra degli strumenti che contiene le immagini di menu.|

## <a name="remarks"></a>Commenti

Una bitmap completa della barra degli strumenti è costituita da piccole immagini della barra degli strumenti (pulsanti) di dimensioni fisse. Ogni ID di risorsa archiviato in un `CMFCToolBarInfo` oggetto è una bitmap che contiene un set completo di immagini della barra degli strumenti in un singolo stato, ad esempio le immagini selezionate, disabilitate, di grandi dimensioni o di menu.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CMFCToolBarInfo](../../mfc/reference/cmfctoolbarinfo-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtoolbar. h

## <a name="cmfctoolbarinfom_uicoldresid"></a><a name="m_uicoldresid"></a> CMFCToolBarInfo:: m_uiColdResID

Specifica un ID di risorsa per tutte le immagini dei pulsanti normali di una barra degli strumenti.

```
UINT m_uiColdResID;
```

## <a name="cmfctoolbarinfom_uidisabledresid"></a><a name="m_uidisabledresid"></a> CMFCToolBarInfo:: m_uiDisabledResID

Specifica un ID di risorsa per le immagini dei pulsanti non disponibili di una barra degli strumenti.

```
UINT m_uiDisabledResID;
```

## <a name="cmfctoolbarinfom_uihotresid"></a><a name="m_uihotresid"></a> CMFCToolBarInfo:: m_uiHotResID

Specifica un ID di risorsa per tutte le immagini del pulsante evidenziato di una barra degli strumenti.

```
UINT m_uiHotResID
```

## <a name="cmfctoolbarinfom_uilargecoldresid"></a><a name="m_uilargecoldresid"></a> CMFCToolBarInfo:: m_uiLargeColdResID

Specifica un ID di risorsa per tutte le immagini dei pulsanti regolari di una barra degli strumenti.

```
UINT m_uiLargeColdResID
```

## <a name="cmfctoolbarinfom_uilargedisabledresid"></a><a name="m_uilargedisabledresid"></a> CMFCToolBarInfo:: m_uiLargeDisabledResID

Specifica un ID di risorsa per tutte le immagini del pulsante disabilitate di grandi dimensioni di una barra degli strumenti.

```
UINT m_uiLargeDisabledResID;
```

## <a name="cmfctoolbarinfom_uilargehotresid"></a><a name="m_uilargehotresid"></a> CMFCToolBarInfo:: m_uiLargeHotResID

Specifica un ID di risorsa per tutte le grandi immagini evidenziate di una barra degli strumenti.

```
UINT m_uiLargeHotResID;
```

## <a name="cmfctoolbarinfom_uimenudisabledresid"></a><a name="m_uimenudisabledresid"></a> CMFCToolBarInfo:: m_uiMenuDisabledResID

Specifica un ID di risorsa per le immagini del comando non disponibili di una barra degli strumenti.

```
UINT m_uiMenuDisabledResID;
```

## <a name="cmfctoolbarinfom_uimenuresid"></a><a name="m_uimenuresid"></a> CMFCToolBarInfo:: m_uiMenuResID

Specifica un ID di risorsa per tutte le immagini della voce di menu normale di una barra degli strumenti.

```
UINT m_uiMenuResID;
```

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)
