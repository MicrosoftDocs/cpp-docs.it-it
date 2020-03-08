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
ms.openlocfilehash: bf32671eb3535de1bf072e24bc642145e87c84ee
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78865450"
---
# <a name="ctooltipctrl-class"></a>CToolTipCtrl Class

Incapsula la funzionalità di un "controllo descrizione comando", una piccola finestra popup in cui viene visualizzata una riga di testo singola che descrive lo scopo di uno strumento in un'applicazione.

## <a name="syntax"></a>Sintassi

```
class CToolTipCtrl : public CWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Name|Descrizione|
|----------|-----------------|
|[CToolTipCtrl:: CToolTipCtrl](#ctooltipctrl)|Costruisce un oggetto `CToolTipCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Name|Descrizione|
|----------|-----------------|
|[CToolTipCtrl:: Activate](#activate)|Attiva e disattiva il controllo ToolTip.|
|[CToolTipCtrl:: AddTool](#addtool)|Registra uno strumento con il controllo descrizione comando.|
|[CToolTipCtrl:: AdjustRect](#adjustrect)|Esegue la conversione tra il rettangolo di visualizzazione del testo di un controllo ToolTip e il relativo rettangolo della finestra.|
|[CToolTipCtrl:: create](#create)|Crea un controllo descrizione comandi e lo collega a un oggetto `CToolTipCtrl`.|
|[CToolTipCtrl:: CreateEx](#createex)|Crea un controllo descrizione comando con gli stili estesi di Windows specificati e lo collega a un oggetto `CToolTipCtrl`.|
|[CToolTipCtrl::D elTool](#deltool)|Rimuove uno strumento dal controllo ToolTip.|
|[CToolTipCtrl:: GetBubbleSize](#getbubblesize)|Recupera le dimensioni della descrizione comando.|
|[CToolTipCtrl:: GetCurrentTool](#getcurrenttool)|Recupera le informazioni, ad esempio le dimensioni, la posizione e il testo, della finestra della descrizione comando visualizzata dal controllo ToolTip corrente.|
|[CToolTipCtrl:: GetDelayTime](#getdelaytime)|Recupera le durate iniziali, di popup e di rivisualizzazione attualmente impostate per un controllo di descrizione comandi.|
|[CToolTipCtrl:: GetMargin](#getmargin)|Recupera i margini superiore, sinistro, inferiore e destro impostati per una finestra di descrizione comando.|
|[CToolTipCtrl:: GetMaxTipWidth](#getmaxtipwidth)|Recupera la larghezza massima per una finestra di descrizione comando.|
|[CToolTipCtrl:: GetText](#gettext)|Recupera il testo mantenuto da un controllo descrizione comando per uno strumento.|
|[CToolTipCtrl:: GetTipBkColor](#gettipbkcolor)|Recupera il colore di sfondo in una finestra descrizione comando.|
|[CToolTipCtrl:: GetTipTextColor](#gettiptextcolor)|Recupera il colore del testo in una finestra descrizione comando.|
|[CToolTipCtrl:: getTitle](#gettitle)|Recupera il titolo del controllo ToolTip corrente.|
|[CToolTipCtrl:: GetToolCount](#gettoolcount)|Recupera un conteggio degli strumenti gestiti da un controllo di descrizione comandi.|
|[CToolTipCtrl:: GetToolInfo](#gettoolinfo)|Recupera le informazioni che un controllo ToolTip gestisce su uno strumento.|
|[CToolTipCtrl:: HitTest](#hittest)|Verifica un punto per determinare se si trova all'interno del rettangolo di delimitazione dello strumento specificato. In tal caso, recupera le informazioni sullo strumento.|
|[CToolTipCtrl::P op](#pop)|Rimuove dalla visualizzazione una finestra del suggerimento dello strumento visualizzata.|
|[CToolTipCtrl::P opup](#popup)|Determina la visualizzazione del controllo ToolTip corrente in corrispondenza delle coordinate dell'ultimo messaggio del mouse.|
|[CToolTipCtrl:: RelayEvent](#relayevent)|Passa un messaggio del mouse a un controllo descrizione comando per l'elaborazione.|
|[CToolTipCtrl:: SetDelayTime](#setdelaytime)|Imposta le durate iniziali, popup e reshow per un controllo descrizione comando.|
|[CToolTipCtrl:: semargin](#setmargin)|Imposta i margini superiore, sinistro, inferiore e destro per una finestra di descrizione comando.|
|[CToolTipCtrl:: SetMaxTipWidth](#setmaxtipwidth)|Imposta la larghezza massima per una finestra di descrizione comando.|
|[CToolTipCtrl:: SetTipBkColor](#settipbkcolor)|Imposta il colore di sfondo in una finestra descrizione comando.|
|[CToolTipCtrl:: SetTipTextColor](#settiptextcolor)|Imposta il colore del testo in una finestra descrizione comando.|
|[CToolTipCtrl:: toTitle](#settitle)|Aggiunge un'icona standard e una stringa del titolo a una descrizione comando.|
|[CToolTipCtrl:: SetToolInfo](#settoolinfo)|Imposta le informazioni che una descrizione comando gestisce per uno strumento.|
|[CToolTipCtrl:: SetToolRect](#settoolrect)|Imposta un nuovo rettangolo di delimitazione per uno strumento.|
|[CToolTipCtrl:: SetWindowTheme](#setwindowtheme)|Imposta lo stile di visualizzazione della finestra descrizione comando.|
|[CToolTipCtrl:: Update](#update)|Impone il ridisegnato dello strumento corrente.|
|[CToolTipCtrl:: UpdateTipText](#updatetiptext)|Imposta il testo della descrizione comando per uno strumento.|

## <a name="remarks"></a>Osservazioni

Uno "strumento" è una finestra, ad esempio una finestra o un controllo figlio oppure un'area rettangolare definita dall'applicazione all'interno dell'area client di una finestra. Una descrizione comando è nascosta per la maggior parte del tempo, che viene visualizzata solo quando l'utente posiziona il cursore su uno strumento e lo lascia per circa un mezzo secondo. La descrizione comando viene visualizzata accanto al cursore e scompare quando l'utente fa clic su un pulsante del mouse o sposta il cursore dallo strumento.

`CToolTipCtrl` fornisce la funzionalità per controllare il tempo e la durata iniziali della descrizione comandi, le larghezze dei margini che racchiudono il testo della descrizione comando, la larghezza della finestra della descrizione comandi e lo sfondo e il colore del testo della descrizione comando. Un singolo controllo descrizione comando può fornire informazioni per più di uno strumento.

La classe `CToolTipCtrl` fornisce la funzionalità del controllo ToolTip comune di Windows. Questo controllo (e pertanto la classe `CToolTipCtrl`) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versione 3,51 e successive.

Per ulteriori informazioni sull'abilitazione delle descrizioni comandi, vedere descrizioni [comandi in Windows non derivate da CFrameWnd](../../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md).

Per altre informazioni sull'uso di `CToolTipCtrl`, vedere [controlli](../../mfc/controls-mfc.md) e [uso di CToolTipCtrl](../../mfc/using-ctooltipctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CToolTipCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

##  <a name="activate"></a>CToolTipCtrl:: Activate

Chiamare questa funzione per attivare o disattivare un controllo descrizione comando.

```
void Activate(BOOL bActivate);
```

### <a name="parameters"></a>Parametri

*bActivate*<br/>
Specifica se il controllo descrizione comando deve essere attivato o disattivato.

### <a name="remarks"></a>Osservazioni

Se *bActivate* è true, il controllo viene attivato; Se FALSE, viene disattivato.

Quando un controllo descrizione comando è attivo, le informazioni sulla descrizione comandi vengono visualizzate quando il cursore si trova in uno strumento registrato con il controllo; Quando è inattiva, le informazioni relative alla descrizione comando non vengono visualizzate, neanche quando il cursore si trova in uno strumento.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPropertySheet:: GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).

##  <a name="addtool"></a>CToolTipCtrl:: AddTool

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
ID della risorsa di stringa che contiene il testo per lo strumento.

*lpRectTool*<br/>
Puntatore a una struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) che contiene le coordinate del rettangolo di delimitazione dello strumento. Le coordinate sono relative all'angolo superiore sinistro dell'area client della finestra identificata da *pWnd*.

*nIDTool*<br/>
ID dello strumento.

*lpszText*<br/>
Puntatore al testo per lo strumento. Se questo parametro contiene il valore LPSTR_TEXTCALLBACK, TTN_NEEDTEXT i messaggi di notifica passano all'elemento padre della finestra a cui punta *pWnd* .

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

I parametri *lpRectTool* e *nIDTool* devono essere entrambi validi o se *lpRectTool* è null, *nIDTool* deve essere 0.

Un controllo descrizione comando può essere associato a più di uno strumento. Chiamare questa funzione per registrare uno strumento con il controllo descrizione comando, in modo che le informazioni archiviate nella descrizione comandi vengano visualizzate quando il cursore si trova sullo strumento.

> [!NOTE]
>  Non è possibile impostare una descrizione comando su un controllo statico usando `AddTool`.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPropertySheet:: GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).

##  <a name="adjustrect"></a>CToolTipCtrl:: AdjustRect

Esegue la conversione tra il rettangolo di visualizzazione del testo di un controllo ToolTip e il relativo rettangolo della finestra.

```
BOOL AdjustRect(
    LPRECT lprc,
    BOOL bLarger = TRUE);
```

### <a name="parameters"></a>Parametri

*LPRC*<br/>
Puntatore a una struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) che include un rettangolo della finestra di descrizione comando o un rettangolo di visualizzazione del testo.

*bLarger*<br/>
Se è TRUE, *LPRC* viene usato per specificare un rettangolo di visualizzazione del testo e riceve il rettangolo della finestra corrispondente. Se FALSE, *LPRC* viene usato per specificare un rettangolo della finestra e riceve il rettangolo di visualizzazione del testo corrispondente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il rettangolo viene regolato correttamente; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro calcola il rettangolo di visualizzazione del testo di un controllo ToolTip dal relativo rettangolo della finestra o il rettangolo della finestra descrizione comando necessario per visualizzare un rettangolo di visualizzazione del testo specificato.

Questa funzione membro implementa il comportamento del [TTM_ADJUSTRECT](/windows/win32/Controls/ttm-adjustrect)del messaggio Win32, come descritto nel Windows SDK.

##  <a name="create"></a>CToolTipCtrl:: create

Crea un controllo descrizione comandi e lo collega a un oggetto `CToolTipCtrl`.

```
virtual BOOL Create(CWnd* pParentWnd, DWORD dwStyle = 0);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
Specifica la finestra padre del controllo ToolTip, in genere un `CDialog`. Non deve essere NULL.

*dwStyle*<br/>
Specifica lo stile del controllo ToolTip. Per ulteriori informazioni, vedere la sezione **osservazioni** .

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto `CToolTipCtrl` è stato creato correttamente; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Si costruisce un `CToolTipCtrl` in due passaggi. Chiamare innanzitutto il costruttore per costruire l'oggetto `CToolTipCtrl`, quindi chiamare `Create` per creare il controllo descrizione comando e collegarlo all'oggetto `CToolTipCtrl`.

Il parametro *dwStyle* può essere costituito da qualsiasi combinazione di [stili di finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles). Inoltre, un controllo descrizione comando ha due stili specifici della classe: TTS_ALWAYSTIP e TTS_NOPREFIX.

|Style|Significato|
|-----------|-------------|
|TTS_ALWAYSTIP|Specifica che la descrizione comando verrà visualizzata quando il cursore si trova in uno strumento, indipendentemente dal fatto che la finestra proprietaria del controllo ToolTip sia attiva o inattiva. Senza questo stile, il controllo descrizione comando viene visualizzato quando la finestra proprietaria dello strumento è attiva, ma non quando è inattiva.|
|TTS_NOPREFIX|Questo stile impedisce al sistema di estrarre il carattere e commerciale (&) da una stringa. Se un controllo descrizione comando non ha lo stile TTS_NOPREFIX, il sistema rimuove automaticamente i caratteri e, consentendo a un'applicazione di usare la stessa stringa sia come voce di menu che come testo in un controllo descrizione comando.|

Un controllo descrizione comando ha gli stili della finestra WS_POPUP e WS_EX_TOOLWINDOW, indipendentemente dal fatto che vengano specificati quando si crea il controllo.

Per creare un controllo descrizione comando con gli stili di Windows estesi, chiamare [CToolTipCtrl:: CreateEx](#createex) anziché `Create`.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPropertySheet:: GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).

##  <a name="createex"></a>CToolTipCtrl:: CreateEx

Crea un controllo (una finestra figlio) e lo associa all'oggetto `CToolTipCtrl`.

```
virtual BOOL CreateEx(
    CWnd* pParentWnd,
    DWORD dwStyle = 0,
    DWORD dwStyleEx = 0);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
Puntatore alla finestra che rappresenta l'elemento padre del controllo.

*dwStyle*<br/>
Specifica lo stile del controllo ToolTip. Per ulteriori informazioni, vedere la sezione **osservazioni** di [create](#create) .

*dwStyleEx*<br/>
Specifica lo stile esteso del controllo da creare. Per un elenco degli stili Windows estesi, vedere il parametro *dwExStyle* per [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) nel Windows SDK.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo, altrimenti 0.

### <a name="remarks"></a>Osservazioni

Utilizzare `CreateEx` anziché `Create` per applicare gli stili di Windows estesi, specificati dall' **WS_EX_** di prefazione dello stile esteso di Windows.

##  <a name="ctooltipctrl"></a>CToolTipCtrl:: CToolTipCtrl

Costruisce un oggetto `CToolTipCtrl`.

```
CToolTipCtrl();
```

### <a name="remarks"></a>Osservazioni

È necessario chiamare `Create` dopo la costruzione dell'oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#74](../../mfc/codesnippet/cpp/ctooltipctrl-class_1.h)]

##  <a name="deltool"></a>CToolTipCtrl::D elTool

Rimuove lo strumento specificato da *pWnd* e *nIDTool* dalla raccolta di strumenti supportati da un controllo descrizione comando.

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

##  <a name="getbubblesize"></a>CToolTipCtrl:: GetBubbleSize

Recupera le dimensioni della descrizione comando.

```
CSize GetBubbleSize(LPTOOLINFO lpToolInfo) const;
```

### <a name="parameters"></a>Parametri

*lpToolInfo*<br/>
Puntatore alla struttura [TOOLINFO](/windows/win32/api/commctrl/ns-commctrl-tttoolinfoa) della descrizione comando.

### <a name="return-value"></a>Valore restituito

Dimensione della descrizione comando.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [TTM_GETBUBBLESIZE](/windows/win32/Controls/ttm-getbubblesize)del messaggio Win32, come descritto nel Windows SDK.

##  <a name="getcurrenttool"></a>CToolTipCtrl:: GetCurrentTool

Recupera le informazioni, ad esempio le dimensioni, la posizione e il testo, della finestra della descrizione comandi visualizzata dal controllo ToolTip corrente.

```
BOOL GetCurrentTool(LPTOOLINFO lpToolInfo) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*lpToolInfo*|out Puntatore a una struttura [TOOLINFO](/windows/win32/api/commctrl/ns-commctrl-tttoolinfoa) che riceve informazioni sulla finestra della descrizione comando corrente.|

### <a name="return-value"></a>Valore restituito

TRUE se le informazioni vengono recuperate correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [TTM_GETCURRENTTOOL](/windows/win32/Controls/ttm-getcurrenttool) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice seguente vengono recuperate informazioni sulla finestra della descrizione comando corrente.

[!code-cpp[NVC_MFC_CToolBarCtrl_s1#6](../../mfc/reference/codesnippet/cpp/ctooltipctrl-class_2.cpp)]

##  <a name="getdelaytime"></a>CToolTipCtrl:: GetDelayTime

Recupera le durate iniziali, di popup e di rivisualizzazione attualmente impostate per un controllo di descrizione comandi.

```
int GetDelayTime(DWORD dwDuration) const;
```

### <a name="parameters"></a>Parametri

*dwDuration*<br/>
Flag che specifica quale valore Duration verrà recuperato. Questo parametro può essere uno dei valori seguenti:

- TTDT_AUTOPOP recuperare l'intervallo di tempo durante il quale la finestra di descrizione comando rimane visibile se il puntatore è fermo all'interno del rettangolo di delimitazione di uno strumento.

- TTDT_INITIAL recuperare il periodo di tempo in cui il puntatore deve rimanere fermo nel rettangolo di delimitazione di uno strumento prima che venga visualizzata la finestra descrizione comando.

- TTDT_RESHOW recuperare il tempo necessario per la visualizzazione delle finestre di descrizione comando successive quando il puntatore passa da uno strumento all'altro.

### <a name="return-value"></a>Valore restituito

Tempo di ritardo specificato, in millisecondi

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [TTM_GETDELAYTIME](/windows/win32/Controls/ttm-getdelaytime)del messaggio Win32, come descritto nel Windows SDK.

##  <a name="getmargin"></a>CToolTipCtrl:: GetMargin

Recupera i margini superiore, sinistro, inferiore e destro impostati per una finestra di descrizione comando.

```
void GetMargin(LPRECT lprc) const;
```

### <a name="parameters"></a>Parametri

*LPRC*<br/>
Indirizzo di una struttura `RECT` che riceverà le informazioni sui margini. I membri della struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) non definiscono un rettangolo di delimitazione. Ai fini di questo messaggio, i membri della struttura vengono interpretati nel modo seguente:

|Membro|Rappresentazione|
|------------|--------------------|
|`top`|Distanza tra il bordo superiore e il testo della descrizione comando, in pixel.|
|`left`|Distanza tra il bordo sinistro e il lato sinistro del testo del suggerimento, in pixel.|
|`bottom`|Distanza tra il bordo inferiore e il testo del suggerimento, in pixel.|
|`right`|Distanza tra il bordo destro e l'estremità destra del testo del suggerimento, in pixel.|

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [TTM_GETMARGIN](/windows/win32/Controls/ttm-getmargin)del messaggio Win32, come descritto nel Windows SDK.

##  <a name="getmaxtipwidth"></a>CToolTipCtrl:: GetMaxTipWidth

Recupera la larghezza massima per una finestra di descrizione comando.

```
int GetMaxTipWidth() const;
```

### <a name="return-value"></a>Valore restituito

Larghezza massima per una finestra di descrizione comando.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [TTM_GETMAXTIPWIDTH](/windows/win32/Controls/ttm-getmaxtipwidth)del messaggio Win32, come descritto nel Windows SDK.

##  <a name="gettext"></a>CToolTipCtrl:: GetText

Recupera il testo mantenuto da un controllo descrizione comando per uno strumento.

```
void GetText(
    CString& str,
    CWnd* pWnd,
    UINT_PTR nIDTool = 0) const;
```

### <a name="parameters"></a>Parametri

*str*<br/>
Riferimento a un oggetto `CString` che riceve il testo dello strumento.

*pWnd*<br/>
Puntatore alla finestra che contiene lo strumento.

*nIDTool*<br/>
ID dello strumento.

### <a name="remarks"></a>Osservazioni

I parametri *pWnd* e *nIDTool* identificano lo strumento. Se lo strumento è stato precedentemente registrato con il controllo descrizione comando tramite una chiamata precedente a `CToolTipCtrl::AddTool`, all'oggetto a cui fa riferimento il parametro *Str* viene assegnato il testo dello strumento.

##  <a name="gettipbkcolor"></a>CToolTipCtrl:: GetTipBkColor

Recupera il colore di sfondo in una finestra descrizione comando.

```
COLORREF GetTipBkColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore [COLORREF](/windows/win32/gdi/colorref) che rappresenta il colore di sfondo.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [TTM_GETTIPBKCOLOR](/windows/win32/Controls/ttm-gettipbkcolor)del messaggio Win32, come descritto nel Windows SDK.

##  <a name="gettiptextcolor"></a>CToolTipCtrl:: GetTipTextColor

Recupera il colore del testo in una finestra descrizione comando.

```
COLORREF GetTipTextColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore [COLORREF](/windows/win32/gdi/colorref) che rappresenta il colore del testo.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [TTM_GETTIPTEXTCOLOR](/windows/win32/Controls/ttm-gettiptextcolor)del messaggio Win32, come descritto nel Windows SDK.

##  <a name="gettitle"></a>CToolTipCtrl:: getTitle

Recupera il titolo del controllo ToolTip corrente.

```
void GetTitle(PTTGETTITLE pttgt) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pttgt*|out Puntatore a una struttura [TTGETTITLE](/windows/win32/api/commctrl/ns-commctrl-ttgettitle) che contiene informazioni sul controllo ToolTip. Quando questo metodo viene restituito, il membro *pszTitle* della struttura [TTGETTITLE](/windows/win32/api/commctrl/ns-commctrl-ttgettitle) punta al testo del titolo.|

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [TTM_GETTITLE](/windows/win32/Controls/ttm-gettitle) , descritto nel Windows SDK.

##  <a name="gettoolcount"></a>CToolTipCtrl:: GetToolCount

Recupera un conteggio degli strumenti registrati con il controllo descrizione comando.

```
int GetToolCount() const;
```

### <a name="return-value"></a>Valore restituito

Conteggio degli strumenti registrati con il controllo descrizione comando.

##  <a name="gettoolinfo"></a>CToolTipCtrl:: GetToolInfo

Recupera le informazioni che un controllo ToolTip gestisce su uno strumento.

```
BOOL GetToolInfo(
    CToolInfo& ToolInfo,
    CWnd* pWnd,
    UINT_PTR nIDTool = 0) const;
```

### <a name="parameters"></a>Parametri

*ToolInfo*<br/>
Riferimento a un oggetto `TOOLINFO` che riceve il testo dello strumento.

*pWnd*<br/>
Puntatore alla finestra che contiene lo strumento.

*nIDTool*<br/>
ID dello strumento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

I membri `hwnd` e `uId` della struttura [TOOLINFO](/windows/win32/api/commctrl/ns-commctrl-tttoolinfoa) a cui fa riferimento *CToolInfo* identificano lo strumento. Se lo strumento è stato registrato con il controllo descrizione comando tramite una chiamata precedente a `AddTool`, la struttura `TOOLINFO` viene compilata con informazioni sullo strumento.

##  <a name="hittest"></a>CToolTipCtrl:: HitTest

Verifica un punto per determinare se si trova all'interno del rettangolo di delimitazione dello strumento specificato e, in caso affermativo, recuperare le informazioni sullo strumento.

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
Puntatore a un oggetto `CPoint` contenente le coordinate del punto da testare.

*lpToolInfo*<br/>
Puntatore alla struttura [TOOLINFO](/windows/win32/api/commctrl/ns-commctrl-tttoolinfoa) che contiene informazioni sullo strumento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il punto specificato dalle informazioni di hit test si trova all'interno del rettangolo di delimitazione dello strumento; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Se questa funzione restituisce un valore diverso da zero, la struttura a cui punta *lpToolInfo* viene riempita con informazioni sullo strumento all'interno del quale è presente il rettangolo in cui si trova il punto.

La struttura `TTHITTESTINFO` viene definita nel modo seguente:

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

   Specifica le coordinate di un punto se il punto si trova nel rettangolo di delimitazione dello strumento.

- `ti`

   Informazioni sullo strumento. Per ulteriori informazioni sulla struttura `TOOLINFO`, vedere [CToolTipCtrl:: GetToolInfo](#gettoolinfo).

##  <a name="pop"></a>CToolTipCtrl::P op

Rimuove una finestra del suggerimento dello strumento visualizzata dalla visualizzazione.

```
void Pop();
```

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [TTM_POP](/windows/win32/Controls/ttm-pop)del messaggio Win32, come descritto nel Windows SDK.

##  <a name="popup"></a>CToolTipCtrl::P opup

Determina la visualizzazione del controllo ToolTip corrente in corrispondenza delle coordinate dell'ultimo messaggio del mouse.

```
void Popup();
```

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [TTM_POPUP](/windows/win32/Controls/ttm-popup) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene visualizzata una finestra descrizione comando.

[!code-cpp[NVC_MFC_CToolBarCtrl_s1#7](../../mfc/reference/codesnippet/cpp/ctooltipctrl-class_3.cpp)]

##  <a name="relayevent"></a>CToolTipCtrl:: RelayEvent

Passa un messaggio del mouse a un controllo descrizione comando per l'elaborazione.

```
void RelayEvent(LPMSG lpMsg);
```

### <a name="parameters"></a>Parametri

*lpMsg*<br/>
Puntatore a una struttura di [messaggi](/windows/win32/api/winuser/ns-winuser-msg) contenente il messaggio da inoltrare.

### <a name="remarks"></a>Osservazioni

Un controllo descrizione comando elabora solo i messaggi seguenti, che vengono inviati da `RelayEvent`:

|WM_LBUTTONDOWN|WM_MOUSEMOVE|
|---------------------|-------------------|
|WM_LBUTTONUP|WM_RBUTTONDOWN|
|WM_MBUTTONDOWN|WM_RBUTTONUP|
|WM_MBUTTONUP||

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPropertySheet:: GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).

##  <a name="setdelaytime"></a>CToolTipCtrl:: SetDelayTime

Imposta il tempo di ritardo per il controllo di una descrizione comandi.

```
void SetDelayTime(UINT nDelay);

void SetDelayTime(
    DWORD dwDuration,
    int iTime);
```

### <a name="parameters"></a>Parametri

*nDelay*<br/>
Specifica il nuovo tempo di ritardo, in millisecondi.

*dwDuration*<br/>
Flag che specifica quale valore Duration verrà recuperato. Per una descrizione dei valori validi, vedere [CToolTipCtrl:: GetDelayTime](#getdelaytime) .

*iTime*<br/>
Tempo di ritardo specificato, in millisecondi.

### <a name="remarks"></a>Osservazioni

Il tempo di ritardo indica il periodo di tempo durante il quale il cursore deve rimanere in uno strumento prima che venga visualizzata la finestra descrizione comando. Il tempo di ritardo predefinito è pari a 500 millisecondi.

##  <a name="setmargin"></a>CToolTipCtrl:: semargin

Imposta i margini superiore, sinistro, inferiore e destro per una finestra di descrizione comando.

```
void SetMargin(LPRECT lprc);
```

### <a name="parameters"></a>Parametri

*LPRC*<br/>
Indirizzo di una struttura `RECT` contenente le informazioni sui margini da impostare. I membri della struttura `RECT` non definiscono un rettangolo di delimitazione. Per una descrizione delle informazioni sul margine, vedere [CToolTipCtrl:: GetMargin](#getmargin) .

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [TTM_SETMARGIN](/windows/win32/Controls/ttm-setmargin)del messaggio Win32, come descritto nel Windows SDK.

##  <a name="setmaxtipwidth"></a>CToolTipCtrl:: SetMaxTipWidth

Imposta la larghezza massima per una finestra di descrizione comando.

```
int SetMaxTipWidth(int iWidth);
```

### <a name="parameters"></a>Parametri

*Larghezza*<br/>
Larghezza massima della finestra descrizione comando da impostare.

### <a name="return-value"></a>Valore restituito

Larghezza massima del suggerimento precedente.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [TTM_SETMAXTIPWIDTH](/windows/win32/Controls/ttm-setmaxtipwidth)del messaggio Win32, come descritto nel Windows SDK.

##  <a name="settipbkcolor"></a>CToolTipCtrl:: SetTipBkColor

Imposta il colore di sfondo in una finestra descrizione comando.

```
void SetTipBkColor(COLORREF clr);
```

### <a name="parameters"></a>Parametri

*clr*<br/>
Nuovo colore di sfondo.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [TTM_SETTIPBKCOLOR](/windows/win32/Controls/ttm-settipbkcolor)del messaggio Win32, come descritto nel Windows SDK.

##  <a name="settiptextcolor"></a>CToolTipCtrl:: SetTipTextColor

Imposta il colore del testo in una finestra descrizione comando.

```
void SetTipTextColor(COLORREF clr);
```

### <a name="parameters"></a>Parametri

*clr*<br/>
Nuovo colore del testo.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [TTM_SETTIPTEXTCOLOR](/windows/win32/Controls/ttm-settiptextcolor)del messaggio Win32, come descritto nel Windows SDK.

##  <a name="settitle"></a>CToolTipCtrl:: toTitle

Aggiunge un'icona standard e una stringa del titolo a una descrizione comando.

```
BOOL SetTitle(
    UINT uIcon,
    LPCTSTR lpstrTitle);
```

### <a name="parameters"></a>Parametri

*uIcon*<br/>
Vedere l'icona [TTM_SETTITLE](/windows/win32/Controls/ttm-settitle) nel Windows SDK.

*lpstrTitle*<br/>
Puntatore alla stringa del titolo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [TTM_SETTITLE](/windows/win32/Controls/ttm-settitle)del messaggio Win32, come descritto nel Windows SDK.

##  <a name="settoolinfo"></a>CToolTipCtrl:: SetToolInfo

Imposta le informazioni che una descrizione comando gestisce per uno strumento.

```
void SetToolInfo(LPTOOLINFO lpToolInfo);
```

### <a name="parameters"></a>Parametri

*lpToolInfo*<br/>
Puntatore a una struttura [TOOLINFO](/windows/win32/api/commctrl/ns-commctrl-tttoolinfoa) che specifica le informazioni da impostare.

##  <a name="settoolrect"></a>CToolTipCtrl:: SetToolRect

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
Puntatore a una struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) che specifica il nuovo rettangolo di delimitazione.

##  <a name="setwindowtheme"></a>CToolTipCtrl:: SetWindowTheme

Imposta lo stile di visualizzazione della finestra descrizione comando.

```
HRESULT SetWindowTheme(LPCWSTR pszSubAppName);
```

### <a name="parameters"></a>Parametri

*pszSubAppName*<br/>
Puntatore a una stringa Unicode che contiene lo stile di visualizzazione da impostare.

### <a name="return-value"></a>Valore restituito

Il valore restituito non viene utilizzato.

### <a name="remarks"></a>Osservazioni

Questa funzione membro emula la funzionalità del messaggio di [TTM_SETWINDOWTHEME](/windows/win32/Controls/ttm-setwindowtheme) , come descritto nel Windows SDK.

##  <a name="update"></a>CToolTipCtrl:: Update

Impone il ridisegnato dello strumento corrente.

```
void Update();
```

##  <a name="updatetiptext"></a>CToolTipCtrl:: UpdateTipText

Aggiorna il testo della descrizione comandi per gli strumenti di questo controllo.

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
ID della risorsa di stringa che contiene il testo per lo strumento.

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CToolBar](../../mfc/reference/ctoolbar-class.md)
