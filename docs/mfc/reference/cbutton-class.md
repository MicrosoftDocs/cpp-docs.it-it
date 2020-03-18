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
ms.openlocfilehash: 669bdb18e378c4dc39bdc6d51ca1ebe7f93fa839
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79418832"
---
# <a name="cbutton-class"></a>Classe CButton

Fornisce la funzionalità dei controlli pulsante di Windows.

## <a name="syntax"></a>Sintassi

```
class CButton : public CWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CButton:: CButton](#cbutton)|Costruisce un oggetto `CButton`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CButton:: create](#create)|Crea il controllo pulsante di Windows e lo connette all'oggetto `CButton`.|
|[CButton::D rawItem](#drawitem)|Eseguire l'override di per disegnare un oggetto `CButton` creato dal proprietario.|
|[CButton:: GetBitmap](#getbitmap)|Recupera l'handle della bitmap precedentemente impostata con la [bitmap](#setbitmap).|
|[CButton:: GetButtonStyle](#getbuttonstyle)|Recupera le informazioni sullo stile del controllo Button.|
|[CButton:: GetCheck](#getcheck)|Recupera lo stato di selezione di un controllo Button.|
|[CButton:: GetCursor](#getcursor)|Recupera l'handle dell'immagine del cursore impostata in precedenza con il [cursore](#setcursor).|
|[CButton:: GetIcon](#geticon)|Recupera l'handle dell'icona precedentemente impostata con l' [icona](#seticon)di visualizzazione.|
|[CButton:: GetIdealSize](#getidealsize)|Recupera la dimensione ideale del controllo Button.|
|[CButton:: GetImages](#getimagelist)|Recupera l'elenco di immagini del controllo Button.|
|[CButton:: getnote](#getnote)|Recupera il componente nota del controllo del collegamento al comando corrente.|
|[CButton:: GetNoteLength](#getnotelength)|Recupera la lunghezza del testo della nota per il controllo del collegamento al comando corrente.|
|[CButton:: GetSplitGlyph](#getsplitglyph)|Recupera il glifo associato al controllo pulsante di suddivisione corrente.|
|[CButton:: GetSplitImageList](#getsplitimagelist)|Recupera l'elenco di immagini per il controllo pulsante di suddivisione corrente.|
|[CButton:: GetSplitInfo](#getsplitinfo)|Recupera informazioni che definiscono il controllo pulsante di suddivisione corrente.|
|[CButton:: GetSplitSize](#getsplitsize)|Recupera il rettangolo di delimitazione del componente a discesa del controllo pulsante di suddivisione corrente.|
|[CButton:: GetSplitStyle](#getsplitstyle)|Recupera gli stili dei pulsanti di suddivisione che definiscono il controllo pulsante di suddivisione corrente.|
|[CButton:: GetState](#getstate)|Recupera lo stato di selezione, evidenzia lo stato e lo stato attivo di un controllo Button.|
|[CButton:: GetTextMargin](#gettextmargin)|Recupera il margine del testo del controllo Button.|
|[CButton:: sebitmap](#setbitmap)|Specifica una bitmap da visualizzare sul pulsante.|
|[CButton:: SetButtonStyle](#setbuttonstyle)|Modifica lo stile di un pulsante.|
|[CButton:: secheck](#setcheck)|Imposta lo stato di selezione di un controllo Button.|
|[CButton:: secursor](#setcursor)|Specifica un'immagine del cursore da visualizzare sul pulsante.|
|[CButton:: SetDropDownState](#setdropdownstate)|Imposta lo stato dell'elenco a discesa del controllo pulsante di suddivisione corrente.|
|[CButton:: seicon](#seticon)|Specifica un'icona da visualizzare sul pulsante.|
|[CButton:: seimagine](#setimagelist)|Imposta l'elenco di immagini del controllo Button.|
|[CButton:: Nota](#setnote)|Imposta la nota sul controllo del collegamento al comando corrente.|
|[CButton:: SetSplitGlyph](#setsplitglyph)|Associa un glifo specificato al controllo pulsante di suddivisione corrente.|
|[CButton:: SetSplitImageList](#setsplitimagelist)|Associa un elenco di immagini con il controllo pulsante di suddivisione corrente.|
|[CButton:: SetSplitInfo](#setsplitinfo)|Specifica le informazioni che definiscono il controllo pulsante di suddivisione corrente.|
|[CButton:: SetSplitSize](#setsplitsize)|Imposta il rettangolo di delimitazione del componente a discesa del controllo pulsante di suddivisione corrente.|
|[CButton:: SetSplitStyle](#setsplitstyle)|Imposta lo stile del controllo pulsante di suddivisione corrente.|
|[CButton:: sestate](#setstate)|Imposta lo stato di evidenziazione di un controllo Button.|
|[CButton:: SetTextMargin](#settextmargin)|Imposta il margine del testo del controllo Button.|

## <a name="remarks"></a>Osservazioni

Un controllo Button è una piccola finestra figlio rettangolare su cui è possibile fare clic su on e off. I pulsanti possono essere usati singolarmente o in gruppi e possono essere etichettati o visualizzati senza testo. Un pulsante in genere cambia aspetto quando l'utente fa clic su di esso.

I pulsanti tipici corrispondono a casella di controllo, pulsante di opzione e pulsante. Un oggetto `CButton` può diventare uno di questi, in base allo [stile del pulsante](../../mfc/reference/styles-used-by-mfc.md#button-styles) specificato alla relativa inizializzazione dalla funzione membro [create](#create) .

Inoltre, la classe [CBitmapButton](../../mfc/reference/cbitmapbutton-class.md) derivata da `CButton` supporta la creazione di controlli Button etichettati con le immagini bitmap anziché con testo. Una `CBitmapButton` può avere bitmap separate per gli stati attivo, inattivo, stato attivo e disabilitato di un pulsante.

È possibile creare un controllo Button da un modello di finestra di dialogo o direttamente nel codice. In entrambi i casi, chiamare prima il costruttore `CButton` per costruire l'oggetto `CButton`; chiamare quindi la funzione membro `Create` per creare il controllo pulsante di Windows e collegarlo all'oggetto `CButton`.

La costruzione può essere un processo in un unico passaggio in una classe derivata da `CButton`. Scrivere un costruttore per la classe derivata e chiamare `Create` dall'interno del costruttore.

Se si desidera gestire i messaggi di notifica di Windows inviati da un controllo Button al relativo padre (in genere una classe derivata da [CDialog](../../mfc/reference/cdialog-class.md)), aggiungere una voce della mappa messaggi e una funzione membro del gestore del messaggio alla classe padre per ogni messaggio.

Ogni voce della mappa messaggi assume il formato seguente:

**Notifica\_** **(** _ID_, _memberFxn_ **)**

dove *ID* specifica l'ID della finestra figlio del controllo che invia la notifica e *memberFxn* è il nome della funzione membro padre scritta per gestire la notifica.

Il prototipo di funzione del padre è il seguente:

`afx_msg void memberFxn();`

Le potenziali voci della mappa messaggi sono le seguenti:

|Voce della mappa|Inviato all'elemento padre quando...|
|---------------|----------------------------|
|ON_BN_CLICKED|L'utente fa clic su un pulsante.|
|ON_BN_DOUBLECLICKED|L'utente fa doppio clic su un pulsante.|

Se si crea un oggetto `CButton` da una risorsa della finestra di dialogo, l'oggetto `CButton` viene eliminato automaticamente quando l'utente chiude la finestra di dialogo.

Se si crea un oggetto `CButton` all'interno di una finestra, potrebbe essere necessario eliminarlo. Se si crea l'oggetto `CButton` nell'heap usando la **nuova** funzione, è necessario chiamare **Delete** nell'oggetto per eliminarlo quando l'utente chiude il controllo pulsante di Windows. Se si crea l'oggetto `CButton` nello stack o questo viene incorporato nell'oggetto finestra di dialogo padre, viene eliminato automaticamente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CButton`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="cbutton"></a>CButton:: CButton

