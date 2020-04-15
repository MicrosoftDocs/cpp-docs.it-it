---
title: Classe CMFCRibbonEdit
ms.date: 11/04/2016
f1_keywords:
- CMFCRibbonEdit
- AFXRIBBONEDIT/CMFCRibbonEdit
- AFXRIBBONEDIT/CMFCRibbonEdit::CMFCRibbonEdit
- AFXRIBBONEDIT/CMFCRibbonEdit::CanBeStretched
- AFXRIBBONEDIT/CMFCRibbonEdit::CopyFrom
- AFXRIBBONEDIT/CMFCRibbonEdit::CreateEdit
- AFXRIBBONEDIT/CMFCRibbonEdit::DestroyCtrl
- AFXRIBBONEDIT/CMFCRibbonEdit::DropDownList
- AFXRIBBONEDIT/CMFCRibbonEdit::EnableSpinButtons
- AFXRIBBONEDIT/CMFCRibbonEdit::GetCompactSize
- AFXRIBBONEDIT/CMFCRibbonEdit::GetEditText
- AFXRIBBONEDIT/CMFCRibbonEdit::GetIntermediateSize
- AFXRIBBONEDIT/CMFCRibbonEdit::GetTextAlign
- AFXRIBBONEDIT/CMFCRibbonEdit::GetWidth
- AFXRIBBONEDIT/CMFCRibbonEdit::HasCompactMode
- AFXRIBBONEDIT/CMFCRibbonEdit::HasFocus
- AFXRIBBONEDIT/CMFCRibbonEdit::HasLargeMode
- AFXRIBBONEDIT/CMFCRibbonEdit::HasSpinButtons
- AFXRIBBONEDIT/CMFCRibbonEdit::IsHighlighted
- AFXRIBBONEDIT/CMFCRibbonEdit::OnAfterChangeRect
- AFXRIBBONEDIT/CMFCRibbonEdit::OnDraw
- AFXRIBBONEDIT/CMFCRibbonEdit::OnDrawLabelAndImage
- AFXRIBBONEDIT/CMFCRibbonEdit::OnDrawOnList
- AFXRIBBONEDIT/CMFCRibbonEdit::OnEnable
- AFXRIBBONEDIT/CMFCRibbonEdit::OnHighlight
- AFXRIBBONEDIT/CMFCRibbonEdit::OnKey
- AFXRIBBONEDIT/CMFCRibbonEdit::OnLButtonDown
- AFXRIBBONEDIT/CMFCRibbonEdit::OnLButtonUp
- AFXRIBBONEDIT/CMFCRibbonEdit::OnRTLChanged
- AFXRIBBONEDIT/CMFCRibbonEdit::OnShow
- AFXRIBBONEDIT/CMFCRibbonEdit::Redraw
- AFXRIBBONEDIT/CMFCRibbonEdit::SetACCData
- AFXRIBBONEDIT/CMFCRibbonEdit::SetEditText
- AFXRIBBONEDIT/CMFCRibbonEdit::SetTextAlign
- AFXRIBBONEDIT/CMFCRibbonEdit::SetWidth
helpviewer_keywords:
- CMFCRibbonEdit [MFC], CMFCRibbonEdit
- CMFCRibbonEdit [MFC], CanBeStretched
- CMFCRibbonEdit [MFC], CMFCRibbonEdit
- CMFCRibbonEdit [MFC], CopyFrom
- CMFCRibbonEdit [MFC], CreateEdit
- CMFCRibbonEdit [MFC], DestroyCtrl
- CMFCRibbonEdit [MFC], DropDownList
- CMFCRibbonEdit [MFC], EnableSpinButtons
- CMFCRibbonEdit [MFC], GetCompactSize
- CMFCRibbonEdit [MFC], GetEditText
- CMFCRibbonEdit [MFC], GetIntermediateSize
- CMFCRibbonEdit [MFC], GetTextAlign
- CMFCRibbonEdit [MFC], GetWidth
- CMFCRibbonEdit [MFC], HasCompactMode
- CMFCRibbonEdit [MFC], HasFocus
- CMFCRibbonEdit [MFC], HasLargeMode
- CMFCRibbonEdit [MFC], HasSpinButtons
- CMFCRibbonEdit [MFC], IsHighlighted
- CMFCRibbonEdit [MFC], OnAfterChangeRect
- CMFCRibbonEdit [MFC], OnDraw
- CMFCRibbonEdit [MFC], OnDrawLabelAndImage
- CMFCRibbonEdit [MFC], OnDrawOnList
- CMFCRibbonEdit [MFC], OnEnable
- CMFCRibbonEdit [MFC], OnHighlight
- CMFCRibbonEdit [MFC], OnKey
- CMFCRibbonEdit [MFC], OnLButtonDown
- CMFCRibbonEdit [MFC], OnLButtonUp
- CMFCRibbonEdit [MFC], OnRTLChanged
- CMFCRibbonEdit [MFC], OnShow
- CMFCRibbonEdit [MFC], Redraw
- CMFCRibbonEdit [MFC], SetACCData
- CMFCRibbonEdit [MFC], SetEditText
- CMFCRibbonEdit [MFC], SetTextAlign
- CMFCRibbonEdit [MFC], SetWidth
ms.assetid: 9b85f1f2-446b-454e-9af9-104fdad8a897
ms.openlocfilehash: ab621a05f9b658eee9babb14e257680fa95e0f96
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375183"
---
# <a name="cmfcribbonedit-class"></a>Classe CMFCRibbonEdit

