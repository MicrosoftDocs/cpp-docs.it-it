---
title: Classe CButton
ms.date: 11/04/2016
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
ms.openlocfilehash: 3283e974dc2b933049599fba0b6cf51c32a18ef3
ms.sourcegitcommit: 28eae422049ac3381c6b1206664455dbb56cbfb6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/31/2019
ms.locfileid: "66450841"
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
|[CButton::Create](#create)|Crea il controllo pulsante Windows e lo collega al `CButton` oggetto.|
|[CButton::DrawItem](#drawitem)|Eseguire l'override per disegnare un proprietario `CButton` oggetto.|
|[CButton::GetBitmap](#getbitmap)|Recupera l'handle di bitmap impostata in precedenza con [SetBitmap](#setbitmap).|
|[CButton::GetButtonStyle](#getbuttonstyle)|Recupera informazioni sullo stile del controllo pulsante.|
|[CButton::GetCheck](#getcheck)|Recupera lo stato di un controllo pulsante di selezione.|
|[CButton::GetCursor](#getcursor)|Recupera l'handle dell'immagine del cursore è impostato in precedenza con [SetCursor](#setcursor).|
|[CButton::GetIcon](#geticon)|Recupera l'handle dell'icona impostato in precedenza con [SetIcon](#seticon).|
|[CButton::GetIdealSize](#getidealsize)|Recupera la dimensione ideale del controllo pulsante.|
|[CButton::GetImageList](#getimagelist)|Recupera l'elenco di immagini del controllo pulsante.|
|[CButton::GetNote](#getnote)|Recupera il componente nota del controllo collegamento comando corrente.|
|[CButton::GetNoteLength](#getnotelength)|Recupera la lunghezza del testo della nota per il controllo command link corrente.|
|[CButton::GetSplitGlyph](#getsplitglyph)|Recupera il glifo associato il controllo pulsante di menu combinato corrente.|
|[CButton::GetSplitImageList](#getsplitimagelist)|Recupera l'elenco di immagini per il controllo pulsante di menu combinato corrente.|
|[CButton::GetSplitInfo](#getsplitinfo)|Recupera le informazioni che definiscono il controllo pulsante di menu combinato corrente.|
|[CButton::GetSplitSize](#getsplitsize)|Recupera il rettangolo di delimitazione del componente elenco a discesa del controllo pulsante di divisione corrente.|
|[CButton::GetSplitStyle](#getsplitstyle)|Recupera gli stili dei pulsanti di suddivisione che definiscono il controllo pulsante di menu combinato corrente.|
|[CButton::GetState](#getstate)|Recupera il controllo dello stato, lo stato di evidenziazione e stato attivo di un controllo pulsante.|
|[CButton::GetTextMargin](#gettextmargin)|Recupera il margine di testo del controllo pulsante.|
|[CButton::SetBitmap](#setbitmap)|Specifica una bitmap da visualizzare sul pulsante.|
|[CButton::SetButtonStyle](#setbuttonstyle)|Modifica lo stile di un pulsante.|
|[CButton::SetCheck](#setcheck)|Imposta lo stato di un controllo pulsante di selezione.|
|[CButton::SetCursor](#setcursor)|Specifica un'immagine di cursore da visualizzare sul pulsante.|
|[CButton::SetDropDownState](#setdropdownstate)|Imposta lo stato di riepilogo a discesa del controllo pulsante di divisione corrente.|
|[CButton::SetIcon](#seticon)|Specifica l'icona da visualizzare sul pulsante.|
|[CButton::SetImageList](#setimagelist)|Imposta l'elenco di immagini del controllo pulsante.|
|[CButton::SetNote](#setnote)|Imposta la nota il controllo di collegamento di comando corrente.|
|[CButton::SetSplitGlyph](#setsplitglyph)|Associa un glifo specificato con il controllo pulsante di menu combinato corrente.|
|[CButton::SetSplitImageList](#setsplitimagelist)|Associa un elenco di immagini con il controllo pulsante di menu combinato corrente.|
|[CButton::SetSplitInfo](#setsplitinfo)|Specifica le informazioni che definiscono il controllo pulsante di menu combinato corrente.|
|[CButton::SetSplitSize](#setsplitsize)|Imposta il rettangolo di delimitazione del componente elenco a discesa del controllo pulsante di divisione corrente.|
|[CButton::SetSplitStyle](#setsplitstyle)|Imposta lo stile del controllo pulsante di divisione corrente.|
|[CButton::SetState](#setstate)|Imposta lo stato di evidenziazione dei risultati di un controllo pulsante.|
|[CButton::SetTextMargin](#settextmargin)|Imposta il margine di testo del controllo pulsante.|

## <a name="remarks"></a>Note

Un controllo pulsante è una finestra figlio di piccole dimensioni, rettangolare che può essere selezionata e disattivare. Pulsanti possono essere usati da solo o in gruppi e possono essere identificato dall'etichetta o visualizzata senza testo. Un pulsante Modifica in genere l'aspetto quando viene selezionato dall'utente.

I tipici pulsanti sono la casella di controllo pulsante di opzione e pulsante di comando. Oggetto `CButton` oggetti possono diventare uno di questi valori in base al [pulsante stile](../../mfc/reference/styles-used-by-mfc.md#button-styles) specificato nella relativa inizializzazione dal [crea](#create) funzione membro.

Inoltre, il [CBitmapButton](../../mfc/reference/cbitmapbutton-class.md) classe derivata da `CButton` supporta la creazione di controlli pulsanti contrassegnati con le immagini bitmap anziché di testo. Oggetto `CBitmapButton` può avere separate le bitmap per un pulsante del, verso il basso, con stato attivo e disabilitati gli stati.

È possibile creare un controllo button da un modello di finestra di dialogo o direttamente nel codice. In entrambi i casi, chiamare prima il costruttore `CButton` per costruire il `CButton` dell'oggetto, quindi chiamare il `Create` funzione membro per creare la Windows controllo button e associarlo al `CButton` oggetto.

Costruzione può essere un processo in un passaggio in una classe derivata da `CButton`. Scrivere un costruttore per la classe derivata e chiamare `Create` all'interno del costruttore.

Se si desidera gestire i messaggi di notifica Windows inviati da un controllo pulsante al relativo elemento padre (in genere una classe derivata da [CDialog](../../mfc/reference/cdialog-class.md)), aggiungere una funzione membro della mappa messaggi voce e gestore di messaggi alla classe padre per ogni messaggio.

Ogni voce nella mappa messaggi assume il formato seguente:

**VIA\_** _notifica_ **(** _id_, _memberFxn_ **)**

in cui *id* specifica l'ID della finestra figlio del controllo che invia la notifica e *memberFxn* è il nome della funzione membro padre scritta per gestire la notifica.

Prototipo di funzione dell'elemento padre è il seguente:

`afx_msg void memberFxn();`

Le voci della mappa messaggi possibili sono i seguenti:

|Voce della mappa|Inviato al padre quando...|
|---------------|----------------------------|
|ON_BN_CLICKED|L'utente sceglie un pulsante.|
|ON_BN_DOUBLECLICKED|L'utente fa doppio clic su un pulsante.|

Se si crea una `CButton` oggetto da una risorsa finestra di dialogo, il `CButton` oggetto viene eliminato automaticamente quando l'utente chiude la finestra di dialogo.

Se si crea un `CButton` dell'oggetto all'interno di una finestra, potrebbe essere necessario eliminarlo. Se si crea il `CButton` oggetto sull'heap tramite il **nuovi** funzione, è necessario chiamare **eliminare** sull'oggetto per eliminarla definitivamente quando l'utente chiude Windows il controllo pulsante. Se si crea il `CButton` oggetto nello stack oppure è incorporato nell'oggetto padre della finestra, venga eliminato automaticamente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CButton`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="cbutton"></a>  CButton::CButton

Costruisce un oggetto `CButton`.

```
CButton();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#1](../../mfc/reference/codesnippet/cpp/cbutton-class_1.cpp)]

##  <a name="create"></a>  CButton::Create

Crea il controllo pulsante Windows e lo collega al `CButton` oggetto.

```
virtual BOOL Create(
    LPCTSTR lpszCaption,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*lpszCaption*<br/>
Specifica il testo del controllo pulsante.

*dwStyle*<br/>
Specifica lo stile del controllo pulsante. Applicare qualsiasi combinazione di [stili di pulsante](../../mfc/reference/styles-used-by-mfc.md#button-styles) al pulsante.

*rect*<br/>
Specifica le dimensioni e la posizione del controllo pulsante. Può essere un' `CRect` oggetto o un `RECT` struttura.

*pParentWnd*<br/>
Specifica finestra padre del controllo button, in genere un `CDialog`. Non deve essere NULL.

*nID*<br/>
Specifica l'ID. del controllo pulsante

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Si costruisce un `CButton` oggetto in due passaggi. In primo luogo, chiamare il costruttore e quindi chiamare `Create`, che crea il controllo pulsante Windows e lo collega al `CButton` oggetto.

Se si specifica lo stile WS_VISIBLE, il controllo button Windows invia tutti i messaggi necessari per attivare e visualizzare il pulsante.

Applicare la seguente istruzione [stili di finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) a un controllo pulsante:

- WS_CHILD sempre

- In genere WS_VISIBLE

- WS_DISABLED raramente

- WS_GROUP ai controlli di gruppo

- WS_TABSTOP per includere il pulsante nell'ordine di tabulazione

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#2](../../mfc/reference/codesnippet/cpp/cbutton-class_2.cpp)]

##  <a name="drawitem"></a>  CButton::DrawItem

Chiamato dal framework quando viene modificato un aspetto visivo di un pulsante creato dal proprietario.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*lpDrawItemStruct*<br/>
Un puntatore di tipo long a un [DRAWITEMSTRUCT](/windows/desktop/api/winuser/ns-winuser-tagdrawitemstruct) struttura. La struttura contiene informazioni sull'elemento da disegnare e il tipo di disegno necessaria.

### <a name="remarks"></a>Note

Un pulsante creato dal proprietario è lo stile BS_OWNERDRAW impostato. Eseguire l'override di questa funzione membro per implementare la creazione per un proprietario `CButton` oggetto. L'applicazione è necessario ripristinare tutti grafica device interface (GDI) gli oggetti selezionati per il contesto di visualizzazione fornito *lpDrawItemStruct* prima del membro funzione termina.

Vedere anche il [BS_](../../mfc/reference/styles-used-by-mfc.md#button-styles) i valori di stile.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#3](../../mfc/reference/codesnippet/cpp/cbutton-class_3.cpp)]

##  <a name="getbitmap"></a>  CButton::GetBitmap

Chiamare questa funzione membro per ottenere l'handle di una bitmap, impostata in precedenza con [SetBitmap](#setbitmap), che viene associato un pulsante.

```
HBITMAP GetBitmap() const;
```

### <a name="return-value"></a>Valore restituito

Handle per una bitmap. NULL se nessun bitmap viene specificata in precedenza.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#4](../../mfc/reference/codesnippet/cpp/cbutton-class_4.cpp)]

##  <a name="getbuttonstyle"></a>  CButton::GetButtonStyle

Recupera informazioni sullo stile del controllo pulsante.

```
UINT GetButtonStyle() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce gli stili dei pulsanti per l'oggetto `CButton` oggetto. Questa funzione restituisce solo le [BS_](../../mfc/reference/styles-used-by-mfc.md#button-styles) i valori di stile, non uno qualsiasi degli altri stili di finestra.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#5](../../mfc/reference/codesnippet/cpp/cbutton-class_5.cpp)]

##  <a name="getcheck"></a>  CButton::GetCheck

Recupera lo stato di selezione di un pulsante di opzione o casella di controllo.

```
int GetCheck() const;
```

### <a name="return-value"></a>Valore restituito

Il valore restituito da un controllo pulsante creato con BS_AUTOCHECKBOX, BS_AUTORADIOBUTTON, BS_AUTO3STATE, BS_CHECKBOX, BS_RADIOBUTTON o stile BS_3STATE è uno dei valori seguenti:

|Value|Significato|
|-----------|-------------|
|BST_UNCHECKED|Stato del pulsante è deselezionato.|
|BST_CHECKED|Stato del pulsante è selezionato.|
|BST_INDETERMINATE|Stato del pulsante è indeterminato (si applica solo se il pulsante è applicato lo stile BS_3STATE o BS_AUTO3STATE).|

Se il pulsante ha altri stili, il valore restituito è BST_UNCHECKED.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#6](../../mfc/reference/codesnippet/cpp/cbutton-class_6.cpp)]

##  <a name="getcursor"></a>  CButton::GetCursor

Chiamare questa funzione membro per ottenere l'handle di un cursore, impostato in precedenza con [SetCursor](#setcursor), che viene associato un pulsante.

```
HCURSOR GetCursor();
```

### <a name="return-value"></a>Valore restituito

Handle per un'immagine del cursore. NULL se nessun cursore è specificato in precedenza.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#7](../../mfc/reference/codesnippet/cpp/cbutton-class_7.cpp)]

##  <a name="geticon"></a>  CButton::GetIcon

Chiamare questa funzione membro per ottenere l'handle di un set di icone, in precedenza con [SetIcon](#seticon), che viene associato un pulsante.

```
HICON GetIcon() const;
```

### <a name="return-value"></a>Valore restituito

Handle per un'icona. NULL se non viene specificata in precedenza alcuna icona.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#8](../../mfc/reference/codesnippet/cpp/cbutton-class_8.cpp)]

##  <a name="getidealsize"></a>  CButton::GetIdealSize

Recupera la dimensione ideale per il controllo button.

```
BOOL GetIdealSize(SIZE* psize);
```

### <a name="parameters"></a>Parametri

*psize*<br/>
Un puntatore alla dimensione corrente del pulsante.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro emula la funzionalità del messaggio BCM_GETIDEALSIZE, come descritto nel [pulsanti](/windows/desktop/controls/buttons) sezione del SDK di Windows.

##  <a name="getimagelist"></a>  CButton::GetImageList

Chiamare questo metodo per ottenere l'elenco di immagini dal controllo pulsante.

```
BOOL GetImageList(PBUTTON_IMAGELIST pbuttonImagelist);
```

### <a name="parameters"></a>Parametri

*pbuttonImagelist*<br/>
Un puntatore all'elenco di immagini del `CButton` oggetto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro emula la funzionalità del messaggio BCM_GETIMAGELIST, come descritto nel [pulsanti](/windows/desktop/controls/buttons) sezione del SDK di Windows.

##  <a name="getnote"></a>  CButton::GetNote

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
|*lpszNote*|[out] Puntatore a un buffer, a cui il chiamante è responsabile dell'allocazione e deallocazione. Se il valore restituito è TRUE, il buffer contiene il testo della nota che è associato il controllo di collegamento comandi corrente; in caso contrario, il buffer è invariato.|
|*cchNote*|[in, out] Un puntatore a una variabile integer senza segno.<br /><br /> Quando questo metodo viene chiamato, la variabile contiene la dimensione del buffer specificata per il *lpszNote* parametro.<br /><br /> Quando il metodo termina, se il valore restituito è TRUE, la variabile contiene la dimensione della nota associata al controllo di collegamento di comando corrente. Se il valore restituito è FALSE, la variabile contiene la dimensione del buffer necessaria per contenere la nota.|

### <a name="return-value"></a>Valore restituito

Nel primo overload, una [CString](../../atl-mfc-shared/using-cstring.md) oggetto che contiene il testo della nota associato al controllo di collegamento di comando corrente.

-oppure-

Nel secondo overload, TRUE se il metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Usare questo metodo solo con i controlli cui stile del pulsante è BS_COMMANDLINK o BS_DEFCOMMANDLINK.

Questo metodo invia il [BCM_GETNOTE](/windows/desktop/Controls/bcm-getnote) messaggio, che è descritti nel SDK di Windows.

##  <a name="getnotelength"></a>  CButton::GetNoteLength

Recupera la lunghezza del testo della nota per il controllo command link corrente.

```
UINT GetNoteLength() const;
```

### <a name="return-value"></a>Valore restituito

La lunghezza del testo della nota, in caratteri Unicode a 16 bit, per il controllo command link corrente.

### <a name="remarks"></a>Note

Usare questo metodo solo con i controlli cui stile del pulsante è BS_COMMANDLINK o BS_DEFCOMMANDLINK.

Questo metodo invia il [BCM_GETNOTELENGTH](/windows/desktop/Controls/bcm-getnotelength) messaggio, che è descritti nel SDK di Windows.

##  <a name="getsplitglyph"></a>  CButton::GetSplitGlyph

Recupera il glifo associato il controllo pulsante di menu combinato corrente.

```
TCHAR GetSplitGlyph() const;
```

### <a name="return-value"></a>Valore restituito

Il carattere del glifo associato il controllo pulsante di menu combinato corrente.

### <a name="remarks"></a>Note

Un glifo è la rappresentazione fisica di un carattere in un particolare tipo di carattere. Ad esempio, un controllo split button potrebbe essere decorato con l'icona del segno di spunta carattere Unicode (U+10000 2713).

Usare questo metodo solo con i controlli cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Questo metodo inizializza la `mask` membro di un [BUTTON_SPLITINFO](/windows/desktop/api/commctrl/ns-commctrl-tagbutton_splitinfo) struttura con il flag BCSIF_GLYPH e successivo invio che la struttura nel [verso](/windows/desktop/Controls/bcm-getsplitinfo) messaggio che è descritti nel Windows SDK. Quando termina la funzione di messaggio, questo metodo recupera il glifo dal `himlGlyph` membro della struttura.

##  <a name="getsplitimagelist"></a>  CButton::GetSplitImageList

Recupera le [elenco di immagini](../../mfc/reference/cimagelist-class.md) per il controllo pulsante di menu combinato corrente.

```
CImageList* GetSplitImageList() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto.

### <a name="remarks"></a>Note

Usare questo metodo solo con i controlli cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Questo metodo inizializza la `mask` membro di un [BUTTON_SPLITINFO](/windows/desktop/api/commctrl/ns-commctrl-tagbutton_splitinfo) struttura con il flag BCSIF_IMAGE e successivo invio che la struttura nel [verso](/windows/desktop/Controls/bcm-getsplitinfo) messaggio che è descritti nel Windows SDK. Quando termina la funzione di messaggio, questo metodo recupera l'elenco di immagini dal `himlGlyph` membro della struttura.

##  <a name="getsplitinfo"></a>  CButton::GetSplitInfo

Recupera i parametri che determinano il modo in cui Windows consente di disegnare il controllo pulsante di menu combinato corrente.

```
BOOL GetSplitInfo(PBUTTON_SPLITINFO pInfo) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pInfo*|[out] Puntatore a un [BUTTON_SPLITINFO](/windows/desktop/api/commctrl/ns-commctrl-tagbutton_splitinfo) struttura che riceve informazioni sul controllo pulsante divisione corrente. Il chiamante è responsabile dell'allocazione della struttura.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Usare questo metodo solo con i controlli cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Questo metodo invia il [verso](/windows/desktop/Controls/bcm-getsplitinfo) messaggio, che è descritti nel SDK di Windows.

##  <a name="getsplitsize"></a>  CButton::GetSplitSize

Recupera il rettangolo di delimitazione del componente elenco a discesa del controllo pulsante di divisione corrente.

```
BOOL GetSplitSize(LPSIZE pSize) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pSize*|[out] Puntatore a un [dimensioni](/windows/desktop/api/windef/ns-windef-tagsize) struttura che riceve la descrizione di un rettangolo.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Usare questo metodo solo con i controlli cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Quando il controllo pulsante di menu combinato viene espanso, è possibile visualizzare un elenco a discesa componente, ad esempio un controllo di elenco o un controllo pager. Questo metodo recupera il rettangolo di delimitazione che contiene il componente elenco a discesa.

Questo metodo inizializza la `mask` membro di un [BUTTON_SPLITINFO](/windows/desktop/api/commctrl/ns-commctrl-tagbutton_splitinfo) struttura con il flag BCSIF_SIZE e successivo invio che la struttura nel [verso](/windows/desktop/Controls/bcm-getsplitinfo) messaggio che è descritti nel Windows SDK. Quando termina la funzione di messaggio, questo metodo recupera il rettangolo di delimitazione dal `size` membro della struttura.

##  <a name="getsplitstyle"></a>  CButton::GetSplitStyle

Recupera gli stili dei pulsanti di suddivisione che definiscono il controllo pulsante di menu combinato corrente.

```
UINT GetSplitStyle() const;
```

### <a name="return-value"></a>Valore restituito

Combinazione bit per bit di stili di pulsante di divisione. Per altre informazioni, vedere la `uSplitStyle` membro della [BUTTON_SPLITINFO](/windows/desktop/api/commctrl/ns-commctrl-tagbutton_splitinfo) struttura.

### <a name="remarks"></a>Note

Usare questo metodo solo con i controlli cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Gli stili dei pulsanti di suddivisione specificare l'allineamento, proporzioni e formato grafico con cui Windows disegna un'icona di pulsante di divisione.

Questo metodo inizializza la `mask` membro di un [BUTTON_SPLITINFO](/windows/desktop/api/commctrl/ns-commctrl-tagbutton_splitinfo) struttura con il flag BCSIF_STYLE e successivo invio che la struttura nel [verso](/windows/desktop/Controls/bcm-getsplitinfo) messaggio che è descritti nel Windows SDK. Quando termina la funzione di messaggio, questo metodo recupera gli stili dei pulsanti di suddivisione dal `uSplitStyle` membro della struttura.

##  <a name="getstate"></a>  CButton::GetState

Recupera lo stato di un controllo pulsante.

```
UINT GetState() const;
```

### <a name="return-value"></a>Valore restituito

Un campo di bit che contiene la combinazione di valori che indicano lo stato corrente di un controllo pulsante. La tabella seguente elenca i valori possibili.

|Stato del pulsante|Value|Descrizione|
|------------------|-----------|-----------------|
|BST_UNCHECKED|0x0000|Stato iniziale.|
|BST_CHECKED|0x0001|Il controllo pulsante è selezionato.|
|BST_INDETERMINATE|0x0002|Lo stato è indeterminato (possibile solo quando il controllo button può avere tre stati).|
|BST_PUSHED|0x0004|Il controllo pulsante è premuto.|
|BST_FOCUS|0x0008|Il controllo pulsante ha lo stato attivo.|

### <a name="remarks"></a>Note

Un controllo pulsante con lo stile del pulsante BS_3STATE o BS_AUTO3STATE crea una casella di controllo che ha un terzo stato denominato stato indeterminato. Lo stato indeterminato indica che la casella di controllo non è selezionata né deselezionata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#9](../../mfc/reference/codesnippet/cpp/cbutton-class_9.cpp)]

##  <a name="gettextmargin"></a>  CButton::GetTextMargin

Chiamare questo metodo per ottenere il margine di testo del `CButton` oggetto.

```
BOOL GetTextMargin(RECT* pmargin);
```

### <a name="parameters"></a>Parametri

*pmargin*<br/>
Un puntatore al margine di testo il `CButton` oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce il margine di testo.

### <a name="remarks"></a>Note

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro emula la funzionalità del messaggio BCM_GETTEXTMARGIN, come descritto nel [pulsanti](/windows/desktop/controls/buttons) sezione del SDK di Windows.

##  <a name="setbitmap"></a>  CButton::SetBitmap

Chiamare questa funzione membro per associare una nuova bitmap con il pulsante.

```
HBITMAP SetBitmap(HBITMAP hBitmap);
```

### <a name="parameters"></a>Parametri

*hBitmap*<br/>
L'handle di una bitmap.

### <a name="return-value"></a>Valore restituito

L'handle di una bitmap in precedenza associata al pulsante.

### <a name="remarks"></a>Note

La bitmap verrà posizionata automaticamente sul pulsante, centrato per impostazione predefinita. Se la bitmap è troppo grande per il pulsante, verrà troncato in entrambi i lati. È possibile scegliere altre opzioni di allineamento, incluse le seguenti:

- BS_TOP

- BS_LEFT

- BS_RIGHT

- BS_CENTER

- BS_BOTTOM

- BS_VCENTER

A differenza [CBitmapButton](../../mfc/reference/cbitmapbutton-class.md), che utilizza le quattro bitmap per ogni pulsante `SetBitmap` Usa solo una mappa di bit per ogni pulsante. Quando viene premuto il pulsante, viene visualizzata la mappa di bit per spostare verso il basso e a destra.

Si è responsabile del rilascio della bitmap al termine con esso.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#4](../../mfc/reference/codesnippet/cpp/cbutton-class_4.cpp)]

##  <a name="setbuttonstyle"></a>  CButton::SetButtonStyle

Modifica lo stile di un pulsante.

```
void SetButtonStyle(
    UINT nStyle,
    BOOL bRedraw = TRUE);
```

### <a name="parameters"></a>Parametri

*nStyle*<br/>
Specifica la [pulsante stile](../../mfc/reference/styles-used-by-mfc.md#button-styles).

*bRedraw*<br/>
Specifica se il pulsante deve essere ridisegnato. Un valore diverso da zero ridisegnato il pulsante. Un valore 0 non viene ridisegnato il pulsante. Il pulsante viene ridisegnato per impostazione predefinita.

### <a name="remarks"></a>Note

Usare il `GetButtonStyle` funzione membro per recuperare lo stile del pulsante. La parola meno significativa dello stile di pulsante completa è lo stile di pulsante specifico.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#5](../../mfc/reference/codesnippet/cpp/cbutton-class_5.cpp)]

##  <a name="setcheck"></a>  CButton::SetCheck

Imposta o Reimposta lo stato di selezione di un pulsante di opzione o casella di controllo.

```
void SetCheck(int nCheck);
```

### <a name="parameters"></a>Parametri

*nCheck*<br/>
Specifica lo stato di selezione. Questo parametro può essere uno dei seguenti:

|Value|Significato|
|-----------|-------------|
|BST_UNCHECKED|Impostare lo stato del pulsante su deselezionata.|
|BST_CHECKED|Impostare lo stato del pulsante controllare.|
|BST_INDETERMINATE|Impostare lo stato del pulsante su indeterminato. Questo valore può essere utilizzato solo se il pulsante è applicato lo stile BS_3STATE o BS_AUTO3STATE.|

### <a name="remarks"></a>Note

Questa funzione membro non ha effetto su un pulsante di comando.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#6](../../mfc/reference/codesnippet/cpp/cbutton-class_6.cpp)]

##  <a name="setcursor"></a>  CButton::SetCursor

Chiamare questa funzione membro per associare un nuovo cursore con il pulsante.

```
HCURSOR SetCursor(HCURSOR hCursor);
```

### <a name="parameters"></a>Parametri

*hCursor*<br/>
L'handle di un cursore.

### <a name="return-value"></a>Valore restituito

L'handle di un cursore precedentemente associato al pulsante.

### <a name="remarks"></a>Note

Il cursore sarà posizionato automaticamente sul pulsante, centrato per impostazione predefinita. Se il cursore è troppo grande per il pulsante, verrà troncato in entrambi i lati. È possibile scegliere altre opzioni di allineamento, incluse le seguenti:

- BS_TOP

- BS_LEFT

- BS_RIGHT

- BS_CENTER

- BS_BOTTOM

- BS_VCENTER

A differenza [CBitmapButton](../../mfc/reference/cbitmapbutton-class.md), che utilizza le quattro bitmap per ogni pulsante `SetCursor` Usa un solo cursore per ogni pulsante. Quando viene premuto il pulsante, viene visualizzato il cursore per spostare verso il basso e a destra.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#7](../../mfc/reference/codesnippet/cpp/cbutton-class_7.cpp)]

##  <a name="setdropdownstate"></a>  CButton::SetDropDownState

Imposta lo stato di riepilogo a discesa del controllo pulsante di divisione corrente.

```
BOOL SetDropDownState(BOOL fDropDown);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*fDropDown*|[in] TRUE per impostare lo stato BST_DROPDOWNPUSHED; in caso contrario, FALSE.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Un controllo pulsante di menu combinato con uno stile di BS_SPLITBUTTON o BS_DEFSPLITBUTTON ed è costituito da un pulsante e una freccia a discesa a destra. Per altre informazioni, vedere [stili dei pulsanti](/windows/desktop/Controls/button-styles). In genere, viene impostato lo stato di riepilogo a discesa quando l'utente fa clic sulla freccia giù. Utilizzare questo metodo per impostare a livello di codice lo stato di riepilogo a discesa del controllo. La freccia giù viene disegnata ombreggiata per indicare lo stato.

Questo metodo invia il [BCM_SETDROPDOWNSTATE](/windows/desktop/Controls/bcm-setdropdownstate) messaggio, che è descritti nel SDK di Windows.

### <a name="example"></a>Esempio

Esempio di codice seguente definisce la variabile *m_splitButton*, che viene usato per accedere a livello di codice il controllo pulsante di menu combinato. Questa variabile viene usata nell'esempio seguente.

[!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]

### <a name="example"></a>Esempio

Esempio di codice seguente imposta lo stato del controllo split button per indicare che viene eseguito il push di freccia a discesa.

[!code-cpp[NVC_MFC_CButton_s1#6](../../mfc/reference/codesnippet/cpp/cbutton-class_11.cpp)]

##  <a name="setelevationrequired"></a>  CButton::SetElevationRequired

Imposta lo stato del controllo pulsante corrente da `elevation required`, che è necessario per il controllo visualizzare un'icona di sicurezza con privilegi elevati.

```
BOOL SetElevationRequired(BOOL fElevationRequired);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*fElevationRequired*|[in] True per impostare `elevation required` dello stato; in caso contrario, FALSE.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Se un controllo di collegamento di pulsante o comando richiede l'autorizzazione di sicurezza con privilegi elevati per eseguire un'azione, impostare il controllo su `elevation required` dello stato. Successivamente, Windows visualizza l'icona dello scudo controllo Account utente (UAC) nel controllo. Per altre informazioni, vedere "Controllo dell'Account utente" all'indirizzo [MSDN](https://go.microsoft.com/fwlink/p/?linkid=18507).

Questo metodo invia il [BCM_SETSHIELD](/windows/desktop/Controls/bcm-setshield) messaggio, che è descritti nel SDK di Windows.

##  <a name="seticon"></a>  CButton::SetIcon

Chiamare questa funzione membro per associare una nuova icona con il pulsante.

```
HICON SetIcon(HICON hIcon);
```

### <a name="parameters"></a>Parametri

*hIcon*<br/>
L'handle di un'icona.

### <a name="return-value"></a>Valore restituito

L'handle di un'icona associata in precedenza con il pulsante.

### <a name="remarks"></a>Note

L'icona verrà inserito automaticamente sul pulsante, centrato per impostazione predefinita. Se l'icona è troppo grande per il pulsante, verrà troncato in entrambi i lati. È possibile scegliere altre opzioni di allineamento, incluse le seguenti:

- BS_TOP

- BS_LEFT

- BS_RIGHT

- BS_CENTER

- BS_BOTTOM

- BS_VCENTER

A differenza [CBitmapButton](../../mfc/reference/cbitmapbutton-class.md), che utilizza le quattro bitmap per ogni pulsante `SetIcon` utilizza solo un'icona per ogni pulsante. Quando viene premuto il pulsante, viene visualizzata l'icona per spostare verso il basso e a destra.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#8](../../mfc/reference/codesnippet/cpp/cbutton-class_8.cpp)]

##  <a name="setimagelist"></a>  CButton::SetImageList

Chiamare questo metodo per impostare l'elenco di immagini del `CButton` oggetto.

```
BOOL SetImageList(PBUTTON_IMAGELIST pbuttonImagelist);
```

### <a name="parameters"></a>Parametri

*pbuttonImagelist*<br/>
Puntatore al nuovo elenco di immagini.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Questa funzione membro emula la funzionalità del messaggio BCM_SETIMAGELIST, come descritto nel [pulsanti](/windows/desktop/controls/buttons) sezione del SDK di Windows.

##  <a name="setnote"></a>  CButton::SetNote

Imposta il testo della nota per il controllo command link corrente.

```
BOOL SetNote(LPCTSTR lpszNote);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*lpszNote*|[in] Puntatore a una stringa Unicode che sia impostata come il testo della nota per il controllo command link.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Usare questo metodo solo con i controlli cui stile del pulsante è BS_COMMANDLINK o BS_DEFCOMMANDLINK.

Questo metodo invia il [BCM_SETNOTE](/windows/desktop/Controls/bcm-setnote) messaggio, che è descritti nel SDK di Windows.

### <a name="example"></a>Esempio

Esempio di codice seguente definisce la variabile *m_cmdLink*, che viene usato per accedere a livello di codice il controllo command link. Questa variabile viene usata nell'esempio seguente.

[!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]

### <a name="example"></a>Esempio

Esempio di codice seguente imposta il testo della nota per il controllo command link.

[!code-cpp[NVC_MFC_CButton_s1#7](../../mfc/reference/codesnippet/cpp/cbutton-class_12.cpp)]

##  <a name="setsplitglyph"></a>  CButton::SetSplitGlyph

Associa un glifo specificato con il controllo pulsante di menu combinato corrente.

```
BOOL SetSplitGlyph(TCHAR chGlyph);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*chGlyph*|[in] Un carattere che specifica il glifo da utilizzare come la divisione pulsante freccia in giù.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Usare questo metodo solo con i controlli che hanno lo stile del pulsante BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Un glifo è la rappresentazione fisica di un carattere in un particolare tipo di carattere. Il *chGlyph* parametro non viene utilizzato come il glifo, ma viene invece usato per selezionare un glifo da un set di glifi definito dal sistema. L'icona di freccia predefinito specificato da un carattere '6' e il carattere Unicode TRIANGOLO nero verso il basso verso l'alto (U + 25BC) è simile.

Questo metodo inizializza la `mask` membro di un [BUTTON_SPLITINFO](/windows/desktop/api/commctrl/ns-commctrl-tagbutton_splitinfo) struttura con il flag BCSIF_GLYPH e il `himlGlyph` membro con il *chGlyph* parametro e che quindi invia struttura nel [verso](/windows/desktop/Controls/bcm-getsplitinfo) messaggio che è descritti nel SDK di Windows.

##  <a name="setsplitimagelist"></a>  CButton::SetSplitImageList

Associa un' [elenco di immagini](../../mfc/reference/cimagelist-class.md) con il controllo pulsante di menu combinato corrente.

```
BOOL SetSplitImageList(CImageList* pSplitImageList);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pSplitImageList*|[in] Puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto da assegnare per il controllo pulsante di menu combinato corrente.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Usare questo metodo solo con i controlli cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Questo metodo inizializza la `mask` membro di un [BUTTON_SPLITINFO](/windows/desktop/api/commctrl/ns-commctrl-tagbutton_splitinfo) struttura con il flag BCSIF_IMAGE e il `himlGlyph` membro con il *pSplitImageList* parametro e quindi invia tale struttura nel [verso](/windows/desktop/Controls/bcm-getsplitinfo) messaggio che è descritti nel SDK di Windows.

##  <a name="setsplitinfo"></a>  CButton::SetSplitInfo

Specifica i parametri che determinano il modo in cui Windows consente di disegnare il controllo pulsante di menu combinato corrente.

```
BOOL SetSplitInfo(PBUTTON_SPLITINFO pInfo);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pInfo*|[in] Puntatore a un [BUTTON_SPLITINFO](/windows/desktop/api/commctrl/ns-commctrl-tagbutton_splitinfo) struttura che definisce il controllo pulsante di menu combinato corrente.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Usare questo metodo solo con i controlli cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Questo metodo invia il [BCM_SETSPLITINFO](/windows/desktop/Controls/bcm-setsplitinfo) messaggio, che è descritti nel SDK di Windows.

### <a name="example"></a>Esempio

Esempio di codice seguente definisce la variabile `m_splitButton`, che viene usato per accedere a livello di codice il controllo pulsante di menu combinato.

[!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]

### <a name="example"></a>Esempio

Esempio di codice seguente viene modificato il glifo che viene usato per la suddivisione pulsante freccia in giù. L'esempio sostituisce un glifo di triangolo verso l'alto per l'icona triangolo verso l'alto verso il basso predefinito. Il glifo visualizzato dipende dal carattere specificato nella `himlGlyph` membro del `BUTTON_SPLITINFO` struttura. L'icona triangolo verso l'alto verso il basso è specificato da un carattere ' 6 'e l'icona triangolo verso l'alto è specificato da un carattere ' 5'. Per il confronto, il metodo pratico, vedere [CButton::SetSplitGlyph](#setsplitglyph).

[!code-cpp[NVC_MFC_CButton_s1#4](../../mfc/reference/codesnippet/cpp/cbutton-class_13.cpp)]

##  <a name="setsplitsize"></a>  CButton::SetSplitSize

Imposta il rettangolo di delimitazione del componente elenco a discesa del controllo pulsante di divisione corrente.

```
BOOL SetSplitSize(LPSIZE pSize);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pSize*|[in] Puntatore a un [dimensioni](/windows/desktop/api/windef/ns-windef-tagsize) struttura che descrive un rettangolo di delimitazione.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Usare questo metodo solo con i controlli cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Quando il controllo pulsante di menu combinato viene espanso, è possibile visualizzare un elenco a discesa componente, ad esempio un controllo di elenco o un controllo pager. Questo metodo specifica le dimensioni del rettangolo di delimitazione che contiene il componente elenco a discesa.

Questo metodo inizializza la `mask` membro di un [BUTTON_SPLITINFO](/windows/desktop/api/commctrl/ns-commctrl-tagbutton_splitinfo) struttura con il flag BCSIF_SIZE e il `size` membro con il *pSize* parametro e quindi invia che la struttura nel [verso](/windows/desktop/Controls/bcm-getsplitinfo) messaggio che è descritti nel SDK di Windows.

### <a name="example"></a>Esempio

Esempio di codice seguente definisce la variabile `m_splitButton`, che viene usato per accedere a livello di codice il controllo pulsante di menu combinato. Questa variabile viene usata nell'esempio seguente.

[!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]

### <a name="example"></a>Esempio

Esempio di codice seguente raddoppia le dimensioni di split elenco a discesa della freccia del pulsante.

[!code-cpp[NVC_MFC_CButton_s1#5](../../mfc/reference/codesnippet/cpp/cbutton-class_14.cpp)]

##  <a name="setsplitstyle"></a>  CButton::SetSplitStyle

Imposta lo stile del controllo pulsante di divisione corrente.

```
BOOL SetSplitStyle(UINT uSplitStyle);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*uSplitStyle*|[in] Combinazione bit per bit di stili di pulsante di divisione. Per altre informazioni, vedere la `uSplitStyle` membro della [BUTTON_SPLITINFO](/windows/desktop/api/commctrl/ns-commctrl-tagbutton_splitinfo) struttura.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Usare questo metodo solo con i controlli cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Gli stili dei pulsanti di suddivisione specificare l'allineamento, proporzioni e formato grafico con cui Windows disegna un'icona di pulsante di divisione. Per altre informazioni, vedere la `uSplitStyle` membro della [BUTTON_SPLITINFO](/windows/desktop/api/commctrl/ns-commctrl-tagbutton_splitinfo) struttura.

Questo metodo inizializza la `mask` membro di un [BUTTON_SPLITINFO](/windows/desktop/api/commctrl/ns-commctrl-tagbutton_splitinfo) struttura con il flag BCSIF_STYLE e il `uSplitStyle` membro con il *uSplitStyle* parametro e che quindi invia struttura nel [verso](/windows/desktop/Controls/bcm-getsplitinfo) messaggio che è descritti nel SDK di Windows.

### <a name="example"></a>Esempio

Esempio di codice seguente definisce la variabile `m_splitButton`, che viene usato per accedere a livello di codice il controllo pulsante di menu combinato.

[!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]

### <a name="example"></a>Esempio

Esempio di codice seguente imposta lo stile della freccia a discesa pulsante split. Lo stile BCSS_ALIGNLEFT consente di visualizzare la freccia a sinistra del pulsante e lo stile BCSS_STRETCH mantiene le proporzioni della freccia di elenco a discesa quando si ridimensiona il pulsante.

[!code-cpp[NVC_MFC_CButton_s1#3](../../mfc/reference/codesnippet/cpp/cbutton-class_15.cpp)]

##  <a name="setstate"></a>  CButton::SetState

Determina se un controllo pulsante è evidenziato o meno.

```
void SetState(BOOL bHighlight);
```

### <a name="parameters"></a>Parametri

*bHighlight*<br/>
Specifica se il pulsante deve essere evidenziata. Valore diverso da zero evidenziazioni pulsante. un valore 0 consente di rimuovere eventuali evidenziazione.

### <a name="remarks"></a>Note

L'evidenziazione interessa l'anello esterno di un controllo pulsante. Non ha alcun effetto sullo stato della verifica di un pulsante di opzione o casella di controllo.

Un controllo button viene automaticamente evidenziato quando l'utente fa clic e contiene il pulsante sinistro del mouse. L'evidenziazione viene rimosso quando l'utente rilascia il pulsante del mouse.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#9](../../mfc/reference/codesnippet/cpp/cbutton-class_9.cpp)]

##  <a name="settextmargin"></a>  CButton::SetTextMargin

Chiamare questo metodo per impostare il margine di testo del `CButton` oggetto.

```
BOOL SetTextMargin(RECT* pmargin);
```

### <a name="parameters"></a>Parametri

*pmargin*<br/>
Puntatore al margine di nuovo testo.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Questa funzione membro emula la funzionalità del messaggio BCM_SETTEXTMARGIN, come descritto nel [pulsanti](/windows/desktop/controls/buttons) sezione del SDK di Windows.

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Classe CComboBox](../../mfc/reference/ccombobox-class.md)<br/>
[Classe CEdit](../../mfc/reference/cedit-class.md)<br/>
[Classe CListBox](../../mfc/reference/clistbox-class.md)<br/>
[Classe CScrollBar](../../mfc/reference/cscrollbar-class.md)<br/>
[Classe CStatic](../../mfc/reference/cstatic-class.md)<br/>
[Classe CBitmapButton](../../mfc/reference/cbitmapbutton-class.md)<br/>
[Classe CDialog](../../mfc/reference/cdialog-class.md)
