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
ms.openlocfilehash: 74b07dc8144e853714ea73c8235f1259538a0c12
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81752749"
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
|[CButton::Create](#create)|Crea il controllo pulsante windows e `CButton` lo associa all'oggetto.|
|[Controllo Dati::DrawItem (controllo dati non :Darticolo)](#drawitem)|Eseguire l'override per `CButton` disegnare un oggetto disegnato dal proprietario.|
|[CButton::GetBitmap](#getbitmap)|Recupera l'handle della bitmap precedentemente impostato con [SetBitmap](#setbitmap).|
|[CButton::GetButtonStyle](#getbuttonstyle)|Recupera informazioni sullo stile del controllo pulsante.|
|[CButton::GetCheck](#getcheck)|Recupera lo stato di controllo di un controllo pulsante.|
|[Controllo CButton::GetCursor](#getcursor)|Recupera l'handle dell'immagine del cursore precedentemente impostato con [SetCursor](#setcursor).|
|[CButton::GetIcon](#geticon)|Recupera l'handle dell'icona precedentemente impostata con [SetIcon](#seticon).|
|[CButton::GetIdealSize](#getidealsize)|Recupera le dimensioni ideali del controllo pulsante.|
|[Controllo CButton::GetImageList](#getimagelist)|Recupera l'elenco di immagini del controllo pulsante.|
|[CButton::GetNote](#getnote)|Recupera il componente nota del controllo collegamento di comando corrente.|
|[CButton::GetNoteLength](#getnotelength)|Recupera la lunghezza del testo della nota per il controllo del collegamento di comando corrente.|
|[CButton::GetSplitGlyph](#getsplitglyph)|Recupera il glifo associato al controllo pulsante di divisione corrente.|
|[Controllo CButton::GetSplitImageList](#getsplitimagelist)|Recupera l'elenco di immagini per il controllo pulsante di divisione corrente.|
|[CButton::GetSplitInfo](#getsplitinfo)|Recupera informazioni che definiscono il controllo pulsante di divisione corrente.|
|[CButton::GetSplitSize](#getsplitsize)|Recupera il rettangolo di delimitazione del componente a discesa del controllo pulsante di divisione corrente.|
|[CButton::GetSplitStyle](#getsplitstyle)|Recupera gli stili dei pulsanti di divisione che definiscono il controllo pulsante di divisione corrente.|
|[CButton::GetState](#getstate)|Recupera lo stato del controllo, lo stato di evidenziazione e lo stato attivo di un controllo pulsante.|
|[CButton::GetTextMargin](#gettextmargin)|Recupera il margine di testo del controllo pulsante.|
|[CButton::SetBitmap](#setbitmap)|Specifica una bitmap da visualizzare sul pulsante.|
|[CButton::SetButtonStyle](#setbuttonstyle)|Modifica lo stile di un pulsante.|
|[CButton::SetCheck](#setcheck)|Imposta lo stato di controllo di un controllo pulsante.|
|[CButton::SetCursor](#setcursor)|Specifica un'immagine del cursore da visualizzare sul pulsante.|
|[CButton::SetDropDownState](#setdropdownstate)|Imposta lo stato di riepilogo a discesa del controllo pulsante di divisione corrente.|
|[CButton::SetIcon](#seticon)|Specifica un'icona da visualizzare sul pulsante.|
|[CButton::SetImageList](#setimagelist)|Imposta l'elenco immagini del controllo pulsante.|
|[CButton::SetNote](#setnote)|Imposta la nota sul controllo del collegamento di comando corrente.|
|[CButton::SetSplitGlyph](#setsplitglyph)|Associa un glifo specificato al controllo pulsante di divisione corrente.|
|[CButton::SetSplitImageList](#setsplitimagelist)|Associa un elenco immagini al controllo pulsante di divisione corrente.|
|[CButton::SetSplitInfo](#setsplitinfo)|Specifica le informazioni che definiscono il controllo pulsante di divisione corrente.|
|[CButton::SetSplitSize](#setsplitsize)|Imposta il rettangolo di delimitazione del componente a discesa del controllo pulsante di divisione corrente.|
|[CButton::SetSplitStyle](#setsplitstyle)|Imposta lo stile del controllo pulsante di divisione corrente.|
|[CButton::SetState](#setstate)|Imposta lo stato di evidenziazione di un controllo pulsante.|
|[CButton::SetTextMargin](#settextmargin)|Imposta il margine di testo del controllo pulsante.|

## <a name="remarks"></a>Osservazioni

Un controllo pulsante è una piccola finestra figlio rettangolare che può essere attivata e disattivata. I pulsanti possono essere utilizzati da soli o in gruppi e possono essere etichettati o visualizzati senza testo. Un pulsante in genere cambia aspetto quando l'utente fa clic su di esso.

I pulsanti tipici sono la casella di controllo, il pulsante di opzione e il pulsante di comando. Un `CButton` oggetto può diventare uno di questi, in base allo stile del [pulsante](../../mfc/reference/styles-used-by-mfc.md#button-styles) specificato in fase di inizializzazione dal [Create](#create) funzione membro.

Inoltre, il [CBitmapButton](../../mfc/reference/cbitmapbutton-class.md) classe `CButton` derivata da supporta la creazione di controlli pulsante etichettati con immagini bitmap anziché di testo. Un `CBitmapButton` oggetto può avere bitmap separate per gli stati su, giù, messa a fuoco e disabilitata di un pulsante.

È possibile creare un controllo pulsante da un modello di finestra di dialogo o direttamente nel codice. In entrambi i casi, `CButton` chiamare `CButton` prima il costruttore per costruire l'oggetto; quindi chiamare `Create` la funzione membro per creare il `CButton` controllo pulsante di Windows e associarlo all'oggetto.

La costruzione può essere un processo in `CButton`un solo passaggio in una classe derivata da . Scrivere un costruttore per `Create` la classe derivata e chiamare dall'interno del costruttore.

Se si desidera gestire i messaggi di notifica di Windows inviati da un controllo pulsante al relativo elemento padre (in genere una classe derivata da [CDialog](../../mfc/reference/cdialog-class.md)), aggiungere una voce della mappa messaggi e una funzione membro del gestore messaggi alla classe padre per ogni messaggio.

Ogni voce della mappa messaggi assume il seguente formato:

_Notifica_ **ON\_** **(** _id_, _memberFxn_ **)**

dove *id* specifica l'ID di finestra figlio del controllo che invia la notifica e *memberFxn* è il nome della funzione membro padre scritta per gestire la notifica.

Il prototipo di funzione dell'elemento padre è il seguente:

`afx_msg void memberFxn();`

Le potenziali voci della mappa messaggi sono le seguenti:

|Voce della mappa|Inviato al genitore quando...|
|---------------|----------------------------|
|ON_BN_CLICKED|L'utente fa clic su un pulsante.|
|ON_BN_DOUBLECLICKED|L'utente fa doppio clic su un pulsante.|

Se si `CButton` crea un oggetto da `CButton` una risorsa finestra di dialogo, l'oggetto viene eliminato automaticamente quando l'utente chiude la finestra di dialogo.

Se si `CButton` crea un oggetto all'interno di una finestra, potrebbe essere necessario eliminarlo. Se si `CButton` crea l'oggetto nell'heap utilizzando la **nuova** funzione, è necessario chiamare **delete** sull'oggetto per eliminarlo quando l'utente chiude il controllo pulsante di Windows. Se si `CButton` crea l'oggetto nello stack o se è incorporato nell'oggetto finestra di dialogo padre, questo viene eliminato automaticamente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CButton`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cbuttoncbutton"></a><a name="cbutton"></a>CButton::CButton

Costruisce un oggetto `CButton`.

```
CButton();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#1](../../mfc/reference/codesnippet/cpp/cbutton-class_1.cpp)]

## <a name="cbuttoncreate"></a><a name="create"></a>CButton::Create

Crea il controllo pulsante windows e `CButton` lo associa all'oggetto.

```
virtual BOOL Create(
    LPCTSTR lpszCaption,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*didascalia di lpsz*<br/>
Specifica il testo del controllo pulsante.

*DwStyle (in stile dwStyle)*<br/>
Specifica lo stile del controllo pulsante. Applicare qualsiasi combinazione di stili di [pulsante](../../mfc/reference/styles-used-by-mfc.md#button-styles) al pulsante.

*Rect*<br/>
Specifica le dimensioni e la posizione del controllo pulsante. Può essere un `CRect` oggetto `RECT` o una struttura.

*pParentWnd (informazioni in due)*<br/>
Specifica la finestra padre del controllo `CDialog`pulsante, in genere un oggetto . Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo pulsante.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Costruire un `CButton` oggetto in due passaggi. Chiamare innanzitutto il costruttore e quindi chiamare `Create`, che crea `CButton` il controllo pulsante di Windows e lo associa all'oggetto .

Se viene fornito lo stile WS_VISIBLE, Windows invia il pulsante controllare tutti i messaggi necessari per attivare e visualizzare il pulsante.

Applicare i seguenti stili di [finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) a un controllo pulsante:

- WS_CHILD sempre

- WS_VISIBLE di solito

- WS_DISABLED Raramente

- WS_GROUP A raggruppare i controlli

- WS_TABSTOP Per includere il pulsante nell'ordine di tabulazione

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#2](../../mfc/reference/codesnippet/cpp/cbutton-class_2.cpp)]

## <a name="cbuttondrawitem"></a><a name="drawitem"></a>Controllo Dati::DrawItem (controllo dati non :Darticolo)

Chiamato dal framework quando un aspetto visivo di un pulsante disegnato dal proprietario è stato modificato.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*LpDrawItemStruct (informazioni in base a lpDrawItemStruct)*<br/>
Puntatore lungo a una struttura [DRAWITEMSTRUCT.](/windows/win32/api/winuser/ns-winuser-drawitemstruct) La struttura contiene informazioni sull'elemento da disegnare e sul tipo di disegno richiesto.

### <a name="remarks"></a>Osservazioni

Un pulsante disegnato dal proprietario ha il set di stili BS_OWNERDRAW. Eseguire l'override di questa funzione `CButton` membro per implementare il disegno per un oggetto disegnato dal proprietario. L'applicazione deve ripristinare tutti gli oggetti Graphics Device Interface (GDI) selezionati per il contesto di visualizzazione fornito in *lpDrawItemStruct* prima che la funzione membro termini.

Vedere anche i valori di stile [BS_.](../../mfc/reference/styles-used-by-mfc.md#button-styles)

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#3](../../mfc/reference/codesnippet/cpp/cbutton-class_3.cpp)]

## <a name="cbuttongetbitmap"></a><a name="getbitmap"></a>CButton::GetBitmap

Chiamare questa funzione membro per ottenere l'handle di una bitmap, precedentemente impostata con [SetBitmap](#setbitmap), associata a un pulsante.

```
HBITMAP GetBitmap() const;
```

### <a name="return-value"></a>Valore restituito

Handle per una bitmap. NULL se non è specificata alcuna bitmap in precedenza.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#4](../../mfc/reference/codesnippet/cpp/cbutton-class_4.cpp)]

## <a name="cbuttongetbuttonstyle"></a><a name="getbuttonstyle"></a>CButton::GetButtonStyle

Recupera informazioni sullo stile del controllo pulsante.

```
UINT GetButtonStyle() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce gli stili `CButton` dei pulsanti per questo oggetto. Questa funzione restituisce solo i valori di stile [BS_,](../../mfc/reference/styles-used-by-mfc.md#button-styles) non gli altri stili di finestra.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#5](../../mfc/reference/codesnippet/cpp/cbutton-class_5.cpp)]

## <a name="cbuttongetcheck"></a><a name="getcheck"></a>CButton::GetCheck

Recupera lo stato di controllo di un pulsante di opzione o di una casella di controllo.

```
int GetCheck() const;
```

### <a name="return-value"></a>Valore restituito

Il valore restituito da un controllo pulsante creato con lo stile BS_AUTOCHECKBOX, BS_AUTORADIOBUTTON, BS_AUTO3STATE, BS_CHECKBOX, BS_RADIOBUTTON o BS_3STATE è uno dei valori seguenti:

|valore|Significato|
|-----------|-------------|
|BST_UNCHECKED|Lo stato del pulsante è deselezionato.|
|BST_CHECKED|Lo stato del pulsante è selezionato.|
|BST_INDETERMINATE|Lo stato del pulsante è indeterminato (si applica solo se il pulsante ha lo stile BS_3STATE o BS_AUTO3STATE).|

Se il pulsante ha qualsiasi altro stile, il valore restituito viene BST_UNCHECKED.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#6](../../mfc/reference/codesnippet/cpp/cbutton-class_6.cpp)]

## <a name="cbuttongetcursor"></a><a name="getcursor"></a>Controllo CButton::GetCursor

Chiamare questa funzione membro per ottenere l'handle di un cursore, precedentemente impostato con [SetCursor](#setcursor), associato a un pulsante.

```
HCURSOR GetCursor();
```

### <a name="return-value"></a>Valore restituito

Handle per un'immagine del cursore. NULL se non è stato specificato alcun cursore in precedenza.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#7](../../mfc/reference/codesnippet/cpp/cbutton-class_7.cpp)]

## <a name="cbuttongeticon"></a><a name="geticon"></a>CButton::GetIcon

Chiamare questa funzione membro per ottenere l'handle di un'icona, precedentemente impostata con [SetIcon](#seticon), associata a un pulsante.

```
HICON GetIcon() const;
```

### <a name="return-value"></a>Valore restituito

Handle per un'icona. NULL se non è stata specificata alcuna icona in precedenza.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#8](../../mfc/reference/codesnippet/cpp/cbutton-class_8.cpp)]

## <a name="cbuttongetidealsize"></a><a name="getidealsize"></a>CButton::GetIdealSize

Recupera le dimensioni ideali per il controllo pulsante.

```
BOOL GetIdealSize(SIZE* psize);
```

### <a name="parameters"></a>Parametri

*psize*<br/>
Puntatore alla dimensione corrente del pulsante.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro emula la funzionalità del messaggio BCM_GETIDEALSIZE, come descritto nella sezione [Pulsanti](/windows/win32/controls/buttons) di Windows SDK.

## <a name="cbuttongetimagelist"></a><a name="getimagelist"></a>Controllo CButton::GetImageList

Chiamare questo metodo per ottenere l'elenco di immagini dal controllo pulsante.

```
BOOL GetImageList(PBUTTON_IMAGELIST pbuttonImagelist);
```

### <a name="parameters"></a>Parametri

*pbuttonImagelist*<br/>
Puntatore all'elenco immagini `CButton` dell'oggetto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro emula la funzionalità del messaggio di BCM_GETIMAGELIST, come descritto nella sezione [Pulsanti](/windows/win32/controls/buttons) di Windows SDK.

## <a name="cbuttongetnote"></a><a name="getnote"></a>CButton::GetNote

Recupera il testo della nota associato al controllo collegamento di comando corrente.

```
CString GetNote() const;

BOOL GetNote(
    LPTSTR lpszNote,
    UINT* cchNote) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*lpszNote*|[fuori] Puntatore a un buffer, che il chiamante è responsabile dell'allocazione e della deallocazione. Se il valore restituito è TRUE, il buffer contiene il testo della nota associato al controllo del collegamento di comando corrente; in caso contrario, il buffer viene invariato.|
|*cchNota*|[in, out] Puntatore a una variabile integer senza segno.<br /><br /> Quando viene chiamato questo metodo, la variabile contiene la dimensione del buffer specificata dal *lpszNote* parametro.<br /><br /> Quando termina, questo metodo restituisce, se il valore restituito è TRUE la variabile contiene la dimensione della nota associata al controllo collegamento di comando corrente. Se il valore restituito è FALSE, la variabile contiene la dimensione del buffer necessaria per contenere la nota.|

### <a name="return-value"></a>Valore restituito

Nel primo overload, un [Oggetto CString](../../atl-mfc-shared/using-cstring.md) che contiene il testo della nota associato al controllo del collegamento di comando corrente.

-oppure-

Nel secondo overload, TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo solo con i controlli il cui stile del pulsante è BS_COMMANDLINK o BS_DEFCOMMANDLINK.

Questo metodo invia il [messaggio di BCM_GETNOTE,](/windows/win32/Controls/bcm-getnote) descritto in Windows SDK.

## <a name="cbuttongetnotelength"></a><a name="getnotelength"></a>CButton::GetNoteLength

Recupera la lunghezza del testo della nota per il controllo del collegamento di comando corrente.

```
UINT GetNoteLength() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza del testo della nota, in caratteri Unicode a 16 bit, per il controllo del collegamento di comando corrente.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo solo con i controlli il cui stile del pulsante è BS_COMMANDLINK o BS_DEFCOMMANDLINK.

Questo metodo invia il [messaggio BCM_GETNOTELENGTH,](/windows/win32/Controls/bcm-getnotelength) descritto in Windows SDK.

## <a name="cbuttongetsplitglyph"></a><a name="getsplitglyph"></a>CButton::GetSplitGlyph

Recupera il glifo associato al controllo pulsante di divisione corrente.

```
TCHAR GetSplitGlyph() const;
```

### <a name="return-value"></a>Valore restituito

Carattere del glifo associato al controllo pulsante di divisione corrente.

### <a name="remarks"></a>Osservazioni

Un glifo è la rappresentazione fisica di un carattere in un particolare tipo di carattere. Ad esempio, un controllo pulsante di divisione potrebbe essere decorato con il glifo del carattere di segno di spunta Unicode (U-2713).

Utilizzare questo metodo solo con i controlli il cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Questo metodo inizializza `mask` il membro di una struttura [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) con il flag BCSIF_GLYPH e quindi invia tale struttura nel [messaggio BCM_GETSPLITINFO](/windows/win32/Controls/bcm-getsplitinfo) descritto in Windows SDK. Quando la funzione di messaggio restituisce, `himlGlyph` questo metodo recupera il glifo dal membro della struttura.

## <a name="cbuttongetsplitimagelist"></a><a name="getsplitimagelist"></a>Controllo CButton::GetSplitImageList

Recupera [l'elenco](../../mfc/reference/cimagelist-class.md) di immagini per il controllo pulsante di divisione corrente.

```
CImageList* GetSplitImageList() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo solo con i controlli il cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Questo metodo inizializza `mask` il membro di una struttura [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) con il flag BCSIF_IMAGE e quindi invia tale struttura nel messaggio [di BCM_GETSPLITINFO](/windows/win32/Controls/bcm-getsplitinfo) descritto in Windows SDK. Quando la funzione di messaggio restituisce, questo `himlGlyph` metodo recupera l'elenco di immagini dal membro della struttura.

## <a name="cbuttongetsplitinfo"></a><a name="getsplitinfo"></a>CButton::GetSplitInfo

Recupera i parametri che determinano il modo in cui Windows disegna il controllo pulsante di divisione corrente.

```
BOOL GetSplitInfo(PBUTTON_SPLITINFO pInfo) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pInfo (informazioni in stato inquesto*|[fuori] Puntatore a una struttura [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) che riceve informazioni sul controllo pulsante di divisione corrente. Il chiamante è responsabile dell'allocazione della struttura.|

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo solo con i controlli il cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Questo metodo invia il [messaggio BCM_GETSPLITINFO,](/windows/win32/Controls/bcm-getsplitinfo) descritto in Windows SDK.

## <a name="cbuttongetsplitsize"></a><a name="getsplitsize"></a>CButton::GetSplitSize

Recupera il rettangolo di delimitazione del componente a discesa del controllo pulsante di divisione corrente.

```
BOOL GetSplitSize(LPSIZE pSize) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pDimensioni*|[fuori] Puntatore a una struttura [DIMENSIONE](/windows/win32/api/windef/ns-windef-size) che riceve la descrizione di un rettangolo.|

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo solo con i controlli il cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Quando il controllo pulsante di divisione viene espanso, è possibile visualizzare un componente a discesa, ad esempio un controllo elenco o un controllo pager. Questo metodo recupera il rettangolo di delimitazione che contiene il componente a discesa.

Questo metodo inizializza `mask` il membro di una struttura [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) con il flag BCSIF_SIZE e quindi invia tale struttura nel [messaggio BCM_GETSPLITINFO](/windows/win32/Controls/bcm-getsplitinfo) descritto in Windows SDK. Quando la funzione di messaggio restituisce, questo `size` metodo recupera il rettangolo di delimitazione dal membro della struttura.

## <a name="cbuttongetsplitstyle"></a><a name="getsplitstyle"></a>CButton::GetSplitStyle

Recupera gli stili dei pulsanti di divisione che definiscono il controllo pulsante di divisione corrente.

```
UINT GetSplitStyle() const;
```

### <a name="return-value"></a>Valore restituito

Combinazione bit per bit di stili di pulsanti divisi. Per ulteriori informazioni, `uSplitStyle` vedere il membro della [struttura BUTTON_SPLITINFO.](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo)

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo solo con i controlli il cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Gli stili dei pulsanti di divisione specificano l'allineamento, le proporzioni e il formato grafico con cui Windows disegna l'icona di un pulsante di divisione.

Questo metodo inizializza `mask` il membro di una struttura [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) con il flag BCSIF_STYLE e quindi invia tale struttura nel [messaggio BCM_GETSPLITINFO](/windows/win32/Controls/bcm-getsplitinfo) descritto in Windows SDK. Quando la funzione message restituisce, questo metodo `uSplitStyle` recupera gli stili del pulsante di divisione dal membro della struttura.

## <a name="cbuttongetstate"></a><a name="getstate"></a>CButton::GetState

Recupera lo stato di un controllo pulsante.

```
UINT GetState() const;
```

### <a name="return-value"></a>Valore restituito

Campo di bit che contiene la combinazione di valori che indicano lo stato corrente di un controllo pulsante. Nella tabella seguente sono elencati i valori possibili.

|Stato pulsante|valore|Descrizione|
|------------------|-----------|-----------------|
|BST_UNCHECKED|0x0000|Lo stato iniziale.|
|BST_CHECKED|0x0001|Il controllo pulsante è selezionato.|
|BST_INDETERMINATE|0x0002|Lo stato è indeterminato (possibile solo quando il controllo pulsante ha tre stati).|
|BST_PUSHED|0x0004|Il controllo pulsante viene premuto.|
|BST_FOCUS|0x0008|Il controllo pulsante ha lo stato attivo.|

### <a name="remarks"></a>Osservazioni

Un controllo pulsante con il BS_3STATE o BS_AUTO3STATE stile pulsante crea una casella di controllo con un terzo stato denominato stato indeterminato. Lo stato indeterminato indica che la casella di controllo non è selezionata né deselezionata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#9](../../mfc/reference/codesnippet/cpp/cbutton-class_9.cpp)]

## <a name="cbuttongettextmargin"></a><a name="gettextmargin"></a>CButton::GetTextMargin

Chiamare questo metodo per ottenere `CButton` il margine di testo dell'oggetto.

```
BOOL GetTextMargin(RECT* pmargin);
```

### <a name="parameters"></a>Parametri

*pmargin*<br/>
Puntatore al margine di `CButton` testo dell'oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce il margine di testo.

### <a name="remarks"></a>Osservazioni

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro emula la funzionalità del messaggio di BCM_GETTEXTMARGIN, come descritto nella sezione [Pulsanti](/windows/win32/controls/buttons) di Windows SDK.

## <a name="cbuttonsetbitmap"></a><a name="setbitmap"></a>CButton::SetBitmap

Chiamare questa funzione membro per associare una nuova bitmap con il pulsante.

```
HBITMAP SetBitmap(HBITMAP hBitmap);
```

### <a name="parameters"></a>Parametri

*Hbitmap*<br/>
Handle di una bitmap.

### <a name="return-value"></a>Valore restituito

Handle di una bitmap precedentemente associata al pulsante.

### <a name="remarks"></a>Osservazioni

La bitmap verrà posizionata automaticamente sulla faccia del pulsante, centrata per impostazione predefinita. Se la bitmap è troppo grande per il pulsante, verrà ritagliata su entrambi i lati. È possibile scegliere altre opzioni di allineamento, tra cui:

- BS_TOP

- BS_LEFT

- BS_RIGHT

- BS_CENTER

- BS_BOTTOM

- BS_VCENTER

A differenza di [CBitmapButton](../../mfc/reference/cbitmapbutton-class.md), che `SetBitmap` utilizza quattro bitmap per pulsante, utilizza una sola bitmap per il pulsante. Quando si preme il pulsante, la bitmap sembra spostarsi verso il basso e verso destra.

L'utente è responsabile del rilascio della bitmap al termine dell'operazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#4](../../mfc/reference/codesnippet/cpp/cbutton-class_4.cpp)]

## <a name="cbuttonsetbuttonstyle"></a><a name="setbuttonstyle"></a>CButton::SetButtonStyle

Modifica lo stile di un pulsante.

```cpp
void SetButtonStyle(
    UINT nStyle,
    BOOL bRedraw = TRUE);
```

### <a name="parameters"></a>Parametri

*nStyle*<br/>
Specifica lo stile del [pulsante.](../../mfc/reference/styles-used-by-mfc.md#button-styles)

*bRedraw*<br/>
Specifica se il pulsante deve essere ridisegnato. Un valore diverso da zero ridisegna il pulsante. Un valore 0 non ridisegna il pulsante. Il pulsante viene ridisegnato per impostazione predefinita.

### <a name="remarks"></a>Osservazioni

Utilizzare `GetButtonStyle` la funzione membro per recuperare lo stile del pulsante. La parola di ordine basso dello stile completo del pulsante è lo stile specifico del pulsante.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#5](../../mfc/reference/codesnippet/cpp/cbutton-class_5.cpp)]

## <a name="cbuttonsetcheck"></a><a name="setcheck"></a>CButton::SetCheck

Imposta o reimposta lo stato di controllo di un pulsante di opzione o di una casella di controllo.

```cpp
void SetCheck(int nCheck);
```

### <a name="parameters"></a>Parametri

*nControllare*<br/>
Specifica lo stato del controllo. Questo parametro può essere uno dei seguenti:

|valore|Significato|
|-----------|-------------|
|BST_UNCHECKED|Impostare lo stato del pulsante su unchecked.|
|BST_CHECKED|Impostare lo stato del pulsante su checked.|
|BST_INDETERMINATE|Impostare lo stato del pulsante su indeterminato. Questo valore può essere utilizzato solo se il pulsante ha lo stile BS_3STATE o BS_AUTO3STATE.|

### <a name="remarks"></a>Osservazioni

Questa funzione membro non ha effetto su un pulsante pushbutton.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#6](../../mfc/reference/codesnippet/cpp/cbutton-class_6.cpp)]

## <a name="cbuttonsetcursor"></a><a name="setcursor"></a>CButton::SetCursor

Chiamare questa funzione membro per associare un nuovo cursore al pulsante.

```
HCURSOR SetCursor(HCURSOR hCursor);
```

### <a name="parameters"></a>Parametri

*hCursore (cursore)*<br/>
Handle di un cursore.

### <a name="return-value"></a>Valore restituito

Handle di un cursore precedentemente associato al pulsante.

### <a name="remarks"></a>Osservazioni

Il cursore verrà posizionato automaticamente sulla faccia del pulsante, centrato per impostazione predefinita. Se il cursore è troppo grande per il pulsante, verrà ritagliato su entrambi i lati. È possibile scegliere altre opzioni di allineamento, tra cui:

- BS_TOP

- BS_LEFT

- BS_RIGHT

- BS_CENTER

- BS_BOTTOM

- BS_VCENTER

A differenza di [CBitmapButton](../../mfc/reference/cbitmapbutton-class.md), che `SetCursor` utilizza quattro bitmap per pulsante, utilizza un solo cursore per il pulsante. Quando si preme il pulsante, il cursore sembra spostarsi verso il basso e verso destra.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#7](../../mfc/reference/codesnippet/cpp/cbutton-class_7.cpp)]

## <a name="cbuttonsetdropdownstate"></a><a name="setdropdownstate"></a>CButton::SetDropDownState

Imposta lo stato di riepilogo a discesa del controllo pulsante di divisione corrente.

```
BOOL SetDropDownState(BOOL fDropDown);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*FDropDown (informazioni in questo conto in due*|[in] TRUE per impostare lo stato di BST_DROPDOWNPUSHED; in caso contrario, FALSE.|

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Un controllo pulsante di vidi ha uno stile di BS_SPLITBUTTON o BS_DEFSPLITBUTTON ed è costituito da un pulsante e da una freccia a discesa alla sua destra. Per ulteriori informazioni, consultate [Stili dei pulsanti.](/windows/win32/Controls/button-styles) In genere, lo stato dell'elenco a discesa viene impostato quando l'utente fa clic sulla freccia a discesa. Utilizzare questo metodo per impostare a livello di codice lo stato a discesa del controllo. La freccia a discesa viene disegnata per indicare lo stato.

Questo metodo invia il messaggio [BCM_SETDROPDOWNSTATE,](/windows/win32/Controls/bcm-setdropdownstate) descritto in Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene definita la *variabile, m_splitButton*, utilizzata per accedere a livello di codice al controllo pulsante di divisione. Questa variabile viene utilizzata nell'esempio seguente.

[!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene impostato lo stato del controllo pulsante di divisione per indicare che viene inserita la freccia a discesa.

[!code-cpp[NVC_MFC_CButton_s1#6](../../mfc/reference/codesnippet/cpp/cbutton-class_11.cpp)]

## <a name="cbuttonsetelevationrequired"></a><a name="setelevationrequired"></a>CButton::SetElevationRequired

Imposta lo stato del controllo `elevation required`pulsante corrente su , necessario affinché il controllo visualizzi un'icona di sicurezza elevata.

```
BOOL SetElevationRequired(BOOL fElevationRequired);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*fElevazioneObbligatoria*|[in] TRUE per `elevation required` impostare lo stato; in caso contrario, FALSE.|

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Se un pulsante o un controllo del collegamento di comando `elevation required` richiede un'autorizzazione di sicurezza elevata per eseguire un'azione, impostare il controllo sullo stato. Successivamente, Windows visualizza l'icona di schermatura di controllo dell'account utente (UAC) sul controllo. Per ulteriori informazioni, vedere "Controllo dell'account utente" in [MSDN](https://go.microsoft.com/fwlink/p/?linkid=18507).

Questo metodo invia il [messaggio di BCM_SETSHIELD,](/windows/win32/Controls/bcm-setshield) descritto in Windows SDK.

## <a name="cbuttonseticon"></a><a name="seticon"></a>CButton::SetIcon

Chiamare questa funzione membro per associare una nuova icona con il pulsante.

```
HICON SetIcon(HICON hIcon);
```

### <a name="parameters"></a>Parametri

*hIcon*<br/>
Handle di un'icona.

### <a name="return-value"></a>Valore restituito

Handle di un'icona precedentemente associata al pulsante.

### <a name="remarks"></a>Osservazioni

L'icona verrà posizionata automaticamente sulla faccia del pulsante, centrata per impostazione predefinita. Se l'icona è troppo grande per il pulsante, verrà ritagliata su entrambi i lati. È possibile scegliere altre opzioni di allineamento, tra cui:

- BS_TOP

- BS_LEFT

- BS_RIGHT

- BS_CENTER

- BS_BOTTOM

- BS_VCENTER

A differenza di [CBitmapButton](../../mfc/reference/cbitmapbutton-class.md), che `SetIcon` utilizza quattro bitmap per pulsante, utilizza una sola icona per il pulsante. Quando si preme il pulsante, l'icona sembra spostarsi verso il basso e verso destra.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#8](../../mfc/reference/codesnippet/cpp/cbutton-class_8.cpp)]

## <a name="cbuttonsetimagelist"></a><a name="setimagelist"></a>CButton::SetImageList

Chiamare questo metodo per impostare `CButton` l'elenco immagini dell'oggetto.

```
BOOL SetImageList(PBUTTON_IMAGELIST pbuttonImagelist);
```

### <a name="parameters"></a>Parametri

*pbuttonImagelist*<br/>
Puntatore al nuovo elenco immagini.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Questa funzione membro emula la funzionalità del messaggio di BCM_SETIMAGELIST, come descritto nella sezione [Pulsanti](/windows/win32/controls/buttons) di Windows SDK.

## <a name="cbuttonsetnote"></a><a name="setnote"></a>CButton::SetNote

Imposta il testo della nota per il controllo del collegamento di comando corrente.

```
BOOL SetNote(LPCTSTR lpszNote);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*lpszNote*|[in] Puntatore a una stringa Unicode impostata come testo della nota per il controllo del collegamento di comando.|

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo solo con i controlli il cui stile del pulsante è BS_COMMANDLINK o BS_DEFCOMMANDLINK.

Questo metodo invia il messaggio [di BCM_SETNOTE,](/windows/win32/Controls/bcm-setnote) descritto in Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene definita la variabile *m_cmdLink*, utilizzata per accedere a livello di codice al controllo collegamento comandi. Questa variabile viene utilizzata nell'esempio seguente.

[!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene illustrato come impostare il testo della nota per il controllo del collegamento di comando.

[!code-cpp[NVC_MFC_CButton_s1#7](../../mfc/reference/codesnippet/cpp/cbutton-class_12.cpp)]

## <a name="cbuttonsetsplitglyph"></a><a name="setsplitglyph"></a>CButton::SetSplitGlyph

Associa un glifo specificato al controllo pulsante di divisione corrente.

```
BOOL SetSplitGlyph(TCHAR chGlyph);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*chGliese*|[in] Carattere che specifica il glifo da utilizzare come freccia a discesa del pulsante di divisione.|

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo solo con i controlli che hanno lo stile del pulsante BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Un glifo è la rappresentazione fisica di un carattere in un particolare tipo di carattere. Il *chGlyph* parametro non viene utilizzato come glifo, ma viene invece utilizzato per selezionare un glifo da un set di glifi definiti dal sistema. Il glifo predefinito della freccia a discesa è specificato da un carattere '6' ed è simile al carattere Unicode BLACK DOWN-POINTING TRIANGLE (U-25BC).

Questo metodo inizializza `mask` il membro di una struttura `himlGlyph` [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) con il flag BCSIF_GLYPH e il membro con il parametro *chGlyph,* quindi invia tale struttura nel [messaggio di BCM_GETSPLITINFO](/windows/win32/Controls/bcm-getsplitinfo) descritto in Windows SDK.

## <a name="cbuttonsetsplitimagelist"></a><a name="setsplitimagelist"></a>CButton::SetSplitImageList

Associa un [elenco immagini](../../mfc/reference/cimagelist-class.md) al controllo pulsante di divisione corrente.

```
BOOL SetSplitImageList(CImageList* pSplitImageList);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pSplitImageList (informazioni in stato in questo campo)*|[in] Puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto da assegnare al controllo pulsante di divisione corrente.|

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo solo con i controlli il cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Questo metodo inizializza `mask` il membro di una struttura `himlGlyph` [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) con il flag di BCSIF_IMAGE e il membro con il *pSplitImageList* parametro e quindi invia tale struttura nel [messaggio BCM_GETSPLITINFO](/windows/win32/Controls/bcm-getsplitinfo) descritto in Windows SDK.

## <a name="cbuttonsetsplitinfo"></a><a name="setsplitinfo"></a>CButton::SetSplitInfo

Specifica i parametri che determinano la modalità di disegno del controllo pulsante di divisione corrente.

```
BOOL SetSplitInfo(PBUTTON_SPLITINFO pInfo);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pInfo (informazioni in stato inquesto*|[in] Puntatore a una struttura [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) che definisce il controllo pulsante di divisione corrente.|

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo solo con i controlli il cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Questo metodo invia il messaggio [BCM_SETSPLITINFO,](/windows/win32/Controls/bcm-setsplitinfo) descritto in Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene definita la variabile , `m_splitButton`che viene utilizzata per accedere a livello di codice al controllo pulsante di divisione.

[!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene modificato il glifo utilizzato per la freccia a discesa del pulsante di divisione. L'esempio sostituisce un glifo del triangolo rivolto verso l'alto con il glifo del triangolo rivolto verso il basso predefinito. Il glifo visualizzato dipende dal carattere specificato `himlGlyph` nel `BUTTON_SPLITINFO` membro della struttura. Il glifo del triangolo rivolto verso il basso è specificato da un carattere '6' e il glifo del triangolo rivolto verso l'alto è specificato da un carattere '5'. Per un confronto, vedere il metodo pratico, [CButton::SetSplitGlyph](#setsplitglyph).

[!code-cpp[NVC_MFC_CButton_s1#4](../../mfc/reference/codesnippet/cpp/cbutton-class_13.cpp)]

## <a name="cbuttonsetsplitsize"></a><a name="setsplitsize"></a>CButton::SetSplitSize

Imposta il rettangolo di delimitazione del componente a discesa del controllo pulsante di divisione corrente.

```
BOOL SetSplitSize(LPSIZE pSize);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pDimensioni*|[in] Puntatore a una struttura [DIMENSIONE](/windows/win32/api/windef/ns-windef-size) che descrive un rettangolo di delimitazione.|

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo solo con i controlli il cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Quando il controllo pulsante di divisione viene espanso, è possibile visualizzare un componente a discesa, ad esempio un controllo elenco o un controllo pager. Questo metodo specifica le dimensioni del rettangolo di delimitazione che contiene il componente a discesa.

Questo metodo inizializza `mask` il membro di una struttura `size` [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) con il flag BCSIF_SIZE e il membro con il *pSize* parametro e quindi invia tale struttura nel [messaggio BCM_GETSPLITINFO](/windows/win32/Controls/bcm-getsplitinfo) descritto in Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene definita la variabile , `m_splitButton`che viene utilizzata per accedere a livello di codice al controllo pulsante di divisione. Questa variabile viene utilizzata nell'esempio seguente.

[!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene raddoppiata la dimensione della freccia a discesa del pulsante di divisione.

[!code-cpp[NVC_MFC_CButton_s1#5](../../mfc/reference/codesnippet/cpp/cbutton-class_14.cpp)]

## <a name="cbuttonsetsplitstyle"></a><a name="setsplitstyle"></a>CButton::SetSplitStyle

Imposta lo stile del controllo pulsante di divisione corrente.

```
BOOL SetSplitStyle(UINT uSplitStyle);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*uSplitStyle (informazioni in base all'altro)*|[in] Combinazione bit per bit di stili di pulsanti divisi. Per ulteriori informazioni, `uSplitStyle` vedere il membro della [struttura BUTTON_SPLITINFO.](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo)|

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo solo con i controlli il cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Gli stili dei pulsanti di divisione specificano l'allineamento, le proporzioni e il formato grafico con cui Windows disegna l'icona di un pulsante di divisione. Per ulteriori informazioni, `uSplitStyle` vedere il membro della [struttura BUTTON_SPLITINFO.](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo)

Questo metodo inizializza `mask` il membro di una struttura `uSplitStyle` [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) con il flag BCSIF_STYLE e il membro con il parametro *uSplitStyle,* quindi invia tale struttura nel [messaggio BCM_GETSPLITINFO](/windows/win32/Controls/bcm-getsplitinfo) descritto in Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene definita la variabile , `m_splitButton`che viene utilizzata per accedere a livello di codice al controllo pulsante di divisione.

[!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene impostato lo stile della freccia a discesa del pulsante di divisione. Lo stile BCSS_ALIGNLEFT visualizza la freccia sul lato sinistro del pulsante e lo stile BCSS_STRETCH mantiene le proporzioni della freccia a discesa quando si ridimensiona il pulsante.

[!code-cpp[NVC_MFC_CButton_s1#3](../../mfc/reference/codesnippet/cpp/cbutton-class_15.cpp)]

## <a name="cbuttonsetstate"></a><a name="setstate"></a>CButton::SetState

Imposta se un controllo pulsante è evidenziato o meno.

```cpp
void SetState(BOOL bHighlight);
```

### <a name="parameters"></a>Parametri

*bEvidenziare*<br/>
Specifica se il pulsante deve essere evidenziato. Un valore diverso da zero evidenzia il pulsante; un valore 0 rimuove qualsiasi evidenziazione.

### <a name="remarks"></a>Osservazioni

L'evidenziazione influisce sull'esterno di un controllo pulsante. Non ha alcun effetto sullo stato di controllo di un pulsante di opzione o di una casella di controllo.

Un controllo pulsante viene evidenziato automaticamente quando l'utente fa clic e tiene premuto il pulsante sinistro del mouse. L'evidenziazione viene rimossa quando l'utente rilascia il pulsante del mouse.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#9](../../mfc/reference/codesnippet/cpp/cbutton-class_9.cpp)]

## <a name="cbuttonsettextmargin"></a><a name="settextmargin"></a>CButton::SetTextMargin

Chiamare questo metodo per impostare `CButton` il margine di testo dell'oggetto.

```
BOOL SetTextMargin(RECT* pmargin);
```

### <a name="parameters"></a>Parametri

*pmargin*<br/>
Puntatore al nuovo margine di testo.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Questa funzione membro emula la funzionalità del messaggio BCM_SETTEXTMARGIN, come descritto nella sezione [Pulsanti](/windows/win32/controls/buttons) di Windows SDK.

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Classe CComboBox](../../mfc/reference/ccombobox-class.md)<br/>
[CEdit Class](../../mfc/reference/cedit-class.md)<br/>
[Classe CListBox](../../mfc/reference/clistbox-class.md)<br/>
[Classe CScrollBar](../../mfc/reference/cscrollbar-class.md)<br/>
[Classe CStatic](../../mfc/reference/cstatic-class.md)<br/>
[Classe CBitmapButton](../../mfc/reference/cbitmapbutton-class.md)<br/>
[Classe CDialog](../../mfc/reference/cdialog-class.md)
