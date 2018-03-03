---
title: Classe CButton | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CButton
- AFXWIN/CButton
- AFXWIN/CButton::CButton
- AFXWIN/CButton::Create
- AFXWIN/CButton::DrawItem
- AFXWIN/CButton::GetBitmap
- AFXWIN/CButton::GetButtonStyle
- AFXWIN/CButton::GetCheck
- AFXWIN/CButton::GetCursor
- AFXWIN/CButton::GetIcon
- AFXWIN/CButton::GetIdealSize
- AFXWIN/CButton::GetImageList
- AFXWIN/CButton::GetNote
- AFXWIN/CButton::GetNoteLength
- AFXWIN/CButton::GetSplitGlyph
- AFXWIN/CButton::GetSplitImageList
- AFXWIN/CButton::GetSplitInfo
- AFXWIN/CButton::GetSplitSize
- AFXWIN/CButton::GetSplitStyle
- AFXWIN/CButton::GetState
- AFXWIN/CButton::GetTextMargin
- AFXWIN/CButton::SetBitmap
- AFXWIN/CButton::SetButtonStyle
- AFXWIN/CButton::SetCheck
- AFXWIN/CButton::SetCursor
- AFXWIN/CButton::SetDropDownState
- AFXWIN/CButton::SetIcon
- AFXWIN/CButton::SetImageList
- AFXWIN/CButton::SetNote
- AFXWIN/CButton::SetSplitGlyph
- AFXWIN/CButton::SetSplitImageList
- AFXWIN/CButton::SetSplitInfo
- AFXWIN/CButton::SetSplitSize
- AFXWIN/CButton::SetSplitStyle
- AFXWIN/CButton::SetState
- AFXWIN/CButton::SetTextMargin
dev_langs:
- C++
helpviewer_keywords:
- CButton [MFC], CButton
- CButton [MFC], Create
- CButton [MFC], DrawItem
- CButton [MFC], GetBitmap
- CButton [MFC], GetButtonStyle
- CButton [MFC], GetCheck
- CButton [MFC], GetCursor
- CButton [MFC], GetIcon
- CButton [MFC], GetIdealSize
- CButton [MFC], GetImageList
- CButton [MFC], GetNote
- CButton [MFC], GetNoteLength
- CButton [MFC], GetSplitGlyph
- CButton [MFC], GetSplitImageList
- CButton [MFC], GetSplitInfo
- CButton [MFC], GetSplitSize
- CButton [MFC], GetSplitStyle
- CButton [MFC], GetState
- CButton [MFC], GetTextMargin
- CButton [MFC], SetBitmap
- CButton [MFC], SetButtonStyle
- CButton [MFC], SetCheck
- CButton [MFC], SetCursor
- CButton [MFC], SetDropDownState
- CButton [MFC], SetIcon
- CButton [MFC], SetImageList
- CButton [MFC], SetNote
- CButton [MFC], SetSplitGlyph
- CButton [MFC], SetSplitImageList
- CButton [MFC], SetSplitInfo
- CButton [MFC], SetSplitSize
- CButton [MFC], SetSplitStyle
- CButton [MFC], SetState
- CButton [MFC], SetTextMargin
ms.assetid: cdc76d5b-31da-43c5-bc43-fde4cb39de5b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e6e92efe5b5a99042426dd2e6a7594f2de46f2ce
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="cbutton-class"></a>Classe CButton
Fornisce la funzionalità dei controlli pulsante di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CButton : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CButton::CButton](#cbutton)|Costruisce un oggetto `CButton`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CButton::Create](#create)|Crea il controllo pulsante di Windows e lo collega al `CButton` oggetto.|  
|[CButton::DrawItem](#drawitem)|Eseguire l'override per disegnare un proprietario `CButton` oggetto.|  
|[CButton::GetBitmap](#getbitmap)|Recupera l'handle di bitmap impostata in precedenza con [SetBitmap](#setbitmap).|  
|[CButton::GetButtonStyle](#getbuttonstyle)|Recupera informazioni sullo stile del controllo pulsante.|  
|[CButton::GetCheck](#getcheck)|Recupera lo stato di un controllo pulsante di selezione.|  
|[CButton::GetCursor](#getcursor)|Recupera l'handle dell'immagine del cursore è impostato in precedenza con [SetCursor](#setcursor).|  
|[CButton::GetIcon](#geticon)|Recupera l'handle dell'icona impostata in precedenza con [SetIcon](#seticon).|  
|[CButton::GetIdealSize](#getidealsize)|Recupera la dimensione ideale del controllo button.|  
|[CButton::GetImageList](#getimagelist)|Recupera l'elenco di immagini del controllo button.|  
|[CButton::GetNote](#getnote)|Recupera il componente nota del controllo collegamento comando corrente.|  
|[CButton::GetNoteLength](#getnotelength)|Recupera la lunghezza del testo della nota per il controllo collegamento comando corrente.|  
|[CButton::GetSplitGlyph](#getsplitglyph)|Recupera l'icona associata con il controllo pulsante di menu combinato corrente.|  
|[CButton::GetSplitImageList](#getsplitimagelist)|Recupera l'elenco di immagini per il controllo pulsante di menu combinato corrente.|  
|[CButton::GetSplitInfo](#getsplitinfo)|Recupera le informazioni che definisce il controllo pulsante di menu combinato corrente.|  
|[CButton::GetSplitSize](#getsplitsize)|Recupera il rettangolo di delimitazione del componente del menu a discesa il controllo pulsante di menu combinato corrente.|  
|[CButton::GetSplitStyle](#getsplitstyle)|Recupera gli stili dei pulsanti di menu combinato che definiscono il controllo pulsante di menu combinato corrente.|  
|[CButton::GetState](#getstate)|Recupera il controllo dello stato, lo stato di evidenziazione e stato attivo di un controllo pulsante.|  
|[CButton::GetTextMargin](#gettextmargin)|Recupera il margine di testo del controllo button.|  
|[CButton:: SetBitmap](#setbitmap)|Specifica una bitmap da visualizzare sul pulsante.|  
|[CButton::SetButtonStyle](#setbuttonstyle)|Modifica lo stile di un pulsante.|  
|[CButton::SetCheck](#setcheck)|Imposta lo stato di un controllo pulsante di selezione.|  
|[CButton::SetCursor](#setcursor)|Specifica un'immagine del cursore da visualizzare sul pulsante.|  
|[CButton::SetDropDownState](#setdropdownstate)|Imposta lo stato di riepilogo a discesa del controllo pulsante di menu combinato corrente.|  
|[CButton::SetIcon](#seticon)|Specifica l'icona da visualizzare sul pulsante.|  
|[CButton::SetImageList](#setimagelist)|Imposta l'elenco di immagini del controllo button.|  
|[CButton::SetNote](#setnote)|Imposta la nota sul controllo di collegamento di comando corrente.|  
|[CButton::SetSplitGlyph](#setsplitglyph)|Associa un glifo specificato con il controllo pulsante di menu combinato corrente.|  
|[CButton::SetSplitImageList](#setsplitimagelist)|Associa un elenco di immagini con il controllo pulsante di menu combinato corrente.|  
|[CButton::SetSplitInfo](#setsplitinfo)|Specifica le informazioni che definisce il controllo pulsante di menu combinato corrente.|  
|[CButton::SetSplitSize](#setsplitsize)|Imposta il rettangolo di delimitazione del componente del menu a discesa il controllo pulsante di menu combinato corrente.|  
|[CButton::SetSplitStyle](#setsplitstyle)|Imposta lo stile del controllo pulsante di menu combinato corrente.|  
|[CButton::SetState](#setstate)|Imposta lo stato di evidenziazione di un controllo pulsante.|  
|[CButton::SetTextMargin](#settextmargin)|Imposta il margine di testo del controllo button.|  
  
## <a name="remarks"></a>Note  
 Un controllo pulsante è una finestra figlio di piccole dimensioni, rettangolare che può essere selezionata e disattivare. Pulsanti possono essere utilizzati da solo o in gruppi e possono essere identificato dall'etichetta o senza testo. In genere, un pulsante Cambia aspetto quando l'utente fa clic sopra.  
  
 I tipici pulsanti sono la casella di controllo pulsante di opzione e pulsante di comando. A `CButton` oggetto può diventare uno di questi valori in base al [pulsante stile](../../mfc/reference/styles-used-by-mfc.md#button-styles) specificato nella relativa inizializzazione dal [crea](#create) funzione membro.  
  
 Inoltre, il [CBitmapButton](../../mfc/reference/cbitmapbutton-class.md) classe derivata da `CButton` supporta la creazione di controlli pulsanti di etichetta con immagini bitmap anziché di testo. Oggetto `CBitmapButton` può avere bitmap separata per un pulsante del, verso il basso, con stato attivo e disattivato.  
  
 È possibile creare un controllo pulsante da un modello di finestra di dialogo o direttamente nel codice. In entrambi i casi, chiamare prima il costruttore `CButton` per costruire il `CButton` dell'oggetto, quindi chiamare il **crea** funzione membro per creare le finestre di controllo button e associarlo al `CButton` oggetto.  
  
 Costruzione può essere un processo in un passaggio in una classe derivata da `CButton`. Scrivere un costruttore della classe derivata e chiamata **crea** all'interno del costruttore.  
  
 Se si desidera gestire i messaggi di notifica Windows inviati da un controllo pulsante al relativo elemento padre (in genere una classe derivata da [CDialog](../../mfc/reference/cdialog-class.md)), aggiungere una funzione membro della mappa messaggi voce e gestore di messaggi alla classe padre per ogni messaggio.  
  
 Ogni voce della mappa messaggi assume il formato seguente:  
  
 **On _**notifica **(**`id`, `memberFxn` **)**  
  
 dove `id` specifica l'ID di finestra figlio del controllo che invia la notifica e `memberFxn` è il nome della funzione membro padre scritta per gestire la notifica.  
  
 Prototipo di funzione dell'elemento padre è il seguente:  
  
 **afx_msg** `void` `memberFxn` **();**  
  
 Di seguito sono elencate le voci della mappa messaggi potenziali:  
  
|Voce della mappa|Inviato al padre quando...|  
|---------------|----------------------------|  
|**ON_BN_CLICKED**|L'utente sceglie un pulsante.|  
|**ON_BN_DOUBLECLICKED**|L'utente fa doppio clic su un pulsante.|  
  
 Se si crea un `CButton` oggetto da una risorsa finestra di dialogo, il `CButton` oggetto viene automaticamente distrutta quando l'utente chiude la finestra di dialogo.  
  
 Se si crea un `CButton` oggetto all'interno di una finestra, è possibile eliminarlo. Se si crea il `CButton` oggetto sull'heap tramite il **nuova** funzione, è necessario chiamare **eliminare** per l'oggetto venga eliminata quando l'utente chiude Windows controllo pulsante. Se si crea il `CButton` oggetto nello stack oppure è incorporato nell'oggetto finestra di dialogo padre, viene eliminato automaticamente.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CButton`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="cbutton"></a>CButton::CButton  
 Costruisce un oggetto `CButton`.  
  
```  
CButton();
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CButton#1](../../mfc/reference/codesnippet/cpp/cbutton-class_1.cpp)]  
  
##  <a name="create"></a>CButton::Create  
 Crea il controllo pulsante di Windows e lo collega al `CButton` oggetto.  
  
```  
virtual BOOL Create(
    LPCTSTR lpszCaption,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszCaption`  
 Specifica il testo del controllo button.  
  
 `dwStyle`  
 Specifica lo stile del controllo button. Applicare qualsiasi combinazione di [pulsante stili](../../mfc/reference/styles-used-by-mfc.md#button-styles) al pulsante.  
  
 `rect`  
 Specifica dimensioni e la posizione del controllo button. Può essere un `CRect` oggetto o un `RECT` struttura.  
  
 `pParentWnd`  
 Specifica finestra padre del controllo button, in genere un `CDialog`. Non deve essere **NULL**.  
  
 `nID`  
 Specifica l'ID. del controllo pulsante  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Si costruisce un `CButton` oggetto in due passaggi. In primo luogo, chiamare il costruttore, quindi **crea**, che crea il controllo pulsante di Windows e lo collega al `CButton` oggetto.  
  
 Se il **WS_VISIBLE** stile viene specificato, Windows invia il controllo pulsante di tutti i messaggi necessari per attivare e visualizzare il pulsante.  
  
 Applicare la seguente istruzione [stili finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) a un controllo pulsante:  
  
- **WS_CHILD** sempre  
  
- **WS_VISIBLE** in genere  
  
- **WS_DISABLED** raramente  
  
- **WS_GROUP** per raggruppare i controlli  
  
- **WS_TABSTOP** per includere il pulsante nell'ordine di tabulazione  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CButton#2](../../mfc/reference/codesnippet/cpp/cbutton-class_2.cpp)]  
  
##  <a name="drawitem"></a>CButton::DrawItem  
 Chiamato dal framework quando viene modificato un aspetto visivo di un pulsante disegnato dal proprietario.  
  
```  
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```  
  
### <a name="parameters"></a>Parametri  
 `lpDrawItemStruct`  
 Un puntatore di tipo long a un [DRAWITEMSTRUCT](../../mfc/reference/drawitemstruct-structure.md) struttura. La struttura contiene informazioni relative all'elemento da disegnare e il tipo di disegno necessaria.  
  
### <a name="remarks"></a>Note  
 Dispone di un pulsante di proprietario di **BS_OWNERDRAW** set di stile. Eseguire l'override di questa funzione membro per implementare disegno di un proprietario `CButton` oggetto. L'applicazione è necessario ripristinare tutti grafica device interface (GDI) gli oggetti selezionati per il contesto di visualizzazione fornito `lpDrawItemStruct` prima del membro funzione termina.  
  
 Vedere anche il [BS_](../../mfc/reference/styles-used-by-mfc.md#button-styles) i valori di stile.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CButton#3](../../mfc/reference/codesnippet/cpp/cbutton-class_3.cpp)]  
  
##  <a name="getbitmap"></a>CButton::GetBitmap  
 Chiamare questa funzione membro per ottenere l'handle di una bitmap, impostata in precedenza con [SetBitmap](#setbitmap), che è associato un pulsante.  
  
```  
HBITMAP GetBitmap() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Handle per una bitmap. **NULL** se nessuna bitmap è specificata in precedenza.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CButton#4](../../mfc/reference/codesnippet/cpp/cbutton-class_4.cpp)]  
  
##  <a name="getbuttonstyle"></a>CButton::GetButtonStyle  
 Recupera informazioni sullo stile del controllo pulsante.  
  
```  
UINT GetButtonStyle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce gli stili dei pulsanti per questo `CButton` oggetto. Questa funzione restituisce solo il [BS_](../../mfc/reference/styles-used-by-mfc.md#button-styles) i valori di stile, non di uno degli altri stili di finestra.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CButton#5](../../mfc/reference/codesnippet/cpp/cbutton-class_5.cpp)]  
  
##  <a name="getcheck"></a>CButton::GetCheck  
 Recupera lo stato di selezione di un pulsante di opzione o una casella di controllo.  
  
```  
int GetCheck() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito da un controllo pulsante creato con il **BS_AUTOCHECKBOX**, **BS_AUTORADIOBUTTON**, **BS_AUTO3STATE**, **BS_CHECKBOX**, **BS_RADIOBUTTON**, o **BS_3STATE** stile è uno dei valori seguenti:  
  
|Valore|Significato|  
|-----------|-------------|  
|**BST_UNCHECKED**|Stato del pulsante è deselezionata.|  
|**BST_CHECKED**|Stato del pulsante è selezionato.|  
|**BST_INDETERMINATE**|Stato del pulsante è indeterminato (si applica solo se il pulsante ha il **BS_3STATE** o **BS_AUTO3STATE** stile).|  
  
 Se il pulsante ha altri stili, il valore restituito è **BST_UNCHECKED**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CButton#6](../../mfc/reference/codesnippet/cpp/cbutton-class_6.cpp)]  
  
##  <a name="getcursor"></a>CButton::GetCursor  
 Chiamare questa funzione membro per ottenere l'handle di un cursore, impostato in precedenza con [SetCursor](#setcursor), che è associato un pulsante.  
  
```  
HCURSOR GetCursor();  
```  
  
### <a name="return-value"></a>Valore restituito  
 Handle per un'immagine del cursore. **NULL** se in precedenza si specifica alcun cursore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CButton#7](../../mfc/reference/codesnippet/cpp/cbutton-class_7.cpp)]  
  
##  <a name="geticon"></a>CButton::GetIcon  
 Chiamare questa funzione membro per ottenere l'handle di un set di icone, in precedenza con [SetIcon](#seticon), che è associato un pulsante.  
  
```  
HICON GetIcon() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Handle per un'icona. **NULL** se in precedenza viene specificata alcuna icona.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CButton#8](../../mfc/reference/codesnippet/cpp/cbutton-class_8.cpp)]  
  
##  <a name="getidealsize"></a>CButton::GetIdealSize  
 Recupera la dimensione ideale per il controllo pulsante.  
  
```  
BOOL GetIdealSize(SIZE* psize);
```  
  
### <a name="parameters"></a>Parametri  
 *psize*  
 Puntatore alla dimensione corrente del pulsante.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità del **BCM_GETIDEALSIZE** del messaggio, come descritto nel [pulsanti](http://msdn.microsoft.com/library/windows/desktop/bb775943) sezione del SDK di Windows.  
  
##  <a name="getimagelist"></a>CButton::GetImageList  
 Chiamare questo metodo per ottenere l'elenco di immagini del controllo pulsante.  
  
```  
BOOL GetImageList(PBUTTON_IMAGELIST pbuttonImagelist);
```  
  
### <a name="parameters"></a>Parametri  
 `pbuttonImagelist`  
 Un puntatore all'elenco di immagini del `CButton` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità del **BCM_GETIMAGELIST** del messaggio, come descritto nel [pulsanti](http://msdn.microsoft.com/library/windows/desktop/bb775943) sezione del SDK di Windows.  
  
##  <a name="getnote"></a>CButton::GetNote  
 Recupera il testo della nota associato al controllo di collegamento di comando corrente.  
  
```  
CString GetNote() const;  
  
BOOL GetNote(
    LPTSTR lpszNote,   
    UINT* cchNote) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[out] `lpszNote`|Puntatore a un buffer, che il chiamante è responsabile dell'allocazione e deallocazione. Se il valore restituito è `true`, il buffer contiene il testo della nota che è associato il controllo collegamento comando corrente; in caso contrario, il buffer è invariato.|  
|[in, out] `cchNote`|Un puntatore a una variabile integer senza segno.<br /><br /> Quando questo metodo viene chiamato, la variabile contiene la dimensione del buffer specificato per il `lpszNote` parametro.<br /><br /> Quando termina, questo metodo se il valore restituito è `true` la variabile contiene la dimensione della nota associata al controllo di collegamento di comando corrente. Se il valore restituito è `false`, la variabile contiene la dimensione del buffer necessaria per contenere la nota.|  
  
### <a name="return-value"></a>Valore restituito  
 Nel primo overload, un [CString](../../atl-mfc-shared/using-cstring.md) oggetto che contiene il testo della nota associato al controllo di collegamento di comando corrente.  
  
 oppure  
  
 Nel secondo overload, `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo solo con i controlli con lo stile pulsante `BS_COMMANDLINK` o `BS_DEFCOMMANDLINK`.  
  
 Questo metodo invia il [BCM_GETNOTE](http://msdn.microsoft.com/library/windows/desktop/bb775965) messaggio, come descritto in Windows SDK.  
  
##  <a name="getnotelength"></a>CButton::GetNoteLength  
 Recupera la lunghezza del testo della nota per il controllo collegamento comando corrente.  
  
```  
UINT GetNoteLength() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La lunghezza del testo della nota, in caratteri Unicode a 16 bit, per il controllo collegamento comando corrente.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo solo con i controlli con lo stile pulsante `BS_COMMANDLINK` o `BS_DEFCOMMANDLINK`.  
  
 Questo metodo invia il [BCM_GETNOTELENGTH](http://msdn.microsoft.com/library/windows/desktop/bb775967) messaggio, come descritto in Windows SDK.  
  
##  <a name="getsplitglyph"></a>CButton::GetSplitGlyph  
 Recupera l'icona associata con il controllo pulsante di menu combinato corrente.  
  
```  
TCHAR GetSplitGlyph() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il carattere di glifo associato il controllo pulsante di menu combinato corrente.  
  
### <a name="remarks"></a>Note  
 Un'icona è la rappresentazione fisica di un carattere in un particolare tipo di carattere. Ad esempio, un controllo pulsante di menu combinato può essere decorato con l'icona del segno di spunta carattere Unicode (U + 2713).  
  
 Utilizzare questo metodo solo con i controlli con lo stile pulsante `BS_SPLITBUTTON` o `BS_DEFSPLITBUTTON`.  
  
 Questo metodo inizializza la `mask` membro di un [BUTTON_SPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775955) struttura con il `BCSIF_GLYPH` flag e quindi lo invia struttura nel [verso](http://msdn.microsoft.com/library/windows/desktop/bb775969) messaggio descritto in Windows SDK. Quando la funzione di messaggio viene restituito, questo metodo recupera l'icona dal `himlGlyph` membro della struttura.  
  
##  <a name="getsplitimagelist"></a>CButton::GetSplitImageList  
 Recupera il [elenco immagini](../../mfc/reference/cimagelist-class.md) per il controllo pulsante di menu combinato corrente.  
  
```  
CImageList* GetSplitImageList() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo solo con i controlli con lo stile pulsante `BS_SPLITBUTTON` o `BS_DEFSPLITBUTTON`.  
  
 Questo metodo inizializza la `mask` membro di un [BUTTON_SPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775955) struttura con il `BCSIF_IMAGE` flag e quindi lo invia struttura nel [verso](http://msdn.microsoft.com/library/windows/desktop/bb775969) messaggio descritto in Windows SDK. Quando la funzione di messaggio viene restituito, questo metodo recupera l'elenco di immagini dal `himlGlyph` membro della struttura.  
  
##  <a name="getsplitinfo"></a>CButton::GetSplitInfo  
 Recupera i parametri che determinano la modalità Windows a disegnare il controllo pulsante di menu combinato corrente.  
  
```  
BOOL GetSplitInfo(PBUTTON_SPLITINFO pInfo) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[out] `pInfo`|Puntatore a un [BUTTON_SPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775955) struttura che riceve informazioni sul controllo pulsante divisione corrente. Il chiamante è responsabile per l'allocazione della struttura.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo solo con i controlli con lo stile pulsante `BS_SPLITBUTTON` o `BS_DEFSPLITBUTTON`.  
  
 Questo metodo invia il [verso](http://msdn.microsoft.com/library/windows/desktop/bb775969) messaggio, come descritto in Windows SDK.  
  
##  <a name="getsplitsize"></a>CButton::GetSplitSize  
 Recupera il rettangolo di delimitazione del componente del menu a discesa il controllo pulsante di menu combinato corrente.  
  
```  
BOOL GetSplitSize(LPSIZE pSize) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[out] `pSize`|Puntatore a un [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura che riceve la descrizione di un rettangolo.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo solo con i controlli con lo stile pulsante `BS_SPLITBUTTON` o `BS_DEFSPLITBUTTON`.  
  
 Quando il controllo pulsante di menu combinato viene espanso, è possibile visualizzare un componente di elenco a discesa, ad esempio un controllo elenco o cercapersone. Questo metodo recupera il rettangolo di delimitazione che contiene il componente elenco a discesa.  
  
 Questo metodo inizializza la `mask` membro di un [BUTTON_SPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775955) struttura con il `BCSIF_SIZE` flag e quindi lo invia struttura nel [verso](http://msdn.microsoft.com/library/windows/desktop/bb775969) messaggio descritto in Windows SDK. Quando la funzione di messaggio viene restituito, questo metodo recupera il rettangolo di delimitazione dal `size` membro della struttura.  
  
##  <a name="getsplitstyle"></a>CButton::GetSplitStyle  
 Recupera gli stili dei pulsanti di menu combinato che definiscono il controllo pulsante di menu combinato corrente.  
  
```  
UINT GetSplitStyle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Combinazione bit per bit di stili dei pulsanti di menu combinato. Per ulteriori informazioni, vedere il `uSplitStyle` appartenente il [BUTTON_SPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775955) struttura.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo solo con i controlli con lo stile pulsante `BS_SPLITBUTTON` o `BS_DEFSPLITBUTTON`.  
  
 Gli stili dei pulsanti di menu combinato specificare l'allineamento, proporzioni e formato grafico con cui Windows disegna un'icona di pulsante di menu combinato.  
  
 Questo metodo inizializza la `mask` membro di un [BUTTON_SPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775955) struttura con il `BCSIF_STYLE` flag e quindi lo invia struttura nel [verso](http://msdn.microsoft.com/library/windows/desktop/bb775969) messaggio descritto in Windows SDK. Quando la funzione di messaggio viene restituito, questo metodo recupera gli stili dei pulsanti di menu combinato dal `uSplitStyle` membro della struttura.  
  
##  <a name="getstate"></a>CButton::GetState  
 Recupera lo stato di un controllo pulsante.  
  
```  
UINT GetState() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un campo di bit che contiene la combinazione di valori che indicano lo stato corrente di un controllo pulsante. Nella tabella seguente sono elencati i valori possibili.  
  
|Stato del pulsante|Valore|Descrizione|  
|------------------|-----------|-----------------|  
|`BST_UNCHECKED`|0x0000|Lo stato iniziale.|  
|`BST_CHECKED`|0x0001|Il controllo pulsante è selezionato.|  
|`BST_INDETERMINATE`|0x0002|Lo stato è indeterminato (possibile solo quando il controllo pulsante ha tre stati).|  
|`BST_PUSHED`|0x0004|Il controllo pulsante è premuto.|  
|`BST_FOCUS`|0x0008|Il controllo pulsante ha lo stato attivo.|  
  
### <a name="remarks"></a>Note  
 Un controllo pulsante di `BS_3STATE` o `BS_AUTO3STATE` stile del pulsante Crea una casella di controllo che lo stato di un terzo denominato stato indeterminato. Lo stato indeterminato indica che la casella di controllo è selezionata né deselezionata.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CButton#9](../../mfc/reference/codesnippet/cpp/cbutton-class_9.cpp)]  
  
##  <a name="gettextmargin"></a>CButton::GetTextMargin  
 Chiamare questo metodo per ottenere il margine di testo del `CButton` oggetto.  
  
```  
BOOL GetTextMargin(RECT* pmargin);
```  
  
### <a name="parameters"></a>Parametri  
 `pmargin`  
 Un puntatore al margine del testo di `CButton` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il margine di testo.  
  
### <a name="remarks"></a>Note  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità del **BCM_GETTEXTMARGIN** del messaggio, come descritto nel [pulsanti](http://msdn.microsoft.com/library/windows/desktop/bb775943) sezione del SDK di Windows.  
  
##  <a name="setbitmap"></a>CButton:: SetBitmap  
 Chiamare questa funzione membro per associare una nuova bitmap con il pulsante.  
  
```  
HBITMAP SetBitmap(HBITMAP hBitmap);
```  
  
### <a name="parameters"></a>Parametri  
 `hBitmap`  
 L'handle di una bitmap.  
  
### <a name="return-value"></a>Valore restituito  
 L'handle di una bitmap in precedenza associata al pulsante.  
  
### <a name="remarks"></a>Note  
 La bitmap verrà posizionata automaticamente sul pulsante, centrato per impostazione predefinita. Se la bitmap è troppo grande per il pulsante, verrà ritagliato su entrambi i lati. È possibile scegliere altre opzioni di allineamento, inclusi i seguenti:  
  
- **BS_TOP**  
  
- **BS_LEFT**  
  
- **BS_RIGHT**  
  
- **BS_CENTER**  
  
- **BS_BOTTOM**  
  
- **BS_VCENTER**  
  
 A differenza di [CBitmapButton](../../mfc/reference/cbitmapbutton-class.md), che utilizza quattro bitmap per ogni pulsante `SetBitmap` utilizza solo una bitmap per ogni pulsante. Quando viene premuto il pulsante, viene visualizzata la bitmap per spostare verso il basso e a destra.  
  
 Si è responsabili del rilascio di bitmap al termine con esso.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CButton#4](../../mfc/reference/codesnippet/cpp/cbutton-class_4.cpp)]  
  
##  <a name="setbuttonstyle"></a>CButton::SetButtonStyle  
 Modifica lo stile di un pulsante.  
  
```  
void SetButtonStyle(
    UINT nStyle,  
    BOOL bRedraw = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `nStyle`  
 Specifica il [pulsante stile](../../mfc/reference/styles-used-by-mfc.md#button-styles).  
  
 `bRedraw`  
 Specifica se il pulsante deve essere ridisegnato. Un valore diverso da zero ridisegna il pulsante. Un valore 0 non ridisegnare il pulsante. Il pulsante viene ridisegnato per impostazione predefinita.  
  
### <a name="remarks"></a>Note  
 Utilizzare il `GetButtonStyle` funzione membro per recuperare lo stile del pulsante. La parola meno significativa dello stile del pulsante completo è lo stile del pulsante specifico.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CButton#5](../../mfc/reference/codesnippet/cpp/cbutton-class_5.cpp)]  
  
##  <a name="setcheck"></a>CButton::SetCheck  
 Imposta o Reimposta lo stato di selezione di un pulsante di opzione o una casella di controllo.  
  
```  
void SetCheck(int nCheck);
```  
  
### <a name="parameters"></a>Parametri  
 `nCheck`  
 Specifica lo stato di controllo. Questo parametro può essere uno dei valori seguenti:  
  
|Valore|Significato|  
|-----------|-------------|  
|**BST_UNCHECKED**|Impostare lo stato del pulsante non è selezionata.|  
|**BST_CHECKED**|Impostare lo stato del pulsante controllare.|  
|**BST_INDETERMINATE**|Impostare lo stato del pulsante su indeterminato. Questo valore può essere utilizzato solo se il pulsante ha il **BS_3STATE** o **BS_AUTO3STATE** stile.|  
  
### <a name="remarks"></a>Note  
 Questa funzione membro non ha effetto su un pulsante di comando.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CButton#6](../../mfc/reference/codesnippet/cpp/cbutton-class_6.cpp)]  
  
##  <a name="setcursor"></a>CButton::SetCursor  
 Chiamare questa funzione membro per associare un nuovo cursore con il pulsante.  
  
```  
HCURSOR SetCursor(HCURSOR hCursor);
```  
  
### <a name="parameters"></a>Parametri  
 `hCursor`  
 L'handle di un cursore.  
  
### <a name="return-value"></a>Valore restituito  
 L'handle di un cursore precedentemente associato al pulsante.  
  
### <a name="remarks"></a>Note  
 Verrà inserito automaticamente il cursore sul pulsante, centrato per impostazione predefinita. Se il cursore è troppo grande per il pulsante, verrà ritagliato su entrambi i lati. È possibile scegliere altre opzioni di allineamento, inclusi i seguenti:  
  
- **BS_TOP**  
  
- **BS_LEFT**  
  
- **BS_RIGHT**  
  
- **BS_CENTER**  
  
- **BS_BOTTOM**  
  
- **BS_VCENTER**  
  
 A differenza di [CBitmapButton](../../mfc/reference/cbitmapbutton-class.md), che utilizza quattro bitmap per ogni pulsante `SetCursor` utilizza solo un cursore per il pulsante. Quando viene premuto il pulsante, viene visualizzato il cursore per spostare verso il basso e a destra.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CButton#7](../../mfc/reference/codesnippet/cpp/cbutton-class_7.cpp)]  
  
##  <a name="setdropdownstate"></a>CButton::SetDropDownState  
 Imposta lo stato di riepilogo a discesa del controllo pulsante di menu combinato corrente.  
  
```  
BOOL SetDropDownState(BOOL fDropDown);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `fDropDown`|`true`Per impostare `BST_DROPDOWNPUSHED` stato; in caso contrario, `false`.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Un controllo pulsante di menu combinato con uno stile di `BS_SPLITBUTTON` o `BS_DEFSPLITBUTTON` ed è costituito da un pulsante e una freccia a discesa a destra. Per ulteriori informazioni, vedere [stili dei pulsanti](http://msdn.microsoft.com/library/windows/desktop/bb775951). In genere, lo stato di riepilogo a discesa viene impostato quando l'utente fa clic sulla freccia a discesa. Utilizzare questo metodo per impostare a livello di codice lo stato di riepilogo a discesa del controllo. La freccia a discesa viene disegnata ombreggiata per indicare lo stato.  
  
 Questo metodo invia il [BCM_SETDROPDOWNSTATE](http://msdn.microsoft.com/library/windows/desktop/bb775973) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile `m_splitButton`, che viene utilizzato per accedere a livello di codice il controllo pulsante di menu combinato. Questa variabile viene utilizzata nell'esempio seguente.  
  
 [!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente imposta lo stato del controllo pulsante di divisione per indicare che viene inserita la freccia a discesa.  
  
 [!code-cpp[NVC_MFC_CButton_s1#6](../../mfc/reference/codesnippet/cpp/cbutton-class_11.cpp)]  
  
##  <a name="setelevationrequired"></a>CButton::SetElevationRequired  
 Imposta lo stato del controllo pulsante corrente da `elevation required`, che è necessario per il controllo visualizzare un'icona di sicurezza con privilegi elevati.  
  
```  
BOOL SetElevationRequired(BOOL fElevationRequired);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `fElevationRequired`|`true`Per impostare `elevation required` stato; in caso contrario, `false`.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Se un controllo pulsante o il comando di collegamento è necessaria l'autorizzazione di sicurezza con privilegi elevati per eseguire un'azione, impostare il controllo `elevation required` stato. Successivamente, Windows viene visualizzata l'icona dello scudo controllo Account utente (UAC) sul controllo. Per ulteriori informazioni, vedere "Controllo dell'Account utente" all'indirizzo [MSDN](http://go.microsoft.com/fwlink/p/?linkid=18507).  
  
 Questo metodo invia il [BCM_SETSHIELD](http://msdn.microsoft.com/library/windows/desktop/bb775979) messaggio, come descritto in Windows SDK.  
  
##  <a name="seticon"></a>CButton::SetIcon  
 Chiamare questa funzione membro per associare una nuova icona con il pulsante.  
  
```  
HICON SetIcon(HICON hIcon);
```  
  
### <a name="parameters"></a>Parametri  
 `hIcon`  
 L'handle di un'icona.  
  
### <a name="return-value"></a>Valore restituito  
 L'handle di un'icona in precedenza associata al pulsante.  
  
### <a name="remarks"></a>Note  
 L'icona verrà inserito automaticamente sul pulsante, centrato per impostazione predefinita. Se l'icona è troppo grande per il pulsante, verrà ritagliato su entrambi i lati. È possibile scegliere altre opzioni di allineamento, inclusi i seguenti:  
  
- **BS_TOP**  
  
- **BS_LEFT**  
  
- **BS_RIGHT**  
  
- **BS_CENTER**  
  
- **BS_BOTTOM**  
  
- **BS_VCENTER**  
  
 A differenza di [CBitmapButton](../../mfc/reference/cbitmapbutton-class.md), che utilizza quattro bitmap per ogni pulsante `SetIcon` Usa solo un'icona per ogni pulsante. Quando viene premuto il pulsante, viene visualizzata l'icona per spostare verso il basso e a destra.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CButton#8](../../mfc/reference/codesnippet/cpp/cbutton-class_8.cpp)]  
  
##  <a name="setimagelist"></a>CButton::SetImageList  
 Chiamare questo metodo per impostare l'elenco delle immagini di `CButton` oggetto.  
  
```  
BOOL SetImageList(PBUTTON_IMAGELIST pbuttonImagelist);
```  
  
### <a name="parameters"></a>Parametri  
 `pbuttonImagelist`  
 Un puntatore per il nuovo elenco di immagini.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** in caso di esito positivo **FALSE** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità del **BCM_SETIMAGELIST** del messaggio, come descritto nel [pulsanti](http://msdn.microsoft.com/library/windows/desktop/bb775943) sezione del SDK di Windows.  
  
##  <a name="setnote"></a>CButton::SetNote  
 Imposta il testo della nota per il controllo collegamento comando corrente.  
  
```  
BOOL SetNote(LPCTSTR lpszNote);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `lpszNote`|Puntatore a una stringa Unicode che viene impostata come il testo della nota per il comando del collegamento.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo solo con i controlli con lo stile pulsante `BS_COMMANDLINK` o `BS_DEFCOMMANDLINK`.  
  
 Questo metodo invia il [BCM_SETNOTE](http://msdn.microsoft.com/library/windows/desktop/bb775977) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile `m_cmdLink`, che viene utilizzato per accedere a livello di codice il comando del collegamento. Questa variabile viene utilizzata nell'esempio seguente.  
  
 [!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente imposta il testo della nota per il comando del collegamento.  
  
 [!code-cpp[NVC_MFC_CButton_s1#7](../../mfc/reference/codesnippet/cpp/cbutton-class_12.cpp)]  
  
##  <a name="setsplitglyph"></a>CButton::SetSplitGlyph  
 Associa un glifo specificato con il controllo pulsante di menu combinato corrente.  
  
```  
BOOL SetSplitGlyph(TCHAR chGlyph);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `chGlyph`|Un carattere che specifica l'icona da utilizzare come la divisione pulsante freccia in giù.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo solo con i controlli che hanno lo stile del pulsante `BS_SPLITBUTTON` o `BS_DEFSPLITBUTTON`.  
  
 Un'icona è la rappresentazione fisica di un carattere in un particolare tipo di carattere. Il `chGlyph` parametro non viene utilizzato come l'icona, ma viene invece utilizzata per selezionare un glifo da un set di icone definita dal sistema. L'icona della freccia predefinito specificato da un carattere '6' e il carattere Unicode TRIANGOLO nero verso il basso verso l'alto (U + 25BC) è simile.  
  
 Questo metodo inizializza la `mask` membro di un [BUTTON_SPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775955) struttura con il `BCSIF_GLYPH` flag e `himlGlyph` membro con il `chGlyph` parametro e quindi lo invia struttura nel [ Verso](http://msdn.microsoft.com/library/windows/desktop/bb775969) messaggio in cui è descritto in Windows SDK.  
  
##  <a name="setsplitimagelist"></a>CButton::SetSplitImageList  
 Associa un [elenco immagini](../../mfc/reference/cimagelist-class.md) con il controllo pulsante di menu combinato corrente.  
  
```  
BOOL SetSplitImageList(CImageList* pSplitImageList);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `pSplitImageList`|Puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto da assegnare per il controllo pulsante di menu combinato corrente.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo solo con i controlli con lo stile pulsante `BS_SPLITBUTTON` o `BS_DEFSPLITBUTTON`.  
  
 Questo metodo inizializza la `mask` membro di un [BUTTON_SPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775955) struttura con il `BCSIF_IMAGE` flag e `himlGlyph` membro con il `pSplitImageList` parametro e quindi lo invia struttura nel [ Verso](http://msdn.microsoft.com/library/windows/desktop/bb775969) messaggio in cui è descritto in Windows SDK.  
  
##  <a name="setsplitinfo"></a>CButton::SetSplitInfo  
 Specifica i parametri che determinano la modalità Windows a disegnare il controllo pulsante di menu combinato corrente.  
  
```  
BOOL SetSplitInfo(PBUTTON_SPLITINFO pInfo);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `pInfo`|Puntatore a un [BUTTON_SPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775955) struttura che definisce il controllo pulsante di menu combinato corrente.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo solo con i controlli con lo stile pulsante `BS_SPLITBUTTON` o `BS_DEFSPLITBUTTON`.  
  
 Questo metodo invia il [BCM_SETSPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775981) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile `m_splitButton`, che viene utilizzato per accedere a livello di codice il controllo pulsante di menu combinato.  
  
 [!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente viene modificata l'icona utilizzata per la divisione pulsante freccia in giù. L'esempio sostituisce un'icona triangolo verso l'alto per l'icona triangolo verso l'alto verso il basso predefinito. L'icona visualizzata dipende il carattere specificato nella `himlGlyph` appartenente il `BUTTON_SPLITINFO` struttura. L'icona triangolo verso l'alto verso il basso viene specificato da un carattere ' 6 'e l'icona triangolo verso l'alto è specificato da un carattere ' 5'. Per il confronto, vedere il metodo di praticità, [CButton::SetSplitGlyph](#setsplitglyph).  
  
 [!code-cpp[NVC_MFC_CButton_s1#4](../../mfc/reference/codesnippet/cpp/cbutton-class_13.cpp)]  
  
##  <a name="setsplitsize"></a>CButton::SetSplitSize  
 Imposta il rettangolo di delimitazione del componente del menu a discesa il controllo pulsante di menu combinato corrente.  
  
```  
BOOL SetSplitSize(LPSIZE pSize);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `pSize`|Puntatore a un [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura che descrive un rettangolo di delimitazione.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo solo con i controlli con lo stile pulsante `BS_SPLITBUTTON` o `BS_DEFSPLITBUTTON`.  
  
 Quando il controllo pulsante di menu combinato viene espanso, è possibile visualizzare un componente di elenco a discesa, ad esempio un controllo elenco o cercapersone. Questo metodo specifica le dimensioni del rettangolo di delimitazione che contiene il componente elenco a discesa.  
  
 Questo metodo inizializza la `mask` membro di un [BUTTON_SPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775955) struttura con il `BCSIF_SIZE` flag e `size` membro con il `pSize` parametro e quindi lo invia struttura nel [ Verso](http://msdn.microsoft.com/library/windows/desktop/bb775969) messaggio in cui è descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile `m_splitButton`, che viene utilizzato per accedere a livello di codice il controllo pulsante di menu combinato. Questa variabile viene utilizzata nell'esempio seguente.  
  
 [!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente raddoppia le dimensioni della divisione pulsante freccia in giù.  
  
 [!code-cpp[NVC_MFC_CButton_s1#5](../../mfc/reference/codesnippet/cpp/cbutton-class_14.cpp)]  
  
##  <a name="setsplitstyle"></a>CButton::SetSplitStyle  
 Imposta lo stile del controllo pulsante di menu combinato corrente.  
  
```  
BOOL SetSplitStyle(UINT uSplitStyle);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `uSplitStyle`|Combinazione bit per bit di stili dei pulsanti di menu combinato. Per ulteriori informazioni, vedere il `uSplitStyle` appartenente il [BUTTON_SPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775955) struttura.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo solo con i controlli con lo stile pulsante `BS_SPLITBUTTON` o `BS_DEFSPLITBUTTON`.  
  
 Gli stili dei pulsanti di menu combinato specificare l'allineamento, proporzioni e formato grafico con cui Windows disegna un'icona di pulsante di menu combinato. Per ulteriori informazioni, vedere il `uSplitStyle` appartenente il [BUTTON_SPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775955) struttura.  
  
 Questo metodo inizializza la `mask` membro di un [BUTTON_SPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775955) struttura con il `BCSIF_STYLE` flag e `uSplitStyle` membro con il `uSplitStyle` parametro e quindi lo invia struttura nel [ Verso](http://msdn.microsoft.com/library/windows/desktop/bb775969) messaggio in cui è descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile `m_splitButton`, che viene utilizzato per accedere a livello di codice il controllo pulsante di menu combinato.  
  
 [!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente imposta lo stile della freccia giù pulsante split. Il `BCSS_ALIGNLEFT` stile consente di visualizzare la freccia a sinistra del pulsante e `BCSS_STRETCH` stile mantiene le proporzioni della freccia dell'elenco a discesa quando si ridimensiona il pulsante.  
  
 [!code-cpp[NVC_MFC_CButton_s1#3](../../mfc/reference/codesnippet/cpp/cbutton-class_15.cpp)]  
  
##  <a name="setstate"></a>CButton::SetState  
 Determina se un controllo pulsante è evidenziato o meno.  
  
```  
void SetState(BOOL bHighlight);
```  
  
### <a name="parameters"></a>Parametri  
 *bHighlight*  
 Specifica se il pulsante deve essere evidenziato. Un valore diverso da zero evidenzia il pulsante. un valore 0 consente di rimuovere qualsiasi evidenziazione.  
  
### <a name="remarks"></a>Note  
 Evidenziazione interessa l'anello esterno di un controllo pulsante. Non ha alcun effetto sullo stato di controllo di un pulsante di opzione o una casella di controllo.  
  
 Un controllo button viene automaticamente evidenziato quando l'utente fa clic e il pulsante sinistro del mouse. L'evidenziazione viene rimosso quando l'utente rilascia il pulsante del mouse.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CButton#9](../../mfc/reference/codesnippet/cpp/cbutton-class_9.cpp)]  
  
##  <a name="settextmargin"></a>CButton::SetTextMargin  
 Chiamare questo metodo per impostare il margine di testo del `CButton` oggetto.  
  
```  
BOOL SetTextMargin(RECT* pmargin);
```  
  
### <a name="parameters"></a>Parametri  
 `pmargin`  
 Un puntatore per il nuovo margine di testo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità del **BCM_SETTEXTMARGIN** del messaggio, come descritto nel [pulsanti](http://msdn.microsoft.com/library/windows/desktop/bb775943) sezione del SDK di Windows.  
  
## <a name="see-also"></a>Vedere anche  
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [CComboBox (classe)](../../mfc/reference/ccombobox-class.md)   
 [Classe CEdit](../../mfc/reference/cedit-class.md)   
 [CListBox (classe)](../../mfc/reference/clistbox-class.md)   
 [Classe CScrollBar](../../mfc/reference/cscrollbar-class.md)   
 [Classe CStatic](../../mfc/reference/cstatic-class.md)   
 [Classe CBitmapButton](../../mfc/reference/cbitmapbutton-class.md)   
 [Classe CDialog](../../mfc/reference/cdialog-class.md)
