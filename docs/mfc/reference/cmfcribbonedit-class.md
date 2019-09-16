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
ms.openlocfilehash: 4f973074fbec3d04b1c1a74852b02ff2564217c1
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69504942"
---
# <a name="cmfcribbonedit-class"></a>Classe CMFCRibbonEdit

Implementa un controllo di modifica che si trova su una barra multifunzione.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonEdit : public CMFCRibbonButton
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonEdit::CMFCRibbonEdit](#cmfcribbonedit)|Costruisce un oggetto `CMFCRibbonEdit`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonEdit::CanBeStretched](#canbestretched)|Indica se l'altezza del `CMFCRibbonEdit` controllo può aumentare verticalmente rispetto all'altezza di una riga della barra multifunzione.|
|[CMFCRibbonEdit::CMFCRibbonEdit](#cmfcribbonedit)|Costruisce un oggetto `CMFCRibbonEdit`.|
|[CMFCRibbonEdit::CopyFrom](#copyfrom)|Copia lo stato dell'oggetto specificato `CMFCRibbonEdit` nell'oggetto corrente. `CMFCRibbonEdit`|
|[CMFCRibbonEdit::CreateEdit](#createedit)|Crea una nuova casella di testo per `CMFCRibbonEdit` l'oggetto.|
|[CMFCRibbonEdit::DestroyCtrl](#destroyctrl)|Elimina definitivamente l' `CMFCRibbonEdit` oggetto.|
|[CMFCRibbonEdit::DropDownList](#dropdownlist)|Rilascia una casella di riepilogo.|
|[CMFCRibbonEdit::EnableSpinButtons](#enablespinbuttons)|Abilita e imposta l'intervallo del pulsante di selezione per la casella di testo.|
|[CMFCRibbonEdit::GetCompactSize](#getcompactsize)|Recupera le dimensioni compatte dell' `CFMCRibbonEdit` oggetto.|
|[CMFCRibbonEdit::GetEditText](#getedittext)|Recupera il testo nella casella di testo.|
|[CMFCRibbonEdit::GetIntermediateSize](#getintermediatesize)|Recupera la dimensione intermedia dell' `CMFCRibbonEdit` oggetto.|
|[CMFCRibbonEdit::GetTextAlign](#gettextalign)|Recupera l'allineamento del testo nella casella di testo.|
|[CMFCRibbonEdit::GetWidth](#getwidth)|Recupera la larghezza, in pixel, del `CMFCRibbonEdit` controllo.|
|[CMFCRibbonEdit::HasCompactMode](#hascompactmode)|Indica se le dimensioni di visualizzazione per `CMFCRibbonEdit` il controllo possono essere compatte.|
|[CMFCRibbonEdit::HasFocus](#hasfocus)|Indica se il `CMFCRIbbonEdit` controllo ha lo stato attivo.|
|[CMFCRibbonEdit::HasLargeMode](#haslargemode)|Indica se le dimensioni di visualizzazione per `CMFCRibbonEdit` il controllo possono essere di grandi dimensioni.|
|[CMFCRibbonEdit::HasSpinButtons](#hasspinbuttons)|Indica se la casella di testo dispone di un pulsante di selezione.|
|[CMFCRibbonEdit::IsHighlighted](#ishighlighted)|Indica se il `CMFCRibbonEdit` controllo è evidenziato.|
|[CMFCRibbonEdit::OnAfterChangeRect](#onafterchangerect)|Chiamata eseguita dal Framework in caso di modifica delle dimensioni del rettangolo di `CMFCRibbonEdit` visualizzazione per il controllo.|
|[CMFCRibbonEdit:: onpare](#ondraw)|Chiamato dal Framework per creare il `CMFCRibbonEdit` controllo.|
|[CMFCRibbonEdit::OnDrawLabelAndImage](#ondrawlabelandimage)|Chiamato dal Framework per creare l'etichetta e l'immagine per il `CMFCRibbonEdit` controllo.|
|[CMFCRibbonEdit::OnDrawOnList](#ondrawonlist)|Chiamato dal Framework per creare il `CMFCRibbonEdit` controllo in una casella di riepilogo comandi.|
|[CMFCRibbonEdit:: OnEnable](#onenable)|Chiamata eseguita dal Framework per abilitare o disabilitare il `CMFCRibbonEdit` controllo.|
|[CMFCRibbonEdit::OnHighlight](#onhighlight)|Chiamata eseguita dal framework quando il puntatore entra o esce dai limiti del `CMFCRibbonEdit` controllo.|
|[CMFCRibbonEdit:: OnKey](#onkey)|Chiamata eseguita dal framework quando l'utente preme un tasto di suggerimento e `CMFCRibbonEdit` il controllo ha lo stato attivo.|
|[CMFCRibbonEdit::OnLButtonDown](#onlbuttondown)|Chiamata eseguita dal Framework per aggiornare il `CMFCRibbonEdit` controllo quando l'utente preme il pulsante sinistro del mouse sul controllo.|
|[CMFCRibbonEdit::OnLButtonUp](#onlbuttonup)|Chiamata eseguita dal framework quando l'utente rilascia il pulsante sinistro del mouse.|
|[CMFCRibbonEdit:: OnRTLChanged](#onrtlchanged)|Chiamata eseguita dal Framework per aggiornare il `CMFCRibbonEdit` controllo quando il layout cambia direzione.|
|[CMFCRibbonEdit:: OnShow](#onshow)|Chiamata eseguita dal Framework per mostrare o nascondere il `CMFCRibbonEdit` controllo.|
|[CMFCRibbonEdit::Redraw](#redraw)|Aggiorna la visualizzazione del `CMFCRibbonEdit` controllo.|
|[CMFCRibbonEdit::SetACCData](#setaccdata)|Imposta i dati di accessibilità `CMFCRibbonEdit` per l'oggetto.|
|[CMFCRibbonEdit::SetEditText](#setedittext)|Imposta il testo nella casella di testo.|
|[CMFCRibbonEdit::SetTextAlign](#settextalign)|Imposta l'allineamento del testo della casella di testo.|
|[CMFCRibbonEdit::SetWidth](#setwidth)|Imposta la larghezza della casella di testo per il `CMFCRibbonEdit` controllo.|

## <a name="remarks"></a>Note

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un `CMFCRibbonEdit` oggetto, visualizzare i pulsanti di selezione accanto al controllo di modifica e impostare il testo del controllo di modifica. Questo frammento di codice fa parte dell' [esempio Microsoft Office 2007 demo](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MSOffice2007Demo#7](../../mfc/reference/codesnippet/cpp/cmfcribbonedit-class_1.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** afxRibbonEdit. h

##  <a name="canbestretched"></a>  CMFCRibbonEdit::CanBeStretched

Indica se l'altezza del controllo [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) può aumentare verticalmente all'altezza di una riga della barra multifunzione.

```
virtual BOOL CanBeStretched();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre FALSE.

### <a name="remarks"></a>Note

##  <a name="cmfcribbonedit"></a>CMFCRibbonEdit:: CMFCRibbonEdit

Costruisce un oggetto [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) .

```
CMFCRibbonEdit(
    UINT nID,
    int nWidth,
    LPCTSTR lpszLabel = NULL,
    int nImage = -1);

CMFCRibbonEdit();
```

### <a name="parameters"></a>Parametri

*nID*<br/>
in ID di comando per `CMFCRibbonEdit` il controllo.

*nWidth*<br/>
in Larghezza, in pixel, della casella di testo per il `CMFCRibbonEdit` controllo.

*lpszLabel*<br/>
in Etichetta `CMFCRibbonEdit` del controllo.

*nImage*<br/>
in Indice della piccola immagine da usare per il `CMFCRibbonEdit` controllo. La raccolta di immagini di piccole dimensioni viene gestita dalla categoria della barra multifunzione padre.

### <a name="remarks"></a>Note

Il `CMFCRibbonEdit` controllo non usa un'immagine di grandi dimensioni.

##  <a name="copyfrom"></a>CMFCRibbonEdit:: CopyFrom

Copia lo stato dell'oggetto [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) specificato nell'oggetto [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) corrente.

```
virtual void CopyFrom(const CMFCRibbonBaseElement& src);
```

### <a name="parameters"></a>Parametri

*src*<br/>
in Oggetto di `CMFCRibbonEdit` origine.

### <a name="remarks"></a>Note

Il parametro *src* deve essere di tipo `CMFCRibbonEdit`.

##  <a name="createedit"></a>  CMFCRibbonEdit::CreateEdit

Crea una nuova casella di testo per l'oggetto [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) .

```
virtual CMFCRibbonRichEditCtrl* CreateEdit(
    CWnd* pWndParent,
    DWORD dwEditStyle);
```

### <a name="parameters"></a>Parametri

*pWndParent*<br/>
in Puntatore alla finestra padre dell' `CMFCRibbonEdit` oggetto.

*dwEditStyle*<br/>
in Specifica lo stile della casella di testo. È possibile combinare gli stili della finestra elencati nella sezione Osservazioni con gli [stili del controllo di modifica](/windows/win32/Controls/edit-control-styles) descritti nella Windows SDK.

### <a name="return-value"></a>Valore restituito

Puntatore alla nuova casella di testo se il metodo ha avuto esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Note

Eseguire l'override di questo metodo in una classe derivata per creare una casella di testo personalizzata.

È possibile applicare gli [stili della finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) seguenti a una casella di testo:

- **WS_CHILD**

- **WS_VISIBLE**

- **WS_DISABLED**

- **WS_GROUP**

- **WS_TABSTOP**

##  <a name="destroyctrl"></a>CMFCRibbonEdit::D estroyCtrl

Elimina definitivamente l'oggetto [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) .

```
virtual void DestroyCtrl();
```

### <a name="remarks"></a>Note

##  <a name="dropdownlist"></a>CMFCRibbonEdit::D ropDownList

Rilascia una casella di riepilogo.

```
virtual void DropDownList();
```

### <a name="remarks"></a>Note

Per impostazione predefinita, questo metodo non esegue alcuna operazione. Eseguire l'override di questo metodo per rilasciare una casella di riepilogo.

##  <a name="enablespinbuttons"></a>CMFCRibbonEdit:: EnableSpinButtons

Abilita e imposta l'intervallo del pulsante di selezione per la casella di testo.

```
void EnableSpinButtons(
    int nMin,
    int nMax);
```

### <a name="parameters"></a>Parametri

*nMin*<br/>
in Valore minimo del pulsante di selezione.

*nMax*<br/>
in Valore massimo del pulsante di selezione.

### <a name="remarks"></a>Note

I pulsanti di selezione visualizzano una freccia su e giù e consentono agli utenti di spostarsi in un set fisso di valori.

##  <a name="getcompactsize"></a>CMFCRibbonEdit:: GetCompactSize

Recupera le dimensioni compatte dell'oggetto [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) .

```
virtual CSize GetCompactSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo per `CMFCRibbonEdit` l'oggetto.

### <a name="return-value"></a>Valore restituito

Dimensioni compatte dell' `CMFCRibbonEdit` oggetto.

### <a name="remarks"></a>Note

##  <a name="getedittext"></a>  CMFCRibbonEdit::GetEditText

Recupera il testo nella casella di testo.

```
CString GetEditText() const;
```

### <a name="return-value"></a>Valore restituito

Testo della casella di testo.

### <a name="remarks"></a>Note

##  <a name="getintermediatesize"></a>CMFCRibbonEdit:: GetIntermediateSize

Recupera la dimensione intermedia dell'oggetto [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) .

```
virtual CSize GetIntermediateSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo per `CMFCRibbonEdit` l'oggetto.

### <a name="return-value"></a>Valore restituito

Dimensione intermedia dell' `CMFCRibbonEdit` oggetto.

### <a name="remarks"></a>Note

##  <a name="gettextalign"></a>  CMFCRibbonEdit::GetTextAlign

Recupera l'allineamento del testo nella casella di testo.

```
int GetTextAlign() const;
```

### <a name="return-value"></a>Valore restituito

Valore enumerato di allineamento del testo. Per i valori possibili, vedere la sezione Osservazioni.

### <a name="remarks"></a>Note

Il valore restituito è uno degli stili del controllo di modifica seguenti:

- **ES_LEFT** per allineamento a sinistra

- **ES_CENTER** per allineamento al centro

- **ES_RIGHT** per allineamento a destra

Per altre informazioni su questi stili, vedere [modificare gli stili dei controlli](/windows/win32/Controls/edit-control-styles).

##  <a name="getwidth"></a>CMFCRibbonEdit:: GetWidth

Recupera la larghezza, in pixel, del controllo [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) .

```
int GetWidth(BOOL bInFloatyMode = FALSE) const;
```

### <a name="parameters"></a>Parametri

*bInFloatyMode*<br/>
in TRUE se il `CMFCRibbonEdit` controllo è in modalità a virgola mobile; in caso contrario, false.

### <a name="return-value"></a>Valore restituito

Larghezza, in pixel, del `CMFCRibbonEdit` controllo.

### <a name="remarks"></a>Note

##  <a name="hascompactmode"></a>CMFCRibbonEdit:: HasCompactMode

Indica se le dimensioni di visualizzazione per il controllo [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) possono essere compatte.

```
virtual BOOL HasCompactMode() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre TRUE.

### <a name="remarks"></a>Note

Per impostazione predefinita, questo metodo restituisce sempre TRUE. Eseguire l'override di questo metodo per indicare se la dimensione di visualizzazione può essere compatta.

##  <a name="hasfocus"></a>  CMFCRibbonEdit::HasFocus

Indica se il controllo [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) dispone dello stato attivo.

```
virtual BOOL HasFocus() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il `CMFCRibbonEdit` controllo ha lo stato attivo; in caso contrario, false.

### <a name="remarks"></a>Note

##  <a name="haslargemode"></a>CMFCRibbonEdit:: HasLargeMode

Indica se le dimensioni di visualizzazione per il controllo [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) possono essere di grandi dimensioni.

```
virtual BOOL HasLargeMode() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre FALSE.

### <a name="remarks"></a>Note

Per impostazione predefinita, questo metodo restituisce sempre FALSE. Eseguire l'override di questo metodo per indicare se le dimensioni di visualizzazione possono essere grandi.

##  <a name="hasspinbuttons"></a>CMFCRibbonEdit:: HasSpinButtons

Indica se la casella di testo dispone di un pulsante di selezione.

```
virtual BOOL HasSpinButtons() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la casella di testo dispone di un pulsante di selezione; in caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="ishighlighted"></a>CMFCRibbonEdit:: evidenziato

Indica se il controllo [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) è evidenziato.

```
virtual BOOL IsHighlighted() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il `CMFCRibbonEdit` controllo è evidenziato; in caso contrario, false.

### <a name="remarks"></a>Note

##  <a name="onafterchangerect"></a>  CMFCRibbonEdit::OnAfterChangeRect

Chiamata eseguita dal Framework in caso di modifica delle dimensioni del rettangolo di visualizzazione per il controllo [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) .

```
virtual void OnAfterChangeRect(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo per `CMFCRibbonEdit` il controllo.

### <a name="remarks"></a>Note

##  <a name="ondraw"></a>CMFCRibbonEdit:: onpare

Chiamato dal Framework per creare il controllo [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) .

```
virtual void OnDraw(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo per `CMFCRibbonEdit` il controllo.

### <a name="remarks"></a>Note

##  <a name="ondrawlabelandimage"></a>CMFCRibbonEdit:: OnDrawLabelAndImage

Chiamato dal Framework per creare l'etichetta e l'immagine per il controllo [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) .

```
virtual void OnDrawLabelAndImage(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo per `CMFCRibbonEdit` il controllo.

### <a name="remarks"></a>Note

##  <a name="ondrawonlist"></a>CMFCRibbonEdit:: OnDrawOnList

Chiamato dal Framework per creare il controllo [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) in una casella di riepilogo comandi.

```
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
in Puntatore a un contesto di dispositivo per `CMFCRibbonEdit` il controllo.

*strText*<br/>
[in] Il testo visualizzato [](../../mfc/reference/cmfcribbonedit-class.md "classe cmfcribbonedit").

*nTextOffset*<br/>
in Distanza, in pixel, dal lato sinistro della casella di riepilogo al testo visualizzato.

*rect*<br/>
in Rettangolo di visualizzazione per il `CMFCRibbonEdit` controllo.

*bIsSelected*<br/>
in Questo parametro non viene utilizzato.

*bHighlighted*<br/>
in Questo parametro non viene utilizzato.

### <a name="remarks"></a>Note

Nella casella di riepilogo comandi sono visualizzati i controlli della barra multifunzione per consentire agli utenti di personalizzare la barra di accesso rapido.

##  <a name="onenable"></a>CMFCRibbonEdit:: OnEnable

Chiamata eseguita dal Framework per abilitare o disabilitare il controllo [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) .

```
virtual void OnEnable(BOOL bEnable);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
in TRUE per abilitare il controllo; FALSE per disabilitare il controllo.

### <a name="remarks"></a>Note

##  <a name="onhighlight"></a>CMFCRibbonEdit:: onhighlight

Chiamata eseguita dal framework quando il puntatore entra o esce dai limiti del controllo [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) .

```
virtual void OnHighlight(BOOL bHighlight);
```

### <a name="parameters"></a>Parametri

*bHighlight*<br/>
in TRUE se il puntatore si trova all'interno dei limiti del `CMFCRibbonEdit` controllo. in caso contrario, false.

### <a name="remarks"></a>Note

##  <a name="onkey"></a>CMFCRibbonEdit:: OnKey

Chiamata eseguita dal framework quando l'utente preme un suggerimento e il controllo [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) ha lo stato attivo.

```
virtual BOOL OnKey(BOOL bIsMenuKey);
```

### <a name="parameters"></a>Parametri

*bIsMenuKey*<br/>
in TRUE se il suggerimento tasto di scelta Visualizza un menu a comparsa; in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

TRUE se l'evento è stato gestito. in caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="onlbuttondown"></a>CMFCRibbonEdit:: OnLButtonDown

Chiamata eseguita dal Framework per aggiornare il controllo [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) quando l'utente preme il pulsante sinistro del mouse sul controllo.

```
virtual void OnLButtonDown(CPoint point);
```

### <a name="parameters"></a>Parametri

*point*<br/>
in Questo parametro non viene utilizzato.

### <a name="remarks"></a>Note

##  <a name="onlbuttonup"></a>CMFCRibbonEdit:: OnLButtonUp

Chiamata eseguita dal framework quando l'utente rilascia il pulsante sinistro del mouse.

```
virtual void OnLButtonUp(CPoint point);
```

### <a name="parameters"></a>Parametri

*point*<br/>
in Questo parametro non viene utilizzato.

### <a name="remarks"></a>Note

##  <a name="onrtlchanged"></a>CMFCRibbonEdit:: OnRTLChanged

Chiamata eseguita dal Framework per aggiornare il controllo [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) quando il layout cambia direzione.

```
virtual void OnRTLChanged(BOOL bIsRTL);
```

### <a name="parameters"></a>Parametri

*bIsRTL*<br/>
in TRUE se il layout è da destra a sinistra; FALSE se il layout è da sinistra a destra.

### <a name="remarks"></a>Note

##  <a name="onshow"></a>CMFCRibbonEdit:: OnShow

Chiamata eseguita dal Framework per mostrare o nascondere il controllo [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) .

```
virtual void OnShow(BOOL bShow);
```

### <a name="parameters"></a>Parametri

*bShow*<br/>
in TRUE per visualizzare il controllo; FALSE per nascondere il controllo.

### <a name="remarks"></a>Note

##  <a name="redraw"></a>  CMFCRibbonEdit::Redraw

Aggiorna la visualizzazione del controllo [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) .

```
virtual void Redraw();
```

### <a name="remarks"></a>Note

Questo metodo consente di ricreare il rettangolo di visualizzazione `CMFCRibbonEdit` per l'oggetto indirettamente chiamando [CWnd:: RedrawWindow](/windows/win32/api/winuser/nf-winuser-redrawwindow) con i flag RDW_INVALIDATE, RDW_ERASE e RDW_UPDATENOW impostati.

##  <a name="setaccdata"></a>CMFCRibbonEdit:: SetACCData

Imposta i dati di accessibilità per l'oggetto [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) .

```
virtual BOOL SetACCData(
    CWnd* pParent,
    CAccessibilityData& data);
```

### <a name="parameters"></a>Parametri

*pParent*<br/>
Puntatore alla finestra padre per l' `CMFCRibbonEdit` oggetto.

*data*<br/>
Dati di accessibilità per `CMFCRibbonEdit` l'oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce sempre TRUE.

### <a name="remarks"></a>Note

##  <a name="setedittext"></a>  CMFCRibbonEdit::SetEditText

Imposta il testo nella casella di testo.

```
void SetEditText(CString strText);
```

### <a name="parameters"></a>Parametri

*strText*<br/>
in Testo per la casella di testo.

##  <a name="settextalign"></a>  CMFCRibbonEdit::SetTextAlign

Imposta l'allineamento del testo della casella di testo.

```
void SetTextAlign(int nAlign);
```

### <a name="parameters"></a>Parametri

*nAlign*<br/>
in Valore enumerato di allineamento del testo. Per i valori possibili, vedere la sezione Osservazioni.

### <a name="remarks"></a>Note

Il parametro *nAlign* è uno degli stili del controllo di modifica seguenti:

- ES_LEFT per allineamento a sinistra

- ES_CENTER per allineamento al centro

- ES_RIGHT per allineamento a destra

Per altre informazioni su questi stili, vedere [modificare gli stili dei controlli](/windows/win32/Controls/edit-control-styles).

##  <a name="setwidth"></a>CMFCRibbonEdit:: sewidth

Imposta la larghezza della casella di testo per il controllo [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) .

```
void SetWidth(
    int nWidth,
    BOOL bInFloatyMode = FALSE);
```

### <a name="parameters"></a>Parametri

*nWidth*<br/>
in Larghezza, in pixel, della casella di testo.

*bInFloatyMode*<br/>
TRUE per impostare la larghezza per la modalità mobile; FALSE per impostare la larghezza per la modalità normale.

### <a name="remarks"></a>Note

Il `CMFCRibbonEdit` controllo ha due larghezze a seconda della modalità di visualizzazione: modalità a virgola mobile e normale.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)<br/>
[Classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)
