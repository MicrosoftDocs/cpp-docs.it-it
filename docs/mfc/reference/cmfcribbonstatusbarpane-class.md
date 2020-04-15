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
ms.openlocfilehash: 554b9fe364c6a213e038416a605c17cdd4f8e7d9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368790"
---
# <a name="cmfcribbonstatusbarpane-class"></a>Classe CMFCRibbonStatusBarPane

La `CMFCRibbonStatusBarPane` classe implementa un elemento della barra multifunzione che è possibile aggiungere a una barra di stato della barra multifunzione.

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
|[CMFCRibbonStatusBarPane::GetAlmostLargeText](#getalmostlargetext)|Restituisce la stringa che definisce la stringa di testo più lunga che può essere visualizzata nel riquadro senza troncamento.|
|[CMFCRibbonStatusBarPane::GetTextAlign](#gettextalign)|Restituisce l'impostazione corrente dell'allineamento del testo.|
|[CMFCRibbonStatusBarPane::IsAnimation](#isanimation)|Determina se l'animazione è in corso.|
|[CMFCRibbonStatusBarPane::IsExtended](#isextended)|Determina se il riquadro si trova nell'area estesa della barra di stato della barra multifunzione.|
|[CMFCRibbonStatusBarPane::OnDrawBorder](#ondrawborder)|(Overrides [CMFCRibbonButton::OnDrawBorder](../../mfc/reference/cmfcribbonbutton-class.md#ondrawborder).)|
|[CMFCRibbonStatusBarPane::OnFillBackground](#onfillbackground)|(Esegue l'override [di CMFCRibbonButton::OnFillBackground](../../mfc/reference/cmfcribbonbutton-class.md#onfillbackground).)|
|[CMFCRibbonStatusBarPane::SetAlmostLargeText](#setalmostlargetext)|Definisce la stringa di testo più lunga che può essere visualizzata nel riquadro senza troncamento.|
|[CMFCRibbonStatusBarPane::SetAnimationList](#setanimationlist)|Assegna al riquadro un elenco immagini che può essere utilizzato per l'animazione.|
|[CMFCRibbonStatusBarPane::SetTextAlign](#settextalign)|Imposta l'allineamento del testo.|
|[CMFCRibbonStatusBarPane::StartAnimation](#startanimation)|Avvia l'animazione assegnata al riquadro.|
|[CMFCRibbonStatusBarPane::StopAnimation](#stopanimation)|Interrompe l'animazione assegnata al riquadro. .|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonStatusBarPane::OnFinishAnimation](#onfinishanimation)|Chiamato dal framework quando l'animazione assegnata al riquadro si arresta.|

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come usare vari metodi nella classe `CMFCRibbonStatusBarPane`. Nell'esempio viene illustrato `CMFCRibbonStatusBarPane` come costruire un oggetto, impostare l'allineamento del testo dell'etichetta del riquadro della barra di stato, definire il testo più lungo che può essere visualizzato nel riquadro della barra di stato senza troncamento, allegare al riquadro della barra di stato un elenco immagini che può essere utilizzato per l'animazione e avviare l'animazione.

[!code-cpp[NVC_MFC_RibbonApp#2](../../mfc/reference/codesnippet/cpp/cmfcribbonstatusbarpane-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)

[CMFCRibbonStatusBarPane](../../mfc/reference/cmfcribbonstatusbarpane-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxribbonstatusbarpane.h

## <a name="cmfcribbonstatusbarpanecmfcribbonstatusbarpane"></a><a name="cmfcribbonstatusbarpane"></a>CMFCRibbonStatusBarPane::CMFCRibbonStatusBarPane

Costruire un oggetto riquadro nella barra di stato.

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

*nCmdID (informazioni in stato in questo base comando*<br/>
[in] Specifica l'ID di comando del riquadro.

*lpszText*<br/>
[in] Specifica la stringa di testo da visualizzare nel riquadro.

*bIsStatico*<br/>
[in] Se TRUE, il riquadro di stato non può essere evidenziato o selezionato facendo clic su di esso.

*hIcon*<br/>
[in] Specifica un handle per un'icona da visualizzare nel riquadro.

*lpszAlmostLargeText (testo di un'immagine spwindowsammalma)*<br/>
[in] Specifica la stringa di testo più lunga che può essere visualizzata dal riquadro.

*hBmpAnimationList (elenco di animazione)*<br/>
[in] Specifica un handle per un elenco di immagini utilizzato per l'animazione.

*cxAnimazione*<br/>
[in] Specifica la larghezza, in pixel, dell'icona nell'elenco immagini utilizzato per l'animazione.

*clrTrnsp*<br/>
[in] Specifica il colore trasparente delle immagini nell'elenco immagini utilizzate per l'animazione.

*uiAnimationListResID (informazioni in due)*<br/>
[in] Specifica un ID risorsa di un elenco immagini utilizzato per l'animazione.

## <a name="cmfcribbonstatusbarpanegetalmostlargetext"></a><a name="getalmostlargetext"></a>CMFCRibbonStatusBarPane::GetAlmostLargeText

Ottiene la stringa di testo più lunga che il riquadro della barra di stato può visualizzare.

```
LPCTSTR GetAlmostLargeText() const;
```

### <a name="return-value"></a>Valore restituito

Stringa di testo più lunga che può essere visualizzata nel riquadro della barra di stato.

## <a name="cmfcribbonstatusbarpanegettextalign"></a><a name="gettextalign"></a>CMFCRibbonStatusBarPane::GetTextAlign

Ottiene l'impostazione corrente dell'allineamento del testo dell'etichetta del riquadro della barra di stato.

```
int GetTextAlign() const;
```

### <a name="return-value"></a>Valore restituito

L'allineamento del testo corrente che può essere uno dei seguenti:

- TA_LEFT

- TA_CENTER

- TA_RIGHT.

## <a name="cmfcribbonstatusbarpaneisanimation"></a><a name="isanimation"></a>CMFCRibbonStatusBarPane::IsAnimation

Determina se l'animazione è in corso.

```
BOOL IsAnimation() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe l'animazione è in corso; FALSE in caso contrario.

## <a name="cmfcribbonstatusbarpaneisextended"></a><a name="isextended"></a>CMFCRibbonStatusBarPane::IsExtended

Determinare se il riquadro si trova nell'area estesa della barra di stato della barra multifunzione.

```
BOOL IsExtended() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe il riquadro è nell'area estesa barra di stato. In caso contrario, FALSE.

## <a name="cmfcribbonstatusbarpaneondrawborder"></a><a name="ondrawborder"></a>CMFCRibbonStatusBarPane::OnDrawBorder

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

```
virtual void OnDrawBorder(CDC*);
```

### <a name="parameters"></a>Parametri

[in] *&#42;CDC*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonstatusbarpaneonfillbackground"></a><a name="onfillbackground"></a>CMFCRibbonStatusBarPane::OnFillBackground

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

```
virtual COLORREF OnFillBackground(CDC* pDC);
```

### <a name="parameters"></a>Parametri

[in] *pDC*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonstatusbarpaneonfinishanimation"></a><a name="onfinishanimation"></a>CMFCRibbonStatusBarPane::OnFinishAnimation

Framework chiama questo metodo quando termina l'animazione assegnata al riquadro.

```
virtual void OnFinishAnimation();
```

### <a name="remarks"></a>Osservazioni

`StopAnimation`metodo chiama `OnFinishAnimation` il metodo , che è possibile utilizzare per pulire i dati al termine dell'animazione.

## <a name="cmfcribbonstatusbarpanesetalmostlargetext"></a><a name="setalmostlargetext"></a>CMFCRibbonStatusBarPane::SetAlmostLargeText

Definire il testo più lungo che può essere visualizzato nel riquadro della barra di stato senza troncamento.

```
void SetAlmostLargeText(LPCTSTR lpszAlmostLargeText);
```

### <a name="parameters"></a>Parametri

*lpszAlmostLargeText (testo di un'immagine spwindowsammalma)*<br/>
[in] Specifica la stringa più lunga che può essere visualizzata nel riquadro della barra di stato senza troncamento.

### <a name="remarks"></a>Osservazioni

La libreria calcola la dimensione del testo che *lpszAlmostLargeText* specifica e ridimensiona il riquadro di conseguenza. Il testo verrà troncato se ancora non rientra nel riquadro.

## <a name="cmfcribbonstatusbarpanesetanimationlist"></a><a name="setanimationlist"></a>CMFCRibbonStatusBarPane::SetAnimationList

Associa al riquadro della barra di stato un elenco immagini che può essere utilizzato per l'animazione.

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

*hBmpAnimationList (elenco di animazione)*<br/>
[in] Specifica un handle per un elenco immagini.

*cxAnimazione*<br/>
[in] Specifica la larghezza, in pixel, della cornice nell'elenco immagini.

*clrTransp*<br/>
[in] Specifica il colore trasparente dell'elenco immagini.

*uiAnimationListResID (informazioni in due)*<br/>
[in] Specifica l'ID risorsa dell'elenco immagini.

### <a name="return-value"></a>Valore restituito

TRUESe l'elenco di immagini è collegato correttamente al riquadro della barra di stato. FALSE in caso contrario.

## <a name="cmfcribbonstatusbarpanesettextalign"></a><a name="settextalign"></a>CMFCRibbonStatusBarPane::SetTextAlign

Imposta l'allineamento del testo dell'etichetta del riquadro della barra di stato.

```
void SetTextAlign(int nAlign);
```

### <a name="parameters"></a>Parametri

*nAllineamento*<br/>
[in] Specifica l'allineamento del testo.

### <a name="remarks"></a>Osservazioni

*nAlign* può avere uno dei seguenti valori:

- TA_LEFT: allineamento a sinistra

- TA_CENTER: allineamento al centro

- TA_RIGHT: allineamento a destra

## <a name="cmfcribbonstatusbarpanestartanimation"></a><a name="startanimation"></a>CMFCRibbonStatusBarPane::StartAnimation

Avvia l'animazione assegnata al riquadro.

```
void StartAnimation(
    UINT nFrameDelay=500,
    UINT nDuration=-1);
```

### <a name="parameters"></a>Parametri

*nFrameDelay (inframeDelay)*<br/>
[in] Specifica la frequenza fotogrammi dell'animazione, in millisecondi.

*nDurata*<br/>
[in] Specifica per quanto tempo riprodurre l'animazione, in millisecondi. Utilizzare -1 per un ciclo infinito.

### <a name="remarks"></a>Osservazioni

È necessario specificare un handle per `StartAnimation` un `SetAnimationList`elenco immagini prima di chiamare utilizzando .

## <a name="cmfcribbonstatusbarpanestopanimation"></a><a name="stopanimation"></a>CMFCRibbonStatusBarPane::StopAnimation

Interrompe l'animazione assegnata al riquadro della barra di stato.

```
void StopAnimation();
```

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)<br/>
[Classe CMFCRibbonStatusBar](../../mfc/reference/cmfcribbonstatusbar-class.md)
