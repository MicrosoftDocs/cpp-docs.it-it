---
title: Classe CMFCRibbonUndoButton
ms.date: 11/04/2016
f1_keywords:
- CMFCRibbonUndoButton
- AFXRIBBONUNDOBUTTON/CMFCRibbonUndoButton
- AFXRIBBONUNDOBUTTON/CMFCRibbonUndoButton::CMFCRibbonUndoButton
- AFXRIBBONUNDOBUTTON/CMFCRibbonUndoButton::AddUndoAction
- AFXRIBBONUNDOBUTTON/CMFCRibbonUndoButton::CleanUpUndoList
- AFXRIBBONUNDOBUTTON/CMFCRibbonUndoButton::GetActionNumber
- AFXRIBBONUNDOBUTTON/CMFCRibbonUndoButton::HasMenu
helpviewer_keywords:
- CMFCRibbonUndoButton [MFC], CMFCRibbonUndoButton
- CMFCRibbonUndoButton [MFC], AddUndoAction
- CMFCRibbonUndoButton [MFC], CleanUpUndoList
- CMFCRibbonUndoButton [MFC], GetActionNumber
- CMFCRibbonUndoButton [MFC], HasMenu
ms.assetid: 5c42adf7-871d-4239-901e-47ae7fb816fc
ms.openlocfilehash: e78cf26b32d424bc9cc9441787192cda6f7aeb54
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57280377"
---
# <a name="cmfcribbonundobutton-class"></a>Classe CMFCRibbonUndoButton

Il `CMFCRibbonUndoButton` classe implementa un pulsante elenco a discesa che contiene i comandi utente più recenti. Gli utenti possono selezionare uno o più dei comandi più recenti dall'elenco a discesa scegliere rollforward o annullarle.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonUndoButton : public CMFCRibbonGallery
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonUndoButton::CMFCRibbonUndoButton](#cmfcribbonundobutton)|Costruisce un nuovo `CMFCRibbonUndoButton` oggetto utilizzando l'ID del comando specificato, l'etichetta di testo e immagini dall'elenco immagini dell'oggetto padre.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonUndoButton::AddUndoAction](#addundoaction)|Aggiunge una nuova azione all'elenco di azioni.|
|[CMFCRibbonUndoButton::CleanUpUndoList](#cleanupundolist)|Cancella elenco di azioni, ovvero l'elenco di riepilogo a discesa.|
|[CMFCRibbonUndoButton::GetActionNumber](#getactionnumber)|Determina il numero di elementi che un utente selezionato dall'elenco a discesa.|
|[CMFCRibbonUndoButton::HasMenu](#hasmenu)|Indica se l'oggetto contiene un menu.|

## <a name="remarks"></a>Note

Il `CMFCRibbonUndoButton` classe usa uno stack per rappresentare l'elenco a discesa.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un oggetto del `CMFCRibbonUndoButton` classe e aggiungere una nuova azione all'elenco di azioni. Questo frammento di codice fa parte di [esempio di gadget della barra multifunzione](../../visual-cpp-samples.md).

[!code-cpp[NVC_MFC_RibbonGadgets#2](../../mfc/reference/codesnippet/cpp/cmfcribbonundobutton-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)

[CMFCRibbonGallery](../../mfc/reference/cmfcribbongallery-class.md)

[CMFCRibbonUndoButton](../../mfc/reference/cmfcribbonundobutton-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxribbonundobutton.h

##  <a name="addundoaction"></a>  CMFCRibbonUndoButton::AddUndoAction

Aggiunge una nuova azione all'elenco di azioni.

```
void AddUndoAction(LPCTSTR lpszLabel);
```

### <a name="parameters"></a>Parametri

*lpszLabel*<br/>
[in] L'etichetta dell'azione che verrà visualizzato nell'elenco a discesa.

##  <a name="cleanupundolist"></a>  CMFCRibbonUndoButton::CleanUpUndoList

Cancella elenco di azioni, ovvero l'elenco di riepilogo a discesa.

```
void CleanUpUndoList();
```

##  <a name="cmfcribbonundobutton"></a>  CMFCRibbonUndoButton::CMFCRibbonUndoButton

Costruisce un nuovo `CMFCRibbonUndoButton` oggetto utilizzando l'ID del comando specificato, l'etichetta di testo e immagini dall'elenco immagini dell'oggetto padre.

```
CMFCRibbonUndoButton(
    UINT nID,
    LPCTSTR lpszText,
    int nSmallImageIndex=-1,
    int nLargeImageIndex=-1);

CMFCRibbonUndoButton(
    UINT nID,
    LPCTSTR lpszText,
    HICON hIcon);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
[in] Specifica l'identificatore di comando.

*lpszText*<br/>
[in] Specifica l'etichetta di testo del pulsante.

*nSmallImageIndex*<br/>
[in] Indice in base zero nell'elenco delle immagini dell'oggetto padre per l'immagine di piccole dimensioni del pulsante.

*nLargeImageIndex*<br/>
[in] Indice in base zero nell'elenco delle immagini dell'oggetto padre per dell'immagine di grandi dimensioni del pulsante.

*hIcon*<br/>
[in] Handle per un'icona che è possibile usare come immagine del pulsante.

##  <a name="getactionnumber"></a>  CMFCRibbonUndoButton::GetActionNumber

Determina il numero di elementi che un utente selezionato dall'elenco a discesa.

```
int GetActionNumber() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di elementi che un utente ha selezionato.

##  <a name="hasmenu"></a>  CMFCRibbonUndoButton::HasMenu

Indica se l'oggetto contiene un menu.

```
virtual BOOL HasMenu() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre TRUE.

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonGallery](../../mfc/reference/cmfcribbongallery-class.md)<br/>
[Classe CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)
