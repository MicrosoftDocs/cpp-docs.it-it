---
title: Classe CEditView
ms.date: 11/04/2016
f1_keywords:
- CEditView
- AFXEXT/CEditView
- AFXEXT/CEditView::CEditView
- AFXEXT/CEditView::FindText
- AFXEXT/CEditView::GetBufferLength
- AFXEXT/CEditView::GetEditCtrl
- AFXEXT/CEditView::GetPrinterFont
- AFXEXT/CEditView::GetSelectedText
- AFXEXT/CEditView::LockBuffer
- AFXEXT/CEditView::PrintInsideRect
- AFXEXT/CEditView::SerializeRaw
- AFXEXT/CEditView::SetPrinterFont
- AFXEXT/CEditView::SetTabStops
- AFXEXT/CEditView::UnlockBuffer
- AFXEXT/CEditView::OnFindNext
- AFXEXT/CEditView::OnReplaceAll
- AFXEXT/CEditView::OnReplaceSel
- AFXEXT/CEditView::OnTextNotFound
- AFXEXT/CEditView::dwStyleDefault
helpviewer_keywords:
- CEditView [MFC], CEditView
- CEditView [MFC], FindText
- CEditView [MFC], GetBufferLength
- CEditView [MFC], GetEditCtrl
- CEditView [MFC], GetPrinterFont
- CEditView [MFC], GetSelectedText
- CEditView [MFC], LockBuffer
- CEditView [MFC], PrintInsideRect
- CEditView [MFC], SerializeRaw
- CEditView [MFC], SetPrinterFont
- CEditView [MFC], SetTabStops
- CEditView [MFC], UnlockBuffer
- CEditView [MFC], OnFindNext
- CEditView [MFC], OnReplaceAll
- CEditView [MFC], OnReplaceSel
- CEditView [MFC], OnTextNotFound
- CEditView [MFC], dwStyleDefault
ms.assetid: bf38255c-fcbe-450c-95b2-3c5e35f86c37
ms.openlocfilehash: 3ab276e83e8642aa5de2fd96305cb6d7b648fc40
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58781237"
---
# <a name="ceditview-class"></a>Classe CEditView

Tipo di classe di visualizzazione che fornisce la funzionalità di un controllo di modifica di Windows e che può essere utilizzato per implementare funzionalità di tipo editor di testo semplice.

## <a name="syntax"></a>Sintassi

