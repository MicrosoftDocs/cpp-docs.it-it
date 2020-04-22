---
title: CMFCToolBarFontSizeComboBox (classe)
ms.date: 11/04/2016
f1_keywords:
- CMFCToolBarFontSizeComboBox
- AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontSizeComboBox
- AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontSizeComboBox::CMFCToolBarFontSizeComboBox
- AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontSizeComboBox::GetTwipSize
- AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontSizeComboBox::RebuildFontSizes
- AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontSizeComboBox::SetTwipSize
helpviewer_keywords:
- CMFCToolBarFontSizeComboBox [MFC], CMFCToolBarFontSizeComboBox
- CMFCToolBarFontSizeComboBox [MFC], GetTwipSize
- CMFCToolBarFontSizeComboBox [MFC], RebuildFontSizes
- CMFCToolBarFontSizeComboBox [MFC], SetTwipSize
ms.assetid: 72e0c44c-6a0e-4194-a71f-ab64e3afb9b5
ms.openlocfilehash: 6c90bb1ce464a90295e7edb933d87594444c3648
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81745316"
---
# <a name="cmfctoolbarfontsizecombobox-class"></a>CMFCToolBarFontSizeComboBox (classe)

Pulsante della barra degli strumenti che contiene un controllo casella combinata che consente all'utente di selezionare una dimensione del carattere.

## <a name="syntax"></a>Sintassi

```
class CMFCToolBarFontSizeComboBox : public CMFCToolBarComboBoxButton
```

## <a name="members"></a>Membri

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMFCToolBarFontSizeComboBox::CMFCToolBarFontSizeComboBox](#cmfctoolbarfontsizecombobox)|Costruisce un oggetto `CMFCToolBarFontSizeComboBox`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCToolBarFontSizeComboBox::GetTwipSize](#gettwipsize)|Restituisce la dimensione del carattere selezionata in twip.|
|[CMFCToolBarFontSizeComboBox::RebuildFontSizes](#rebuildfontsizes)|Riempie l'elenco della casella combinata con tutte le dimensioni dei caratteri supportate per un tipo di carattere specificato.|
|[CMFCToolBarFontSizeComboBox::SetTwipSize](#settwipsize)|Imposta la dimensione del carattere in twip.|

## <a name="remarks"></a>Osservazioni

È possibile `CMFCToolBarFontSizeComboBox` utilizzare un oggetto con un [CMFCToolBarFontComboBox classe](../../mfc/reference/cmfctoolbarfontcombobox-class.md) oggetto per consentire all'utente di selezionare un tipo di carattere e la dimensione del tipo di carattere.

È possibile aggiungere un pulsante della casella combinata Dimensione carattere a una barra degli strumenti proprio come si aggiunge un pulsante della casella combinata del tipo di carattere. Per ulteriori informazioni, vedere [CMFCToolBarFontComboBox (classe).](../../mfc/reference/cmfctoolbarfontcombobox-class.md)

Quando l'utente seleziona un `CMFCToolBarFontComboBox` nuovo tipo di carattere in un oggetto, è possibile riempire la casella combinata della dimensione del carattere con le dimensioni supportate per tale tipo di carattere utilizzando il [CMFCToolBarFontSizeComboBox::RebuildFontSizes](#rebuildfontsizes) metodo.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come `CMFCToolBarFontSizeComboBox` utilizzare vari `CMFCToolBarFontSizeComboBox` metodi nella classe per configurare un oggetto. Nell'esempio viene illustrato come recuperare la dimensione del carattere, in twip, dalla casella di testo, riempire la casella combinata della dimensione del carattere con tutte le dimensioni valide del tipo di carattere specificato e specificare la dimensione del carattere nei twip. Questo frammento di codice fa parte dell' [esempio di Word Pad](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_WordPad#8](../../mfc/reference/codesnippet/cpp/cmfctoolbarfontsizecombobox-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)

[CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)

[CMFCToolBarFontSizeComboBox](../../mfc/reference/cmfctoolbarfontsizecombobox-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtoolbarfontcombobox.h

## <a name="cmfctoolbarfontsizecomboboxcmfctoolbarfontsizecombobox"></a><a name="cmfctoolbarfontsizecombobox"></a>CMFCToolBarFontSizeComboBox::CMFCToolBarFontSizeComboBox

Costruisce un oggetto `CMFCToolBarFontSizeComboBox`.

```
CMFCToolBarFontSizeComboBox();
```

## <a name="cmfctoolbarfontsizecomboboxgettwipsize"></a><a name="gettwipsize"></a>CMFCToolBarFontSizeComboBox::GetTwipSize

Recupera la dimensione del carattere, in twip, dalla casella di testo di una casella combinata della dimensione del carattere.

```
int GetTwipSize() const;
```

### <a name="return-value"></a>Valore restituito

Se il valore restituito è positivo, è la dimensione del carattere in twip. È -1 se la casella di testo della casella combinata è vuota. È -2 se si verifica un errore.

## <a name="cmfctoolbarfontsizecomboboxrebuildfontsizes"></a><a name="rebuildfontsizes"></a>CMFCToolBarFontSizeComboBox::RebuildFontSizes

Riempie una casella combinata della dimensione del carattere con tutte le dimensioni valide del tipo di carattere specificato.

```cpp
void RebuildFontSizes(const CString& strFontName);
```

### <a name="parameters"></a>Parametri

*nomecarattere strFont*<br/>
[in] Specifica un nome di carattere.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione quando si desidera eseguire la sincronizzazione tra la selezione in una casella combinata del tipo di carattere e una casella combinata dimensione del carattere, ad esempio una [classe CMFCToolBarFontComboBox](../../mfc/reference/cmfctoolbarfontcombobox-class.md).

## <a name="cmfctoolbarfontsizecomboboxsettwipsize"></a><a name="settwipsize"></a>CMFCToolBarFontSizeComboBox::SetTwipSize

Arrotonda le dimensioni specificate (in twip) alla dimensione più vicina in punti, quindi imposta la dimensione selezionata nella casella combinata su tale valore.

```cpp
void SetTwipSize(int nSize);
```

### <a name="parameters"></a>Parametri

*nDimensioni*<br/>
[in] Specifica la dimensione del carattere (in twip) da impostare.

### <a name="remarks"></a>Osservazioni

È possibile recuperare la dimensione del carattere valida precedente in un secondo momento chiamando il [CMFCToolBarFontSizeComboBox::GetTwipSize](#gettwipsize) metodo.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCToolBar (classe)](../../mfc/reference/cmfctoolbar-class.md)<br/>
[Classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)<br/>
[Classe CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)<br/>
[Classe CMFCFontInfo](../../mfc/reference/cmfcfontinfo-class.md)<br/>
[CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton)<br/>
[Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)