Implementa un controllo di modifica che si trova su una barra multifunzione.

## <a name="syntax"></a>Sintassi

```cpp
class CMFCRibbonEdit : public CMFCRibbonButton
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonModifica::CMFCBarraModifica](#cmfcribbonedit)|Costruisce un oggetto `CMFCRibbonEdit`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonModifica::CanBeStretched](#canbestretched)|Indica se l'altezza del `CMFCRibbonEdit` controllo può aumentare verticalmente fino all'altezza di una riga della barra multifunzione.|
|[CMFCRibbonModifica::CMFCBarraModifica](#cmfcribbonedit)|Costruisce un oggetto `CMFCRibbonEdit`.|
|[CMFCRibbonModifica::CopiaDa](#copyfrom)|Copia lo stato dell'oggetto `CMFCRibbonEdit` specificato `CMFCRibbonEdit` nell'oggetto corrente.|
|[CMFCRibbonModifica::CreateModifica](#createedit)|Crea una nuova casella `CMFCRibbonEdit` di testo per l'oggetto.|
|[CMFCRibbonModifica::DestroyCtrl](#destroyctrl)|Distrugge l'oggetto. `CMFCRibbonEdit`|
|[CMFCRibbonModifica::DropDownList](#dropdownlist)|Scende da una casella di riepilogo.|
|[CMFCRibbonEdit::EnableSpinButtons](#enablespinbuttons)|Abilita e imposta l'intervallo del pulsante di selezione per la casella di testo.|
|[CMFCRibbonModifica::GetCompactSize](#getcompactsize)|Recupera le dimensioni compatte dell'oggetto. `CFMCRibbonEdit`|
|[CMFCRibbonModifica::GetEditText](#getedittext)|Recupera il testo nella casella di testo.|
|[CMFCRibbonModifica::GetIntermediateSize](#getintermediatesize)|Recupera la dimensione intermedia dell'oggetto. `CMFCRibbonEdit`|
|[CMFCRibbonModifica::GetTextAlign](#gettextalign)|Recupera l'allineamento del testo nella casella di testo.|
|[CMFCRibbonModifica::GetWidth](#getwidth)|Recupera la larghezza, in pixel, del `CMFCRibbonEdit` controllo.|
|[CMFCRibbonModifica::HasCompactMode](#hascompactmode)|Indica se le dimensioni `CMFCRibbonEdit` di visualizzazione per il controllo possono essere compatte.|
|[CMFCRibbonModifica::HasFocus](#hasfocus)|Indica se `CMFCRIbbonEdit` il controllo ha lo stato attivo.|
|[Controllo CMFCRibbonModifica::HasLargeMode](#haslargemode)|Indica se le dimensioni `CMFCRibbonEdit` di visualizzazione per il controllo possono essere di grandi dimensioni.|
|[CMFCRibbonModifica::HasSpinButtons](#hasspinbuttons)|Indica se la casella di testo dispone di un pulsante di selezione.|
|[Controllo CMFCRibbonModifica::IsHighlightedCMFCRibbonEdit::IsHighlighted](#ishighlighted)|Indica se `CMFCRibbonEdit` il controllo è evidenziato.|
|[Controllo CMFCRibbonEdit::OnAfterChangeRect](#onafterchangerect)|Chiamato dal framework quando le dimensioni del `CMFCRibbonEdit` rettangolo di visualizzazione per il controllo vengono modificate.|
|[CMFCRibbonModifica::OnDraw](#ondraw)|Chiamato dal framework per `CMFCRibbonEdit` disegnare il controllo.|
|[CMFCRibbonModifica::OnDrawLabelAndImage](#ondrawlabelandimage)|Chiamato dal framework per disegnare l'etichetta e l'immagine per il `CMFCRibbonEdit` controllo.|
|[CMFCRibbonEdit::OnDrawOnList](#ondrawonlist)|Chiamato dal framework per `CMFCRibbonEdit` disegnare il controllo in una casella di riepilogo dei comandi.|
|[CMFCRibbonModifica::OnEnable](#onenable)|Chiamato dal framework per abilitare o disabilitare il `CMFCRibbonEdit` controllo.|
|[Controllo CMFCRibbonModifica::OnHighlightCMFCRibbonEdit::OnHighlight](#onhighlight)|Chiamato dal framework quando il puntatore entra o `CMFCRibbonEdit` esce dai limiti del controllo.|
|[CMFCRibbonModifica::OnKey](#onkey)|Chiamato dal framework quando l'utente preme `CMFCRibbonEdit` un suggerimento tasto di scelta e il controllo ha lo stato attivo.|
|[Controllo CMFCRibbonEdit::OnLButtonDown](#onlbuttondown)|Chiamato dal framework per `CMFCRibbonEdit` aggiornare il controllo quando l'utente preme il pulsante sinistro del mouse sul controllo.|
|[Controllo CMFCRibbonModifica::OnLButtonUp](#onlbuttonup)|Chiamato dal framework quando l'utente rilascia il pulsante sinistro del mouse.|
|[CMFCRibbonEdit::OnRTLChanged](#onrtlchanged)|Chiamato dal framework per `CMFCRibbonEdit` aggiornare il controllo quando il layout cambia direzione.|
|[Controllo CMFCRibbonModifica::OnShow](#onshow)|Chiamato dal framework per visualizzare `CMFCRibbonEdit` o nascondere il controllo.|
|[CMFCRibbonModifica::Ridisegno](#redraw)|Aggiorna la visualizzazione `CMFCRibbonEdit` del controllo.|
|[CMFCRibbonModifica::SetACCData](#setaccdata)|Imposta i dati `CMFCRibbonEdit` di accessibilità per l'oggetto.|
|[CMFCRibbonModifica::SetEditText](#setedittext)|Imposta il testo nella casella di testo.|
|[CMFCRibbonModifica::SetTextAlign](#settextalign)|Imposta l'allineamento del testo della casella di testo.|
|[CMFCRibbonModifica::SetWidth](#setwidth)|Imposta la larghezza della casella `CMFCRibbonEdit` di testo per il controllo.|

## <a name="remarks"></a>Osservazioni

## <a name="example"></a>Esempio

Nell'esempio seguente viene `CMFCRibbonEdit` illustrato come costruire un oggetto, visualizzare i pulsanti di selezione accanto al controllo di modifica e impostare il testo del controllo di modifica. Questo frammento di codice fa parte dell'esempio Demo di [MS Office 2007.](../../overview/visual-cpp-samples.md)

[!code-cpp[NVC_MFC_MSOffice2007Demo#7](../../mfc/reference/codesnippet/cpp/cmfcribbonedit-class_1.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** afxRibbonEdit.h

## <a name="cmfcribboneditcanbestretched"></a><a name="canbestretched"></a>CMFCRibbonModifica::CanBeStretched

Indica se l'altezza del [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo può aumentare verticalmente fino all'altezza di una riga della barra multifunzione.

```cpp
virtual BOOL CanBeStretched();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribboneditcmfcribbonedit"></a><a name="cmfcribbonedit"></a>CMFCRibbonModifica::CMFCBarraModifica

