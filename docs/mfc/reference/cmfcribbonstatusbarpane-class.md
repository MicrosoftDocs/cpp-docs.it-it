---
title: Classe CMFCRibbonStatusBarPane
ms.date: 11/04/2016
f1_keywords:
- CMFCRibbonStatusBarPane
- AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane
- AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane::CMFCRibbonStatusBarPane
- AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane::GetAlmostLargeText
- AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane::GetTextAlign
- AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane::IsAnimation
- AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane::IsExtended
- AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane::OnDrawBorder
- AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane::OnFillBackground
- AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane::SetAlmostLargeText
- AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane::SetAnimationList
- AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane::SetTextAlign
- AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane::StartAnimation
- AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane::StopAnimation
- AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane::OnFinishAnimation
helpviewer_keywords:
- CMFCRibbonStatusBarPane [MFC], CMFCRibbonStatusBarPane
- CMFCRibbonStatusBarPane [MFC], GetAlmostLargeText
- CMFCRibbonStatusBarPane [MFC], GetTextAlign
- CMFCRibbonStatusBarPane [MFC], IsAnimation
- CMFCRibbonStatusBarPane [MFC], IsExtended
- CMFCRibbonStatusBarPane [MFC], OnDrawBorder
- CMFCRibbonStatusBarPane [MFC], OnFillBackground
- CMFCRibbonStatusBarPane [MFC], SetAlmostLargeText
- CMFCRibbonStatusBarPane [MFC], SetAnimationList
- CMFCRibbonStatusBarPane [MFC], SetTextAlign
- CMFCRibbonStatusBarPane [MFC], StartAnimation
- CMFCRibbonStatusBarPane [MFC], StopAnimation
- CMFCRibbonStatusBarPane [MFC], OnFinishAnimation
ms.assetid: 5d034c3c-ecca-4267-b88c-0f55a2884dd0
ms.openlocfilehash: 9911672ec139ab1598db8005e9b7b909e85dd33d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62410076"
---
# <a name="cmfcribbonstatusbarpane-class"></a>Classe CMFCRibbonStatusBarPane

