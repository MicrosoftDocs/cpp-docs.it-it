---
description: 'Altre informazioni su: classe CMFCRibbonColorButton'
title: Classe CMFCRibbonColorButton
ms.date: 11/04/2016
f1_keywords:
- CMFCRibbonColorButton
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::CMFCRibbonColorButton
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::AddColorsGroup
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::EnableAutomaticButton
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::EnableOtherButton
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::GetAutomaticColor
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::GetColor
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::GetColorBoxSize
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::GetColumns
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::GetHighlightedColor
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::RemoveAllColorGroups
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::SetColor
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::SetColorBoxSize
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::SetColorName
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::SetColumns
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::SetDocumentColors
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::SetPalette
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::UpdateColor
helpviewer_keywords:
- CMFCRibbonColorButton [MFC], CMFCRibbonColorButton
- CMFCRibbonColorButton [MFC], AddColorsGroup
- CMFCRibbonColorButton [MFC], EnableAutomaticButton
- CMFCRibbonColorButton [MFC], EnableOtherButton
- CMFCRibbonColorButton [MFC], GetAutomaticColor
- CMFCRibbonColorButton [MFC], GetColor
- CMFCRibbonColorButton [MFC], GetColorBoxSize
- CMFCRibbonColorButton [MFC], GetColumns
- CMFCRibbonColorButton [MFC], GetHighlightedColor
- CMFCRibbonColorButton [MFC], RemoveAllColorGroups
- CMFCRibbonColorButton [MFC], SetColor
- CMFCRibbonColorButton [MFC], SetColorBoxSize
- CMFCRibbonColorButton [MFC], SetColorName
- CMFCRibbonColorButton [MFC], SetColumns
- CMFCRibbonColorButton [MFC], SetDocumentColors
- CMFCRibbonColorButton [MFC], SetPalette
- CMFCRibbonColorButton [MFC], UpdateColor
ms.assetid: 6b4b4ee3-8cc0-41b4-a4eb-93e8847008e1
ms.openlocfilehash: a350339559febdc9346dcf8b342d274d00bab391
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97293716"
---
# <a name="cmfcribboncolorbutton-class"></a>Classe CMFCRibbonColorButton

