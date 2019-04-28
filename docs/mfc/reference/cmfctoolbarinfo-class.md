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
ms.openlocfilehash: b2f8af439a2534f24cdba9b0ccdb12b150db6d0a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62217807"
---
# <a name="cmfctoolbarinfo-class"></a>Classe CMFCToolBarInfo

Contiene gli ID risorsa delle immagini della barra degli strumenti in vari stati. `CMFCToolBarInfo` è una classe helper che viene usata come parametro del [cmfctoolbar:: Loadtoolbarex](../../mfc/reference/cmfctoolbar-class.md#loadtoolbarex) (metodo).

## <a name="syntax"></a>Sintassi

```
class CMFCToolBarInfo
```

## <a name="members"></a>Membri

### <a name="data-members"></a>Membri di dati

|Nome|Descrizione|
|----------|-----------------|
|[CMFCToolBarInfo::m_uiColdResID](#m_uicoldresid)|ID risorsa della bitmap della barra degli strumenti che contiene le immagini della barra degli strumenti (ad accesso sporadico) regolare.|
|[CMFCToolBarInfo::m_uiDisabledResID](#m_uidisabledresid)|ID risorsa della bitmap della barra degli strumenti contenente immagini disabilitata sulla barra degli strumenti.|
|[CMFCToolBarInfo::m_uiHotResID](#m_uihotresid)|ID risorsa della bitmap della barra degli strumenti che contiene le immagini della barra degli strumenti (attivo) selezionato.|
|[CMFCToolBarInfo::m_uiLargeColdResID](#m_uilargecoldresid)|ID risorsa della bitmap della barra degli strumenti che contiene le immagini di grandi dimensioni, regolare della barra degli strumenti.|
|[CMFCToolBarInfo::m_uiLargeDisabledResID](#m_uilargedisabledresid)|ID risorsa della bitmap della barra degli strumenti che contiene grandi, disabilitato le immagini della barra degli strumenti.|
|[CMFCToolBarInfo::m_uiLargeHotResID](#m_uilargehotresid)|ID risorsa della bitmap della barra degli strumenti che contiene le immagini di grandi dimensioni, selezionata della barra degli strumenti.|
|[CMFCToolBarInfo::m_uiMenuDisabledResID](#m_uimenudisabledresid)|ID risorsa della bitmap che contiene immagini disabilitate del menu della barra degli strumenti.|
|[CMFCToolBarInfo::m_uiMenuResID](#m_uimenuresid)|ID risorsa della bitmap della barra degli strumenti che contiene le immagini di menu.|

## <a name="remarks"></a>Note

Una bitmap della barra degli strumenti completa è costituito da immagini di piccola barra degli strumenti (pulsanti) di dimensioni fisse. Ogni ID di risorsa che viene archiviato in un `CMFCToolBarInfo` oggetto è una bitmap che contiene un set completo di immagini della barra degli strumenti in un unico stato (ad esempio, selezionato disabilitato, grande o le immagini di menu).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CMFCToolBarInfo](../../mfc/reference/cmfctoolbarinfo-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtoolbar. h

##  <a name="m_uicoldresid"></a>  CMFCToolBarInfo::m_uiColdResID

Specifica un ID risorsa per tutte le immagini di pulsante normale di una barra degli strumenti.

```
UINT m_uiColdResID;
```

##  <a name="m_uidisabledresid"></a>  CMFCToolBarInfo::m_uiDisabledResID

Specifica un ID di risorsa per le immagini disponibili con pulsante di una barra degli strumenti.

```
UINT m_uiDisabledResID;
```

##  <a name="m_uihotresid"></a>  CMFCToolBarInfo::m_uiHotResID

Specifica un ID di risorsa per tutte le immagini del pulsante evidenziato di una barra degli strumenti.

```
UINT m_uiHotResID
```

##  <a name="m_uilargecoldresid"></a>  CMFCToolBarInfo::m_uiLargeColdResID

Specifica un ID risorsa per tutte le immagini di grandi dimensioni di pulsante normale di una barra degli strumenti.

```
UINT m_uiLargeColdResID
```

##  <a name="m_uilargedisabledresid"></a>  CMFCToolBarInfo::m_uiLargeDisabledResID

Specifica un ID risorsa per tutte le immagini di grandi dimensioni pulsante disabilitato di una barra degli strumenti.

```
UINT m_uiLargeDisabledResID;
```

##  <a name="m_uilargehotresid"></a>  CMFCToolBarInfo::m_uiLargeHotResID

Specifica un ID risorsa per tutte le immagini evidenziate grandi dimensioni di una barra degli strumenti.

```
UINT m_uiLargeHotResID;
```

##  <a name="m_uimenudisabledresid"></a>  CMFCToolBarInfo::m_uiMenuDisabledResID

Specifica un ID di risorsa per le immagini del comando disponibile di una barra degli strumenti.

```
UINT m_uiMenuDisabledResID;
```

##  <a name="m_uimenuresid"></a>  CMFCToolBarInfo::m_uiMenuResID

Specifica un ID risorsa per tutte le immagini di elemento dal normale menu della barra degli strumenti.

```
UINT m_uiMenuResID;
```

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)