```
class CEditView : public CCtrlView
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CEditView::CEditView](#ceditview)|Costruisce un oggetto di tipo `CEditView`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CEditView::FindText](#findtext)|Cerca una stringa all'interno del testo.|
|[CEditView::GetBufferLength](#getbufferlength)|Ottiene la lunghezza del buffer di caratteri.|
|[CEditView::GetEditCtrl](#geteditctrl)|Fornisce l'accesso per il `CEdit` parte di un `CEditView` oggetto (controllo di modifica di Windows).|
|[CEditView::GetPrinterFont](#getprinterfont)|Recupera il tipo di carattere della stampante corrente.|
|[CEditView::GetSelectedText](#getselectedtext)|Recupera la selezione di testo corrente.|
|[CEditView::LockBuffer](#lockbuffer)|Blocca il buffer.|
|[CEditView::PrintInsideRect](#printinsiderect)|Esegue il rendering di testo all'interno di un rettangolo specificato.|
|[CEditView::SerializeRaw](#serializeraw)|Serializza un `CEditView` oggetto su disco come testo non elaborato.|
|[CEditView::SetPrinterFont](#setprinterfont)|Imposta un nuovo tipo di carattere della stampante.|
|[CEditView::SetTabStops](#settabstops)|Imposta le tabulazioni per la visualizzazione su schermo e la stampa.|
|[CEditView::UnlockBuffer](#unlockbuffer)|Sblocca il buffer.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CEditView::OnFindNext](#onfindnext)|Cerca l'occorrenza successiva della stringa di testo.|
|[CEditView::OnReplaceAll](#onreplaceall)|Sostituisce tutte le occorrenze di una stringa specificata con una nuova stringa.|
|[CEditView::OnReplaceSel](#onreplacesel)|Sostituisce la selezione corrente.|
|[CEditView::OnTextNotFound](#ontextnotfound)|Chiamato quando un'operazione di ricerca non riesce a trovare qualsiasi ulteriore testo.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CEditView::dwStyleDefault](#dwstyledefault)|Stile predefinito per gli oggetti di tipo `CEditView`.|

## <a name="remarks"></a>Note

Il `CEditView` classe fornisce le funzioni aggiuntive seguenti:

- Stampare.

- Trova e sostituisci.

In quanto classe `CEditView` è un derivato della classe `CView`, gli oggetti della classe `CEditView` può essere utilizzato con i documenti e modelli di documento.

Ogni `CEditView` testo del controllo viene mantenuto nel proprio oggetto di memoria globale. L'applicazione può esercitare un numero qualsiasi di `CEditView` oggetti.

Creare oggetti di tipo `CEditView` se si desidera che una finestra di modifica con la funzionalità aggiunta elencata in precedenza, o se si vuole la funzionalità editor di testo semplice. Oggetto `CEditView` oggetto può occupare l'intera area client di una finestra. Derivare classi personalizzate da `CEditView` per aggiungere o modificare la funzionalità di base, o per dichiarare le classi che possono essere aggiunti a un modello di documento.

L'implementazione predefinita della classe `CEditView` gestisce i comandi seguenti: ID_EDIT_SELECT_ALL ID_EDIT_FIND, ID_EDIT_REPLACE, ID_EDIT_REPEAT e ID_FILE_PRINT.

Il limite di carattere predefinito per `CEditView` è (1024 \* 1024-1 = 1048575). Ciò può essere modificato chiamando la funzione EM_LIMITTEXT del controllo di modifica sottostante. Tuttavia, i limiti sono diversi a seconda del sistema operativo e il tipo di modifica controllo (singola o multiriga). Per altre informazioni su questi limiti, vedere [EM_LIMITTEXT](/windows/desktop/Controls/em-limittext).

Per modificare questo limite nel controllo, eseguire l'override di `OnCreate()` funzionare per i `CEditView` classe e inserire la riga di codice seguente:

[!code-cpp[NVC_MFCDocView#65](../../mfc/codesnippet/cpp/ceditview-class_1.cpp)]

Gli oggetti di tipo `CEditView` (o di tipi derivati da `CEditView`) presentano le limitazioni seguenti:

- `CEditView` non implementa true ciò che viene visualizzato è il risultato di modifica (WYSIWYG). Dove è possibile scegliere tra la leggibilità sullo schermo e corrispondenza output stampato, `CEditView` opts per facilitarne la lettura dello schermo.

- `CEditView` può visualizzare testo in un unico tipo di carattere. Nessuna formattazione dei caratteri speciali è supportato. Vedere la classe [CRichEditView](../../mfc/reference/cricheditview-class.md) per funzionalità più potenti.

- La quantità di testo una `CEditView` può contenere è limitato. I limiti sono uguali a quelle per il `CEdit` controllo.

Per ulteriori informazioni sul `CEditView`, vedere [derivato Visualizzazione classi disponibili in MFC](../../mfc/derived-view-classes-available-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

[CCtrlView](../../mfc/reference/cctrlview-class.md)

`CEditView`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXEXT. h

##  <a name="ceditview"></a>  CEditView::CEditView

Costruisce un oggetto di tipo `CEditView`.

```
CEditView();
```

### <a name="remarks"></a>Note

Al termine della creazione dell'oggetto, è necessario chiamare il [CWnd:: Create](../../mfc/reference/cwnd-class.md#create) funzionamento prima che venga utilizzato il controllo di modifica. Se si deriva una classe dalla classe `CEditView` e aggiungerlo al modello usando `CWinApp::AddDocTemplate`, il framework chiama questo costruttore di entrambi e `Create` (funzione).

##  <a name="dwstyledefault"></a>  CEditView::dwStyleDefault

Contiene lo stile predefinito del `CEditView` oggetto.

```
static const DWORD dwStyleDefault;
```

### <a name="remarks"></a>Note

Passare il membro statico come le *dwStyle* parametro del `Create` funzione per ottenere lo stile predefinito per il `CEditView` oggetto.

##  <a name="findtext"></a>  CEditView::FindText

Chiamare il `FindText` funzione per la ricerca di `CEditView` buffer di testo dell'oggetto.

```
BOOL FindText(
    LPCTSTR lpszFind,
    BOOL bNext = TRUE,
    BOOL bCase = TRUE);
