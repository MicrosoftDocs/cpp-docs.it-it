---
description: 'Altre informazioni su: classe CMFCToolBarFontSizeComboBox'
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
ms.openlocfilehash: a355e62f2ef538372d70b9b2b393bc16bff2ef4b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331745"
---
# <a name="cmfctoolbarfontsizecombobox-class"></a>Classe CMFCToolBarFontSizeComboBox

Pulsante della barra degli strumenti contenente un controllo casella combinata che consente all'utente di selezionare una dimensione del carattere.

## <a name="syntax"></a>Sintassi

```
class CMFCToolBarFontSizeComboBox : public CMFCToolBarComboBoxButton
```

## <a name="members"></a>Members

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Description|
|----------|-----------------|
|[CMFCToolBarFontSizeComboBox:: CMFCToolBarFontSizeComboBox](#cmfctoolbarfontsizecombobox)|Costruisce un oggetto `CMFCToolBarFontSizeComboBox`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCToolBarFontSizeComboBox:: GetTwipSize](#gettwipsize)|Restituisce la dimensione del carattere selezionata in twip.|
|[CMFCToolBarFontSizeComboBox:: RebuildFontSizes](#rebuildfontsizes)|Compila l'elenco di caselle combinate con tutte le dimensioni del carattere supportate per un tipo di carattere specificato.|
|[CMFCToolBarFontSizeComboBox:: SetTwipSize](#settwipsize)|Imposta la dimensione del carattere in twip.|

## <a name="remarks"></a>Commenti

È possibile utilizzare un `CMFCToolBarFontSizeComboBox` oggetto insieme a un oggetto [classe CMFCToolBarFontComboBox](../../mfc/reference/cmfctoolbarfontcombobox-class.md) per consentire a un utente di selezionare un tipo di carattere e le dimensioni del carattere.

È possibile aggiungere un pulsante casella combinata dimensione carattere a una barra degli strumenti proprio come si aggiunge un pulsante casella combinata tipo di carattere. Per ulteriori informazioni, vedere la [classe CMFCToolBarFontComboBox](../../mfc/reference/cmfctoolbarfontcombobox-class.md).

Quando l'utente seleziona un nuovo tipo di carattere in un `CMFCToolBarFontComboBox` oggetto, è possibile riempire la casella combinata dimensione carattere con le dimensioni supportate per tale tipo di carattere usando il metodo [CMFCToolBarFontSizeComboBox:: RebuildFontSizes](#rebuildfontsizes) .

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare i vari metodi della `CMFCToolBarFontSizeComboBox` classe per configurare un `CMFCToolBarFontSizeComboBox` oggetto. Nell'esempio viene illustrato come recuperare le dimensioni del carattere, in twip, dalla casella di testo, riempire la casella combinata dimensione carattere con tutte le dimensioni valide del tipo di carattere specificato e specificare la dimensione del carattere in twip. Questo frammento di codice fa parte dell' [esempio di Word Pad](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_WordPad#8](../../mfc/reference/codesnippet/cpp/cmfctoolbarfontsizecombobox-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)

[CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)

[CMFCToolBarFontSizeComboBox](../../mfc/reference/cmfctoolbarfontsizecombobox-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtoolbarfontcombobox. h

## <a name="cmfctoolbarfontsizecomboboxcmfctoolbarfontsizecombobox"></a><a name="cmfctoolbarfontsizecombobox"></a> CMFCToolBarFontSizeComboBox:: CMFCToolBarFontSizeComboBox

Costruisce un oggetto `CMFCToolBarFontSizeComboBox`.

```
CMFCToolBarFontSizeComboBox();
```

## <a name="cmfctoolbarfontsizecomboboxgettwipsize"></a><a name="gettwipsize"></a> CMFCToolBarFontSizeComboBox:: GetTwipSize

Recupera la dimensione del carattere, in twip, dalla casella di testo di una casella combinata delle dimensioni del carattere.

```
int GetTwipSize() const;
```

### <a name="return-value"></a>Valore restituito

Se il valore restituito è positivo, corrisponde alla dimensione del carattere in twip. È-1 se la casella di testo della casella combinata è vuota. È-2 Se si verifica un errore.

## <a name="cmfctoolbarfontsizecomboboxrebuildfontsizes"></a><a name="rebuildfontsizes"></a> CMFCToolBarFontSizeComboBox:: RebuildFontSizes

Riempie una casella combinata delle dimensioni del carattere con tutte le dimensioni valide del tipo di carattere specificato.

```cpp
void RebuildFontSizes(const CString& strFontName);
```

### <a name="parameters"></a>Parametri

*strFontName*<br/>
in Specifica il nome del tipo di carattere.

### <a name="remarks"></a>Commenti

Chiamare questa funzione quando si desidera eseguire la sincronizzazione tra la selezione in una casella combinata tipo di carattere e una casella combinata delle dimensioni del carattere, ad esempio una [classe CMFCToolBarFontComboBox](../../mfc/reference/cmfctoolbarfontcombobox-class.md).

## <a name="cmfctoolbarfontsizecomboboxsettwipsize"></a><a name="settwipsize"></a> CMFCToolBarFontSizeComboBox:: SetTwipSize

Arrotonda la dimensione specificata (in twip) alla dimensione più vicina in punti, quindi imposta la dimensione selezionata nella casella combinata su tale valore.

```cpp
void SetTwipSize(int nSize);
```

### <a name="parameters"></a>Parametri

*nSize*<br/>
in Specifica le dimensioni del carattere (in twip) da impostare.

### <a name="remarks"></a>Commenti

È possibile recuperare le dimensioni del carattere valide precedenti in un secondo momento chiamando il metodo [CMFCToolBarFontSizeComboBox:: GetTwipSize](#gettwipsize) .

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)<br/>
[Classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)<br/>
[Classe CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)<br/>
[Classe CMFCFontInfo](../../mfc/reference/cmfcfontinfo-class.md)<br/>
[Metodo CMFCToolBar:: ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton)<br/>
[Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)