Costruisce un oggetto `CButton`.

```
CButton();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#1](../../mfc/reference/codesnippet/cpp/cbutton-class_1.cpp)]

##  <a name="create"></a>CButton:: create

Crea il controllo pulsante di Windows e lo connette all'oggetto `CButton`.

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
Specifica il testo del controllo Button.

*dwStyle*<br/>
Specifica lo stile del controllo Button. Applicare qualsiasi combinazione di [stili di pulsante](../../mfc/reference/styles-used-by-mfc.md#button-styles) al pulsante.

*rect*<br/>
Specifica la posizione e le dimensioni del controllo Button. Può essere un oggetto `CRect` o una struttura di `RECT`.

*pParentWnd*<br/>
Specifica la finestra padre del controllo Button, in genere un `CDialog`. Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo Button.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Si costruisce un oggetto `CButton` in due passaggi. Chiamare innanzitutto il costruttore e quindi chiamare `Create`, che crea il controllo pulsante di Windows e lo collega all'oggetto `CButton`.

Se viene specificato lo stile WS_VISIBLE, Windows invia il controllo Button tutti i messaggi necessari per attivare e visualizzare il pulsante.

Applicare gli [stili della finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) seguenti a un controllo Button:

- WS_CHILD sempre

- WS_VISIBLE in genere

- WS_DISABLED raramente

- WS_GROUP ai controlli di gruppo

- WS_TABSTOP includere il pulsante nell'ordine di tabulazione

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#2](../../mfc/reference/codesnippet/cpp/cbutton-class_2.cpp)]

##  <a name="drawitem"></a>CButton::D rawItem

Chiamata eseguita dal framework quando viene modificato un aspetto visivo di un pulsante creato dal proprietario.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*lpDrawItemStruct*<br/>
Puntatore long a una struttura [DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) . La struttura contiene informazioni sull'elemento da disegnare e il tipo di disegno necessario.

### <a name="remarks"></a>Osservazioni

Per un pulsante creato dal proprietario è impostato lo stile BS_OWNERDRAW. Eseguire l'override di questa funzione membro per implementare il disegno per un oggetto `CButton` creato dal proprietario. L'applicazione deve ripristinare tutti gli oggetti GDI (Graphics Device Interface) selezionati per il contesto di visualizzazione fornito in *lpDrawItemStruct* prima che venga terminata la funzione membro.

Vedere anche i valori di stile [BS_](../../mfc/reference/styles-used-by-mfc.md#button-styles) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#3](../../mfc/reference/codesnippet/cpp/cbutton-class_3.cpp)]

##  <a name="getbitmap"></a>CButton:: GetBitmap

Chiamare questa funzione membro per ottenere l'handle di una bitmap, precedentemente impostata con la [bitmap](#setbitmap), associata a un pulsante.

```
HBITMAP GetBitmap() const;
```

### <a name="return-value"></a>Valore restituito

Handle per una bitmap. NULL se non è stata specificata in precedenza alcuna bitmap.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#4](../../mfc/reference/codesnippet/cpp/cbutton-class_4.cpp)]

##  <a name="getbuttonstyle"></a>CButton:: GetButtonStyle

Recupera le informazioni sullo stile del controllo Button.

```
UINT GetButtonStyle() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce gli stili dei pulsanti per questo oggetto `CButton`. Questa funzione restituisce solo i valori di stile [BS_](../../mfc/reference/styles-used-by-mfc.md#button-styles) e non gli altri stili di finestra.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#5](../../mfc/reference/codesnippet/cpp/cbutton-class_5.cpp)]

##  <a name="getcheck"></a>CButton:: GetCheck

Recupera lo stato di selezione di un pulsante di opzione o di una casella di controllo.

```
int GetCheck() const;
```

### <a name="return-value"></a>Valore restituito

Il valore restituito da un controllo Button creato con lo stile BS_AUTOCHECKBOX, BS_AUTORADIOBUTTON, BS_AUTO3STATE, BS_CHECKBOX, BS_RADIOBUTTON o BS_3STATE è uno dei valori seguenti:

|valore|Significato|
|-----------|-------------|
|BST_UNCHECKED|Lo stato del pulsante è deselezionato.|
|BST_CHECKED|Lo stato del pulsante è selezionato.|
|BST_INDETERMINATE|Lo stato del pulsante è indeterminato (si applica solo se il pulsante ha lo stile BS_3STATE o BS_AUTO3STATE).|

Se il pulsante ha un altro stile, il valore restituito è BST_UNCHECKED.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#6](../../mfc/reference/codesnippet/cpp/cbutton-class_6.cpp)]

##  <a name="getcursor"></a>CButton:: GetCursor

Chiamare questa funzione membro per ottenere l'handle di un cursore, impostato in precedenza con il [cursore](#setcursor), associato a un pulsante.

```
HCURSOR GetCursor();
```

### <a name="return-value"></a>Valore restituito

Handle per un'immagine del cursore. NULL se non è stato specificato in precedenza alcun cursore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#7](../../mfc/reference/codesnippet/cpp/cbutton-class_7.cpp)]

##  <a name="geticon"></a>CButton:: GetIcon

Chiamare questa funzione membro per ottenere l'handle di un'icona, impostata in precedenza con l' [icona](#seticon)di visualizzazione, associata a un pulsante.

```
HICON GetIcon() const;
```

### <a name="return-value"></a>Valore restituito

Handle per un'icona. NULL se non è stata specificata in precedenza alcuna icona.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#8](../../mfc/reference/codesnippet/cpp/cbutton-class_8.cpp)]

##  <a name="getidealsize"></a>CButton:: GetIdealSize

Recupera le dimensioni ideali per il controllo Button.

```
BOOL GetIdealSize(SIZE* psize);
```

### <a name="parameters"></a>Parametri

*psize*<br/>
Puntatore alla dimensione corrente del pulsante.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro emula la funzionalità del messaggio di BCM_GETIDEALSIZE, come descritto nella sezione dei [pulsanti](/windows/win32/controls/buttons) della Windows SDK.

##  <a name="getimagelist"></a>CButton:: GetImages

Chiamare questo metodo per ottenere l'elenco di immagini dal controllo Button.

```
BOOL GetImageList(PBUTTON_IMAGELIST pbuttonImagelist);
```

### <a name="parameters"></a>Parametri

*pbuttonImagelist*<br/>
Puntatore all'elenco di immagini dell'oggetto `CButton`.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro emula la funzionalità del messaggio di BCM_GETIMAGELIST, come descritto nella sezione dei [pulsanti](/windows/win32/controls/buttons) della Windows SDK.

##  <a name="getnote"></a>CButton:: getnote

Recupera il testo della nota associato al controllo del collegamento al comando corrente.

```
CString GetNote() const;

BOOL GetNote(
    LPTSTR lpszNote,
    UINT* cchNote) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*lpszNote*|out Puntatore a un buffer, che il chiamante è responsabile dell'allocazione e della deallocazione. Se il valore restituito è TRUE, il buffer contiene il testo della nota associato al controllo del collegamento al comando corrente. in caso contrario, il buffer è invariato.|
|*cchNote*|[in, out] Puntatore a una variabile Unsigned Integer.<br /><br /> Quando viene chiamato questo metodo, la variabile contiene la dimensione del buffer specificato dal parametro *lpszNote* .<br /><br /> Quando questo metodo viene restituito, se il valore restituito è TRUE, la variabile contiene la dimensione della nota associata al controllo del collegamento al comando corrente. Se il valore restituito è FALSE, la variabile contiene la dimensione del buffer necessaria per contenere la nota.|

### <a name="return-value"></a>Valore restituito

Nel primo overload, oggetto [CString](../../atl-mfc-shared/using-cstring.md) che contiene il testo della nota associato al controllo del collegamento al comando corrente.

-oppure-

Nel secondo overload, TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Usare questo metodo solo con i controlli il cui stile del pulsante è BS_COMMANDLINK o BS_DEFCOMMANDLINK.

Questo metodo invia il messaggio di [BCM_GETNOTE](/windows/win32/Controls/bcm-getnote) , descritto nel Windows SDK.

##  <a name="getnotelength"></a>CButton:: GetNoteLength

Recupera la lunghezza del testo della nota per il controllo del collegamento al comando corrente.

```
UINT GetNoteLength() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza del testo della nota, in caratteri Unicode a 16 bit, per il controllo del collegamento al comando corrente.

### <a name="remarks"></a>Osservazioni

Usare questo metodo solo con i controlli il cui stile del pulsante è BS_COMMANDLINK o BS_DEFCOMMANDLINK.

Questo metodo invia il messaggio di [BCM_GETNOTELENGTH](/windows/win32/Controls/bcm-getnotelength) , descritto nel Windows SDK.

##  <a name="getsplitglyph"></a>CButton:: GetSplitGlyph

Recupera il glifo associato al controllo pulsante di suddivisione corrente.

```
TCHAR GetSplitGlyph() const;
```

### <a name="return-value"></a>Valore restituito

Carattere di glifo associato al controllo pulsante di suddivisione corrente.

### <a name="remarks"></a>Osservazioni

Un glifo è la rappresentazione fisica di un carattere in un particolare tipo di carattere. Ad esempio, un controllo pulsante combinato potrebbe essere decorato con il glifo del segno di spunta Unicode (U + 2713).

Usare questo metodo solo con i controlli il cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Questo metodo inizializza il membro `mask` di una struttura [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) con il flag BCSIF_GLYPH, quindi invia tale struttura nel messaggio [BCM_GETSPLITINFO](/windows/win32/Controls/bcm-getsplitinfo) descritto nell'Windows SDK. Quando la funzione Message restituisce, questo metodo recupera il glifo dal membro `himlGlyph` della struttura.

##  <a name="getsplitimagelist"></a>CButton:: GetSplitImageList

Recupera l' [elenco di immagini](../../mfc/reference/cimagelist-class.md) per il controllo pulsante di suddivisione corrente.

```
CImageList* GetSplitImageList() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CImageList](../../mfc/reference/cimagelist-class.md) .

### <a name="remarks"></a>Osservazioni

Usare questo metodo solo con i controlli il cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Questo metodo inizializza il membro `mask` di una struttura [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) con il flag BCSIF_IMAGE, quindi invia tale struttura nel messaggio [BCM_GETSPLITINFO](/windows/win32/Controls/bcm-getsplitinfo) descritto nell'Windows SDK. Quando la funzione Message restituisce, questo metodo recupera l'elenco di immagini dal membro `himlGlyph` della struttura.

##  <a name="getsplitinfo"></a>CButton:: GetSplitInfo

Recupera i parametri che determinano il modo in cui Windows disegna il controllo pulsante di suddivisione corrente.

```
BOOL GetSplitInfo(PBUTTON_SPLITINFO pInfo) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pInfo*|out Puntatore a una struttura [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) che riceve informazioni sul controllo pulsante di suddivisione corrente. Il chiamante è responsabile dell'allocazione della struttura.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Usare questo metodo solo con i controlli il cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Questo metodo invia il messaggio di [BCM_GETSPLITINFO](/windows/win32/Controls/bcm-getsplitinfo) , descritto nel Windows SDK.

##  <a name="getsplitsize"></a>CButton:: GetSplitSize

Recupera il rettangolo di delimitazione del componente a discesa del controllo pulsante di suddivisione corrente.

```
BOOL GetSplitSize(LPSIZE pSize) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pSize*|out Puntatore a una struttura di [dimensioni](/windows/win32/api/windef/ns-windef-size) che riceve la descrizione di un rettangolo.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Usare questo metodo solo con i controlli il cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Quando il controllo pulsante di divisione è espanso, può visualizzare un componente a discesa, ad esempio un controllo elenco o un controllo cercapersone. Questo metodo recupera il rettangolo di delimitazione che contiene il componente a discesa.

Questo metodo inizializza il membro `mask` di una struttura [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) con il flag BCSIF_SIZE, quindi invia tale struttura nel messaggio [BCM_GETSPLITINFO](/windows/win32/Controls/bcm-getsplitinfo) descritto nell'Windows SDK. Quando la funzione Message restituisce, questo metodo recupera il rettangolo di delimitazione dal membro `size` della struttura.

##  <a name="getsplitstyle"></a>CButton:: GetSplitStyle

Recupera gli stili dei pulsanti di suddivisione che definiscono il controllo pulsante di suddivisione corrente.

```
UINT GetSplitStyle() const;
```

### <a name="return-value"></a>Valore restituito

Combinazione bit per bit di stili di pulsanti di divisione. Per ulteriori informazioni, vedere il membro `uSplitStyle` della struttura [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) .

### <a name="remarks"></a>Osservazioni

Usare questo metodo solo con i controlli il cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Lo stile del pulsante di divisione consente di specificare l'allineamento, le proporzioni e il formato grafico con cui Windows disegna un'icona pulsante di suddivisione.

Questo metodo inizializza il membro `mask` di una struttura [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) con il flag BCSIF_STYLE, quindi invia tale struttura nel messaggio [BCM_GETSPLITINFO](/windows/win32/Controls/bcm-getsplitinfo) descritto nell'Windows SDK. Quando la funzione Message restituisce, questo metodo recupera gli stili dei pulsanti di suddivisione dal membro `uSplitStyle` della struttura.

##  <a name="getstate"></a>CButton:: GetState

Recupera lo stato di un controllo Button.

```
UINT GetState() const;
```

### <a name="return-value"></a>Valore restituito

Campo di bit che contiene la combinazione di valori che indicano lo stato corrente di un controllo Button. Nella tabella seguente sono elencati i valori possibili.

|Stato pulsante|valore|Descrizione|
|------------------|-----------|-----------------|
|BST_UNCHECKED|0x0000|Stato iniziale.|
|BST_CHECKED|0x0001|Il controllo Button è selezionato.|
|BST_INDETERMINATE|0x0002|Lo stato è indeterminato (possibile solo quando il controllo Button ha tre stati).|
|BST_PUSHED|0x0004|Viene premuto il controllo Button.|
|BST_FOCUS|0x0008|Il controllo Button ha lo stato attivo.|

### <a name="remarks"></a>Osservazioni

Un controllo Button con lo stile del pulsante BS_3STATE o BS_AUTO3STATE crea una casella di controllo con un terzo stato denominato lo stato indeterminato. Lo stato indeterminato indica che la casella di controllo non è selezionata né deselezionata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#9](../../mfc/reference/codesnippet/cpp/cbutton-class_9.cpp)]

##  <a name="gettextmargin"></a>CButton:: GetTextMargin

Chiamare questo metodo per ottenere il margine del testo dell'oggetto `CButton`.

```
BOOL GetTextMargin(RECT* pmargin);
```

### <a name="parameters"></a>Parametri

*pmargin*<br/>
Puntatore al margine del testo dell'oggetto `CButton`.

### <a name="return-value"></a>Valore restituito

Restituisce il margine del testo.

### <a name="remarks"></a>Osservazioni

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro emula la funzionalità del messaggio di BCM_GETTEXTMARGIN, come descritto nella sezione dei [pulsanti](/windows/win32/controls/buttons) della Windows SDK.

##  <a name="setbitmap"></a>CButton:: sebitmap

Chiamare questa funzione membro per associare una nuova bitmap al pulsante.

```
HBITMAP SetBitmap(HBITMAP hBitmap);
```

### <a name="parameters"></a>Parametri

*hBitmap*<br/>
Handle di una bitmap.

### <a name="return-value"></a>Valore restituito

Handle di una bitmap precedentemente associata al pulsante.

### <a name="remarks"></a>Osservazioni

La bitmap verrà posizionata automaticamente sulla faccia del pulsante, centrata per impostazione predefinita. Se la bitmap è troppo grande per il pulsante, verrà ritagliata su entrambi i lati. È possibile scegliere altre opzioni di allineamento, incluse le seguenti:

- BS_TOP

- BS_LEFT

- BS_RIGHT

- BS_CENTER

- BS_BOTTOM

- BS_VCENTER

A differenza di [CBitmapButton](../../mfc/reference/cbitmapbutton-class.md), che usa quattro bitmap per pulsante, `SetBitmap` usa una sola bitmap per il pulsante. Quando si preme il pulsante, la bitmap viene spostata verso il basso e verso destra.

L'utente è responsabile del rilascio della bitmap al termine dell'operazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#4](../../mfc/reference/codesnippet/cpp/cbutton-class_4.cpp)]

##  <a name="setbuttonstyle"></a>CButton:: SetButtonStyle

Modifica lo stile di un pulsante.

```
void SetButtonStyle(
    UINT nStyle,
    BOOL bRedraw = TRUE);
```

### <a name="parameters"></a>Parametri

*nStyle*<br/>
Specifica lo [stile del pulsante](../../mfc/reference/styles-used-by-mfc.md#button-styles).

*bRedraw*<br/>
Specifica se il pulsante deve essere ridisegnato. Il pulsante viene ridisegnato da un valore diverso da zero. Il valore 0 non consente di ricreare il pulsante. Per impostazione predefinita, il pulsante viene ridisegnato.

### <a name="remarks"></a>Osservazioni

Usare la funzione membro `GetButtonStyle` per recuperare lo stile del pulsante. La parola di ordine inferiore dello stile del pulsante completo è lo stile specifico del pulsante.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#5](../../mfc/reference/codesnippet/cpp/cbutton-class_5.cpp)]

##  <a name="setcheck"></a>CButton:: secheck

Imposta o Reimposta lo stato di selezione di un pulsante di opzione o di una casella di controllo.

```
void SetCheck(int nCheck);
```

### <a name="parameters"></a>Parametri

*nPer*<br/>
Specifica lo stato di selezione. Questo parametro può essere uno dei seguenti:

|valore|Significato|
|-----------|-------------|
|BST_UNCHECKED|Impostare lo stato del pulsante su deselezionato.|
|BST_CHECKED|Impostare lo stato del pulsante su controllato.|
|BST_INDETERMINATE|Impostare lo stato del pulsante su indeterminato. Questo valore può essere utilizzato solo se il pulsante presenta lo stile BS_3STATE o BS_AUTO3STATE.|

### <a name="remarks"></a>Osservazioni

Questa funzione membro non ha alcun effetto su un pulsante.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#6](../../mfc/reference/codesnippet/cpp/cbutton-class_6.cpp)]

##  <a name="setcursor"></a>CButton:: secursor

Chiamare questa funzione membro per associare un nuovo cursore al pulsante.

```
HCURSOR SetCursor(HCURSOR hCursor);
```

### <a name="parameters"></a>Parametri

*hCursor*<br/>
Handle di un cursore.

### <a name="return-value"></a>Valore restituito

Handle di un cursore associato in precedenza al pulsante.

### <a name="remarks"></a>Osservazioni

Il cursore verrà posizionato automaticamente sul lato del pulsante, centrato per impostazione predefinita. Se il cursore è troppo grande per il pulsante, verrà ritagliato su entrambi i lati. È possibile scegliere altre opzioni di allineamento, incluse le seguenti:

- BS_TOP

- BS_LEFT

- BS_RIGHT

- BS_CENTER

- BS_BOTTOM

- BS_VCENTER

A differenza di [CBitmapButton](../../mfc/reference/cbitmapbutton-class.md), che usa quattro bitmap per pulsante, `SetCursor` usa solo un cursore per il pulsante. Quando si preme il pulsante, viene visualizzato il cursore verso il basso e verso destra.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#7](../../mfc/reference/codesnippet/cpp/cbutton-class_7.cpp)]

##  <a name="setdropdownstate"></a>CButton:: SetDropDownState

Imposta lo stato dell'elenco a discesa del controllo pulsante di suddivisione corrente.

```
BOOL SetDropDownState(BOOL fDropDown);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*fDropDown*|in TRUE per impostare lo stato di BST_DROPDOWNPUSHED; in caso contrario, FALSE.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Un controllo pulsante combinato ha uno stile di BS_SPLITBUTTON o BS_DEFSPLITBUTTON ed è costituito da un pulsante e da una freccia a discesa a destra. Per altre informazioni, vedere [stili dei pulsanti](/windows/win32/Controls/button-styles). In genere, lo stato a discesa viene impostato quando l'utente fa clic sulla freccia a discesa. Utilizzare questo metodo per impostare a livello di codice lo stato dell'elenco a discesa del controllo. La freccia a discesa viene disegnata ombreggiata per indicare lo stato.

Questo metodo invia il messaggio di [BCM_SETDROPDOWNSTATE](/windows/win32/Controls/bcm-setdropdownstate) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene definita la variabile, *m_splitButton*, utilizzata per accedere a livello di codice al controllo pulsante di divisione. Questa variabile viene usata nell'esempio seguente.

[!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene impostato lo stato del controllo pulsante combinato per indicare che viene eseguito il push della freccia a discesa.

[!code-cpp[NVC_MFC_CButton_s1#6](../../mfc/reference/codesnippet/cpp/cbutton-class_11.cpp)]

##  <a name="setelevationrequired"></a>CButton:: SetElevationRequired

Imposta lo stato del controllo pulsante corrente su `elevation required`, che è necessario affinché il controllo visualizzi un'icona di sicurezza con privilegi elevati.

```
BOOL SetElevationRequired(BOOL fElevationRequired);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*fElevationRequired*|in TRUE per impostare lo stato di `elevation required`; in caso contrario, FALSE.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Se il controllo di un pulsante o di un collegamento a un comando richiede autorizzazioni di sicurezza elevate per eseguire un'azione, impostare il controllo su `elevation required` stato. Successivamente, in Windows viene visualizzata l'icona dello scudo controllo dell'account utente (UAC) nel controllo. Per ulteriori informazioni, vedere "controllo dell'account utente" in [MSDN](https://go.microsoft.com/fwlink/p/?linkid=18507).

Questo metodo invia il messaggio di [BCM_SETSHIELD](/windows/win32/Controls/bcm-setshield) , descritto nel Windows SDK.

##  <a name="seticon"></a>CButton:: seicon

Chiamare questa funzione membro per associare una nuova icona al pulsante.

```
HICON SetIcon(HICON hIcon);
```

### <a name="parameters"></a>Parametri

*hIcon*<br/>
Handle di un'icona.

### <a name="return-value"></a>Valore restituito

Handle di un'icona precedentemente associata al pulsante.

### <a name="remarks"></a>Osservazioni

L'icona verrà posizionata automaticamente sulla faccia del pulsante, centrata per impostazione predefinita. Se l'icona è troppo grande per il pulsante, verrà ritagliata su entrambi i lati. È possibile scegliere altre opzioni di allineamento, incluse le seguenti:

- BS_TOP

- BS_LEFT

- BS_RIGHT

- BS_CENTER

- BS_BOTTOM

- BS_VCENTER

A differenza di [CBitmapButton](../../mfc/reference/cbitmapbutton-class.md), che usa quattro bitmap per pulsante, `SetIcon` usa solo un'icona per il pulsante. Quando si preme il pulsante, viene visualizzata l'icona di spostamento verso il basso e verso destra.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#8](../../mfc/reference/codesnippet/cpp/cbutton-class_8.cpp)]

##  <a name="setimagelist"></a>CButton:: seimagine

Chiamare questo metodo per impostare l'elenco di immagini dell'oggetto `CButton`.

```
BOOL SetImageList(PBUTTON_IMAGELIST pbuttonImagelist);
```

### <a name="parameters"></a>Parametri

*pbuttonImagelist*<br/>
Puntatore al nuovo elenco di immagini.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Questa funzione membro emula la funzionalità del messaggio di BCM_SETIMAGELIST, come descritto nella sezione dei [pulsanti](/windows/win32/controls/buttons) della Windows SDK.

##  <a name="setnote"></a>CButton:: Nota

Imposta il testo della nota per il controllo del collegamento al comando corrente.

```
BOOL SetNote(LPCTSTR lpszNote);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*lpszNote*|in Puntatore a una stringa Unicode impostata come testo della nota per il controllo del collegamento di comando.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Usare questo metodo solo con i controlli il cui stile del pulsante è BS_COMMANDLINK o BS_DEFCOMMANDLINK.

Questo metodo invia il messaggio di [BCM_SETNOTE](/windows/win32/Controls/bcm-setnote) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene definita la variabile, *m_cmdLink*, utilizzata per accedere a livello di codice al controllo del collegamento al comando. Questa variabile viene usata nell'esempio seguente.

[!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene impostato il testo della nota per il controllo del collegamento del comando.

[!code-cpp[NVC_MFC_CButton_s1#7](../../mfc/reference/codesnippet/cpp/cbutton-class_12.cpp)]

##  <a name="setsplitglyph"></a>CButton:: SetSplitGlyph

Associa un glifo specificato al controllo pulsante di suddivisione corrente.

```
BOOL SetSplitGlyph(TCHAR chGlyph);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*chGlyph*|in Carattere che specifica il glifo da utilizzare come freccia a discesa del pulsante di divisione.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Usare questo metodo solo con i controlli che hanno lo stile del pulsante BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Un glifo è la rappresentazione fisica di un carattere in un particolare tipo di carattere. Il parametro *chGlyph* non viene utilizzato come glifo, ma viene invece utilizzato per selezionare un glifo da un set di glifi definiti dal sistema. Il glifo della freccia a discesa predefinito è specificato da un carattere "6" ed è simile al triangolo di PUNTAmento nero del carattere Unicode (U + 25BC).

Questo metodo inizializza il membro `mask` di una struttura [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) con il flag BCSIF_GLYPH e il membro `himlGlyph` con il parametro *chGlyph* , quindi invia tale struttura nel messaggio [BCM_GETSPLITINFO](/windows/win32/Controls/bcm-getsplitinfo) descritto nell'Windows SDK.

##  <a name="setsplitimagelist"></a>CButton:: SetSplitImageList

Associa un [elenco di immagini](../../mfc/reference/cimagelist-class.md) con il controllo pulsante di suddivisione corrente.

```
BOOL SetSplitImageList(CImageList* pSplitImageList);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pSplitImageList*|in Puntatore a un oggetto [CImageList](../../mfc/reference/cimagelist-class.md) da assegnare al controllo pulsante di suddivisione corrente.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Usare questo metodo solo con i controlli il cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Questo metodo inizializza il membro `mask` di una struttura [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) con il flag BCSIF_IMAGE e il membro `himlGlyph` con il parametro *pSplitImageList* , quindi invia tale struttura nel messaggio [BCM_GETSPLITINFO](/windows/win32/Controls/bcm-getsplitinfo) descritto nell'Windows SDK.

##  <a name="setsplitinfo"></a>CButton:: SetSplitInfo

Specifica i parametri che determinano il modo in cui Windows disegna il controllo pulsante di suddivisione corrente.

```
BOOL SetSplitInfo(PBUTTON_SPLITINFO pInfo);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pInfo*|in Puntatore a una struttura [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) che definisce il controllo pulsante di suddivisione corrente.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Usare questo metodo solo con i controlli il cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Questo metodo invia il messaggio di [BCM_SETSPLITINFO](/windows/win32/Controls/bcm-setsplitinfo) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene definita la variabile, `m_splitButton`, utilizzata per accedere a livello di codice al controllo pulsante di divisione.

[!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene modificato il glifo utilizzato per la freccia a discesa del pulsante di suddivisione. Nell'esempio viene sostituito un glifo del triangolo verso l'alto per il glifo del triangolo verso il basso predefinito. Il glifo visualizzato dipende dal carattere specificato nel membro `himlGlyph` della struttura di `BUTTON_SPLITINFO`. Il glifo del triangolo verso il basso viene specificato da un carattere "6" e il glifo del triangolo verso l'alto viene specificato da un carattere "5". Per il confronto, vedere il metodo convenience, [CButton:: SetSplitGlyph](#setsplitglyph).

[!code-cpp[NVC_MFC_CButton_s1#4](../../mfc/reference/codesnippet/cpp/cbutton-class_13.cpp)]

##  <a name="setsplitsize"></a>CButton:: SetSplitSize

Imposta il rettangolo di delimitazione del componente a discesa del controllo pulsante di suddivisione corrente.

```
BOOL SetSplitSize(LPSIZE pSize);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pSize*|in Puntatore a una struttura di [dimensioni](/windows/win32/api/windef/ns-windef-size) che descrive un rettangolo di delimitazione.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Usare questo metodo solo con i controlli il cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Quando il controllo pulsante di divisione è espanso, può visualizzare un componente a discesa, ad esempio un controllo elenco o un controllo cercapersone. Questo metodo specifica la dimensione del rettangolo di delimitazione che contiene il componente a discesa.

Questo metodo inizializza il membro `mask` di una struttura [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) con il flag BCSIF_SIZE e il membro `size` con il parametro *psize* , quindi invia tale struttura nel messaggio [BCM_GETSPLITINFO](/windows/win32/Controls/bcm-getsplitinfo) descritto nell'Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene definita la variabile, `m_splitButton`, utilizzata per accedere a livello di codice al controllo pulsante di divisione. Questa variabile viene usata nell'esempio seguente.

[!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice seguente vengono raddoppiate le dimensioni della freccia a discesa del pulsante di suddivisione.

[!code-cpp[NVC_MFC_CButton_s1#5](../../mfc/reference/codesnippet/cpp/cbutton-class_14.cpp)]

##  <a name="setsplitstyle"></a>CButton:: SetSplitStyle

Imposta lo stile del controllo pulsante di suddivisione corrente.

```
BOOL SetSplitStyle(UINT uSplitStyle);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*uSplitStyle*|in Combinazione bit per bit di stili di pulsanti di divisione. Per ulteriori informazioni, vedere il membro `uSplitStyle` della struttura [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) .|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Usare questo metodo solo con i controlli il cui stile del pulsante è BS_SPLITBUTTON o BS_DEFSPLITBUTTON.

Lo stile del pulsante di divisione consente di specificare l'allineamento, le proporzioni e il formato grafico con cui Windows disegna un'icona pulsante di suddivisione. Per ulteriori informazioni, vedere il membro `uSplitStyle` della struttura [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) .

Questo metodo inizializza il membro `mask` di una struttura [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) con il flag BCSIF_STYLE e il membro `uSplitStyle` con il parametro *uSplitStyle* , quindi invia tale struttura nel messaggio [BCM_GETSPLITINFO](/windows/win32/Controls/bcm-getsplitinfo) descritto nell'Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene definita la variabile, `m_splitButton`, utilizzata per accedere a livello di codice al controllo pulsante di divisione.

[!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene impostato lo stile della freccia a discesa del pulsante di suddivisione. Lo stile BCSS_ALIGNLEFT Visualizza la freccia sul lato sinistro del pulsante e lo stile BCSS_STRETCH mantiene le proporzioni della freccia a discesa quando si ridimensiona il pulsante.

[!code-cpp[NVC_MFC_CButton_s1#3](../../mfc/reference/codesnippet/cpp/cbutton-class_15.cpp)]

##  <a name="setstate"></a>CButton:: sestate

Imposta un valore che indica se un controllo Button è evidenziato o meno.

```
void SetState(BOOL bHighlight);
```

### <a name="parameters"></a>Parametri

*bHighlight*<br/>
Specifica se il pulsante deve essere evidenziato. Un valore diverso da zero evidenzia il pulsante; un valore 0 rimuove tutte le evidenziazioni.

### <a name="remarks"></a>Osservazioni

L'evidenziazione influiscono sull'esterno di un controllo Button. Non ha alcun effetto sullo stato di selezione di un pulsante di opzione o di una casella di controllo.

Un controllo Button viene evidenziato automaticamente quando l'utente fa clic con il pulsante sinistro del mouse. L'evidenziazione viene rimossa quando l'utente rilascia il pulsante del mouse.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CButton#9](../../mfc/reference/codesnippet/cpp/cbutton-class_9.cpp)]

##  <a name="settextmargin"></a>CButton:: SetTextMargin

Chiamare questo metodo per impostare il margine del testo dell'oggetto `CButton`.

```
BOOL SetTextMargin(RECT* pmargin);
```

### <a name="parameters"></a>Parametri

*pmargin*<br/>
Puntatore al nuovo margine del testo.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Questa funzione membro emula la funzionalità del messaggio di BCM_SETTEXTMARGIN, come descritto nella sezione dei [pulsanti](/windows/win32/controls/buttons) della Windows SDK.

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