```

### <a name="parameters"></a>Parametri

*lpszFind*<br/>
Il testo da trovare.

*bNext*<br/>
Specifica la direzione della ricerca. Se TRUE, la direzione di ricerca è verso la fine del buffer. Se FALSE, la direzione di ricerca è verso l'inizio del buffer.

*bCase*<br/>
Specifica se la ricerca fa distinzione tra maiuscole e minuscole. Se TRUE, la ricerca viene fatta distinzione tra maiuscole e minuscole. Se FALSE, la ricerca non distinzione maiuscole / minuscole.

### <a name="return-value"></a>Valore restituito

Diverso da zero se viene trovato il testo di ricerca; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione Cerca nel testo nel buffer per il testo specificato da *lpszFind*, che inizia in corrispondenza della selezione corrente, nella direzione specificata dal *bAvanti*e con distinzione maiuscole/minuscole specificato da *bCase*. Se viene trovato il testo, imposta la selezione per il testo trovato e restituisce un valore diverso da zero. Se il testo non viene trovato, la funzione restituisce 0.

In genere non è necessaria chiamare il `FindText` funzionare a meno che non si esegue l'override `OnFindNext`, che chiama `FindText`.

##  <a name="getbufferlength"></a>  CEditView::GetBufferLength

Chiamare questa funzione membro per ottenere il numero di caratteri attualmente nel buffer del controllo di modifica, senza includere il carattere di terminazione null.

```
UINT GetBufferLength() const;
```

### <a name="return-value"></a>Valore restituito

La lunghezza della stringa nel buffer.

##  <a name="geteditctrl"></a>  CEditView::GetEditCtrl

Chiamare `GetEditCtrl` per ottenere un riferimento al controllo di modifica utilizzato per la visualizzazione di modifica.

```
CEdit& GetEditCtrl() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento a un oggetto `CEdit`.

### <a name="remarks"></a>Note

Questo controllo è di tipo [CEdit](../../mfc/reference/cedit-class.md), quindi è possibile modificare il controllo di modifica di Windows usando direttamente il `CEdit` funzioni membro.

