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
ms.openlocfilehash: 15cf93d39057f0e235779d47cf24d920d80a807d
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753502"
---
# <a name="cmfcribbonundobutton-class"></a>Classe CMFCRibbonUndoButton

La `CMFCRibbonUndoButton` classe implementa un pulsante di elenco a discesa che contiene i comandi utente più recenti. Gli utenti possono selezionare uno o più comandi più recenti dall'elenco a discesa per ripetirli o annullarli.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonUndoButton : public CMFCRibbonGallery
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonUndoButton::CMFCRibbonUndoButton](#cmfcribbonundobutton)|Costruisce un `CMFCRibbonUndoButton` nuovo oggetto utilizzando l'ID di comando specificato, l'etichetta di testo e le immagini dall'elenco immagini dell'oggetto padre.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonUndoButton::AddUndoAction](#addundoaction)|Aggiunge una nuova azione all'elenco di azioni.|
|[CMFCRibbonUndoButton::CleanUpUndoList](#cleanupundolist)|Cancella l'elenco delle azioni, ovvero l'elenco a discesa.|
|[CMFCRibbonUndoButton::GetActionNumber](#getactionnumber)|Determina il numero di elementi selezionati da un utente dall'elenco a discesa.|
|[CMFCRibbonUndoButton::HasMenu](#hasmenu)|Indica se l'oggetto contiene un menu.|

## <a name="remarks"></a>Osservazioni

La `CMFCRibbonUndoButton` classe utilizza uno stack per rappresentare l'elenco a discesa.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come `CMFCRibbonUndoButton` costruire un oggetto della classe e aggiungere una nuova azione all'elenco di azioni. Questo frammento di codice fa parte [dell'esempio Ribbon Gadgets](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_RibbonGadgets#2](../../mfc/reference/codesnippet/cpp/cmfcribbonundobutton-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)

[CMFCRibbonGallery](../../mfc/reference/cmfcribbongallery-class.md)

[CMFCRibbonUndoButton](../../mfc/reference/cmfcribbonundobutton-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxribbonundobutton.h

## <a name="cmfcribbonundobuttonaddundoaction"></a><a name="addundoaction"></a>CMFCRibbonUndoButton::AddUndoAction

Aggiunge una nuova azione all'elenco di azioni.

```cpp
void AddUndoAction(LPCTSTR lpszLabel);
```

### <a name="parameters"></a>Parametri

*lpszLabel (etichetta di un'etichetta di base)*<br/>
[in] Etichetta dell'azione che verrà visualizzata nell'elenco a discesa.

## <a name="cmfcribbonundobuttoncleanupundolist"></a><a name="cleanupundolist"></a>CMFCRibbonUndoButton::CleanUpUndoList

Cancella l'elenco delle azioni, ovvero l'elenco a discesa.

```cpp
void CleanUpUndoList();
```

## <a name="cmfcribbonundobuttoncmfcribbonundobutton"></a><a name="cmfcribbonundobutton"></a>CMFCRibbonUndoButton::CMFCRibbonUndoButton

Costruisce un `CMFCRibbonUndoButton` nuovo oggetto utilizzando l'ID di comando specificato, l'etichetta di testo e le immagini dall'elenco immagini dell'oggetto padre.

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
[in] Specifica l'identificatore del comando.

*lpszText*<br/>
[in] Specifica l'etichetta di testo del pulsante.

*nSmallImageIndex (indice di immagine e immagine e immagine e modifica*<br/>
[in] Indice in base zero nell'elenco immagini dell'oggetto padre per l'immagine piccola del pulsante.

*nLargeImageIndex (ingranditoImage)*<br/>
[in] Indice in base zero nell'elenco immagini dell'oggetto padre per l'immagine di grandi dimensioni del pulsante.

*hIcon*<br/>
[in] Handle di un'icona che è possibile utilizzare come immagine di un pulsante.

## <a name="cmfcribbonundobuttongetactionnumber"></a><a name="getactionnumber"></a>CMFCRibbonUndoButton::GetActionNumber

Determina il numero di elementi selezionati da un utente dall'elenco a discesa.

```
int GetActionNumber() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi selezionati da un utente.

## <a name="cmfcribbonundobuttonhasmenu"></a><a name="hasmenu"></a>CMFCRibbonUndoButton::HasMenu

Indica se l'oggetto contiene un menu.

```
virtual BOOL HasMenu() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre TRUE.

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCRibbonGallery (classe)](../../mfc/reference/cmfcribbongallery-class.md)<br/>
[Classe CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)
