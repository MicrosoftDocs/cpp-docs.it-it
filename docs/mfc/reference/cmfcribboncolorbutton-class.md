---
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
ms.openlocfilehash: 8cf92d8d4b1b113f751bee85ac2a7df6eb06afea
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375246"
---
# <a name="cmfcribboncolorbutton-class"></a>Classe CMFCRibbonColorButton

La classe `CMFCRibbonColorButton` implementa un pulsante colore che è possibile aggiungere a una barra multifunzione. Il pulsante colore della barra multifunzione visualizza un menu a discesa contenente una o più tavolozze dei colori.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonColorButton : public CMFCRibbonGallery
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonColorButton::CMFCRibbonColorButton](#cmfcribboncolorbutton)||

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonColorButton::AddColorsGroup](#addcolorsgroup)|Aggiunge un gruppo di colori nell'area dei colori normali.|
|[CMFCRibbonColorButton::EnableAutomaticButton](#enableautomaticbutton)|Specifica se il pulsante **Automatico** è abilitato.|
|[CMFCRibbonColorButton::EnableOtherButton](#enableotherbutton)|Abilita il pulsante **Altro** .|
|[CMFCRibbonColorButton::GetAutomaticColor](#getautomaticcolor)||
|[CMFCRibbonColorButton::GetColor](#getcolor)|Restituisce il colore attualmente selezionato.|
|[CMFCRibbonColorButton::GetColorBoxSize](#getcolorboxsize)|Restituisce le dimensioni degli elementi di colore visualizzati nella barra dei colori.|
|[CMFCRibbonColorButton::GetColumns](#getcolumns)||
|[CMFCRibbonColorButton::GetHighlightedColor](#gethighlightedcolor)|Restituisce il colore dell'elemento attualmente selezionato nella tavolozza dei colori popup.|
|[CMFCRibbonColorButton::RemoveAllColorGroups](#removeallcolorgroups)|Rimuove tutti i gruppi di colore dall'area dei colori normali.|
|[CMFCRibbonColorButton::SetColor](#setcolor)|Seleziona un colore dall'area dei colori normali.|
|[CMFCRibbonColorButton::SetColorBoxSize](#setcolorboxsize)|Imposta le dimensioni di tutti gli elementi di colore visualizzati nella barra dei colori.|
|[CMFCRibbonColorButton::SetColorName](#setcolorname)||
|[CMFCRibbonColorButton::SetColumns](#setcolumns)||
|[CMFCRibbonColorButton::SetDocumentColors](#setdocumentcolors)|Specifica un elenco di valori RGB da visualizzare nell'area dei colori del documento.|
|[CMFCRibbonColorButton::SetPalette](#setpalette)||
|[CMFCRibbonColorButton::UpdateColor](#updatecolor)||

## <a name="remarks"></a>Osservazioni

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

## <a name="cmfcribboncolorbuttonaddcolorsgroup"></a><a name="addcolorsgroup"></a>CMFCRibbonColorButton::AddColorsGroup

Aggiunge un gruppo di colori nell'area dei colori normali.

```
void AddColorsGroup(
    LPCTSTR lpszName,
    const CList<COLORREF,COLORREF>& lstColors,
    BOOL bContiguousColumns=FALSE);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
[in] Nome del gruppo.

*LstColori*<br/>
[in] Elenco di colori.

*bContiguousColonne*<br/>
[in] Controlla la modalità di visualizzazione degli elementi colore nel gruppo. Se TRUE, gli elementi di colore vengono disegnati senza una spaziatura verticale. Se FALSE, gli elementi di colore vengono disegnati con una spaziatura verticale.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione per rendere il colore pop-up visualizzare diversi gruppi di colori. È possibile controllare la modalità di visualizzazione dei colori in gruppo.

## <a name="cmfcribboncolorbuttoncmfcribboncolorbutton"></a><a name="cmfcribboncolorbutton"></a>CMFCRibbonColorButton::CMFCRibbonColorButton

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
[in] Specifica l'ID di comando del comando da eseguire quando un utente fa clic sul pulsante.

*lpszText*<br/>
[in] Specifica il testo da visualizzare sul pulsante.

*nSmallImageIndex (indice di immagine e immagine e immagine e modifica*<br/>
[in] Indice in base zero dell'immagine piccola da visualizzare sul pulsante.

*Colore*<br/>
[in] Il colore del pulsante (il valore predefinito è il nero).

*bSimpleButtonLook*<br/>
[in] Se TRUE, il pulsante viene disegnato come un semplice rettangolo.

*nLargeImageIndex (ingranditoImage)*<br/>
[in] Indice in base zero dell'immagine grande da visualizzare sul pulsante.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribboncolorbuttonenableautomaticbutton"></a><a name="enableautomaticbutton"></a>CMFCRibbonColorButton::EnableAutomaticButton

Specifica se il pulsante **Automatico** è abilitato.

```
void EnableAutomaticButton(
    LPCTSTR lpszLabel,
    COLORREF colorAutomatic,
    BOOL bEnable=TRUE,
    LPCTSTR lpszToolTip=NULL,
    BOOL bOnTop=TRUE,
    BOOL bDrawBorder=FALSE);
```

### <a name="parameters"></a>Parametri

*lpszLabel (etichetta di un'etichetta di base)*<br/>
[in] Etichetta per il pulsante **Automatico.**

*colorAutomatic*<br/>
[in] Valore RGB che specifica il colore predefinito del pulsante **Automatico.**

*bEnable*<br/>
[in] TRUESe il pulsante **automatico** è abilitato; FALSE se è disabilitato.

*lpszToolTip*<br/>
[in] Descrizione comando del pulsante **Automatico.**

*bOnTop*<br/>
[in] Specifica se il pulsante **Automatico** si trova nella parte superiore, prima della tavolozza dei colori.

*bDrawBorder*<br/>
[in] TRUESe l'applicazione disegna un bordo intorno alla barra dei colori sul pulsante di colore della barra multifunzione. La barra dei colori visualizza il colore attualmente selezionato. FALSE se l'applicazione non disegna un bordo

## <a name="cmfcribboncolorbuttonenableotherbutton"></a><a name="enableotherbutton"></a>CMFCRibbonColorButton::EnableOtherButton

Abilita il pulsante **Altro** .

```
void EnableOtherButton(
    LPCTSTR lpszLabel,
    LPCTSTR lpszToolTip=NULL);
```

### <a name="parameters"></a>Parametri

*lpszLabel (etichetta di un'etichetta di base)*<br/>
Etichetta del pulsante.

*lpszToolTip*<br/>
Testo della descrizione comando per il pulsante **Altro.**

### <a name="remarks"></a>Osservazioni

Il pulsante **Altro** è il pulsante visualizzato sotto il gruppo di colori. Quando l'utente fa clic sul pulsante **Altro,** viene visualizzata una finestra di dialogo a colori.

## <a name="cmfcribboncolorbuttongetautomaticcolor"></a><a name="getautomaticcolor"></a>CMFCRibbonColorButton::GetAutomaticColor

Recupera il colore del pulsante automatico corrente.

```
COLORREF GetAutomaticColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore di colore RGB che rappresenta il colore del pulsante automatico corrente.

### <a name="remarks"></a>Osservazioni

Il colore del pulsante `colorAutomatic` automatico viene `CMFCRibbonColorButton::EnableAutomaticButton` impostato dal parametro passato al metodo.

## <a name="cmfcribboncolorbuttongetcolor"></a><a name="getcolor"></a>CMFCRibbonColorButton::GetColor

Restituisce il colore attualmente selezionato.

```
COLORREF GetColor() const;
```

### <a name="return-value"></a>Valore restituito

Colore selezionato facendo clic sul pulsante.

## <a name="cmfcribboncolorbuttongetcolorboxsize"></a><a name="getcolorboxsize"></a>CMFCRibbonColorButton::GetColorBoxSize

Restituisce le dimensioni degli elementi di colore visualizzati nella barra dei colori.

```
CSize GetColorBoxSize() const;
```

### <a name="return-value"></a>Valore restituito

Dimensioni dei pulsanti di colore nella tavolozza dei colori a discesa.

## <a name="cmfcribboncolorbuttongetcolumns"></a><a name="getcolumns"></a>CMFCRibbonColorButton::GetColumns

Ottiene il numero di elementi in una riga della visualizzazione della raccolta del pulsante del colore della barra multifunzione.

```
int GetColumns() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di icone in ogni riga.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribboncolorbuttongethighlightedcolor"></a><a name="gethighlightedcolor"></a>CMFCRibbonColorButton::GetHighlightedColor

Restituisce il colore dell'elemento attualmente selezionato nella tavolozza dei colori popup.

```
COLORREF GetHighlightedColor() const;
```

### <a name="return-value"></a>Valore restituito

Colore dell'elemento attualmente selezionato nella tavolozza dei colori a comparsa.

## <a name="cmfcribboncolorbuttonremoveallcolorgroups"></a><a name="removeallcolorgroups"></a>CMFCRibbonColorButton::RemoveAllColorGroups

Rimuove tutti i gruppi di colore dall'area dei colori normali.

```
void RemoveAllColorGroups();
```

## <a name="cmfcribboncolorbuttonsetcolor"></a><a name="setcolor"></a>CMFCRibbonColorButton::SetColor

Seleziona un colore dall'area dei colori normali.

```
void SetColor(COLORREF color);
```

### <a name="parameters"></a>Parametri

*Colore*<br/>
[in] Un colore da impostare.

## <a name="cmfcribboncolorbuttonsetcolorboxsize"></a><a name="setcolorboxsize"></a>CMFCRibbonColorButton::SetColorBoxSize

Imposta le dimensioni di tutti gli elementi di colore visualizzati nella barra dei colori.

```
void SetColorBoxSize(CSize sizeBox);
```

### <a name="parameters"></a>Parametri

*sizeBox (finestra di posta in dettagli*<br/>
[in] Nuova dimensione dei pulsanti di colore nella tavolozza dei colori.

## <a name="cmfcribboncolorbuttonsetcolorname"></a><a name="setcolorname"></a>CMFCRibbonColorButton::SetColorName

Imposta un nuovo nome per un colore specificato.

```
static void __stdcall SetColorName(
    COLORREF color,
    const CString& strName);
```

### <a name="parameters"></a>Parametri

*Colore*<br/>
[in] Valore RGB di un colore.

*strName*<br/>
[in] Nuovo nome per il colore specificato.

### <a name="remarks"></a>Osservazioni

Poiché `CMFCColorBar::SetColorName`chiama , questo metodo modifica il `CMFCColorBar` nome del colore specificato in tutti gli oggetti dell'applicazione.

## <a name="cmfcribboncolorbuttonsetcolumns"></a><a name="setcolumns"></a>CMFCRibbonColorButton::SetColumns

Imposta il numero di colonne visualizzate nella tabella dei colori che viene presentata all'utente durante il processo di selezione dei colori dell'utente.

```
void SetColumns(int nColumns);
```

### <a name="parameters"></a>Parametri

*nColumns*<br/>
[in] Il numero di icone a colori da visualizzare in ogni riga.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribboncolorbuttonsetdocumentcolors"></a><a name="setdocumentcolors"></a>CMFCRibbonColorButton::SetDocumentColors

Specifica un elenco di valori RGB da visualizzare nell'area dei colori del documento.

```
void SetDocumentColors(
    LPCTSTR lpszLabel,
    CList<COLORREF,COLORREF>& lstColors);
```

### <a name="parameters"></a>Parametri

*lpszLabel (etichetta di un'etichetta di base)*<br/>
[in] Testo da visualizzare con i colori del documento.

*LstColori*<br/>
[in] Riferimento a un elenco di valori RGB.

## <a name="cmfcribboncolorbuttonsetpalette"></a><a name="setpalette"></a>CMFCRibbonColorButton::SetPalette

Specifica i colori standard da visualizzare nella tabella dei colori visualizzata dal pulsante dei colori.

```
void SetPalette(CPalette* pPalette);
```

### <a name="parameters"></a>Parametri

*pTavolozza*<br/>
[in] Puntatore a una tavolozza dei colori.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribboncolorbuttonupdatecolor"></a><a name="updatecolor"></a>CMFCRibbonColorButton::UpdateColor

Chiamato dal framework quando l'utente seleziona un colore dalla tabella dei colori visualizzata quando l'utente fa clic sul pulsante del colore.

```
void UpdateColor(COLORREF color);
```

### <a name="parameters"></a>Parametri

*Colore*<br/>
[in] Colore selezionato dall'utente.

### <a name="remarks"></a>Osservazioni

Il `CMFCRibbonColorButton::UpdateColor` metodo modifica il colore del pulsante attualmente selezionato e invia una notifica padre inviando un messaggio di WM_COMMAND con una notifica standard BN_CLICKED. Utilizzare il [CMFCRibbonColorButton::GetColor](#getcolor) metodo per recuperare il colore selezionato.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCRibbonGallery (classe)](../../mfc/reference/cmfcribbongallery-class.md)