> [!CAUTION]
>  Usando il `CEdit` possa modificare lo stato di Windows sottostante Modifica controllo dell'oggetto. Ad esempio, è necessario non modificare le impostazioni di scheda usando il [CEdit::SetTabStops](../../mfc/reference/cedit-class.md#settabstops) funzionare perché `CEditView` memorizza nella cache queste impostazioni per l'utilizzo nel controllo di modifica sia per la stampa. Usare invece [CEditView::SetTabStops](#settabstops).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#66](../../mfc/codesnippet/cpp/ceditview-class_2.cpp)]

##  <a name="getprinterfont"></a>  CEditView::GetPrinterFont

Chiamare `GetPrinterFont` per ottenere un puntatore a un [CFont](../../mfc/reference/cfont-class.md) oggetto che descrive il tipo di carattere della stampante corrente.

```
CFont* GetPrinterFont() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore a un `CFont` oggetto che specifica il carattere corrente del stampante; NULL se il tipo di carattere della stampante non è stata impostata. Il puntatore può essere temporaneo e non deve essere memorizzato per usi successivi.

### <a name="remarks"></a>Note

Se il tipo di carattere della stampante non è stata impostata, il valore predefinito il comportamento di stampa di `CEditView` classe prevede la stampa con lo stesso carattere utilizzato per la visualizzazione.

Utilizzare questa funzione per determinare il tipo di carattere della stampante corrente. Se non è il tipo di carattere desiderato della stampante, utilizzare [CEditView::SetPrinterFont](#setprinterfont) per modificarlo.

##  <a name="getselectedtext"></a>  CEditView::GetSelectedText

Chiamare `GetSelectedText` copiare il testo selezionato in un `CString` oggetto, fino alla fine della selezione o il carattere che precede il primo carattere di ritorno a capo nella selezione.

```
void GetSelectedText(CString& strResult) const;
```

### <a name="parameters"></a>Parametri

*strResult*<br/>
Un riferimento al `CString` oggetto che riceverà il testo selezionato.

##  <a name="lockbuffer"></a>  CEditView::LockBuffer

Chiamare questa funzione membro per ottenere un puntatore al buffer. Il buffer non deve essere modificato.

```
LPCTSTR LockBuffer() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al buffer del controllo di modifica.

##  <a name="onfindnext"></a>  CEditView::OnFindNext

Cerca nel testo nel buffer per il testo specificato da *lpszFind*, nella direzione specificata dal *bAvanti*, con distinzione maiuscole/minuscole specificato dal *bCase*.

```
virtual void OnFindNext(
    LPCTSTR lpszFind,
    BOOL bNext,
    BOOL bCase);
```

### <a name="parameters"></a>Parametri

*lpszFind*<br/>
Il testo da trovare.

*bNext*<br/>
Specifica la direzione della ricerca. Se TRUE, la direzione di ricerca è verso la fine del buffer. Se FALSE, la direzione di ricerca è verso l'inizio del buffer.

*bCase*<br/>
Specifica se la ricerca fa distinzione tra maiuscole e minuscole. Se TRUE, la ricerca viene fatta distinzione tra maiuscole e minuscole. Se FALSE, la ricerca non distinzione maiuscole / minuscole.

### <a name="remarks"></a>Note

La ricerca inizia all'inizio della selezione corrente e viene eseguita tramite una chiamata a [FindText](#findtext). Nell'implementazione predefinita `OnFindNext` chiamate [OnTextNotFound](#ontextnotfound) se non viene trovato il testo.

Eseguire l'override `OnFindNext` modificare il modo in cui un `CEditView`-oggetto derivato Cerca il testo. `CEditView` le chiamate `OnFindNext` quando l'utente sceglie il pulsante Trova successivo nella finestra di dialogo di ricerca standard.

##  <a name="onreplaceall"></a>  CEditView::OnReplaceAll

`CEditView` le chiamate `OnReplaceAll` quando l'utente seleziona il pulsante Sostituisci tutto nella finestra di dialogo Sostituisci standard.

```
virtual void OnReplaceAll(
    LPCTSTR lpszFind,
    LPCTSTR lpszReplace,
    BOOL bCase);
```

### <a name="parameters"></a>Parametri

*lpszFind*<br/>
Il testo da trovare.

*lpszReplace*<br/>
Il testo da sostituire il testo di ricerca.

*bCase*<br/>
Specifica se ricerca viene fatta distinzione tra maiuscole e minuscole. Se TRUE, la ricerca viene fatta distinzione tra maiuscole e minuscole. Se FALSE, la ricerca non distinzione maiuscole / minuscole.

### <a name="remarks"></a>Note

`OnReplaceAll` Cerca nel testo nel buffer per il testo specificato da *lpszFind*, con distinzione maiuscole/minuscole specificato da *bCase*. La ricerca inizia all'inizio della selezione corrente. Ogni volta che viene trovato il testo di ricerca, questa funzione sostituisce tale occorrenza del testo con il testo specificato da *lpszReplace*. La ricerca viene eseguita tramite una chiamata a [FindText](#findtext). Nell'implementazione predefinita [OnTextNotFound](#ontextnotfound) viene chiamato se il testo non viene trovato.

Se la selezione corrente non corrisponde *lpszFind*, la selezione venga aggiornata alla prima occorrenza del testo specificato da *lpszFind* e non viene eseguita una sostituzione. Ciò consente all'utente di confermare che si tratta di quello che vogliono eseguire quando la selezione non corrisponde il testo da sostituire.

Eseguire l'override `OnReplaceAll` modificare il modo in cui un `CEditView`-oggetto derivato sostituisce il testo.

##  <a name="onreplacesel"></a>  CEditView::OnReplaceSel

`CEditView` le chiamate `OnReplaceSel` quando l'utente seleziona il pulsante di sostituzione nella finestra di dialogo Sostituisci standard.

```
virtual void OnReplaceSel(
    LPCTSTR lpszFind,
    BOOL bNext,
    BOOL bCase,
    LPCTSTR lpszReplace);
```

### <a name="parameters"></a>Parametri

*lpszFind*<br/>
Il testo da trovare.

*bNext*<br/>
Specifica la direzione della ricerca. Se TRUE, la direzione di ricerca è verso la fine del buffer. Se FALSE, la direzione di ricerca è verso l'inizio del buffer.

*bCase*<br/>
Specifica se la ricerca fa distinzione tra maiuscole e minuscole. Se TRUE, la ricerca viene fatta distinzione tra maiuscole e minuscole. Se FALSE, la ricerca non distinzione maiuscole / minuscole.

*lpszReplace*<br/>
Testo da sostituire il testo trovato.

### <a name="remarks"></a>Note

Dopo aver sostituito la selezione, questa funzione Cerca nel testo nel buffer per l'occorrenza successiva del testo specificato da *lpszFind*, nella direzione specificata dal *bAvanti*, con distinzione maiuscole/minuscole specificato da *bCase*. La ricerca viene eseguita tramite una chiamata a [FindText](#findtext). Se il testo non viene trovato, [OnTextNotFound](#ontextnotfound) viene chiamato.

Eseguire l'override `OnReplaceSel` modificare il modo in cui un `CEditView`-oggetto derivato sostituisce il testo selezionato.

##  <a name="ontextnotfound"></a>  CEditView::OnTextNotFound

Eseguire l'override di questa funzione per modificare l'implementazione predefinita, che chiama la funzione Windows `MessageBeep`.

```
virtual void OnTextNotFound(LPCTSTR lpszFind);
```

### <a name="parameters"></a>Parametri

*lpszFind*<br/>
Il testo da trovare.

##  <a name="printinsiderect"></a>  CEditView::PrintInsideRect

Chiamare `PrintInsideRect` per stampare il testo nel rettangolo specificato da *rectLayout*.

```
UINT PrintInsideRect(
    CDC *pDC,
    RECT& rectLayout,
    UINT nIndexStart,
    UINT nIndexStop);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore al contesto di dispositivo stampante.

*rectLayout*<br/>
Fare riferimento a un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto oppure [struttura RECT](/windows/desktop/api/windef/ns-windef-tagrect) che specifica il rettangolo in cui il testo è da sottoporre a rendering.

*nIndexStart*<br/>
Indice all'interno del buffer del primo carattere deve essere sottoposto a rendering.

*nIndexStop*<br/>
Indice all'interno del buffer del carattere successivo all'ultimo carattere deve essere sottoposto a rendering.

### <a name="return-value"></a>Valore restituito

L'indice del carattere successivo da stampare (vale a dire, il carattere che segue l'ultimo carattere sottoposto a rendering).

### <a name="remarks"></a>Note

Se il `CEditView` controllo non ha lo stile ES_AUTOHSCROLL, viene eseguito il wrapping di testo all'interno del rettangolo per il rendering. Se il controllo ha lo stile ES_AUTOHSCROLL, il testo viene ritagliato sul bordo destro del rettangolo.

Il `rect.bottom` elemento del *rectLayout* oggetto viene modificato in modo che la parte del rettangolo originale che è occupato dal testo di definire le dimensioni del rettangolo.

##  <a name="serializeraw"></a>  CEditView:: SerializeRaw

Chiamare `SerializeRaw` per avere una `CArchive` oggetto leggere o scrivere il testo `CEditView` oggetto in un file di testo.

```
void SerializeRaw(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*ar*<br/>
Un riferimento di `CArchive` oggetto che archivia il testo serializzato.

### <a name="remarks"></a>Note

`SerializeRaw` differisce da `CEditView`dell'implementazione interna del `Serialize` in quanto legge e scrive solo il testo, senza che precede i dati di descrizione dell'oggetto.

##  <a name="setprinterfont"></a>  CEditView::SetPrinterFont

Chiamare `SetPrinterFont` per impostare il tipo di carattere della stampante per il tipo di carattere specificato da *pFont*.

```
void SetPrinterFont(CFont* pFont);
```

### <a name="parameters"></a>Parametri

*pFont*<br/>
Un puntatore a un oggetto di tipo `CFont`. Se NULL, il tipo di carattere utilizzato per la stampa dipende il tipo di carattere.

### <a name="remarks"></a>Note

Se si desidera che la visualizzazione da utilizzare sempre un particolare tipo di carattere per la stampa, includere una chiamata a `SetPrinterFont` della classe `OnPreparePrinting` (funzione). Questa funzione virtuale viene chiamata prima che venga eseguita la stampa, in modo che la modifica del tipo di carattere viene eseguita prima del contenuto della visualizzazione viene stampato.

##  <a name="settabstops"></a>  CEditView::SetTabStops

Chiamare questa funzione per impostare i punti di tabulazione utilizzati per la visualizzazione e stampa.

```
void SetTabStops(int nTabStops);
```

### <a name="parameters"></a>Parametri

*nTabStops*<br/>
Larghezza di ogni punto di tabulazione, in unità di misura della finestra.

### <a name="remarks"></a>Note

È supportata solo una singola larghezza tabulazione. ( `CEdit` oggetti supportano più larghezza delle schede.) Larghezze sono come unità di finestra di dialogo, quali uguale a un quarto della larghezza del carattere medio (in caratteri maiuscoli e minuscoli alfabetici solo basata) del tipo di carattere utilizzato al momento della stampa o la visualizzazione. È consigliabile non usare `CEdit::SetTabStops` perché `CEditView` deve memorizzare nella cache il valore di punto di tabulazione.

Questa funzione consente di modificare solo le schede dell'oggetto per il quale viene chiamato. Per modificare la scheda viene arrestata per ognuno `CEditView` dell'oggetto nell'applicazione, chiamare ogni oggetto `SetTabStops` (funzione).

### <a name="example"></a>Esempio

Questo frammento di codice imposta i punti di tabulazione del controllo a ogni quarto carattere misurando con attenzione il controllo Usa il tipo di carattere.

[!code-cpp[NVC_MFCDocView#67](../../mfc/codesnippet/cpp/ceditview-class_3.cpp)]

##  <a name="unlockbuffer"></a>  CEditView::UnlockBuffer

Chiamare questa funzione membro per sbloccare il buffer.

```
void UnlockBuffer() const;
```

### <a name="remarks"></a>Note

Chiamare `UnlockBuffer` dopo aver utilizzato il puntatore restituito da [LockBuffer](#lockbuffer).

## <a name="see-also"></a>Vedere anche

[MFC Sample SUPERPAD](../../overview/visual-cpp-samples.md)<br/>
[Classe CCtrlView](../../mfc/reference/cctrlview-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CEdit](../../mfc/reference/cedit-class.md)<br/>
[Classe CDocument](../../mfc/reference/cdocument-class.md)<br/>
[Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)<br/>
[Classe CCtrlView](../../mfc/reference/cctrlview-class.md)<br/>
[Classe CRichEditView](../../mfc/reference/cricheditview-class.md)
