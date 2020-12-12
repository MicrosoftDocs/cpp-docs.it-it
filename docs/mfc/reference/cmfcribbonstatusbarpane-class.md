---
description: 'Altre informazioni su: classe CMFCRibbonStatusBarPane'
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
ms.openlocfilehash: 4ddbee5a6c44411ef2ac34bff3e07b47c3d950a0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97264986"
---
# <a name="cmfcribbonstatusbarpane-class"></a>Classe CMFCRibbonStatusBarPane

La `CMFCRibbonStatusBarPane` classe implementa un elemento della barra multifunzione che è possibile aggiungere a una barra di stato della barra multifunzione.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonStatusBarPane : public CMFCRibbonButton
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCRibbonStatusBarPane:: CMFCRibbonStatusBarPane](#cmfcribbonstatusbarpane)|Costruisce e inizializza un oggetto `CMFCRibbonStatusBarPane`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCRibbonStatusBarPane:: GetAlmostLargeText](#getalmostlargetext)|Restituisce la stringa che definisce la stringa di testo più lungo che può essere visualizzata nel riquadro senza troncamento.|
|[CMFCRibbonStatusBarPane:: GetTextAlign](#gettextalign)|Restituisce l'impostazione corrente dell'allineamento del testo.|
|[CMFCRibbonStatusBarPane:: l'animazione](#isanimation)|Determina se l'animazione è in corso.|
|[CMFCRibbonStatusBarPane:: esteso](#isextended)|Determina se il riquadro si trova nell'area estesa della barra di stato della barra di stato.|
|[CMFCRibbonStatusBarPane:: OnDrawBorder](#ondrawborder)|Esegue l'override di [CMFCRibbonButton:: OnDrawBorder](../../mfc/reference/cmfcribbonbutton-class.md#ondrawborder).|
|[CMFCRibbonStatusBarPane:: OnFillBackground](#onfillbackground)|Esegue l'override di [CMFCRibbonButton:: OnFillBackground](../../mfc/reference/cmfcribbonbutton-class.md#onfillbackground).|
|[CMFCRibbonStatusBarPane:: SetAlmostLargeText](#setalmostlargetext)|Definisce la stringa di testo più lungo che può essere visualizzata nel riquadro senza troncamento.|
|[CMFCRibbonStatusBarPane:: seanimationin](#setanimationlist)|Assegna al riquadro un elenco di immagini che può essere utilizzato per l'animazione.|
|[CMFCRibbonStatusBarPane:: SetTextAlign](#settextalign)|Imposta l'allineamento del testo.|
|[CMFCRibbonStatusBarPane:: StartAnimation](#startanimation)|Avvia l'animazione assegnata al riquadro.|
|[CMFCRibbonStatusBarPane:: StopAnimation](#stopanimation)|Arresta l'animazione assegnata al riquadro. .|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CMFCRibbonStatusBarPane:: OnFinishAnimation](#onfinishanimation)|Chiamata eseguita dal framework quando l'animazione assegnata al riquadro viene arrestata.|

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come usare vari metodi nella classe `CMFCRibbonStatusBarPane`. Nell'esempio viene illustrato come costruire un `CMFCRibbonStatusBarPane` oggetto, impostare l'allineamento del testo dell'etichetta del riquadro della barra di stato, definire il testo più lungo che può essere visualizzato nel riquadro della barra di stato senza troncamento, connettersi al riquadro della barra di stato un elenco di immagini che può essere utilizzato per l'animazione e avviare l'animazione.

[!code-cpp[NVC_MFC_RibbonApp#2](../../mfc/reference/codesnippet/cpp/cmfcribbonstatusbarpane-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)

[CMFCRibbonStatusBarPane](../../mfc/reference/cmfcribbonstatusbarpane-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxribbonstatusbarpane. h

## <a name="cmfcribbonstatusbarpanecmfcribbonstatusbarpane"></a><a name="cmfcribbonstatusbarpane"></a> CMFCRibbonStatusBarPane:: CMFCRibbonStatusBarPane

Costruisce un oggetto riquadro nella barra di stato.

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
in Specifica l'ID del comando del riquadro.

*lpszText*<br/>
in Specifica la stringa di testo da visualizzare nel riquadro.

*bIsStatic*<br/>
in Se TRUE, il riquadro Stato non può essere evidenziato o selezionato facendo clic su di esso.

*hIcon*<br/>
in Specifica un handle per un'icona da visualizzare nel riquadro.

*lpszAlmostLargeText*<br/>
in Specifica la stringa di testo più lungo che può essere visualizzata dal riquadro.

*hBmpAnimationList*<br/>
in Specifica un handle per un elenco di immagini usato per l'animazione.

*cxAnimation*<br/>
in Specifica la larghezza, in pixel, dell'icona nell'elenco immagini utilizzata per l'animazione.

*clrTrnsp*<br/>
in Specifica il colore trasparente delle immagini nell'elenco immagini utilizzate per l'animazione.

*uiAnimationListResID*<br/>
in Specifica un ID di risorsa di un elenco di immagini usato per l'animazione.

## <a name="cmfcribbonstatusbarpanegetalmostlargetext"></a><a name="getalmostlargetext"></a> CMFCRibbonStatusBarPane:: GetAlmostLargeText

Ottiene la stringa di testo più lungo che è possibile visualizzare nel riquadro della barra di stato.

```
LPCTSTR GetAlmostLargeText() const;
```

### <a name="return-value"></a>Valore restituito

Stringa di testo più lungo che è possibile visualizzare nel riquadro della barra di stato.

## <a name="cmfcribbonstatusbarpanegettextalign"></a><a name="gettextalign"></a> CMFCRibbonStatusBarPane:: GetTextAlign

Ottiene l'impostazione corrente dell'allineamento del testo dell'etichetta del riquadro della barra di stato.

```
int GetTextAlign() const;
```

### <a name="return-value"></a>Valore restituito

Allineamento del testo corrente che può essere uno dei seguenti:

- TA_LEFT

- TA_CENTER

- TA_RIGHT.

## <a name="cmfcribbonstatusbarpaneisanimation"></a><a name="isanimation"></a> CMFCRibbonStatusBarPane:: l'animazione

Determina se l'animazione è in corso.

```
BOOL IsAnimation() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se l'animazione è in corso; In caso contrario, FALSE.

## <a name="cmfcribbonstatusbarpaneisextended"></a><a name="isextended"></a> CMFCRibbonStatusBarPane:: esteso

Determinare se il riquadro si trova nell'area estesa della barra di stato della barra multifunzione.

```
BOOL IsExtended() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro si trova sull'area estesa della barra di stato. In caso contrario, FALSE.

## <a name="cmfcribbonstatusbarpaneondrawborder"></a><a name="ondrawborder"></a> CMFCRibbonStatusBarPane:: OnDrawBorder

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

```
virtual void OnDrawBorder(CDC*);
```

### <a name="parameters"></a>Parametri

in *&#42;CDC*<br/>

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonstatusbarpaneonfillbackground"></a><a name="onfillbackground"></a> CMFCRibbonStatusBarPane:: OnFillBackground

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

```
virtual COLORREF OnFillBackground(CDC* pDC);
```

### <a name="parameters"></a>Parametri

in *PDC*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonstatusbarpaneonfinishanimation"></a><a name="onfinishanimation"></a> CMFCRibbonStatusBarPane:: OnFinishAnimation

Il Framework chiama questo metodo quando termina l'animazione assegnata al riquadro.

```
virtual void OnFinishAnimation();
```

### <a name="remarks"></a>Commenti

`StopAnimation` il metodo chiama il `OnFinishAnimation` metodo, che può essere usato per pulire i dati al termine dell'animazione.

## <a name="cmfcribbonstatusbarpanesetalmostlargetext"></a><a name="setalmostlargetext"></a> CMFCRibbonStatusBarPane:: SetAlmostLargeText

Definire il testo più lungo che può essere visualizzato nel riquadro della barra di stato senza troncamento.

```cpp
void SetAlmostLargeText(LPCTSTR lpszAlmostLargeText);
```

### <a name="parameters"></a>Parametri

*lpszAlmostLargeText*<br/>
in Specifica la stringa più estesa che può essere visualizzata nel riquadro della barra di stato senza troncamento.

### <a name="remarks"></a>Commenti

La libreria calcola le dimensioni del testo che *lpszAlmostLargeText* specifica e ridimensiona il riquadro di conseguenza. Il testo verrà troncato se non è ancora adatta al riquadro.

## <a name="cmfcribbonstatusbarpanesetanimationlist"></a><a name="setanimationlist"></a> CMFCRibbonStatusBarPane:: seanimationin

Connette al riquadro della barra di stato un elenco di immagini che può essere utilizzato per l'animazione.

```cpp
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
in Specifica un handle per un elenco di immagini.

*cxAnimation*<br/>
in Specifica la larghezza, in pixel, del frame nell'elenco immagini.

*clrTransp*<br/>
in Specifica il colore trasparente dell'elenco di immagini.

*uiAnimationListResID*<br/>
in Specifica l'ID risorsa dell'elenco di immagini.

### <a name="return-value"></a>Valore restituito

TRUE se l'elenco di immagini è collegato correttamente al riquadro della barra di stato; In caso contrario, FALSE.

## <a name="cmfcribbonstatusbarpanesettextalign"></a><a name="settextalign"></a> CMFCRibbonStatusBarPane:: SetTextAlign

Imposta l'allineamento del testo dell'etichetta del riquadro della barra di stato.

```cpp
void SetTextAlign(int nAlign);
```

### <a name="parameters"></a>Parametri

*nAlign*<br/>
in Specifica l'allineamento del testo.

### <a name="remarks"></a>Commenti

*nAlign* può avere uno dei valori seguenti:

- TA_LEFT: allineamento a sinistra

- TA_CENTER: allineamento al centro

- TA_RIGHT: allineamento a destra

## <a name="cmfcribbonstatusbarpanestartanimation"></a><a name="startanimation"></a> CMFCRibbonStatusBarPane:: StartAnimation

Avvia l'animazione assegnata al riquadro.

```cpp
void StartAnimation(
    UINT nFrameDelay=500,
    UINT nDuration=-1);
```

### <a name="parameters"></a>Parametri

*nFrameDelay*<br/>
in Specifica la frequenza dei fotogrammi di animazione, in millisecondi.

*nDuration*<br/>
in Specifica il tempo di riproduzione dell'animazione, in millisecondi. Usare-1 per un ciclo infinito.

### <a name="remarks"></a>Commenti

È necessario specificare un handle per un elenco di immagini prima `StartAnimation` di chiamare usando `SetAnimationList` .

## <a name="cmfcribbonstatusbarpanestopanimation"></a><a name="stopanimation"></a> CMFCRibbonStatusBarPane:: StopAnimation

Arresta l'animazione assegnata al riquadro della barra di stato.

```cpp
void StopAnimation();
```

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)<br/>
[Classe CMFCRibbonStatusBar](../../mfc/reference/cmfcribbonstatusbar-class.md)
