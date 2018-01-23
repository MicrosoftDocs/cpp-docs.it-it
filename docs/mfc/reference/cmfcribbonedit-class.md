---
title: Classe CMFCRibbonEdit | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs: C++
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
caps.latest.revision: "25"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 43a497b3eeec48c22d688f4974efcb3d2f511446
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|[CMFCRibbonEdit::CanBeStretched](#canbestretched)|Indica se l'altezza del `CMFCRibbonEdit` controllo consente di aumentare in verticale l'altezza di una riga della barra multifunzione.|  
|[CMFCRibbonEdit::CMFCRibbonEdit](#cmfcribbonedit)|Costruisce un oggetto `CMFCRibbonEdit`.|  
|[CMFCRibbonEdit::CopyFrom](#copyfrom)|Copia lo stato dell'oggetto specificato `CMFCRibbonEdit` oggetto corrente `CMFCRibbonEdit` oggetto.|  
|[CMFCRibbonEdit::CreateEdit](#createedit)|Crea una nuova casella di testo per il `CMFCRibbonEdit` oggetto.|  
|[CMFCRibbonEdit::DestroyCtrl](#destroyctrl)|Elimina definitivamente il `CMFCRibbonEdit` oggetto.|  
|[CMFCRibbonEdit::DropDownList](#dropdownlist)|Elimina una casella di elenco a discesa.|  
|[CMFCRibbonEdit::EnableSpinButtons](#enablespinbuttons)|Attiva e imposta l'intervallo del pulsante di selezione della casella di testo.|  
|[CMFCRibbonEdit::GetCompactSize](#getcompactsize)|Recupera le dimensioni di compact di `CFMCRibbonEdit` oggetto.|  
|[CMFCRibbonEdit::GetEditText](#getedittext)|Recupera il testo nella casella di testo.|  
|[CMFCRibbonEdit::GetIntermediateSize](#getintermediatesize)|Recupera la dimensione intermedia del `CMFCRibbonEdit` oggetto.|  
|[CMFCRibbonEdit::GetTextAlign](#gettextalign)|Recupera l'allineamento del testo nella casella di testo.|  
|[CMFCRibbonEdit::GetWidth](#getwidth)|Recupera la larghezza, in pixel, del `CMFCRibbonEdit` controllo.|  
|[CMFCRibbonEdit::HasCompactMode](#hascompactmode)|Indica se la visualizzazione di ridimensionamento per il `CMFCRibbonEdit` controllo può essere compact.|  
|[CMFCRibbonEdit::HasFocus](#hasfocus)|Indica se il `CMFCRIbbonEdit` controllo ha lo stato attivo.|  
|[CMFCRibbonEdit::HasLargeMode](#haslargemode)|Indica se la visualizzazione di ridimensionamento per il `CMFCRibbonEdit` controllo può essere di grandi dimensioni.|  
|[CMFCRibbonEdit::HasSpinButtons](#hasspinbuttons)|Indica se la casella di testo ha un pulsante di selezione.|  
|[CMFCRibbonEdit::IsHighlighted](#ishighlighted)|Indica se il `CMFCRibbonEdit` controllo viene evidenziato.|  
|[CMFCRibbonEdit::OnAfterChangeRect](#onafterchangerect)|Chiamato dal framework quando le dimensioni del rettangolo di visualizzazione per il `CMFCRibbonEdit` controllare le modifiche.|  
|[CMFCRibbonEdit::OnDraw](#ondraw)|Chiamato dal framework per disegnare il `CMFCRibbonEdit` controllo.|  
|[CMFCRibbonEdit::OnDrawLabelAndImage](#ondrawlabelandimage)|Chiamato dal framework per disegnare l'etichetta e l'immagine per il `CMFCRibbonEdit` controllo.|  
|[CMFCRibbonEdit::OnDrawOnList](#ondrawonlist)|Chiamato dal framework per disegnare il `CMFCRibbonEdit` controllo in una casella di riepilogo di comandi.|  
|[CMFCRibbonEdit::OnEnable](#onenable)|Chiamato dal framework per abilitare o disabilitare il `CMFCRibbonEdit` controllo.|  
|[CMFCRibbonEdit::OnHighlight](#onhighlight)|Chiamato dal framework quando il puntatore del mouse entra o esce dai limiti del `CMFCRibbonEdit` controllo.|  
|[CMFCRibbonEdit::OnKey](#onkey)|Chiamato dal framework quando l'utente preme un keytip e `CMFCRibbonEdit` controllo ha lo stato attivo.|  
|[CMFCRibbonEdit::OnLButtonDown](#onlbuttondown)|Chiamato dal framework per aggiornare il `CMFCRibbonEdit` controllare quando l'utente preme il pulsante sinistro del mouse sul controllo.|  
|[CMFCRibbonEdit::OnLButtonUp](#onlbuttonup)|Chiamato dal framework quando l'utente rilascia il pulsante sinistro del mouse.|  
|[CMFCRibbonEdit::OnRTLChanged](#onrtlchanged)|Chiamato dal framework per aggiornare il `CMFCRibbonEdit` controllare quando il layout cambia direzione.|  
|[CMFCRibbonEdit::OnShow](#onshow)|Chiamato dal framework per mostrare o nascondere il `CMFCRibbonEdit` controllo.|  
|[CMFCRibbonEdit::Redraw](#redraw)|Aggiorna la visualizzazione del `CMFCRibbonEdit` controllo.|  
|[CMFCRibbonEdit::SetACCData](#setaccdata)|Imposta i dati di accessibilità per il `CMFCRibbonEdit` oggetto.|  
|[CMFCRibbonEdit::SetEditText](#setedittext)|Imposta il testo nella casella di testo.|  
|[CMFCRibbonEdit::SetTextAlign](#settextalign)|Imposta l'allineamento del testo della casella di testo.|  
|[CMFCRibbonEdit::SetWidth](#setwidth)|Imposta la larghezza della casella di testo per il `CMFCRibbonEdit` controllo.|  
  
## <a name="remarks"></a>Note  
  
## <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come costruire un `CMFCRibbonEdit` dell'oggetto, visualizzare i pulsanti di selezione accanto a controllo di modifica e impostare il testo del controllo di modifica. Questo frammento di codice fa parte di [esempio MS Office 2007 Demo](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_MSOffice2007Demo#7](../../mfc/reference/codesnippet/cpp/cmfcribbonedit-class_1.cpp)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxRibbonEdit.h  
  
##  <a name="canbestretched"></a>CMFCRibbonEdit::CanBeStretched  
 Indica se l'altezza di [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo consente di aumentare in verticale l'altezza di una riga della barra multifunzione.  
  
```  
virtual BOOL CanBeStretched();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="cmfcribbonedit"></a>CMFCRibbonEdit::CMFCRibbonEdit  
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
 [in] `nID`  
 Comando ID per il `CMFCRibbonEdit` controllo.  
  
 [in] `nWidth`  
 La larghezza, in pixel, della casella di testo per il `CMFCRibbonEdit` controllo.  
  
 [in] `lpszLabel`  
 L'etichetta per il `CMFCRibbonEdit` controllo.  
  
 [in] `nImage`  
 Indice dell'immagine di piccole dimensioni da utilizzare per il `CMFCRibbonEdit` controllo. La raccolta di immagini di piccole dimensioni viene mantenuta in base alla categoria della barra multifunzione padre.  
  
### <a name="remarks"></a>Note  
 Il `CMFCRibbonEdit` il controllo non utilizza un'immagine di grandi dimensioni.  
  
##  <a name="copyfrom"></a>CMFCRibbonEdit::CopyFrom  
 Copia lo stato dell'oggetto specificato [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) oggetto corrente [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) oggetto.  
  
```  
virtual void CopyFrom(const CMFCRibbonBaseElement& src);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `src`  
 Oggetto `CMFCRibbonEdit` di origine.  
  
### <a name="remarks"></a>Note  
 Il `src` parametro deve essere di tipo `CMFCRibbonEdit`.  
  
##  <a name="createedit"></a>CMFCRibbonEdit::CreateEdit  
 Crea una nuova casella di testo per il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) oggetto.  
  
```  
virtual CMFCRibbonRichEditCtrl* CreateEdit(
    CWnd* pWndParent,  
    DWORD dwEditStyle);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndParent`  
 Un puntatore alla finestra padre del `CMFCRibbonEdit` oggetto.  
  
 [in] `dwEditStyle`  
 Specifica lo stile della casella di testo. È possibile combinare gli stili di finestra elencati nella sezione Osservazioni con il [modifica degli stili del controllo](http://msdn.microsoft.com/library/windows/desktop/bb775464) che sono descritte in Windows SDK.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a una nuova casella di testo se il metodo ha esito positivo. in caso contrario, `NULL`.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo in una classe derivata per creare una casella di testo personalizzato.  
  
 È possibile applicare le seguenti [stili finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) a una casella di testo:  
  
- **WS_CHILD**  
  
- **WS_VISIBLE**  
  
- **WS_DISABLED**  
  
- **WS_GROUP**  
  
- **WS_TABSTOP**  
  
##  <a name="destroyctrl"></a>CMFCRibbonEdit::DestroyCtrl  
 Elimina definitivamente il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) oggetto.  
  
```  
virtual void DestroyCtrl();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="dropdownlist"></a>CMFCRibbonEdit::DropDownList  
 Elimina una casella di elenco a discesa.  
  
```  
virtual void DropDownList();
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita questo metodo non esegue alcuna operazione. Eseguire l'override di questo metodo per una casella di riepilogo a discesa.  
  
##  <a name="enablespinbuttons"></a>CMFCRibbonEdit::EnableSpinButtons  
 Attiva e imposta l'intervallo del pulsante di selezione della casella di testo.  
  
```  
void EnableSpinButtons(
    int nMin,  
    int nMax);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nMin`  
 Il valore minimo del pulsante di selezione.  
  
 [in] `nMax`  
 Il valore massimo del pulsante di selezione.  
  
### <a name="remarks"></a>Note  
 I pulsanti di selezione visualizzare una freccia e sulla freccia in giù e consentono agli utenti di scorrere un insieme fisso di valori.  
  
##  <a name="getcompactsize"></a>CMFCRibbonEdit::GetCompactSize  
 Recupera la dimensione compatta del [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) oggetto.  
  
```  
virtual CSize GetCompactSize(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo per il `CMFCRibbonEdit` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Formato compatto di `CMFCRibbonEdit` oggetto.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getedittext"></a>CMFCRibbonEdit::GetEditText  
 Recupera il testo nella casella di testo.  
  
```  
CString GetEditText() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il testo nella casella di testo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getintermediatesize"></a>CMFCRibbonEdit::GetIntermediateSize  
 Recupera la dimensione intermedia del [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) oggetto.  
  
```  
virtual CSize GetIntermediateSize(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo per il `CMFCRibbonEdit` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 La dimensione intermedia del `CMFCRibbonEdit` oggetto.  
  
### <a name="remarks"></a>Note  
  
##  <a name="gettextalign"></a>CMFCRibbonEdit::GetTextAlign  
 Recupera l'allineamento del testo nella casella di testo.  
  
```  
int GetTextAlign() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore enumerato di un allineamento del testo. Vedere la sezione Osservazioni per i valori possibili.  
  
### <a name="remarks"></a>Note  
 Il valore restituito è uno degli stili del controllo di modifica seguente:  
  
- **ES_LEFT** per l'allineamento a sinistra  
  
- **ES_CENTER** per l'allineamento al centro  
  
- **ES_RIGHT** per l'allineamento a destra  
  
 Per ulteriori informazioni su questi stili, vedere [modifica degli stili del controllo](http://msdn.microsoft.com/library/windows/desktop/bb775464).  
  
##  <a name="getwidth"></a>CMFCRibbonEdit::GetWidth  
 Recupera la larghezza, in pixel, del [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo.  
  
```  
int GetWidth(BOOL bInFloatyMode = FALSE) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bInFloatyMode`  
 `TRUE`Se il `CMFCRibbonEdit` controllo è in modalità a virgola mobile; in caso contrario, `FALSE`.  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza, in pixel, del `CMFCRibbonEdit` controllo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="hascompactmode"></a>CMFCRibbonEdit::HasCompactMode  
 Indica se la visualizzazione di ridimensionamento per il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo può essere compact.  
  
```  
virtual BOOL HasCompactMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre `TRUE`.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita questo metodo restituisce sempre `TRUE`. Eseguire l'override di questo metodo per indicare se le dimensioni di visualizzazione possono essere compact.  
  
##  <a name="hasfocus"></a>CMFCRibbonEdit::HasFocus  
 Indica se il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo ha lo stato attivo.  
  
```  
virtual BOOL HasFocus() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il `CMFCRibbonEdit` controllo ha lo stato attivo; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="haslargemode"></a>CMFCRibbonEdit::HasLargeMode  
 Indica se la visualizzazione di ridimensionamento per il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo può essere di grandi dimensioni.  
  
```  
virtual BOOL HasLargeMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre `FALSE`.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita questo metodo restituisce sempre `FALSE`. Eseguire l'override di questo metodo per indicare se le dimensioni di visualizzazione possono essere elevata.  
  
##  <a name="hasspinbuttons"></a>CMFCRibbonEdit::HasSpinButtons  
 Indica se la casella di testo ha un pulsante di selezione.  
  
```  
virtual BOOL HasSpinButtons() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la casella di testo ha un pulsante di selezione. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="ishighlighted"></a>CMFCRibbonEdit::IsHighlighted  
 Indica se il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo viene evidenziato.  
  
```  
virtual BOOL IsHighlighted() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il `CMFCRibbonEdit` controllo viene evidenziato; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="onafterchangerect"></a>CMFCRibbonEdit::OnAfterChangeRect  
 Chiamato dal framework quando le dimensioni del rettangolo di visualizzazione per il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo di modifica.  
  
```  
virtual void OnAfterChangeRect(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo per il `CMFCRibbonEdit` controllo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="ondraw"></a>CMFCRibbonEdit::OnDraw  
 Chiamato dal framework per disegnare il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo.  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo per il `CMFCRibbonEdit` controllo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="ondrawlabelandimage"></a>CMFCRibbonEdit::OnDrawLabelAndImage  
 Chiamato dal framework per disegnare l'etichetta e l'immagine per il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo.  
  
```  
virtual void OnDrawLabelAndImage(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo per il `CMFCRibbonEdit` controllo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="ondrawonlist"></a>CMFCRibbonEdit::OnDrawOnList  
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
 [in] `pDC`  
 Puntatore a un contesto di dispositivo per il `CMFCRibbonEdit` controllo.  
  
 [in] `strText`  
 Il testo visualizzato [ ] (../../mfc/reference/cmfcribbonedit-class.md "cmfcribbonedit classe").  
  
 [in] `nTextOffset`  
 Distanza, espressa in pixel, dal lato sinistro della casella di riepilogo per il testo visualizzato.  
  
 [in] `rect`  
 Il rettangolo di visualizzazione per il `CMFCRibbonEdit` controllo.  
  
 [in] `bIsSelected`  
 Questo parametro non viene usato.  
  
 [in] `bHighlighted`  
 Questo parametro non viene usato.  
  
### <a name="remarks"></a>Note  
 La casella di riepilogo di comandi consente di visualizzare i controlli della barra multifunzione per consentire agli utenti di personalizzare la barra di accesso rapido.  
  
##  <a name="onenable"></a>CMFCRibbonEdit::OnEnable  
 Chiamato dal framework per abilitare o disabilitare il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo.  
  
```  
virtual void OnEnable(BOOL bEnable);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 `TRUE`Per abilitare il controllo. `FALSE` per disabilitare il controllo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="onhighlight"></a>CMFCRibbonEdit::OnHighlight  
 Chiamato dal framework quando il puntatore del mouse entra o esce dai limiti del [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo.  
  
```  
virtual void OnHighlight(BOOL bHighlight);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bHighlight`  
 `TRUE`Se il puntatore si trova nei limiti del `CMFCRibbonEdit` controllo; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="onkey"></a>CMFCRibbonEdit::OnKey  
 Chiamato dal framework quando l'utente preme un keytip e [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo ha lo stato attivo.  
  
```  
virtual BOOL OnKey(BOOL bIsMenuKey);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bIsMenuKey`  
 `TRUE`Se il suggerimento tasto di scelta consente di visualizzare un menu a comparsa. in caso contrario, `FALSE`.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se l'evento è stato gestito. In caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="onlbuttondown"></a>CMFCRibbonEdit::OnLButtonDown  
 Chiamato dal framework per aggiornare il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllare quando l'utente preme il pulsante sinistro del mouse sul controllo.  
  
```  
virtual void OnLButtonDown(CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 Questo parametro non viene usato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="onlbuttonup"></a>CMFCRibbonEdit::OnLButtonUp  
 Chiamato dal framework quando l'utente rilascia il pulsante sinistro del mouse.  
  
```  
virtual void OnLButtonUp(CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 Questo parametro non viene usato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="onrtlchanged"></a>CMFCRibbonEdit::OnRTLChanged  
 Chiamato dal framework per aggiornare il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllare quando il layout cambia direzione.  
  
```  
virtual void OnRTLChanged(BOOL bIsRTL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bIsRTL`  
 `TRUE`Se il layout è destra a sinistra; `FALSE` se il layout è da sinistra a destra.  
  
### <a name="remarks"></a>Note  
  
##  <a name="onshow"></a>CMFCRibbonEdit::OnShow  
 Chiamato dal framework per mostrare o nascondere il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo.  
  
```  
virtual void OnShow(BOOL bShow);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bShow`  
 `TRUE`Per visualizzare il controllo. `FALSE` per nascondere il controllo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="redraw"></a>CMFCRibbonEdit::Redraw  
 Aggiorna la visualizzazione del [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo.  
  
```  
virtual void Redraw();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo consente di ricreare il rettangolo di visualizzazione per il `CMFCRibbonEdit` oggetto chiamando indirettamente [CWnd::RedrawWindow](http://msdn.microsoft.com/library/windows/desktop/dd162911) con il `RDW_INVALIDATE`, `RDW_ERASE`, e `RDW_UPDATENOW` i flag impostati.  
  
##  <a name="setaccdata"></a>CMFCRibbonEdit::SetACCData  
 Imposta i dati di accessibilità per il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) oggetto.  
  
```  
virtual BOOL SetACCData(
    CWnd* pParent,  
    CAccessibilityData& data);
```  
  
### <a name="parameters"></a>Parametri  
 `pParent`  
 Puntatore alla finestra padre per il `CMFCRibbonEdit` oggetto.  
  
 `data`  
 I dati di accessibilità per il `CMFCRibbonEdit` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre `TRUE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setedittext"></a>CMFCRibbonEdit::SetEditText  
 Imposta il testo nella casella di testo.  
  
```  
void SetEditText(CString strText);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `strText`  
 Il testo della casella di testo.  
  
##  <a name="settextalign"></a>CMFCRibbonEdit::SetTextAlign  
 Imposta l'allineamento del testo della casella di testo.  
  
```  
void SetTextAlign(int nAlign);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nAlign`  
 Valore enumerato di un allineamento del testo. Vedere la sezione Osservazioni per i valori possibili.  
  
### <a name="remarks"></a>Note  
 Il parametro `nAlign` è uno dei seguente modifica degli stili del controllo:  
  
- **ES_LEFT** per l'allineamento a sinistra  
  
- **ES_CENTER** per l'allineamento al centro  
  
- **ES_RIGHT** per l'allineamento a destra  
  
 Per ulteriori informazioni su questi stili, vedere [modifica degli stili del controllo](http://msdn.microsoft.com/library/windows/desktop/bb775464).  
  
##  <a name="setwidth"></a>CMFCRibbonEdit::SetWidth  
 Imposta la larghezza della casella di testo per il [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) controllo.  
  
```  
void SetWidth(
    int nWidth,  
    BOOL bInFloatyMode = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nWidth`  
 La larghezza, in pixel, della casella di testo.  
  
 `bInFloatyMode`  
 `TRUE`Per impostare la larghezza per la modalità a virgola mobile; `FALSE` per impostare la larghezza per modalità normale.  
  
### <a name="remarks"></a>Note  
 Il `CMFCRibbonEdit` controllo dispone di spazio pari a due a seconda della relativa modalità di visualizzazione: mobile modalità e la modalità normale.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)   
 [Classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)