Costruisce un [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) oggetto.

```cpp
CMFCRibbonEdit(
    UINT nID,
    int nWidth,
    LPCTSTR lpszLabel = NULL,
    int nImage = -1);

CMFCRibbonEdit();
```

### <a name="parameters"></a>Parametri

*nID*<br/>
[in] ID di `CMFCRibbonEdit` comando per il controllo.

*nLarghezza*<br/>
[in] Larghezza, in pixel, della casella `CMFCRibbonEdit` di testo per il controllo.

*lpszLabel (etichetta di un'etichetta di base)*<br/>
[in] Etichetta per `CMFCRibbonEdit` il controllo.

*nImmagine*<br/>
[in] Indice dell'immagine piccola da `CMFCRibbonEdit` utilizzare per il controllo. La raccolta di immagini di piccole dimensioni viene gestita dalla categoria della barra multifunzione padre.

### <a name="remarks"></a>Osservazioni

Il `CMFCRibbonEdit` controllo non utilizza un'immagine di grandi dimensioni.

## <a name="cmfcribboneditcopyfrom"></a><a name="copyfrom"></a>CMFCRibbonModifica::CopiaDa

Copia lo stato dell'oggetto specificato [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) oggetto per il corrente [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) oggetto.

```cpp
virtual void CopyFrom(const CMFCRibbonBaseElement& src);
```

### <a name="parameters"></a>Parametri

*src*<br/>
[in] Oggetto `CMFCRibbonEdit` di origine.

### <a name="remarks"></a>Osservazioni

Il parametro *src* `CMFCRibbonEdit`deve essere di tipo .

## <a name="cmfcribboneditcreateedit"></a><a name="createedit"></a>CMFCRibbonModifica::CreateModifica

Crea una nuova casella di testo per il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) oggetto.

