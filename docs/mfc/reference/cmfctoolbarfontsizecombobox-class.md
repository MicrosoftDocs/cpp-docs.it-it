---
title: Classe CMFCToolBarFontSizeComboBox
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
ms.openlocfilehash: 43832f6c9b02c43fbe4a05cbea3add8783150113
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58767665"
---
# <a name="cmfctoolbarfontsizecombobox-class"></a>Classe CMFCToolBarFontSizeComboBox

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
|[CMFCToolBarFontSizeComboBox::GetTwipSize](#gettwipsize)|Restituisce la dimensione di tipo di carattere selezionato in twip.|
|[CMFCToolBarFontSizeComboBox::RebuildFontSizes](#rebuildfontsizes)|Riempie l'elenco della casella combinata con tutte le dimensioni dei caratteri supportate per un tipo di carattere specificato.|
|[CMFCToolBarFontSizeComboBox::SetTwipSize](#settwipsize)|Imposta le dimensioni del carattere in twip.|

## <a name="remarks"></a>Note

È possibile usare una `CMFCToolBarFontSizeComboBox` dell'oggetto insieme a un [classe CMFCToolBarFontComboBox](../../mfc/reference/cmfctoolbarfontcombobox-class.md) oggetto per consentire agli utenti di selezionare un tipo di carattere e dimensioni del carattere.

È possibile aggiungere un pulsante della casella combinata dimensioni del carattere da una barra degli strumenti solo quando si aggiunta un pulsante della casella combinata tipo di carattere. Per altre informazioni, vedere [classe CMFCToolBarFontComboBox](../../mfc/reference/cmfctoolbarfontcombobox-class.md).

Quando l'utente seleziona un nuovo tipo di carattere in un `CMFCToolBarFontComboBox` dell'oggetto, è possibile compilare la casella combinata dimensioni carattere con dimensioni supportate per tipo di carattere usando la [CMFCToolBarFontSizeComboBox::RebuildFontSizes](#rebuildfontsizes) (metodo).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare i vari metodi nella `CMFCToolBarFontSizeComboBox` classe per configurare un `CMFCToolBarFontSizeComboBox` oggetto. Nell'esempio viene illustrato come recuperare le dimensioni del carattere, in twip, dalla casella di testo, compilare la casella combinata dimensioni carattere con tutte le dimensioni valide del tipo di carattere specificato e specificare le dimensioni del carattere in twip. Questo frammento di codice fa parte dell' [esempio di Word Pad](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_WordPad#8](../../mfc/reference/codesnippet/cpp/cmfctoolbarfontsizecombobox-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)

[CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)

[CMFCToolBarFontSizeComboBox](../../mfc/reference/cmfctoolbarfontsizecombobox-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtoolbarfontcombobox.h

##  <a name="cmfctoolbarfontsizecombobox"></a>  CMFCToolBarFontSizeComboBox::CMFCToolBarFontSizeComboBox

Costruisce un oggetto `CMFCToolBarFontSizeComboBox`.

```
CMFCToolBarFontSizeComboBox();
```

##  <a name="gettwipsize"></a>  CMFCToolBarFontSizeComboBox::GetTwipSize

Recupera la dimensione del carattere, in twip, dalla casella di testo di una casella combinata di dimensioni del carattere.

```
int GetTwipSize() const;
```

### <a name="return-value"></a>Valore restituito

Se il valore restituito è positivo, è la dimensione del carattere in twip. È -1 se la casella di testo della casella combinata è vuota. È -2 se si verifica un errore.

##  <a name="rebuildfontsizes"></a>  CMFCToolBarFontSizeComboBox::RebuildFontSizes

Riempie una casella combinata dimensioni di tipo di carattere con tutte le dimensioni valide del tipo di carattere specificato.

```
void RebuildFontSizes(const CString& strFontName);
```

### <a name="parameters"></a>Parametri

*strFontName*<br/>
[in] Specifica il nome del tipo di carattere.

### <a name="remarks"></a>Note

Chiamare questa funzione quando si desidera sincronizzare tra selezione in una casella combinata tipo di carattere e una casella combinata dimensioni del carattere, ad esempio un [classe CMFCToolBarFontComboBox](../../mfc/reference/cmfctoolbarfontcombobox-class.md).

##  <a name="settwipsize"></a>  CMFCToolBarFontSizeComboBox::SetTwipSize

Arrotonda specificato dimensione (espressa in twip) la dimensione più vicina in punti e quindi viene impostato alla dimensione selezionata nella casella combinata a tale valore.

```
void SetTwipSize(int nSize);
```

### <a name="parameters"></a>Parametri

*nSize*<br/>
[in] Specifica le dimensioni del carattere (espressa in twip) da impostare.

### <a name="remarks"></a>Note

È possibile recuperare la dimensione del tipo di carattere valido precedente in un secondo momento chiamando il [CMFCToolBarFontSizeComboBox::GetTwipSize](#gettwipsize) (metodo).

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)<br/>
[Classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)<br/>
[Classe CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)<br/>
[Classe CMFCFontInfo](../../mfc/reference/cmfcfontinfo-class.md)<br/>
[CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton)<br/>
[Procedura dettagliata: Inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)
