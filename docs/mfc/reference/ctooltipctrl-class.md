---
title: CToolTipCtrl Class
ms.date: 11/04/2016
f1_keywords:
- CToolTipCtrl
- AFXCMN/CToolTipCtrl
- AFXCMN/CToolTipCtrl::CToolTipCtrl
- AFXCMN/CToolTipCtrl::Activate
- AFXCMN/CToolTipCtrl::AddTool
- AFXCMN/CToolTipCtrl::AdjustRect
- AFXCMN/CToolTipCtrl::Create
- AFXCMN/CToolTipCtrl::CreateEx
- AFXCMN/CToolTipCtrl::DelTool
- AFXCMN/CToolTipCtrl::GetBubbleSize
- AFXCMN/CToolTipCtrl::GetCurrentTool
- AFXCMN/CToolTipCtrl::GetDelayTime
- AFXCMN/CToolTipCtrl::GetMargin
- AFXCMN/CToolTipCtrl::GetMaxTipWidth
- AFXCMN/CToolTipCtrl::GetText
- AFXCMN/CToolTipCtrl::GetTipBkColor
- AFXCMN/CToolTipCtrl::GetTipTextColor
- AFXCMN/CToolTipCtrl::GetTitle
- AFXCMN/CToolTipCtrl::GetToolCount
- AFXCMN/CToolTipCtrl::GetToolInfo
- AFXCMN/CToolTipCtrl::HitTest
- AFXCMN/CToolTipCtrl::Pop
- AFXCMN/CToolTipCtrl::Popup
- AFXCMN/CToolTipCtrl::RelayEvent
- AFXCMN/CToolTipCtrl::SetDelayTime
- AFXCMN/CToolTipCtrl::SetMargin
- AFXCMN/CToolTipCtrl::SetMaxTipWidth
- AFXCMN/CToolTipCtrl::SetTipBkColor
- AFXCMN/CToolTipCtrl::SetTipTextColor
- AFXCMN/CToolTipCtrl::SetTitle
- AFXCMN/CToolTipCtrl::SetToolInfo
- AFXCMN/CToolTipCtrl::SetToolRect
- AFXCMN/CToolTipCtrl::SetWindowTheme
- AFXCMN/CToolTipCtrl::Update
- AFXCMN/CToolTipCtrl::UpdateTipText
helpviewer_keywords:
- CToolTipCtrl [MFC], CToolTipCtrl
- CToolTipCtrl [MFC], Activate
- CToolTipCtrl [MFC], AddTool
- CToolTipCtrl [MFC], AdjustRect
- CToolTipCtrl [MFC], Create
- CToolTipCtrl [MFC], CreateEx
- CToolTipCtrl [MFC], DelTool
- CToolTipCtrl [MFC], GetBubbleSize
- CToolTipCtrl [MFC], GetCurrentTool
- CToolTipCtrl [MFC], GetDelayTime
- CToolTipCtrl [MFC], GetMargin
- CToolTipCtrl [MFC], GetMaxTipWidth
- CToolTipCtrl [MFC], GetText
- CToolTipCtrl [MFC], GetTipBkColor
- CToolTipCtrl [MFC], GetTipTextColor
- CToolTipCtrl [MFC], GetTitle
- CToolTipCtrl [MFC], GetToolCount
- CToolTipCtrl [MFC], GetToolInfo
- CToolTipCtrl [MFC], HitTest
- CToolTipCtrl [MFC], Pop
- CToolTipCtrl [MFC], Popup
- CToolTipCtrl [MFC], RelayEvent
- CToolTipCtrl [MFC], SetDelayTime
- CToolTipCtrl [MFC], SetMargin
- CToolTipCtrl [MFC], SetMaxTipWidth
- CToolTipCtrl [MFC], SetTipBkColor
- CToolTipCtrl [MFC], SetTipTextColor
- CToolTipCtrl [MFC], SetTitle
- CToolTipCtrl [MFC], SetToolInfo
- CToolTipCtrl [MFC], SetToolRect
- CToolTipCtrl [MFC], SetWindowTheme
- CToolTipCtrl [MFC], Update
- CToolTipCtrl [MFC], UpdateTipText
ms.assetid: 8973f70c-b73a-46c7-908d-758f364b9a97
ms.openlocfilehash: 6055926e05f8a7f9fbecec113e859d08e6b6e636
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62323674"
---
# <a name="ctooltipctrl-class"></a>CToolTipCtrl Class

Incapsula la funzionalità di un "controllo descrizione comando", una piccola finestra popup in cui viene visualizzata una riga di testo singola che descrive lo scopo di uno strumento in un'applicazione.

## <a name="syntax"></a>Sintassi