```cpp
virtual CMFCRibbonRichEditCtrl* CreateEdit(
    CWnd* pWndParent,
    DWORD dwEditStyle);
```

### <a name="parameters"></a>Parametri

*pWndParent (padre di pWndParent)*<br/>
[in] Puntatore alla finestra padre `CMFCRibbonEdit` dell'oggetto.

*DwEditStyle (in stile dwEditStyle)*<br/>
[in] Specifica lo stile della casella di testo. È possibile combinare gli stili di finestra elencati nella sezione Osservazioni con gli stili di controllo di [modifica](/windows/win32/Controls/edit-control-styles) descritti in Windows SDK.

### <a name="return-value"></a>Valore restituito

Puntatore alla nuova casella di testo se il metodo ha esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata per creare una casella di testo personalizzata.

È possibile applicare i seguenti stili di [finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) a una casella di testo:

- **WS_CHILD**

- **WS_VISIBLE**

- **WS_DISABLED**

- **WS_GROUP**

- **WS_TABSTOP**

## <a name="cmfcribboneditdestroyctrl"></a><a name="destroyctrl"></a>CMFCRibbonModifica::DestroyCtrl

Elimina il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) oggetto.

```cpp
virtual void DestroyCtrl();
```

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribboneditdropdownlist"></a><a name="dropdownlist"></a>CMFCRibbonModifica::DropDownList

Scende da una casella di riepilogo.

```cpp
virtual void DropDownList();
```

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questo metodo non esegue alcuna operazione. Eseguire l'override di questo metodo per visualizzare l'elenco a discesa di una casella di riepilogo.

## <a name="cmfcribboneditenablespinbuttons"></a><a name="enablespinbuttons"></a>CMFCRibbonEdit::EnableSpinButtons

Abilita e imposta l'intervallo del pulsante di selezione per la casella di testo.

```cpp
void EnableSpinButtons(
    int nMin,
    int nMax);
```

### <a name="parameters"></a>Parametri

*nMin*<br/>
[in] Valore minimo del pulsante di selezione.

*Nmax*<br/>
[in] Valore massimo del pulsante di selezione.

### <a name="remarks"></a>Osservazioni

I pulsanti di selezione visualizzano una freccia su e giù e consentono agli utenti di spostarsi tra un insieme fisso di valori.

## <a name="cmfcribboneditgetcompactsize"></a><a name="getcompactsize"></a>CMFCRibbonModifica::GetCompactSize

