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
ms.openlocfilehash: 80ee43ae32416f9f62df419c4afbd46a0aa63cc8
ms.sourcegitcommit: 39debf8c525c3951af6913ee5e514617658f8859
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/10/2019
ms.locfileid: "58780483"
---
# <a name="cmfcribbonedit-class"></a>Classe CMFCRibbonEdit

Implementa un controllo di modifica che si trova in una barra multifunzione.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonEdit : public CMFCRibbonButton
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonEdit::CMFCRibbonEdit](#cmfcribbonedit)|Costruisce un oggetto `CMFCRibbonEdit`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonEdit::CanBeStretched](#canbestretched)|Indica se l'altezza del `CMFCRibbonEdit` controllo può aumentare in verticale l'altezza di una riga della barra multifunzione.|
|[CMFCRibbonEdit::CMFCRibbonEdit](#cmfcribbonedit)|Costruisce un oggetto `CMFCRibbonEdit`.|
|[CMFCRibbonEdit::CopyFrom](#copyfrom)|Copia lo stato dell'oggetto specificato `CMFCRibbonEdit` oggetto all'oggetto corrente `CMFCRibbonEdit` oggetto.|
|[CMFCRibbonEdit::CreateEdit](#createedit)|Crea una nuova casella di testo per il `CMFCRibbonEdit` oggetto.|
|[CMFCRibbonEdit::DestroyCtrl](#destroyctrl)|Elimina definitivamente il `CMFCRibbonEdit` oggetto.|
|[CMFCRibbonEdit::DropDownList](#dropdownlist)|Consente di visualizzare una casella di riepilogo.|
|[CMFCRibbonEdit::EnableSpinButtons](#enablespinbuttons)|Abilita e imposta l'intervallo del pulsante di selezione della casella di testo.|
|[CMFCRibbonEdit::GetCompactSize](#getcompactsize)|Recupera la dimensione compatta del `CFMCRibbonEdit` oggetto.|
|[CMFCRibbonEdit::GetEditText](#getedittext)|Recupera il testo nella casella di testo.|
|[CMFCRibbonEdit::GetIntermediateSize](#getintermediatesize)|Recupera la dimensione intermedia del `CMFCRibbonEdit` oggetto.|
|[CMFCRibbonEdit::GetTextAlign](#gettextalign)|Recupera l'allineamento del testo nella casella di testo.|
|[CMFCRibbonEdit::GetWidth](#getwidth)|Recupera la larghezza, in pixel, del `CMFCRibbonEdit` controllo.|
|[CMFCRibbonEdit::HasCompactMode](#hascompactmode)|Indica se la visualizzazione ridimensionata per le `CMFCRibbonEdit` controllo può essere compatto.|
|[CMFCRibbonEdit::HasFocus](#hasfocus)|Indica se il `CMFCRIbbonEdit` controllo ha lo stato attivo.|
|[CMFCRibbonEdit::HasLargeMode](#haslargemode)|Indica se la visualizzazione ridimensionata per le `CMFCRibbonEdit` controllo può essere elevato.|
|[CMFCRibbonEdit::HasSpinButtons](#hasspinbuttons)|Indica se la casella di testo ha un pulsante di selezione.|
|[CMFCRibbonEdit::IsHighlighted](#ishighlighted)|Indica se il `CMFCRibbonEdit` controllo viene evidenziato.|
|[CMFCRibbonEdit::OnAfterChangeRect](#onafterchangerect)|Chiamato dal framework quando le dimensioni del rettangolo di visualizzazione per il `CMFCRibbonEdit` controllare le modifiche.|
|[CMFCRibbonEdit::OnDraw](#ondraw)|Chiamato dal framework per disegnare il `CMFCRibbonEdit` controllo.|
|[CMFCRibbonEdit::OnDrawLabelAndImage](#ondrawlabelandimage)|Chiamato dal framework per disegnare l'etichetta e l'immagine per il `CMFCRibbonEdit` controllo.|
|[CMFCRibbonEdit::OnDrawOnList](#ondrawonlist)|Chiamato dal framework per disegnare il `CMFCRibbonEdit` controllo in una casella di riepilogo di comandi.|
|[CMFCRibbonEdit::OnEnable](#onenable)|Chiamato dal framework per abilitare o disabilitare il `CMFCRibbonEdit` controllo.|
|[CMFCRibbonEdit::OnHighlight](#onhighlight)|Chiamato dal framework quando il puntatore del mouse entra o esce dai limiti del `CMFCRibbonEdit` controllo.|
|[CMFCRibbonEdit::OnKey](#onkey)|Chiamato dal framework quando l'utente preme un suggerimento tasto di scelta e `CMFCRibbonEdit` controllo ha lo stato attivo.|
|[CMFCRibbonEdit::OnLButtonDown](#onlbuttondown)|Chiamato dal framework per aggiornare il `CMFCRibbonEdit` controllare quando l'utente preme il pulsante sinistro del mouse sul controllo.|
|[CMFCRibbonEdit::OnLButtonUp](#onlbuttonup)|Chiamato dal framework quando l'utente rilascia il pulsante sinistro del mouse.|
|[CMFCRibbonEdit::OnRTLChanged](#onrtlchanged)|Chiamato dal framework per aggiornare il `CMFCRibbonEdit` controllare quando il layout cambia direzione.|
|[CMFCRibbonEdit::OnShow](#onshow)|Chiamato dal framework per mostrare o nascondere il `CMFCRibbonEdit` controllo.|
|[CMFCRibbonEdit::Redraw](#redraw)|Aggiorna la visualizzazione delle `CMFCRibbonEdit` controllo.|
|[CMFCRibbonEdit::SetACCData](#setaccdata)|Imposta i dati di accessibilità per il `CMFCRibbonEdit` oggetto.|
|[CMFCRibbonEdit::SetEditText](#setedittext)|Imposta il testo nella casella di testo.|
|[CMFCRibbonEdit::SetTextAlign](#settextalign)|Imposta l'allineamento del testo della casella di testo.|
|[CMFCRibbonEdit::SetWidth](#setwidth)|Imposta la larghezza della casella di testo per il `CMFCRibbonEdit` controllo.|

## <a name="remarks"></a>Note

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un `CMFCRibbonEdit` dell'oggetto, visualizzare i pulsanti di selezione accanto a controllo di modifica e impostare il testo del controllo di modifica. Questo frammento di codice fa parte di [esempio di MS Office 2007 Demo](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MSOffice2007Demo#7](../../mfc/reference/codesnippet/cpp/cmfcribbonedit-class_1.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** afxRibbonEdit.h

##  <a name="canbestretched"></a>  CMFCRibbonEdit::CanBeStretched

Indica se l'altezza del [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo può aumentare in verticale l'altezza di una riga della barra multifunzione.

```
virtual BOOL CanBeStretched();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre FALSE.

### <a name="remarks"></a>Note

##  <a name="cmfcribbonedit"></a>  CMFCRibbonEdit::CMFCRibbonEdit

Costruisce un [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) oggetto.

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
[in] ID di comando di `CMFCRibbonEdit` controllo.

*nWidth*<br/>
[in] La larghezza, in pixel, della casella di testo per il `CMFCRibbonEdit` controllo.

*lpszLabel*<br/>
[in] L'etichetta per il `CMFCRibbonEdit` controllo.

*Immagine*<br/>
[in] Indice dell'immagine di piccole dimensioni da utilizzare per il `CMFCRibbonEdit` controllo. La raccolta di immagini di piccole dimensioni viene mantenuta in base alla categoria della barra multifunzione padre.

### <a name="remarks"></a>Note

Il `CMFCRibbonEdit` controllo non usa un'immagine di grandi dimensioni.

##  <a name="copyfrom"></a>  CMFCRibbonEdit::CopyFrom

Copia lo stato dell'oggetto specificato [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) oggetto all'oggetto corrente [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) oggetto.

```
virtual void CopyFrom(const CMFCRibbonBaseElement& src);
```

### <a name="parameters"></a>Parametri

*src*<br/>
[in] L'origine `CMFCRibbonEdit` oggetto.

### <a name="remarks"></a>Note

Il *src* parametro deve essere di tipo `CMFCRibbonEdit`.

##  <a name="createedit"></a>  CMFCRibbonEdit::CreateEdit

Crea una nuova casella di testo per il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) oggetto.

```
virtual CMFCRibbonRichEditCtrl* CreateEdit(
    CWnd* pWndParent,
    DWORD dwEditStyle);
```

### <a name="parameters"></a>Parametri

*pWndParent*<br/>
[in] Un puntatore alla finestra padre del `CMFCRibbonEdit` oggetto.

*dwEditStyle*<br/>
[in] Specifica lo stile della casella di testo. È possibile combinare gli stili di finestra elencati nella sezione Osservazioni con i [modifica degli stili del controllo](/windows/desktop/Controls/edit-control-styles) che sono descritti nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Un puntatore per la nuova casella di testo se il metodo ha esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Note

L'override del metodo in una classe derivata per creare una casella di testo personalizzato.

È possibile applicare quanto segue [stili di finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) a una casella di testo:

- **WS_CHILD**

- **WS_VISIBLE**

- **WS_DISABLED**

- **WS_GROUP**

- **WS_TABSTOP**

##  <a name="destroyctrl"></a>  CMFCRibbonEdit::DestroyCtrl

Elimina definitivamente il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) oggetto.

```
virtual void DestroyCtrl();
```

### <a name="remarks"></a>Note

##  <a name="dropdownlist"></a>  CMFCRibbonEdit::DropDownList

Consente di visualizzare una casella di riepilogo.

```
virtual void DropDownList();
```

### <a name="remarks"></a>Note

Per impostazione predefinita questo metodo non esegue alcuna operazione. Eseguire l'override di questo metodo per una casella di riepilogo a discesa.

##  <a name="enablespinbuttons"></a>  CMFCRibbonEdit::EnableSpinButtons

Abilita e imposta l'intervallo del pulsante di selezione della casella di testo.

```
void EnableSpinButtons(
    int nMin,
    int nMax);
```

### <a name="parameters"></a>Parametri

*nMin*<br/>
[in] Il valore minimo del pulsante di selezione.

*nMax*<br/>
[in] Il valore massimo del pulsante di selezione.

### <a name="remarks"></a>Note

I pulsanti di selezione visualizzare una freccia e sulla freccia in giù e consentono agli utenti di esplorare un set fisso di valori.

##  <a name="getcompactsize"></a>  CMFCRibbonEdit::GetCompactSize

Recupera la dimensione compatta del [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) oggetto.

```
virtual CSize GetCompactSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo per il `CMFCRibbonEdit` oggetto.

### <a name="return-value"></a>Valore restituito

La dimensione compatta del `CMFCRibbonEdit` oggetto.

### <a name="remarks"></a>Note

##  <a name="getedittext"></a>  CMFCRibbonEdit::GetEditText

Recupera il testo nella casella di testo.

```
CString GetEditText() const;
```

### <a name="return-value"></a>Valore restituito

Il testo nella casella di testo.

### <a name="remarks"></a>Note

##  <a name="getintermediatesize"></a>  CMFCRibbonEdit::GetIntermediateSize

Recupera la dimensione intermedia del [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) oggetto.

```
virtual CSize GetIntermediateSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo per il `CMFCRibbonEdit` oggetto.

### <a name="return-value"></a>Valore restituito

La dimensione intermedia del `CMFCRibbonEdit` oggetto.

### <a name="remarks"></a>Note

##  <a name="gettextalign"></a>  CMFCRibbonEdit::GetTextAlign

Recupera l'allineamento del testo nella casella di testo.

```
int GetTextAlign() const;
```

### <a name="return-value"></a>Valore restituito

Valore enumerato un allineamento del testo. Vedere la sezione Osservazioni per i valori possibili.

### <a name="remarks"></a>Note

Il valore restituito è uno degli stili del controllo di modifica seguente:

- **ES_LEFT** per l'allineamento a sinistra

- **ES_CENTER** per allineamento al centro

- **ES_RIGHT** per l'allineamento a destra

Per altre informazioni su questi stili, vedere [modifica degli stili del controllo](/windows/desktop/Controls/edit-control-styles).

##  <a name="getwidth"></a>  CMFCRibbonEdit::GetWidth

Recupera la larghezza, in pixel, del [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo.

```
int GetWidth(BOOL bInFloatyMode = FALSE) const;
```

### <a name="parameters"></a>Parametri

*bInFloatyMode*<br/>
[in] TRUE se il `CMFCRibbonEdit` controllo si trova in modalità a virgola mobile; in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

La larghezza, in pixel, del `CMFCRibbonEdit` controllo.

### <a name="remarks"></a>Note

##  <a name="hascompactmode"></a>  CMFCRibbonEdit::HasCompactMode

Indica se la visualizzazione ridimensionata per le [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo può essere compatto.

```
virtual BOOL HasCompactMode() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre TRUE.

### <a name="remarks"></a>Note

Per impostazione predefinita questo metodo restituisce sempre TRUE. Eseguire l'override di questo metodo per indicare se le dimensioni di visualizzazione possono essere compatta.

##  <a name="hasfocus"></a>  CMFCRibbonEdit::HasFocus

Indica se il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo ha lo stato attivo.

```
virtual BOOL HasFocus() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il `CMFCRibbonEdit` controllo ha lo stato attivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="haslargemode"></a>  CMFCRibbonEdit::HasLargeMode

Indica se la visualizzazione ridimensionata per le [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo può essere elevato.

```
virtual BOOL HasLargeMode() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre FALSE.

### <a name="remarks"></a>Note

Per impostazione predefinita questo metodo restituisce sempre FALSE. Eseguire l'override di questo metodo per indicare se le dimensioni di visualizzazione possono essere elevata.

##  <a name="hasspinbuttons"></a>  CMFCRibbonEdit::HasSpinButtons

Indica se la casella di testo ha un pulsante di selezione.

```
virtual BOOL HasSpinButtons() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la casella di testo ha un pulsante di selezione. in caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="ishighlighted"></a>  CMFCRibbonEdit::IsHighlighted

Indica se il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo viene evidenziato.

```
virtual BOOL IsHighlighted() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il `CMFCRibbonEdit` controllo viene evidenziato; in caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="onafterchangerect"></a>  CMFCRibbonEdit::OnAfterChangeRect

Chiamato dal framework quando le dimensioni del rettangolo di visualizzazione per il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo di modifica.

```
virtual void OnAfterChangeRect(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo per il `CMFCRibbonEdit` controllo.

### <a name="remarks"></a>Note

##  <a name="ondraw"></a>  CMFCRibbonEdit::OnDraw

Chiamato dal framework per disegnare il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo.

```
virtual void OnDraw(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo per il `CMFCRibbonEdit` controllo.

### <a name="remarks"></a>Note

##  <a name="ondrawlabelandimage"></a>  CMFCRibbonEdit::OnDrawLabelAndImage

Chiamato dal framework per disegnare l'etichetta e l'immagine per il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo.

```
virtual void OnDrawLabelAndImage(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo per il `CMFCRibbonEdit` controllo.

### <a name="remarks"></a>Note

##  <a name="ondrawonlist"></a>  CMFCRibbonEdit::OnDrawOnList

Chiamato dal framework per disegnare il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo in una casella di riepilogo di comandi.

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
[in] Puntatore a un contesto di dispositivo per il `CMFCRibbonEdit` controllo.

*strText*<br/>
[in] Testo da visualizzare [ ] (../../mfc/reference/cmfcribbonedit-class.md "classe cmfcribbonedit").

*nTextOffset*<br/>
[in] Distanza, espressa in pixel, dal lato sinistro della casella di riepilogo per il testo visualizzato.

*rect*<br/>
[in] Il rettangolo di visualizzazione per il `CMFCRibbonEdit` controllo.

*bIsSelected*<br/>
[in] Questo parametro non viene utilizzato.

*bHighlighted*<br/>
[in] Questo parametro non viene utilizzato.

### <a name="remarks"></a>Note

La casella di riepilogo di comandi consente di visualizzare i controlli della barra multifunzione per consentire agli utenti di personalizzare la barra di accesso rapido.

##  <a name="onenable"></a>  CMFCRibbonEdit::OnEnable

Chiamato dal framework per abilitare o disabilitare il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo.

```
virtual void OnEnable(BOOL bEnable);
```

### <a name="parameters"></a>Parametri

*bAttivare il*<br/>
[in] TRUE per abilitare il controllo. FALSE per disabilitare il controllo.

### <a name="remarks"></a>Note

##  <a name="onhighlight"></a>  CMFCRibbonEdit::OnHighlight

Chiamato dal framework quando il puntatore del mouse entra o esce dai limiti dei [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo.

```
virtual void OnHighlight(BOOL bHighlight);
```

### <a name="parameters"></a>Parametri

*bHighlight*<br/>
[in] TRUE se il puntatore si trova entro i limiti del `CMFCRibbonEdit` controllo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="onkey"></a>  CMFCRibbonEdit::OnKey

Chiamato dal framework quando l'utente preme un suggerimento tasto di scelta e la [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo ha lo stato attivo.

```
virtual BOOL OnKey(BOOL bIsMenuKey);
```

### <a name="parameters"></a>Parametri

*bIsMenuKey*<br/>
[in] TRUE se il suggerimento tasto di scelta Visualizza un menu a comparsa. in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

TRUE se l'evento è stato gestito; in caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="onlbuttondown"></a>  CMFCRibbonEdit::OnLButtonDown

Chiamato dal framework per aggiornare il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllare quando l'utente preme il pulsante sinistro del mouse sul controllo.

```
virtual void OnLButtonDown(CPoint point);
```

### <a name="parameters"></a>Parametri

*punto*<br/>
[in] Questo parametro non viene utilizzato.

### <a name="remarks"></a>Note

##  <a name="onlbuttonup"></a>  CMFCRibbonEdit::OnLButtonUp

Chiamato dal framework quando l'utente rilascia il pulsante sinistro del mouse.

```
virtual void OnLButtonUp(CPoint point);
```

### <a name="parameters"></a>Parametri

*punto*<br/>
[in] Questo parametro non viene utilizzato.

### <a name="remarks"></a>Note

##  <a name="onrtlchanged"></a>  CMFCRibbonEdit::OnRTLChanged

Chiamato dal framework per aggiornare il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllare quando il layout cambia direzione.

```
virtual void OnRTLChanged(BOOL bIsRTL);
```

### <a name="parameters"></a>Parametri

*bIsRTL*<br/>
[in] TRUE se il layout è right-to-left; FALSE se il layout da sinistra a destra.

### <a name="remarks"></a>Note

##  <a name="onshow"></a>  CMFCRibbonEdit::OnShow

Chiamato dal framework per mostrare o nascondere il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo.

```
virtual void OnShow(BOOL bShow);
```

### <a name="parameters"></a>Parametri

*bShow*<br/>
[in] TRUE per mostrare il controllo. FALSE per nascondere il controllo.

### <a name="remarks"></a>Note

##  <a name="redraw"></a>  CMFCRibbonEdit::Redraw

Aggiorna la visualizzazione delle [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo.

```
virtual void Redraw();
```

### <a name="remarks"></a>Note

Questo metodo consente di ricreare il rettangolo di visualizzazione per il `CMFCRibbonEdit` chiamando indirettamente [CWnd::RedrawWindow](/windows/desktop/api/winuser/nf-winuser-redrawwindow) con i flag RDW_INVALIDATE RDW_ERASE e RDW_UPDATENOW impostato.

##  <a name="setaccdata"></a>  CMFCRibbonEdit::SetACCData

Imposta i dati di accessibilità per il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) oggetto.

```
virtual BOOL SetACCData(
    CWnd* pParent,
    CAccessibilityData& data);
```

### <a name="parameters"></a>Parametri

*pParent*<br/>
Puntatore alla finestra padre per il `CMFCRibbonEdit` oggetto.

*Data*<br/>
I dati di accessibilità per il `CMFCRibbonEdit` oggetto.

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
[in] Testo per la casella di testo.

##  <a name="settextalign"></a>  CMFCRibbonEdit::SetTextAlign

Imposta l'allineamento del testo della casella di testo.

```
void SetTextAlign(int nAlign);
```

### <a name="parameters"></a>Parametri

*nAlign*<br/>
[in] Valore enumerato un allineamento del testo. Vedere la sezione Osservazioni per i valori possibili.

### <a name="remarks"></a>Note

Il parametro *nAlign* è uno dei seguente modifica degli stili del controllo:

- ES_LEFT per l'allineamento a sinistra

- ES_CENTER per allineamento al centro

- ES_RIGHT per l'allineamento a destra

Per altre informazioni su questi stili, vedere [modifica degli stili del controllo](/windows/desktop/Controls/edit-control-styles).

##  <a name="setwidth"></a>  CMFCRibbonEdit::SetWidth

Imposta la larghezza della casella di testo per il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo.

```
void SetWidth(
    int nWidth,
    BOOL bInFloatyMode = FALSE);
```

### <a name="parameters"></a>Parametri

*nWidth*<br/>
[in] La larghezza in pixel, della casella di testo.

*bInFloatyMode*<br/>
TRUE per impostare la larghezza per modalità a virgola mobile. FALSE per impostare lo spessore per la modalità normale.

### <a name="remarks"></a>Note

Il `CMFCRibbonEdit` controllo dispone di due larghezze in base alla relativa modalità di visualizzazione: mobile modalità normale e modalità.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)<br/>
[Classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)