La classe `CMFCRibbonColorButton` implementa un pulsante colore che è possibile aggiungere a una barra multifunzione. Il pulsante colore della barra multifunzione visualizza un menu a discesa contenente una o più tavolozze dei colori.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonColorButton : public CMFCRibbonGallery
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCRibbonColorButton::CMFCRibbonColorButton](#cmfcribboncolorbutton)||

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCRibbonColorButton:: AddColorsGroup](#addcolorsgroup)|Aggiunge un gruppo di colori nell'area dei colori normali.|
|[CMFCRibbonColorButton:: EnableAutomaticButton](#enableautomaticbutton)|Specifica se il pulsante **Automatico** è abilitato.|
|[CMFCRibbonColorButton:: EnableOtherButton](#enableotherbutton)|Abilita il pulsante **Altro** .|
|[CMFCRibbonColorButton::GetAutomaticColor](#getautomaticcolor)||
|[CMFCRibbonColorButton:: GetColor](#getcolor)|Restituisce il colore attualmente selezionato.|
|[CMFCRibbonColorButton:: GetColorBoxSize](#getcolorboxsize)|Restituisce le dimensioni degli elementi di colore visualizzati nella barra dei colori.|
|[CMFCRibbonColorButton::GetColumns](#getcolumns)||
|[CMFCRibbonColorButton:: GetHighlightedColor](#gethighlightedcolor)|Restituisce il colore dell'elemento attualmente selezionato nella tavolozza dei colori popup.|
|[CMFCRibbonColorButton:: RemoveAllColorGroups](#removeallcolorgroups)|Rimuove tutti i gruppi di colore dall'area dei colori normali.|
|[CMFCRibbonColorButton:: ToColor](#setcolor)|Seleziona un colore dall'area dei colori normali.|
|[CMFCRibbonColorButton:: SetColorBoxSize](#setcolorboxsize)|Imposta le dimensioni di tutti gli elementi di colore visualizzati nella barra dei colori.|
|[CMFCRibbonColorButton::SetColorName](#setcolorname)||
|[CMFCRibbonColorButton::SetColumns](#setcolumns)||
|[CMFCRibbonColorButton:: SetDocumentColors](#setdocumentcolors)|Specifica un elenco di valori RGB da visualizzare nell'area dei colori del documento.|
|[CMFCRibbonColorButton::SetPalette](#setpalette)||
|[CMFCRibbonColorButton::UpdateColor](#updatecolor)||

## <a name="remarks"></a>Commenti

Se selezionato, il pulsante colore della barra multifunzione visualizza una barra dei colori. Per impostazione predefinita, la barra dei colori contiene una tavolozza denominata area dei colori normali. Facoltativamente, la barra dei colori può visualizzare un pulsante **Automatico** che consente all'utente di selezionare un colore predefinito e un pulsante **Altro** che visualizza una tavolozza dei colori popup contenente altri colori.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCRibbonColorButton` . L'esempio illustra come costruire un oggetto `CMFCRibbonColorButton` , impostare l'immagine di grandi dimensioni, abilitare il pulsante **Automatico** , abilitare il pulsante **Altro** , impostare il numero di colonne, impostare le dimensioni di tutti gli elementi di colore visualizzati nella barra dei colori, aggiungere un gruppo di colori nell'area dei colori normali e specificare un elenco di valori RGB da visualizzare nell'area dei colori del documento. Questo frammento di codice fa parte dell' [esempio Draw Client](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_DrawClient#3](../../mfc/reference/codesnippet/cpp/cmfcribboncolorbutton-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)

[CMFCRibbonGallery](../../mfc/reference/cmfcribbongallery-class.md)

[CMFCRibbonColorButton](../../mfc/reference/cmfcribboncolorbutton-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxribboncolorbutton.h

## <a name="cmfcribboncolorbuttonaddcolorsgroup"></a><a name="addcolorsgroup"></a> CMFCRibbonColorButton:: AddColorsGroup

Aggiunge un gruppo di colori nell'area dei colori normali.

```cpp
void AddColorsGroup(
    LPCTSTR lpszName,
    const CList<COLORREF,COLORREF>& lstColors,
    BOOL bContiguousColumns=FALSE);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
in Nome del gruppo.

*lstColors*<br/>
in Elenco di colori.

*bContiguousColumns*<br/>
in Controlla la modalità di visualizzazione degli elementi del colore nel gruppo. Se TRUE, gli elementi del colore vengono disegnati senza spaziatura verticale. Se FALSE, gli elementi del colore vengono disegnati con una spaziatura verticale.

### <a name="remarks"></a>Commenti

Usare questa funzione per fare in modo che la finestra popup dei colori visualizzi diversi gruppi di colori. È possibile controllare la modalità di visualizzazione dei colori nel gruppo.

## <a name="cmfcribboncolorbuttoncmfcribboncolorbutton"></a><a name="cmfcribboncolorbutton"></a> CMFCRibbonColorButton:: CMFCRibbonColorButton

Costruisce un oggetto `CMFCRibbonColorButton`.

```
CMFCRibbonColorButton();

CMFCRibbonColorButton(
    UINT nID,
    LPCTSTR lpszText,
    int nSmallImageIndex,
    COLORREF color = RGB(0, 0, 0));

CMFCRibbonColorButton(
    UINT nID,
    LPCTSTR lpszText,
    BOOL bSimpleButtonLook,
    int nSmallImageIndex,
    int nLargeImageIndex,
    COLORREF color = RGB(0, 0, 0));
```

### <a name="parameters"></a>Parametri

*nID*<br/>
in Specifica l'ID del comando da eseguire quando un utente fa clic sul pulsante.

*lpszText*<br/>
in Specifica il testo da visualizzare sul pulsante.

*nSmallImageIndex*<br/>
in Indice in base zero dell'immagine piccola da visualizzare sul pulsante.

*color*<br/>
in Colore del pulsante (il valore predefinito è nero).

*bSimpleButtonLook*<br/>
in Se TRUE, il pulsante viene disegnato come rettangolo semplice.

*nLargeImageIndex*<br/>
in Indice in base zero dell'immagine grande da visualizzare sul pulsante.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcribboncolorbuttonenableautomaticbutton"></a><a name="enableautomaticbutton"></a> CMFCRibbonColorButton:: EnableAutomaticButton

Specifica se il pulsante **Automatico** è abilitato.

```cpp
void EnableAutomaticButton(
    LPCTSTR lpszLabel,
    COLORREF colorAutomatic,
    BOOL bEnable=TRUE,
    LPCTSTR lpszToolTip=NULL,
    BOOL bOnTop=TRUE,
    BOOL bDrawBorder=FALSE);
```

### <a name="parameters"></a>Parametri

*lpszLabel*<br/>
in Etichetta del pulsante **automatico** .

*colorAutomatic*<br/>
in Valore RGB che specifica il colore predefinito del pulsante **automatico** .

*bEnable*<br/>
in TRUE se il pulsante **automatico** è abilitato. FALSE se è disabilitato.

*lpszToolTip*<br/>
in Descrizione comando del pulsante **automatico** .

*bOnTop*<br/>
in Specifica se il pulsante **automatico** si trova nella parte superiore, prima della tavolozza dei colori.

*bDrawBorder*<br/>
in TRUE se l'applicazione disegna un bordo intorno alla barra dei colori sul pulsante colore della barra multifunzione. Barra dei colori consente di visualizzare il colore attualmente selezionato. FALSE se l'applicazione non consente di creare un bordo

## <a name="cmfcribboncolorbuttonenableotherbutton"></a><a name="enableotherbutton"></a> CMFCRibbonColorButton:: EnableOtherButton

Abilita il pulsante **Altro** .

```cpp
void EnableOtherButton(
    LPCTSTR lpszLabel,
    LPCTSTR lpszToolTip=NULL);
```

### <a name="parameters"></a>Parametri

*lpszLabel*<br/>
Etichetta del pulsante.

*lpszToolTip*<br/>
Testo della descrizione comando per l' **altro** pulsante.

### <a name="remarks"></a>Commenti

Il pulsante **altro** è il pulsante visualizzato sotto il gruppo di colori. Quando l'utente fa clic sul pulsante **altro** , viene visualizzata una finestra di dialogo colore.

## <a name="cmfcribboncolorbuttongetautomaticcolor"></a><a name="getautomaticcolor"></a> CMFCRibbonColorButton:: GetAutomaticColor

Recupera il colore corrente del pulsante automatico.

```
COLORREF GetAutomaticColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore di colore RGB che rappresenta il colore del pulsante automatico corrente.

### <a name="remarks"></a>Commenti

Il colore del pulsante automatico viene impostato dal `colorAutomatic` parametro passato al `CMFCRibbonColorButton::EnableAutomaticButton` metodo.

## <a name="cmfcribboncolorbuttongetcolor"></a><a name="getcolor"></a> CMFCRibbonColorButton:: GetColor

Restituisce il colore attualmente selezionato.

```
COLORREF GetColor() const;
```

### <a name="return-value"></a>Valore restituito

Colore selezionato facendo clic sul pulsante.

## <a name="cmfcribboncolorbuttongetcolorboxsize"></a><a name="getcolorboxsize"></a> CMFCRibbonColorButton:: GetColorBoxSize

Restituisce le dimensioni degli elementi di colore visualizzati nella barra dei colori.

```
CSize GetColorBoxSize() const;
```

### <a name="return-value"></a>Valore restituito

Dimensioni dei pulsanti colore nella tavolozza dei colori a discesa.

## <a name="cmfcribboncolorbuttongetcolumns"></a><a name="getcolumns"></a> CMFCRibbonColorButton:: GetColumns

Ottiene il numero di elementi in una riga della visualizzazione della raccolta del pulsante colore della barra multifunzione.

```
int GetColumns() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di icone in ogni riga.

### <a name="remarks"></a>Commenti

## <a name="cmfcribboncolorbuttongethighlightedcolor"></a><a name="gethighlightedcolor"></a> CMFCRibbonColorButton:: GetHighlightedColor

Restituisce il colore dell'elemento attualmente selezionato nella tavolozza dei colori popup.

```
COLORREF GetHighlightedColor() const;
```

### <a name="return-value"></a>Valore restituito

Il colore dell'elemento attualmente selezionato nella tavolozza dei colori popup.

## <a name="cmfcribboncolorbuttonremoveallcolorgroups"></a><a name="removeallcolorgroups"></a> CMFCRibbonColorButton:: RemoveAllColorGroups

Rimuove tutti i gruppi di colore dall'area dei colori normali.

```cpp
void RemoveAllColorGroups();
```

## <a name="cmfcribboncolorbuttonsetcolor"></a><a name="setcolor"></a> CMFCRibbonColorButton:: ToColor

Seleziona un colore dall'area dei colori normali.

```cpp
void SetColor(COLORREF color);
```

### <a name="parameters"></a>Parametri

*color*<br/>
in Colore da impostare.

## <a name="cmfcribboncolorbuttonsetcolorboxsize"></a><a name="setcolorboxsize"></a> CMFCRibbonColorButton:: SetColorBoxSize

Imposta le dimensioni di tutti gli elementi di colore visualizzati nella barra dei colori.

```cpp
void SetColorBoxSize(CSize sizeBox);
```

### <a name="parameters"></a>Parametri

*sizeBox*<br/>
in Nuove dimensioni dei pulsanti colore nella tavolozza dei colori.

## <a name="cmfcribboncolorbuttonsetcolorname"></a><a name="setcolorname"></a> CMFCRibbonColorButton:: secolorname

Imposta un nuovo nome per un colore specificato.

```
static void __stdcall SetColorName(
    COLORREF color,
    const CString& strName);
```

### <a name="parameters"></a>Parametri

*color*<br/>
in Valore RGB di un colore.

*strName*<br/>
in Nuovo nome per il colore specificato.

### <a name="remarks"></a>Commenti

Poiché chiama `CMFCColorBar::SetColorName` , questo metodo modifica il nome del colore specificato in tutti `CMFCColorBar` gli oggetti dell'applicazione.

## <a name="cmfcribboncolorbuttonsetcolumns"></a><a name="setcolumns"></a> CMFCRibbonColorButton:: secolumns

Imposta il numero di colonne visualizzate nella tabella di colori presentata all'utente durante il processo di selezione dei colori dell'utente.

```cpp
void SetColumns(int nColumns);
```

### <a name="parameters"></a>Parametri

*nColumns*<br/>
in Il numero di icone dei colori da visualizzare in ogni riga.

### <a name="remarks"></a>Commenti

## <a name="cmfcribboncolorbuttonsetdocumentcolors"></a><a name="setdocumentcolors"></a> CMFCRibbonColorButton:: SetDocumentColors

Specifica un elenco di valori RGB da visualizzare nell'area dei colori del documento.

```cpp
void SetDocumentColors(
    LPCTSTR lpszLabel,
    CList<COLORREF,COLORREF>& lstColors);
```

### <a name="parameters"></a>Parametri

*lpszLabel*<br/>
in Testo da visualizzare con i colori del documento.

*lstColors*<br/>
in Riferimento a un elenco di valori RGB.

## <a name="cmfcribboncolorbuttonsetpalette"></a><a name="setpalette"></a> CMFCRibbonColorButton:: sepalette

Specifica i colori standard da visualizzare nella tabella dei colori visualizzata dal pulsante colore.

```cpp
void SetPalette(CPalette* pPalette);
```

### <a name="parameters"></a>Parametri

*pPalette*<br/>
in Puntatore a una tavolozza dei colori.

### <a name="remarks"></a>Commenti

## <a name="cmfcribboncolorbuttonupdatecolor"></a><a name="updatecolor"></a> CMFCRibbonColorButton:: UpdateColor

Chiamata eseguita dal framework quando l'utente seleziona un colore dalla tabella dei colori visualizzata quando l'utente fa clic sul pulsante del colore.

```cpp
void UpdateColor(COLORREF color);
```

### <a name="parameters"></a>Parametri

*color*<br/>
in Colore selezionato dall'utente.

### <a name="remarks"></a>Commenti

Il `CMFCRibbonColorButton::UpdateColor` metodo modifica il colore del pulsante attualmente selezionato e invia una notifica all'elemento padre inviando un messaggio di WM_COMMAND con una notifica di BN_CLICKED standard. Usare il metodo [CMFCRibbonColorButton:: GetColor](#getcolor) per recuperare il colore selezionato.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonGallery](../../mfc/reference/cmfcribbongallery-class.md)