Recupera le dimensioni compatte del [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) oggetto.

```cpp
virtual CSize GetCompactSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un `CMFCRibbonEdit` contesto di dispositivo per l'oggetto.

### <a name="return-value"></a>Valore restituito

Dimensioni compatte `CMFCRibbonEdit` dell'oggetto.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribboneditgetedittext"></a><a name="getedittext"></a>CMFCRibbonModifica::GetEditText

Recupera il testo nella casella di testo.

```cpp
CString GetEditText() const;
```

### <a name="return-value"></a>Valore restituito

Testo nella casella di testo.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribboneditgetintermediatesize"></a><a name="getintermediatesize"></a>CMFCRibbonModifica::GetIntermediateSize

Recupera la dimensione intermedia del [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) oggetto.

```cpp
virtual CSize GetIntermediateSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un `CMFCRibbonEdit` contesto di dispositivo per l'oggetto.

### <a name="return-value"></a>Valore restituito

Dimensione intermedia `CMFCRibbonEdit` dell'oggetto.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribboneditgettextalign"></a><a name="gettextalign"></a>CMFCRibbonModifica::GetTextAlign

Recupera l'allineamento del testo nella casella di testo.

```cpp
int GetTextAlign() const;
```

### <a name="return-value"></a>Valore restituito

Valore enumerato di allineamento del testo. Vedere la sezione Osservazioni per i valori possibili.

### <a name="remarks"></a>Osservazioni

Il valore restituito è uno dei seguenti stili di controllo di modifica:

- **ES_LEFT** per l'allineamento a sinistra

- **ES_CENTER** per l'allineamento del centro

- **ES_RIGHT** per l'allineamento a destra

Per ulteriori informazioni su questi stili, vedere [Modifica degli stili](/windows/win32/Controls/edit-control-styles)di controllo .

## <a name="cmfcribboneditgetwidth"></a><a name="getwidth"></a>CMFCRibbonModifica::GetWidth