```
class CToolTipCtrl : public CWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CToolTipCtrl::CToolTipCtrl](#ctooltipctrl)|Costruisce un oggetto `CToolTipCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CToolTipCtrl::Activate](#activate)|Attiva e disattiva il controllo descrizione comando.|
|[CToolTipCtrl::AddTool](#addtool)|Registra uno strumento con il controllo descrizione comando.|
|[CToolTipCtrl::AdjustRect](#adjustrect)|Conversione tra il testo di un controllo descrizione comandi visualizzare rettangolo e il rettangolo della finestra.|
|[CToolTipCtrl::Create](#create)|Crea un controllo di descrizione comando e lo collega a un `CToolTipCtrl` oggetto.|
|[CToolTipCtrl::CreateEx](#createex)|Crea un controllo descrizione comandi con gli stili estesi di Windows specificati e lo collega a un `CToolTipCtrl` oggetto.|
|[CToolTipCtrl::DelTool](#deltool)|Rimuove uno strumento del controllo ToolTip.|
|[CToolTipCtrl::GetBubbleSize](#getbubblesize)|Recupera la dimensione della descrizione comandi.|
|[CToolTipCtrl::GetCurrentTool](#getcurrenttool)|Recupera informazioni, ad esempio dimensioni, posizione e testo, della finestra della descrizione comando che consente di visualizzare il controllo descrizione comando corrente.|
|[CToolTipCtrl::GetDelayTime](#getdelaytime)|Recupera l'iniziale, un popup e una nuova visualizzazione durate attualmente impostati per uno strumento di controllo ToolTip.|
|[CToolTipCtrl::GetMargin](#getmargin)|Recupera il margini superiore, sinistro, inferiore e a destra impostate per una finestra del suggerimento dello strumento.|
|[CToolTipCtrl::GetMaxTipWidth](#getmaxtipwidth)|Recupera la larghezza massima per una finestra del suggerimento dello strumento.|
|[CToolTipCtrl::GetText](#gettext)|Recupera il testo che gestisce un controllo descrizione comandi per uno strumento.|
|[CToolTipCtrl::GetTipBkColor](#gettipbkcolor)|Recupera il colore di sfondo in una finestra del suggerimento dello strumento.|
|[CToolTipCtrl::GetTipTextColor](#gettiptextcolor)|Recupera il colore del testo in una finestra del suggerimento dello strumento.|
|[CToolTipCtrl::GetTitle](#gettitle)|Recupera il titolo del controllo della descrizione comando corrente.|
|[CToolTipCtrl::GetToolCount](#gettoolcount)|Recupera un conteggio degli strumenti gestiti da un controllo descrizione comandi.|
|[CToolTipCtrl::GetToolInfo](#gettoolinfo)|Recupera le informazioni che gestisce un controllo descrizione comandi riguardante uno strumento.|
|[CToolTipCtrl::HitTest](#hittest)|Test di un punto per determinare se è all'interno del rettangolo di delimitazione dello strumento specificato. In caso affermativo, recupera le informazioni sullo strumento.|
|[CToolTipCtrl::Pop](#pop)|Rimuove una finestra di descrizione comando visualizzata dalla visualizzazione.|
|[CToolTipCtrl::Popup](#popup)|Fa sì che il controllo corrente della descrizione comando da visualizzare in corrispondenza delle coordinate dell'ultimo messaggio di mouse.|
|[CToolTipCtrl::RelayEvent](#relayevent)|Passa un messaggio di mouse a un controllo descrizione comandi per l'elaborazione.|
|[CToolTipCtrl::SetDelayTime](#setdelaytime)|Imposta iniziale, a comparsa e quindi la nuova visualizzazione durate per un controllo descrizione comandi.|
|[CToolTipCtrl::SetMargin](#setmargin)|Imposta i margini superiore, sinistro, inferiore e a destra per una finestra del suggerimento dello strumento.|
|[CToolTipCtrl::SetMaxTipWidth](#setmaxtipwidth)|Imposta la larghezza massima per una finestra del suggerimento dello strumento.|
|[CToolTipCtrl::SetTipBkColor](#settipbkcolor)|Imposta il colore di sfondo in una finestra del suggerimento dello strumento.|
|[CToolTipCtrl::SetTipTextColor](#settiptextcolor)|Imposta il colore del testo in una finestra del suggerimento dello strumento.|
|[CToolTipCtrl::SetTitle](#settitle)|Aggiunge una stringa di titolo e icona standard per una descrizione comandi.|
|[CToolTipCtrl::SetToolInfo](#settoolinfo)|Imposta le informazioni che gestisce una descrizione comando per uno strumento.|
|[CToolTipCtrl::SetToolRect](#settoolrect)|Imposta un nuovo rettangolo di delimitazione per uno strumento.|
|[CToolTipCtrl::SetWindowTheme](#setwindowtheme)|Imposta lo stile di visualizzazione della finestra del suggerimento dello strumento.|
|[CToolTipCtrl::Update](#update)|Forza lo strumento di ridisegno corrente.|
|[CToolTipCtrl::UpdateTipText](#updatetiptext)|Imposta il testo della descrizione comando per uno strumento.|

## <a name="remarks"></a>Note

Un "strumento" è una finestra, ad esempio una finestra figlia di controllo o un'area rettangolare definita dall'applicazione all'interno dell'area client. Una descrizione comando viene nascosta la maggior parte dei casi, visualizzata solo quando l'utente posiziona il cursore del mouse su uno strumento e lascia in tale posizione per circa metà secondo. La descrizione comando viene visualizzata accanto al cursore e scomparirà quando l'utente fa clic su un pulsante del mouse o Sposta il cursore disattivare lo strumento.

`CToolTipCtrl` fornisce la funzionalità per controllare il tempo iniziale e la durata della descrizione comando, le larghezze dei margini che circonda il testo della descrizione comando, la larghezza della finestra del suggerimento dello strumento stesso e il colore di sfondo e del testo della descrizione comandi. Un singolo controllo descrizione comandi può fornire informazioni per più di uno strumento.

Il `CToolTipCtrl` classe fornisce la funzionalità di controllo Windows comune descrizione comandi. Questo controllo (e pertanto il `CToolTipCtrl` classe) è disponibile solo per i programmi in esecuzione in versioni di Windows 95 o 98 e Windows NT 3.51 e successive.

Per altre informazioni sull'abilitazione di descrizioni comandi, vedere [descrizioni comandi in Windows non derivate da CFrameWnd](../../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md).

Per altre informazioni sull'uso `CToolTipCtrl`, vedere [controlli](../../mfc/controls-mfc.md) e [usando CToolTipCtrl](../../mfc/using-ctooltipctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CToolTipCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

##  <a name="activate"></a>  CToolTipCtrl::Activate

Chiamare questa funzione per attivare o disattivare un controllo descrizione comandi.

```
void Activate(BOOL bActivate);
```

### <a name="parameters"></a>Parametri

*bActivate*<br/>
Specifica se il controllo descrizione comando deve essere attivata o disattivata.

### <a name="remarks"></a>Note

Se *bActivate* è TRUE, l'attivazione del controllo; se FALSE, viene disattivata.

Quando un controllo descrizione comandi è attivo, le informazioni di utilità di suggerimento visualizzato quando il cursore si trova in uno strumento che viene registrato con il controllo. Quando è inattivo, le informazioni di suggerimento dello strumento non appare, anche quando il cursore si trova in uno strumento.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CPropertySheet:: GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).

##  <a name="addtool"></a>  CToolTipCtrl::AddTool

Registra uno strumento con il controllo descrizione comando.

```
BOOL AddTool(
    CWnd* pWnd,
    UINT nIDText,
    LPCRECT lpRectTool = NULL,
    UINT_PTR nIDTool = 0);

BOOL AddTool(
    CWnd* pWnd,
    LPCTSTR lpszText = LPSTR_TEXTCALLBACK,
    LPCRECT lpRectTool = NULL,
    UINT_PTR nIDTool = 0);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Puntatore alla finestra che contiene lo strumento.

*nIDText*<br/>
ID della risorsa stringa che contiene il testo per lo strumento.

*lpRectTool*<br/>
Puntatore a un [RECT](/previous-versions/dd162897\(v=vs.85\)) rettangolo delimitatore della struttura che contiene le coordinate dello strumento. Le coordinate sono rispetto all'angolo superiore sinistro dell'area client della finestra identificata da *pWnd*.

*nIDTool*<br/>
ID dello strumento.

*lpszText*<br/>
Puntatore al testo per lo strumento. Se questo parametro contiene il valore LPSTR_TEXTCALLBACK, i messaggi di notifica TTN_NEEDTEXT passano all'elemento padre della finestra che *pWnd* punta a.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Il *lpRectTool* e *nIDTool* parametri devono essere entrambi validi, o se *lpRectTool* sia impostato su NULL *nIDTool* deve essere 0.

Un controllo di descrizione comando può essere associato a più di uno strumento. Chiamare questa funzione per registrare uno strumento con il controllo descrizione comando, in modo che le informazioni archiviate nella descrizione comando viene visualizzate quando il cursore si trova sullo strumento.

> [!NOTE]
>  Non è possibile impostare una descrizione comandi a un controllo statico usando `AddTool`.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CPropertySheet:: GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).

##  <a name="adjustrect"></a>  CToolTipCtrl::AdjustRect

Conversione tra il testo di un controllo descrizione comando visualizzato rettangolo e il rettangolo della finestra.

```
BOOL AdjustRect(
    LPRECT lprc,
    BOOL bLarger = TRUE);
```

### <a name="parameters"></a>Parametri

*lprc*<br/>
Puntatore a un [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura che contiene un rettangolo della finestra suggerimento dello strumento o un rettangolo di visualizzazione di testo.

*bLarger*<br/>
Se TRUE, *lprc* viene usato per specificare un rettangolo di visualizzazione del testo, e riceve il rettangolo della finestra corrispondente. Se FALSE, *lprc* viene usato per specificare un rettangolo della finestra, e riceve il rettangolo di visualizzazione di testo corrispondenti.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il rettangolo correttamente viene regolato; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro calcola rettangolo di visualizzazione di un controllo descrizione comandi testo dal relativo rettangolo della finestra o il rettangolo della finestra suggerimento dello strumento necessario per la visualizzazione di un rettangolo di visualizzazione di testo specificato.

Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_ADJUSTRECT](/windows/desktop/Controls/ttm-adjustrect), come descritto nel SDK di Windows.

##  <a name="create"></a>  CToolTipCtrl::Create

Crea un controllo di descrizione comando e lo collega a un `CToolTipCtrl` oggetto.

```
virtual BOOL Create(CWnd* pParentWnd, DWORD dwStyle = 0);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
Specifica padre di finestra del controllo descrizione comando, in genere un `CDialog`. Non deve essere NULL.

*dwStyle*<br/>
Specifica lo stile del controllo descrizione comandi. Vedere le **osservazioni** sezione per altre informazioni.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il `CToolTipCtrl` oggetto è stato creato correttamente; in caso contrario 0.

### <a name="remarks"></a>Note

Si costruisce un `CToolTipCtrl` in due passaggi. In primo luogo, chiamare il costruttore per costruire il `CToolTipCtrl` dell'oggetto e quindi chiamare `Create` per creare il controllo descrizione comando e associarlo al `CToolTipCtrl` oggetto.

Il *dwStyle* parametro può essere qualsiasi combinazione delle [stili finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles). Inoltre, un controllo descrizione comandi ha due stili specifici della classe: TTS_ALWAYSTIP e TTS_NOPREFIX.

|Stile|Significato|
|-----------|-------------|
|TTS_ALWAYSTIP|Specifica che la descrizione comando verrà visualizzato quando il cursore si trova in uno strumento, indipendentemente dal fatto finestra proprietaria del controllo ToolTip sia attivo o inattivo. Senza questo stile, del controllo ToolTip viene visualizzata quando è attiva finestra proprietaria dello strumento, ma non quando è inattivo.|
|TTS_NOPREFIX|Questo stile impedisce al sistema di rimozione del carattere da una stringa e commerciale (&). Se un controllo descrizione comandi non è applicato lo stile TTS_NOPREFIX, il sistema elimina automaticamente i caratteri e commerciale, che consente a un'applicazione di usare la stessa stringa come una voce di menu e come testo in un controllo descrizione comandi.|

Un controllo descrizione comandi ha WS_POPUP e WS_EX_TOOLWINDOW gli stili di finestra, indipendentemente dal fatto che si specificarli durante la creazione del controllo.

Per creare un controllo descrizione comandi con gli stili estesi di windows, chiamare [CToolTipCtrl::CreateEx](#createex) invece di `Create`.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CPropertySheet:: GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).

##  <a name="createex"></a>  CToolTipCtrl::CreateEx

Crea un controllo (una finestra figlio) e associarlo con il `CToolTipCtrl` oggetto.

```
virtual BOOL CreateEx(
    CWnd* pParentWnd,
    DWORD dwStyle = 0,
    DWORD dwStyleEx = 0);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
Puntatore alla finestra padre del controllo.

*dwStyle*<br/>
Specifica lo stile del controllo descrizione comandi. Vedere le **osservazioni** sezione [crea](#create) per altre informazioni.

*dwStyleEx*<br/>
Specifica lo stile esteso del controllo da creare. Per un elenco di stili estesi di Windows, vedere la *dwExStyle* parametro per [CreateWindowEx](/windows/desktop/api/winuser/nf-winuser-createwindowexa) nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo in caso contrario 0.

### <a name="remarks"></a>Note

Uso `CreateEx` invece di `Create` per applicare stili estesi di Windows, specificati dal prefisso di stile esteso di Windows **WS_EX _**.

##  <a name="ctooltipctrl"></a>  CToolTipCtrl::CToolTipCtrl

Costruisce un oggetto `CToolTipCtrl`.

```
CToolTipCtrl();
```

### <a name="remarks"></a>Note

È necessario chiamare `Create` dopo la costruzione dell'oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#74](../../mfc/codesnippet/cpp/ctooltipctrl-class_1.h)]

##  <a name="deltool"></a>  CToolTipCtrl::DelTool

Rimuove lo strumento specificato da *pWnd* e *nIDTool* dalla raccolta di strumenti supportati da un controllo descrizione comandi.

```
void DelTool(
    CWnd* pWnd,
    UINT_PTR nIDTool = 0);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Puntatore alla finestra che contiene lo strumento.

*nIDTool*<br/>
ID dello strumento.

##  <a name="getbubblesize"></a>  CToolTipCtrl::GetBubbleSize

Recupera la dimensione della descrizione comandi.

```
CSize GetBubbleSize(LPTOOLINFO lpToolInfo) const;
```

### <a name="parameters"></a>Parametri

*lpToolInfo*<br/>
Un puntatore per la descrizione comando [TOOLINFO](/windows/desktop/api/commctrl/ns-commctrl-tagtoolinfoa) struttura.

### <a name="return-value"></a>Valore restituito

Le dimensioni della descrizione comandi.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_GETBUBBLESIZE](/windows/desktop/Controls/ttm-getbubblesize), come descritto nel SDK di Windows.

##  <a name="getcurrenttool"></a>  CToolTipCtrl::GetCurrentTool

Recupera informazioni, ad esempio dimensioni, posizione e testo, della finestra della descrizione comando visualizzato dal controllo descrizione comando corrente.

```
BOOL GetCurrentTool(LPTOOLINFO lpToolInfo) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*lpToolInfo*|[out] Puntatore a un [TOOLINFO](/windows/desktop/api/commctrl/ns-commctrl-tagtoolinfoa) struttura che riceve informazioni sulla finestra della descrizione comando corrente.|

### <a name="return-value"></a>Valore restituito

TRUE se le informazioni non viene recuperate correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo invia il [TTM_GETCURRENTTOOL](/windows/desktop/Controls/ttm-getcurrenttool) messaggio, che è descritti nel SDK di Windows.

### <a name="example"></a>Esempio

Esempio di codice seguente recupera le informazioni sulla finestra della descrizione comando corrente.

[!code-cpp[NVC_MFC_CToolBarCtrl_s1#6](../../mfc/reference/codesnippet/cpp/ctooltipctrl-class_2.cpp)]

##  <a name="getdelaytime"></a>  CToolTipCtrl::GetDelayTime

Recupera iniziale, a comparsa e di nuova visualizzazione durate attualmente impostate per un controllo descrizione comandi.

```
int GetDelayTime(DWORD dwDuration) const;
```

### <a name="parameters"></a>Parametri

*dwDuration*<br/>
Flag che specifica il valore di durata verranno recuperati. Questo parametro può essere uno dei valori seguenti:

- Il periodo di tempo, lo strumento di finestra di descrizione comandi TTDT_AUTOPOP recuperare rimane visibile se il puntatore è fermo su rettangolo di delimitazione dello strumento.

- Recuperare TTDT_INITIAL viene visualizzato il periodo di tempo che il puntatore del mouse deve soffermarsi nel rettangolo di delimitazione dello strumento prima della finestra di suggerimento dello strumento.

- TTDT_RESHOW recuperare la lunghezza di tempo che necessaria per le successive finestre di descrizione comandi vengono visualizzati come il puntatore del mouse viene spostato da uno strumento a altro.

### <a name="return-value"></a>Valore restituito

Il tempo di ritardo specificato in millisecondi

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_GETDELAYTIME](/windows/desktop/Controls/ttm-getdelaytime), come descritto nel SDK di Windows.

##  <a name="getmargin"></a>  CToolTipCtrl::GetMargin

Recupera il margini superiore, sinistro, inferiore e a destra impostato per una finestra del suggerimento dello strumento.

```
void GetMargin(LPRECT lprc) const;
```

### <a name="parameters"></a>Parametri

*lprc*<br/>
Indirizzo di un `RECT` struttura che riceverà le informazioni del margine. I membri del [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura non definisce un rettangolo di delimitazione. Ai fini di questo messaggio, i membri della struttura vengono interpretati come indicato di seguito:

|Member|Rappresentazione|
|------------|--------------------|
|`top`|Distanza tra il bordo superiore e parte superiore del testo della descrizione comando, in pixel.|
|`left`|Distanza tra il bordo sinistro ed estremità sinistra del testo di suggerimento, in pixel.|
|`bottom`|Distanza tra il bordo inferiore e nella parte inferiore del testo di suggerimento, in pixel.|
|`right`|Distanza tra il bordo destro ed estremità destra del testo di suggerimento, in pixel.|

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_GETMARGIN](/windows/desktop/Controls/ttm-getmargin), come descritto nel SDK di Windows.

##  <a name="getmaxtipwidth"></a>  CToolTipCtrl::GetMaxTipWidth

Recupera la larghezza massima per una finestra del suggerimento dello strumento.

```
int GetMaxTipWidth() const;
```

### <a name="return-value"></a>Valore restituito

La larghezza massima per una finestra del suggerimento dello strumento.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_GETMAXTIPWIDTH](/windows/desktop/Controls/ttm-getmaxtipwidth), come descritto nel SDK di Windows.

##  <a name="gettext"></a>  CToolTipCtrl::GetText

Recupera il testo che gestisce un controllo descrizione comandi per uno strumento.

```
void GetText(
    CString& str,
    CWnd* pWnd,
    UINT_PTR nIDTool = 0) const;
```

### <a name="parameters"></a>Parametri

*str*<br/>
Fare riferimento a un `CString` oggetto che riceve il testo dello strumento.

*pWnd*<br/>
Puntatore alla finestra che contiene lo strumento.

*nIDTool*<br/>
ID dello strumento.

### <a name="remarks"></a>Note

Il *pWnd* e *nIDTool* parametri identificano lo strumento. Se tale strumento è stato registrato in precedenza con il controllo descrizione comando tramite una chiamata precedente a `CToolTipCtrl::AddTool`, l'oggetto a cui fanno riferimento le *str* parametro è assegnato il testo dello strumento.

##  <a name="gettipbkcolor"></a>  CToolTipCtrl::GetTipBkColor

Recupera il colore di sfondo in una finestra del suggerimento dello strumento.

```
COLORREF GetTipBkColor() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto [COLORREF](/windows/desktop/gdi/colorref) valore che rappresenta il colore di sfondo.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_GETTIPBKCOLOR](/windows/desktop/Controls/ttm-gettipbkcolor), come descritto nel SDK di Windows.

##  <a name="gettiptextcolor"></a>  CToolTipCtrl::GetTipTextColor

Recupera il colore del testo in una finestra del suggerimento dello strumento.

```
COLORREF GetTipTextColor() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto [COLORREF](/windows/desktop/gdi/colorref) valore che rappresenta il colore del testo.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_GETTIPTEXTCOLOR](/windows/desktop/Controls/ttm-gettiptextcolor), come descritto nel SDK di Windows.

##  <a name="gettitle"></a>  CToolTipCtrl::GetTitle

Recupera il titolo del controllo della descrizione comando corrente.

```
void GetTitle(PTTGETTITLE pttgt) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pttgt*|[out] Puntatore a un [TTGETTITLE](/windows/desktop/api/commctrl/ns-commctrl-_ttgettitle) struttura che contiene informazioni sul controllo ToolTip. Quando termina, questo metodo il *pszTitle* membro delle [TTGETTITLE](/windows/desktop/api/commctrl/ns-commctrl-_ttgettitle) struttura punta al testo del titolo.|

### <a name="remarks"></a>Note

Questo metodo invia il [TTM_GETTITLE](/windows/desktop/Controls/ttm-gettitle) messaggio, che è descritti nel SDK di Windows.

##  <a name="gettoolcount"></a>  CToolTipCtrl::GetToolCount

Recupera un conteggio degli strumenti registrato con il controllo descrizione comando.

```
int GetToolCount() const;
```

### <a name="return-value"></a>Valore restituito

Un conteggio degli strumenti registrato con il controllo descrizione comando.

##  <a name="gettoolinfo"></a>  CToolTipCtrl::GetToolInfo

Recupera le informazioni che gestisce un controllo descrizione comandi riguardante uno strumento.

```
BOOL GetToolInfo(
    CToolInfo& ToolInfo,
    CWnd* pWnd,
    UINT_PTR nIDTool = 0) const;
```

### <a name="parameters"></a>Parametri

*ToolInfo*<br/>
Fare riferimento a un `TOOLINFO` oggetto che riceve il testo dello strumento.

*pWnd*<br/>
Puntatore alla finestra che contiene lo strumento.

*nIDTool*<br/>
ID dello strumento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Il `hwnd` e `uId` i membri delle [TOOLINFO](/windows/desktop/api/commctrl/ns-commctrl-tagtoolinfoa) struttura fa *CToolInfo* identificare lo strumento. Se tale strumento è stato registrato con il controllo descrizione comando tramite una chiamata precedente a `AddTool`, il `TOOLINFO` struttura viene compilata con le informazioni sullo strumento.

##  <a name="hittest"></a>  CToolTipCtrl::HitTest

Test di un punto per determinare se è all'interno del rettangolo di delimitazione dello strumento specificato e, in caso affermativo, recuperare le informazioni sullo strumento.

```
BOOL HitTest(
    CWnd* pWnd,
    CPoint pt,
    LPTOOLINFO lpToolInfo) const;
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Puntatore alla finestra che contiene lo strumento.

*pt*<br/>
Puntatore a un `CPoint` oggetto contenente le coordinate del punto da sottoporre a test.

*lpToolInfo*<br/>
Puntatore alla [TOOLINFO](/windows/desktop/api/commctrl/ns-commctrl-tagtoolinfoa) struttura che contiene informazioni sullo strumento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il punto specificato dalle informazioni di hit test all'interno di rettangolo di delimitazione dello strumento. in caso contrario 0.

### <a name="remarks"></a>Note

Se questa funzione restituisce un valore diverso da zero, la struttura a cui punta *lpToolInfo* viene riempita con informazioni sullo strumento di entro cui il rettangolo si trova il punto.

Il `TTHITTESTINFO` struttura viene definita come segue:

```cpp
typedef struct _TT_HITTESTINFO { // tthti
    HWND hwnd;   // handle of tool or window with tool
    POINT pt;    // client coordinates of point to test
    TOOLINFO ti; // receives information about the tool
} TTHITTESTINFO, FAR * LPHITTESTINFO;
```

- `hwnd`

   Specifica l'handle dello strumento.

- `pt`

   Specifica le coordinate di un punto, se il punto è dello strumento rettangolo di delimitazione.

- `ti`

   Informazioni sullo strumento. Per altre informazioni sul `TOOLINFO` struttura, vedere [CToolTipCtrl::GetToolInfo](#gettoolinfo).

##  <a name="pop"></a>  CToolTipCtrl::Pop

Rimuove una finestra di descrizione comando visualizzata dalla vista.

```
void Pop();
```

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_POP](/windows/desktop/Controls/ttm-pop), come descritto nel SDK di Windows.

##  <a name="popup"></a>  CToolTipCtrl::Popup

Fa sì che il controllo corrente della descrizione comando da visualizzare in corrispondenza delle coordinate dell'ultimo messaggio di mouse.

```
void Popup();
```

### <a name="remarks"></a>Note

Questo metodo invia il [TTM_POPUP](/windows/desktop/Controls/ttm-popup) messaggio, che è descritti nel SDK di Windows.

### <a name="example"></a>Esempio

Esempio di codice seguente consente di visualizzare una finestra della descrizione comando.

[!code-cpp[NVC_MFC_CToolBarCtrl_s1#7](../../mfc/reference/codesnippet/cpp/ctooltipctrl-class_3.cpp)]

##  <a name="relayevent"></a>  CToolTipCtrl::RelayEvent

Passa un messaggio di mouse a un controllo descrizione comandi per l'elaborazione.

```
void RelayEvent(LPMSG lpMsg);
```

### <a name="parameters"></a>Parametri

*lpMsg*<br/>
Puntatore a un [MSG](/windows/desktop/api/winuser/ns-winuser-msg) struttura che contiene il messaggio all'inoltro.

### <a name="remarks"></a>Note

Un controllo di descrizione comando elabora solo i messaggi seguenti, che vengono inviati da `RelayEvent`:

|WM_LBUTTONDOWN|WM_MOUSEMOVE|
|---------------------|-------------------|
|WM_LBUTTONUP|WM_RBUTTONDOWN|
|WM_MBUTTONDOWN|WM_RBUTTONUP|
|WM_MBUTTONUP||

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CPropertySheet:: GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).

##  <a name="setdelaytime"></a>  CToolTipCtrl::SetDelayTime

Imposta il tempo di ritardo per un controllo descrizione comandi.

```
void SetDelayTime(UINT nDelay);

void SetDelayTime(
    DWORD dwDuration,
    int iTime);
```

### <a name="parameters"></a>Parametri

*nDelay*<br/>
Specifica il nuovo tempo di ritardo in millisecondi.

*dwDuration*<br/>
Flag che specifica il valore di durata verranno recuperati. Visualizzare [CToolTipCtrl::GetDelayTime](#getdelaytime) per una descrizione dei valori validi.

*iTime*<br/>
Il tempo di ritardo specificato, in millisecondi.

### <a name="remarks"></a>Note

Il tempo di ritardo è il periodo di tempo prima che venga visualizzata la finestra di descrizione comando, il cursore deve rimanere in uno strumento. Il tempo di ritardo predefinito è 500 millisecondi.

##  <a name="setmargin"></a>  CToolTipCtrl::SetMargin

Imposta i margini superiore, sinistro, inferiore e a destra per una finestra del suggerimento dello strumento.

```
void SetMargin(LPRECT lprc);
```

### <a name="parameters"></a>Parametri

*lprc*<br/>
Indirizzo di un `RECT` struttura che contiene le informazioni di margine da impostare. I membri del `RECT` struttura non definisce un rettangolo di delimitazione. Visualizzare [CToolTipCtrl::GetMargin](#getmargin) per una descrizione delle informazioni dei margini.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_SETMARGIN](/windows/desktop/Controls/ttm-setmargin), come descritto nel SDK di Windows.

##  <a name="setmaxtipwidth"></a>  CToolTipCtrl::SetMaxTipWidth

Imposta la larghezza massima per una finestra del suggerimento dello strumento.

```
int SetMaxTipWidth(int iWidth);
```

### <a name="parameters"></a>Parametri

*iWidth*<br/>
Larghezza della finestra suggerimento dello strumento massima da impostare.

### <a name="return-value"></a>Valore restituito

La larghezza massima suggerimento precedente.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_SETMAXTIPWIDTH](/windows/desktop/Controls/ttm-setmaxtipwidth), come descritto nel SDK di Windows.

##  <a name="settipbkcolor"></a>  CToolTipCtrl::SetTipBkColor

Imposta il colore di sfondo in una finestra del suggerimento dello strumento.

```
void SetTipBkColor(COLORREF clr);
```

### <a name="parameters"></a>Parametri

*clr*<br/>
Il nuovo colore di sfondo.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_SETTIPBKCOLOR](/windows/desktop/Controls/ttm-settipbkcolor), come descritto nel SDK di Windows.

##  <a name="settiptextcolor"></a>  CToolTipCtrl::SetTipTextColor

Imposta il colore del testo in una finestra del suggerimento dello strumento.

```
void SetTipTextColor(COLORREF clr);
```

### <a name="parameters"></a>Parametri

*clr*<br/>
Il nuovo colore del testo.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_SETTIPTEXTCOLOR](/windows/desktop/Controls/ttm-settiptextcolor), come descritto nel SDK di Windows.

##  <a name="settitle"></a>  CToolTipCtrl::SetTitle

Aggiunge una stringa di titolo e icona standard per una descrizione comandi.

```
BOOL SetTitle(
    UINT uIcon,
    LPCTSTR lpstrTitle);
```

### <a name="parameters"></a>Parametri

*uIcon*<br/>
Visualizzare *sull'icona* nelle [TTM_SETTITLE](/windows/desktop/Controls/ttm-settitle) nel SDK di Windows.

*lpstrTitle*<br/>
Puntatore alla stringa del titolo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_SETTITLE](/windows/desktop/Controls/ttm-settitle), come descritto nel SDK di Windows.

##  <a name="settoolinfo"></a>  CToolTipCtrl::SetToolInfo

Imposta le informazioni che gestisce una descrizione comando per uno strumento.

```
void SetToolInfo(LPTOOLINFO lpToolInfo);
```

### <a name="parameters"></a>Parametri

*lpToolInfo*<br/>
Un puntatore a un [TOOLINFO](/windows/desktop/api/commctrl/ns-commctrl-tagtoolinfoa) struttura che specifica le informazioni da impostare.

##  <a name="settoolrect"></a>  CToolTipCtrl::SetToolRect

Imposta un nuovo rettangolo di delimitazione per uno strumento.

```
void SetToolRect(
    CWnd* pWnd,
    UINT_PTR nIDTool,
    LPCRECT lpRect);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Puntatore alla finestra che contiene lo strumento.

*nIDTool*<br/>
ID dello strumento.

*lpRect*<br/>
Puntatore a un [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura che specifica il nuovo rettangolo di delimitazione.

##  <a name="setwindowtheme"></a>  CToolTipCtrl::SetWindowTheme

Imposta lo stile di visualizzazione della finestra del suggerimento dello strumento.

```
HRESULT SetWindowTheme(LPCWSTR pszSubAppName);
```

### <a name="parameters"></a>Parametri

*pszSubAppName*<br/>
Un puntatore a una stringa Unicode che contiene lo stile di visualizzazione da impostare.

### <a name="return-value"></a>Valore restituito

Il valore restituito non viene utilizzato.

### <a name="remarks"></a>Note

Questa funzione membro emula la funzionalità dei [TTM_SETWINDOWTHEME](/windows/desktop/Controls/ttm-setwindowtheme) del messaggio, come descritto nel SDK di Windows.

##  <a name="update"></a>  CToolTipCtrl::Update

Forza lo strumento di ridisegno corrente.

```
void Update();
```

##  <a name="updatetiptext"></a>  CToolTipCtrl::UpdateTipText

Aggiorna il testo della descrizione comando per gli strumenti di questo controllo.

```
void UpdateTipText(
    LPCTSTR lpszText,
    CWnd* pWnd,
    UINT_PTR nIDTool = 0);

void UpdateTipText(
    UINT nIDText,
    CWnd* pWnd,
    UINT_PTR nIDTool = 0);
```

### <a name="parameters"></a>Parametri

*lpszText*<br/>
Puntatore al testo per lo strumento.

*pWnd*<br/>
Puntatore alla finestra che contiene lo strumento.

*nIDTool*<br/>
ID dello strumento.

*nIDText*<br/>
ID della risorsa stringa che contiene il testo per lo strumento.

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CToolBar](../../mfc/reference/ctoolbar-class.md)