Il `CMFCRibbonStatusBarPane` classe implementa un elemento della barra multifunzione che è possibile aggiungere a una barra di stato multifunzione.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonStatusBarPane : public CMFCRibbonButton
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonStatusBarPane::CMFCRibbonStatusBarPane](#cmfcribbonstatusbarpane)|Costruisce e inizializza un oggetto `CMFCRibbonStatusBarPane`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonStatusBarPane::GetAlmostLargeText](#getalmostlargetext)|Restituisce la stringa che definisce la stringa di testo più lunga che può essere visualizzata nel riquadro senza troncamenti.|
|[CMFCRibbonStatusBarPane::GetTextAlign](#gettextalign)|Restituisce l'impostazione corrente dell'allineamento del testo.|
|[CMFCRibbonStatusBarPane::IsAnimation](#isanimation)|Determina se l'animazione è in corso.|
|[CMFCRibbonStatusBarPane::IsExtended](#isextended)|Determina se il riquadro si trova nell'area estesa della barra di stato della barra multifunzione.|
|[CMFCRibbonStatusBarPane::OnDrawBorder](#ondrawborder)|(Esegue l'override [CMFCRibbonButton::OnDrawBorder](../../mfc/reference/cmfcribbonbutton-class.md#ondrawborder).)|
|[CMFCRibbonStatusBarPane::OnFillBackground](#onfillbackground)|(Esegue l'override [CMFCRibbonButton::OnFillBackground](../../mfc/reference/cmfcribbonbutton-class.md#onfillbackground).)|
|[CMFCRibbonStatusBarPane::SetAlmostLargeText](#setalmostlargetext)|Definisce la stringa di testo più lunga che può essere visualizzata nel riquadro senza troncamenti.|
|[CMFCRibbonStatusBarPane::SetAnimationList](#setanimationlist)|Assegna al riquadro di un elenco di immagini che può essere utilizzato per l'animazione.|
|[CMFCRibbonStatusBarPane::SetTextAlign](#settextalign)|Imposta l'allineamento del testo.|
|[CMFCRibbonStatusBarPane::StartAnimation](#startanimation)|Viene avviata l'animazione viene assegnato al riquadro.|
|[CMFCRibbonStatusBarPane::StopAnimation](#stopanimation)|Interrompe l'animazione viene assegnato al riquadro. .|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonStatusBarPane::OnFinishAnimation](#onfinishanimation)|Chiamato dal framework quando si arresta l'animazione viene assegnato al riquadro.|

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come usare vari metodi nella classe `CMFCRibbonStatusBarPane`. Nell'esempio viene illustrato come costruire un `CMFCRibbonStatusBarPane` oggetto, impostare l'allineamento del testo dell'etichetta del riquadro della barra di stato, il testo più lungo che possono essere visualizzati nel riquadro della barra di stato senza troncamento, stabilire una connessione nel riquadro barra di stato di un elenco di immagini che può essere usato per definire un nimazione e avviare l'animazione.

[!code-cpp[NVC_MFC_RibbonApp#2](../../mfc/reference/codesnippet/cpp/cmfcribbonstatusbarpane-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)

[CMFCRibbonStatusBarPane](../../mfc/reference/cmfcribbonstatusbarpane-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxribbonstatusbarpane.h

##  <a name="cmfcribbonstatusbarpane"></a>  CMFCRibbonStatusBarPane::CMFCRibbonStatusBarPane

Costruire un oggetto di riquadro nella barra di stato.

```
CMFCRibbonStatusBarPane(
    UINT nCmdID,
    LPCTSTR lpszText,
    BOOL bIsStatic=FALSE,
    HICON hIcon=NULL,
    LPCTSTR lpszAlmostLargeText=NULL);

CMFCRibbonStatusBarPane(
    UINT nCmdID,
    LPCTSTR lpszText,
    HBITMAP hBmpAnimationList,
    int cxAnimation=16,
    COLORREF clrTrnsp=RGB(192,192 1,192) 1,
    HICON hIcon=NULL,
    BOOL bIsStatic=FALSE);

CMFCRibbonStatusBarPane(
    UINT nCmdID,
    LPCTSTR lpszText,
    UINT uiAnimationListResID,
    int cxAnimation=16,
    COLORREF clrTrnsp=RGB(192, 192 1, 192) 1,
    HICON hIcon=NULL,
    BOOL bIsStatic=FALSE);
```

### <a name="parameters"></a>Parametri

*nCmdID*<br/>
[in] Specifica l'ID di comando del riquadro.

*lpszText*<br/>
[in] Specifica la stringa di testo da visualizzare nel riquadro.

*bIsStatic*<br/>
[in] Se TRUE, nel riquadro di stato non può essere evidenziato o selezionato facendovi clic sopra.

*hIcon*<br/>
[in] Specifica un handle per un'icona da visualizzare nel riquadro.

*lpszAlmostLargeText*<br/>
[in] Specifica la stringa di testo più lunga che può essere visualizzata dal riquadro.

*hBmpAnimationList*<br/>
[in] Specifica un handle per un elenco di immagini che viene usato per l'animazione.

*cxAnimation*<br/>
[in] Specifica la larghezza, in pixel, dell'icona nell'elenco di immagini che viene usato per l'animazione.

*clrTrnsp*<br/>
[in] Specifica il colore trasparente delle immagini nell'elenco di immagini che vengono utilizzati per l'animazione.

*uiAnimationListResID*<br/>
[in] Specifica un ID di risorsa di un elenco di immagini che viene usato per l'animazione.

##  <a name="getalmostlargetext"></a>  CMFCRibbonStatusBarPane::GetAlmostLargeText

Ottiene la stringa di testo più lunga in grado di visualizzare il riquadro della barra di stato.

```
LPCTSTR GetAlmostLargeText() const;
```

### <a name="return-value"></a>Valore restituito

La stringa di testo più lunga in grado di visualizzare il riquadro della barra di stato.

##  <a name="gettextalign"></a>  CMFCRibbonStatusBarPane::GetTextAlign

Ottiene l'impostazione corrente dell'allineamento del testo dell'etichetta del riquadro della barra di stato.

```
int GetTextAlign() const;
```

### <a name="return-value"></a>Valore restituito

L'allineamento del testo corrente che può essere uno dei seguenti:

- TA_LEFT

- TA_CENTER

- TA_RIGHT.

##  <a name="isanimation"></a>  CMFCRibbonStatusBarPane::IsAnimation

Determina se l'animazione è in corso.

```
BOOL IsAnimation() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se l'animazione è in corso; FALSE in caso contrario.

##  <a name="isextended"></a>  CMFCRibbonStatusBarPane::IsExtended

Determinare se il riquadro si trova nell'area estesa della barra di stato della barra multifunzione.

```
BOOL IsExtended() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro è stato barra area estesa. FALSE in caso contrario.

##  <a name="ondrawborder"></a>  CMFCRibbonStatusBarPane::OnDrawBorder

Per informazioni dettagliate, vedere il codice sorgente disponibile nella cartella **VC\\atlmfc\\src\\mfc** dell'installazione di Visual Studio.

```
virtual void OnDrawBorder(CDC*);
```

### <a name="parameters"></a>Parametri

[in] *CDC&#42;*<br/>

### <a name="remarks"></a>Note

##  <a name="onfillbackground"></a>  CMFCRibbonStatusBarPane::OnFillBackground

Per informazioni dettagliate, vedere il codice sorgente disponibile nella cartella **VC\\atlmfc\\src\\mfc** dell'installazione di Visual Studio.

```
virtual COLORREF OnFillBackground(CDC* pDC);
```

### <a name="parameters"></a>Parametri

[in] *pDC*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="onfinishanimation"></a>  CMFCRibbonStatusBarPane::OnFinishAnimation

Framework chiama questo metodo al termine dell'animazione che viene assegnato al riquadro.

```
virtual void OnFinishAnimation();
```

### <a name="remarks"></a>Note

`StopAnimation` chiamate ai metodi di `OnFinishAnimation` metodo, che è possibile usare per pulire i dati quando l'animazione termina.

##  <a name="setalmostlargetext"></a>  CMFCRibbonStatusBarPane::SetAlmostLargeText

Definire il testo più lungo che può essere visualizzato nel riquadro della barra di stato senza troncamenti.

```
void SetAlmostLargeText(LPCTSTR lpszAlmostLargeText);
```

### <a name="parameters"></a>Parametri

*lpszAlmostLargeText*<br/>
[in] Specifica la stringa più lunga che può essere visualizzata nel riquadro della barra di stato senza troncamenti.

### <a name="remarks"></a>Note

La libreria calcola le dimensioni del testo che *lpszAlmostLargeText* specifica e ridimensiona il riquadro di conseguenza. Il testo verrà troncato se ancora non rientra nel riquadro.

##  <a name="setanimationlist"></a>  CMFCRibbonStatusBarPane::SetAnimationList

Si collega al riquadro della barra di stato per un elenco di immagini che può essere utilizzato per l'animazione.

```
void SetAnimationList(
    HBITMAP hBmpAnimationList,
    int cxAnimation=16,
    COLORREF clrTransp=RGB(192, 192 1, 192) 1);

BOOL SetAnimationList(
    UINT uiAnimationListResID,
    int cxAnimation=16,
    COLORREF clrTransp=RGB(192, 192 1, 192) 1);
```

### <a name="parameters"></a>Parametri

*hBmpAnimationList*<br/>
[in] Specifica un handle per un elenco di immagini.

*cxAnimation*<br/>
[in] Specifica la larghezza, in pixel, del frame nell'elenco di immagini.

*clrTransp*<br/>
[in] Specifica il colore trasparente dell'elenco immagini.

*uiAnimationListResID*<br/>
[in] Specifica l'ID risorsa dell'elenco immagini.

### <a name="return-value"></a>Valore restituito

TRUE se l'elenco di immagini è connesso correttamente al riquadro della barra di stato; FALSE in caso contrario.

##  <a name="settextalign"></a>  CMFCRibbonStatusBarPane::SetTextAlign

Imposta l'allineamento del testo dell'etichetta del riquadro della barra di stato.

```
void SetTextAlign(int nAlign);
```

### <a name="parameters"></a>Parametri

*nAlign*<br/>
[in] Specifica l'allineamento del testo.

### <a name="remarks"></a>Note

*nAlign* può avere uno dei valori seguenti:

- TA_LEFT: allineamento a sinistra

- TA_CENTER: allineamento al centro

- TA_RIGHT: allineamento a destra

##  <a name="startanimation"></a>  CMFCRibbonStatusBarPane::StartAnimation

Viene avviata l'animazione assegnato al riquadro.

```
void StartAnimation(
    UINT nFrameDelay=500,
    UINT nDuration=-1);
```

### <a name="parameters"></a>Parametri

*nFrameDelay*<br/>
[in] Specifica la frequenza dei fotogrammi di animazione, in millisecondi.

*nDuration*<br/>
[in] Specifica il tempo di riproduzione dell'animazione, in millisecondi. Usare -1 per un ciclo infinito.

### <a name="remarks"></a>Note

È necessario specificare un handle per un elenco di immagini prima di chiamare `StartAnimation` tramite `SetAnimationList`.

##  <a name="stopanimation"></a>  CMFCRibbonStatusBarPane::StopAnimation

Interrompe l'animazione assegnato al riquadro della barra di stato.

```
void StopAnimation();
```

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)<br/>
[Classe CMFCRibbonStatusBar](../../mfc/reference/cmfcribbonstatusbar-class.md)