Recupera la larghezza, in pixel, del [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo.

```cpp
int GetWidth(BOOL bInFloatyMode = FALSE) const;
```

### <a name="parameters"></a>Parametri

*bModalitàInFloaty*<br/>
[in] TRUESe `CMFCRibbonEdit` il controllo è in modalità mobile. in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

Larghezza, in pixel, `CMFCRibbonEdit` del controllo.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonedithascompactmode"></a><a name="hascompactmode"></a>CMFCRibbonModifica::HasCompactMode

Indica se le dimensioni di visualizzazione per il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo può essere compatto.

```cpp
virtual BOOL HasCompactMode() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre TRUE.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questo metodo restituisce sempre TRUE. Eseguire l'override di questo metodo per indicare se le dimensioni di visualizzazione possono essere compatte.

## <a name="cmfcribbonedithasfocus"></a><a name="hasfocus"></a>CMFCRibbonModifica::HasFocus

Indica se il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo ha lo stato attivo.

```cpp
virtual BOOL HasFocus() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe `CMFCRibbonEdit` il controllo ha lo stato attivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonedithaslargemode"></a><a name="haslargemode"></a>Controllo CMFCRibbonModifica::HasLargeMode

Indica se le dimensioni di visualizzazione per il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo può essere di grandi dimensioni.

```cpp
virtual BOOL HasLargeMode() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre FALSE.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questo metodo restituisce sempre FALSE. Eseguire l'override di questo metodo per indicare se le dimensioni di visualizzazione possono essere di grandi dimensioni.

## <a name="cmfcribbonedithasspinbuttons"></a><a name="hasspinbuttons"></a>CMFCRibbonModifica::HasSpinButtons

Indica se la casella di testo dispone di un pulsante di selezione.

```cpp
virtual BOOL HasSpinButtons() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe la casella di testo dispone di un pulsante di selezione. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribboneditishighlighted"></a><a name="ishighlighted"></a>Controllo CMFCRibbonModifica::IsHighlightedCMFCRibbonEdit::IsHighlighted

Indica se il [controllo CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) è evidenziato.

```cpp
virtual BOOL IsHighlighted() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe `CMFCRibbonEdit` il controllo è evidenziato; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribboneditonafterchangerect"></a><a name="onafterchangerect"></a>Controllo CMFCRibbonEdit::OnAfterChangeRect

Chiamato dal framework quando le dimensioni del rettangolo di visualizzazione per il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) modificano il controllo.

```cpp
virtual void OnAfterChangeRect(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un `CMFCRibbonEdit` contesto di dispositivo per il controllo.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribboneditondraw"></a><a name="ondraw"></a>CMFCRibbonModifica::OnDraw

Chiamato dal framework per disegnare il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo.

```cpp
virtual void OnDraw(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un `CMFCRibbonEdit` contesto di dispositivo per il controllo.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribboneditondrawlabelandimage"></a><a name="ondrawlabelandimage"></a>CMFCRibbonModifica::OnDrawLabelAndImage

Chiamato dal framework per disegnare l'etichetta e l'immagine per il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo.

```cpp
virtual void OnDrawLabelAndImage(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un `CMFCRibbonEdit` contesto di dispositivo per il controllo.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribboneditondrawonlist"></a><a name="ondrawonlist"></a>CMFCRibbonEdit::OnDrawOnList

Chiamato dal framework per disegnare il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo in una casella di riepilogo di comandi.

```cpp
virtual void OnDrawOnList(
    CDC* pDC,
    CString strText,
    int nTextOffset,
    CRect rect,
    BOOL bIsSelected,
    BOOL bHighlighted);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un `CMFCRibbonEdit` contesto di dispositivo per il controllo.

*strText (testo str)*<br/>
[in] Il testo [ ](../../mfc/reference/cmfcribbonedit-class.md "cmfcribbonedit (classe)")visualizzato .

*nTextOffset (Offset testo)*<br/>
[in] Distanza, in pixel, dal lato sinistro della casella di riepilogo al testo visualizzato.

*Rect*<br/>
[in] Rettangolo di `CMFCRibbonEdit` visualizzazione per il controllo.

*bIsSelezionato*<br/>
[in] Questo parametro non viene utilizzato.

*bEvidenziato*<br/>
[in] Questo parametro non viene utilizzato.

### <a name="remarks"></a>Osservazioni

Nella casella di riepilogo Comandi vengono visualizzati i controlli della barra multifunzione per consentire agli utenti di personalizzare la barra degli strumenti di accesso rapido.

## <a name="cmfcribboneditonenable"></a><a name="onenable"></a>CMFCRibbonModifica::OnEnable

Chiamato dal framework per abilitare o disabilitare il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo.

```cpp
virtual void OnEnable(BOOL bEnable);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] TRUE per abilitare il controllo; FALSE per disabilitare il controllo.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribboneditonhighlight"></a><a name="onhighlight"></a>Controllo CMFCRibbonModifica::OnHighlightCMFCRibbonEdit::OnHighlight

Chiamato dal framework quando il puntatore entra o esce dai limiti del [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo.

```cpp
virtual void OnHighlight(BOOL bHighlight);
```

### <a name="parameters"></a>Parametri

*bEvidenziare*<br/>
[in] TRUESe il puntatore è nei `CMFCRibbonEdit` limiti del controllo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribboneditonkey"></a><a name="onkey"></a>CMFCRibbonModifica::OnKey

Chiamato dal framework quando l'utente preme un suggerimento tasto di scelta e il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo ha lo stato attivo.

```cpp
virtual BOOL OnKey(BOOL bIsMenuKey);
```

### <a name="parameters"></a>Parametri

*bIsMenuKey (chiave di comando)*<br/>
[in] TRUESe il suggerimento tasto visualizza un menu a comparsa. in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

TRUESe l'evento è stato gestito. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribboneditonlbuttondown"></a><a name="onlbuttondown"></a>Controllo CMFCRibbonEdit::OnLButtonDown

Chiamato dal framework per aggiornare il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo quando l'utente preme il pulsante sinistro del mouse sul controllo.

```cpp
virtual void OnLButtonDown(CPoint point);
```

### <a name="parameters"></a>Parametri

*Punto*<br/>
[in] Questo parametro non viene utilizzato.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribboneditonlbuttonup"></a><a name="onlbuttonup"></a>Controllo CMFCRibbonModifica::OnLButtonUp

Chiamato dal framework quando l'utente rilascia il pulsante sinistro del mouse.

```cpp
virtual void OnLButtonUp(CPoint point);
```

### <a name="parameters"></a>Parametri

*Punto*<br/>
[in] Questo parametro non viene utilizzato.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribboneditonrtlchanged"></a><a name="onrtlchanged"></a>CMFCRibbonEdit::OnRTLChanged

Chiamato dal framework per aggiornare il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo quando il layout cambia direzione.

```cpp
virtual void OnRTLChanged(BOOL bIsRTL);
```

### <a name="parameters"></a>Parametri

*bIsRTL*<br/>
[in] TRUESe il layout è da destra a sinistra. FALSE se il layout è da sinistra a destra.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribboneditonshow"></a><a name="onshow"></a>Controllo CMFCRibbonModifica::OnShow

Chiamato dal framework per visualizzare o nascondere il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo.

```cpp
virtual void OnShow(BOOL bShow);
```

### <a name="parameters"></a>Parametri

*bShow*<br/>
[in] TRUE per visualizzare il controllo; FALSE per nascondere il controllo.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribboneditredraw"></a><a name="redraw"></a>CMFCRibbonModifica::Ridisegno

Aggiorna la visualizzazione del [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo.

```cpp
virtual void Redraw();
```

### <a name="remarks"></a>Osservazioni

Questo metodo ridisegna il `CMFCRibbonEdit` rettangolo di visualizzazione per l'oggetto chiamando indirettamente [CWnd::RedrawWindow](/windows/win32/api/winuser/nf-winuser-redrawwindow) con i flag RDW_INVALIDATE, RDW_ERASE e RDW_UPDATENOW impostati.

## <a name="cmfcribboneditsetaccdata"></a><a name="setaccdata"></a>CMFCRibbonModifica::SetACCData

Imposta i dati di accessibilità per il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) oggetto.

```cpp
virtual BOOL SetACCData(
    CWnd* pParent,
    CAccessibilityData& data);
```

### <a name="parameters"></a>Parametri

*pPadre*<br/>
Puntatore alla finestra `CMFCRibbonEdit` padre per l'oggetto.

*data*<br/>
Dati di accessibilità `CMFCRibbonEdit` per l'oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce sempre TRUE.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribboneditsetedittext"></a><a name="setedittext"></a>CMFCRibbonModifica::SetEditText

Imposta il testo nella casella di testo.

```cpp
void SetEditText(CString strText);
```

### <a name="parameters"></a>Parametri

*strText (testo str)*<br/>
[in] Testo per la casella di testo.

## <a name="cmfcribboneditsettextalign"></a><a name="settextalign"></a>CMFCRibbonModifica::SetTextAlign

Imposta l'allineamento del testo della casella di testo.

```cpp
void SetTextAlign(int nAlign);
```

### <a name="parameters"></a>Parametri

*nAllineamento*<br/>
[in] Valore enumerato di allineamento del testo. Vedere la sezione Osservazioni per i valori possibili.

### <a name="remarks"></a>Osservazioni

Il parametro *nAlign* è uno dei seguenti stili di controllo di modifica:

- ES_LEFT per l'allineamento a sinistra

- ES_CENTER per l'allineamento del centro

- ES_RIGHT per l'allineamento a destra

Per ulteriori informazioni su questi stili, vedere [Modifica degli stili](/windows/win32/Controls/edit-control-styles)di controllo .

## <a name="cmfcribboneditsetwidth"></a><a name="setwidth"></a>CMFCRibbonModifica::SetWidth

Imposta la larghezza della casella di testo per il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo.

```cpp
void SetWidth(
    int nWidth,
    BOOL bInFloatyMode = FALSE);
```

### <a name="parameters"></a>Parametri

*nLarghezza*<br/>
[in] Larghezza, in pixel, della casella di testo.

*bModalitàInFloaty*<br/>
TRUE per impostare la larghezza per la modalità mobile; FALSE per impostare la larghezza per la modalità normale.

### <a name="remarks"></a>Osservazioni

Il `CMFCRibbonEdit` controllo ha due larghezze a seconda della modalità di visualizzazione: modalità mobile e modalità normale.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)<br/>
[Classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)
