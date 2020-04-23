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
ms.openlocfilehash: 53a5a5b6871680f9758d140174dcceae6c53f568
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81752189"
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
|[CToolTipCtrl::Attivare](#activate)|Attiva e disattiva il controllo della descrizione comandi.|
|[CToolTipCtrl::AddTool](#addtool)|Registra uno strumento con il controllo descrizione comandi.|
|[CToolTipCtrl::AdjustRect](#adjustrect)|Converte tra il rettangolo di visualizzazione del testo di un controllo descrizione comandi e il rettangolo della finestra.|
|[CToolTipCtrl::Crea](#create)|Crea un controllo descrizione comandi e `CToolTipCtrl` lo associa a un oggetto.|
|[CToolTipCtrl::CreateEx](#createex)|Crea un controllo descrizione comandi con gli stili estesi `CToolTipCtrl` di Windows specificati e lo associa a un oggetto.|
|[CToolTipCtrl::DelTool](#deltool)|Rimuove uno strumento dal controllo descrizione comandi.|
|[CToolTipCtrl::GetBubbleSize](#getbubblesize)|Recupera le dimensioni della descrizione comandi.|
|[CToolTipCtrl::GetCurrentTool](#getcurrenttool)|Recupera informazioni, ad esempio le dimensioni, la posizione e il testo, della finestra della descrizione comandi visualizzata dal controllo descrizione comandi corrente.|
|[CToolTipCtrl::GetDelayTime](#getdelaytime)|Recupera le durate iniziali, popup e rimostranti attualmente impostate per un controllo descrizione comandi.|
|[CToolTipCtrl::GetMargin](#getmargin)|Recupera i margini superiore, sinistro, inferiore e destro impostati per una finestra della descrizione comandi.|
|[CToolTipCtrl::GetMaxTipWidth](#getmaxtipwidth)|Recupera la larghezza massima per una finestra della descrizione comandi.|
|[CToolTipCtrl::GetText](#gettext)|Recupera il testo mantenuto da un controllo descrizione comandi per uno strumento.|
|[CToolTipCtrl::GetTipBkColor](#gettipbkcolor)|Recupera il colore di sfondo in una finestra della descrizione comandi.|
|[CToolTipCtrl::GetTipTextColor](#gettiptextcolor)|Recupera il colore del testo in una finestra della descrizione comandi.|
|[CToolTipCtrl::GetTitle](#gettitle)|Recupera il titolo del controllo descrizione comandi corrente.|
|[CToolTipCtrl::GetToolCount](#gettoolcount)|Recupera un conteggio degli strumenti gestiti da un controllo descrizione comandi.|
|[CToolTipCtrl::GetToolInfo](#gettoolinfo)|Recupera le informazioni che un controllo descrizione comandi gestisce su uno strumento.|
|[CToolTipCtrl::HitTest](#hittest)|Verifica un punto per determinare se si trova all'interno del rettangolo di delimitazione dello strumento specificato. In tal caso, recupera le informazioni sullo strumento.|
|[CToolTipCtrl::Pop](#pop)|Rimuove una finestra delle descrizioni comandi visualizzata dalla visualizzazione.|
|[CToolTipCtrl::Popup](#popup)|Determina la visualizzazione del controllo Descrizione comando corrente in corrispondenza delle coordinate dell'ultimo messaggio del mouse.|
|[CToolTipCtrl::RelayEvent](#relayevent)|Passa un messaggio del mouse a un controllo descrizione comandi per l'elaborazione.|
|[CToolTipCtrl::SetDelayTime](#setdelaytime)|Imposta le durate iniziali, pop-up e reshow per un controllo descrizione comandi.|
|[CToolTipCtrl::SetMargin](#setmargin)|Imposta i margini superiore, sinistro, inferiore e destro per una finestra della descrizione comandi.|
|[CToolTipCtrl::SetMaxTipWidth](#setmaxtipwidth)|Imposta la larghezza massima per una finestra della descrizione comandi.|
|[CToolTipCtrl::SetTipBkColor](#settipbkcolor)|Imposta il colore di sfondo in una finestra della descrizione comandi.|
|[CToolTipCtrl::SetTipTextColor](#settiptextcolor)|Imposta il colore del testo in una finestra della descrizione comandi.|
|[CToolTipCtrl::SetTitle](#settitle)|Aggiunge un'icona standard e una stringa del titolo a una descrizione comandi.|
|[CToolTipCtrl::SetToolInfo](#settoolinfo)|Imposta le informazioni che una descrizione comandi mantiene per uno strumento.|
|[CToolTipCtrl::SetToolRect](#settoolrect)|Imposta un nuovo rettangolo di delimitazione per uno strumento.|
|[CToolTipCtrl::SetWindowTheme](#setwindowtheme)|Imposta lo stile di visualizzazione della finestra della descrizione comandi.|
|[CToolTipCtrl::Aggiornare](#update)|Forza il ridisegno dello strumento corrente.|
|[CToolTipCtrl::UpdateTipText](#updatetiptext)|Imposta il testo della descrizione comandi per uno strumento.|

## <a name="remarks"></a>Osservazioni

Uno "strumento" è una finestra, ad esempio una finestra figlio o un controllo, o un'area rettangolare definita dall'applicazione all'interno dell'area client di una finestra. Una descrizione comandi è nascosta per la maggior parte del tempo, appare solo quando l'utente posiziona il cursore su uno strumento e lo lascia lì per circa mezzo secondo. La descrizione comandi viene visualizzata accanto al cursore e scompare quando l'utente fa clic su un pulsante del mouse o sposta il cursore fuori dallo strumento.

`CToolTipCtrl`fornisce la funzionalità per controllare il tempo iniziale e la durata della descrizione comandi, le larghezze dei margini che circondano il testo della descrizione comandi, la larghezza della finestra della descrizione comandi stessa e lo sfondo e il colore del testo della descrizione comandi. Un singolo controllo descrizione comandi può fornire informazioni per più di uno strumento.

La `CToolTipCtrl` classe fornisce la funzionalità del controllo descrizione comandi comune di Windows. Questo controllo (e `CToolTipCtrl` quindi la classe) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versioni 3.51 e successive.

Per ulteriori informazioni sull'abilitazione delle descrizioni comandi, vedere [Descrizioni comandi in Windows non derivato da CFrameWnd](../../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md).

Per ulteriori informazioni `CToolTipCtrl`sull'utilizzo di , vedere [Controlli](../../mfc/controls-mfc.md) e Utilizzo di [CToolTipCtrl](../../mfc/using-ctooltipctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CToolTipCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

## <a name="ctooltipctrlactivate"></a><a name="activate"></a>CToolTipCtrl::Attivare

Chiamare questa funzione per attivare o disattivare un controllo descrizione comandi.

```cpp
void Activate(BOOL bActivate);
```

### <a name="parameters"></a>Parametri

*bActivate*<br/>
Specifica se il controllo descrizione comandi deve essere attivato o disattivato.

### <a name="remarks"></a>Osservazioni

Se *bActivate* è TRUE, il controllo viene attivato; se FALSE, viene disattivato.

Quando un controllo descrizione comandi è attivo, le informazioni della descrizione comandi vengono visualizzate quando il cursore si trova su uno strumento registrato con il controllo. quando è inattivo, le informazioni della descrizione comandi non vengono visualizzate, anche quando il cursore si trova su uno strumento.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPropertySheet::GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).

## <a name="ctooltipctrladdtool"></a><a name="addtool"></a>CToolTipCtrl::AddTool

Registra uno strumento con il controllo descrizione comandi.

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

*pWnd (in questo stato di windows*<br/>
Puntatore alla finestra che contiene lo strumento.

*nIDTesto*<br/>
ID della risorsa stringa che contiene il testo per lo strumento.

*LpRectTool (strumento LpRectTool)*<br/>
Puntatore a una struttura [RECT](/windows/win32/api/windef/ns-windef-rect) contenente le coordinate del rettangolo di delimitazione dello strumento. Le coordinate sono relative all'angolo superiore sinistro dell'area client della finestra identificata da *pWnd*.

*NIDTool (Strumento identità)*<br/>
ID dello strumento.

*lpszText*<br/>
Puntatore al testo per lo strumento. Se questo parametro contiene il valore LPSTR_TEXTCALLBACK, TTN_NEEDTEXT i messaggi di notifica vengono inviati all'elemento padre della finestra a cui punta *pWnd.*

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

I parametri *lpRectTool* e *nIDTool* devono essere entrambi validi o, se *lpRectTool* è NULL, *nIDTool* deve essere 0.

Un controllo descrizione comandi può essere associato a più di uno strumento. Chiamare questa funzione per registrare uno strumento con il controllo descrizione comandi, in modo che le informazioni memorizzate nella descrizione comandi vengano visualizzate quando il cursore si trova sullo strumento.

> [!NOTE]
> Non è possibile impostare una `AddTool`descrizione comandi su un controllo statico utilizzando .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPropertySheet::GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).

## <a name="ctooltipctrladjustrect"></a><a name="adjustrect"></a>CToolTipCtrl::AdjustRect

Converte tra il rettangolo di visualizzazione del testo di un controllo descrizione comandi e il rettangolo della finestra.

```
BOOL AdjustRect(
    LPRECT lprc,
    BOOL bLarger = TRUE);
```

### <a name="parameters"></a>Parametri

*lprc*<br/>
Puntatore a una struttura [RECT](/windows/win32/api/windef/ns-windef-rect) che contiene un rettangolo della finestra della descrizione comandi o un rettangolo di visualizzazione del testo.

*bPiù grande*<br/>
Se TRUE, *lprc* viene utilizzato per specificare un rettangolo di visualizzazione di testo e riceve il rettangolo della finestra corrispondente. Se FALSE, *lprc* viene utilizzato per specificare un rettangolo della finestra e riceve il rettangolo di visualizzazione del testo corrispondente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il rettangolo viene regolato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro calcola il rettangolo di visualizzazione del testo di un controllo descrizione comandi dal rettangolo della finestra o il rettangolo della finestra della descrizione comandi necessario per visualizzare un rettangolo di visualizzazione del testo specificato.

Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_ADJUSTRECT](/windows/win32/Controls/ttm-adjustrect), come descritto in Windows SDK.

## <a name="ctooltipctrlcreate"></a><a name="create"></a>CToolTipCtrl::Crea

Crea un controllo descrizione comandi e `CToolTipCtrl` lo associa a un oggetto.

```
virtual BOOL Create(CWnd* pParentWnd, DWORD dwStyle = 0);
```

### <a name="parameters"></a>Parametri

*pParentWnd (informazioni in due)*<br/>
Specifica la finestra padre del controllo descrizione `CDialog`comandi, in genere un oggetto . Non deve essere NULL.

*DwStyle (in stile dwStyle)*<br/>
Specifica lo stile del controllo descrizione comandi. Vedere la sezione **Osservazioni** per ulteriori informazioni.

### <a name="return-value"></a>Valore restituito

Diverso da `CToolTipCtrl` zero se l'oggetto viene creato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Costruire un `CToolTipCtrl` in due passi. In primo luogo, chiamare `CToolTipCtrl` il costruttore `Create` per costruire l'oggetto e `CToolTipCtrl` quindi chiamare per creare il controllo descrizione comandi e associarlo all'oggetto.

Il parametro *dwStyle* può essere qualsiasi combinazione di stili di [finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles). Inoltre, un controllo descrizione comandi dispone di due stili specifici della classe: TTS_ALWAYSTIP e TTS_NOPREFIX.

|Style|Significato|
|-----------|-------------|
|TTS_ALWAYSTIP|Specifica che la descrizione comandi verrà visualizzata quando il cursore si trova su uno strumento, indipendentemente dal fatto che la finestra proprietaria del controllo descrizione comandi sia attiva o inattiva. Senza questo stile, il controllo descrizione comandi viene visualizzato quando la finestra proprietaria dello strumento è attiva, ma non quando è inattiva.|
|TTS_NOPREFIX|Questo stile impedisce al sistema di rimuovere il carattere e commerciale (&) da una stringa. Se un controllo descrizione comandi non ha lo stile TTS_NOPREFIX, il sistema rimuove automaticamente i caratteri e commerciale, consentendo a un'applicazione di utilizzare la stessa stringa sia come voce di menu che come testo in un controllo descrizione comandi.|

Un controllo descrizione comandi dispone delle WS_POPUP e WS_EX_TOOLWINDOW gli stili della finestra, indipendentemente dal fatto che vengano specificati durante la creazione del controllo.

Per creare un controllo descrizione comandi con stili di finestra estesi, `Create`chiamare [CToolTipCtrl::CreateEx](#createex) anziché .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPropertySheet::GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).

## <a name="ctooltipctrlcreateex"></a><a name="createex"></a>CToolTipCtrl::CreateEx

Crea un controllo (una finestra figlio) `CToolTipCtrl` e lo associa all'oggetto.

```
virtual BOOL CreateEx(
    CWnd* pParentWnd,
    DWORD dwStyle = 0,
    DWORD dwStyleEx = 0);
```

### <a name="parameters"></a>Parametri

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra che è padre del controllo.

*DwStyle (in stile dwStyle)*<br/>
Specifica lo stile del controllo descrizione comandi. Per ulteriori informazioni, vedere la sezione **Osservazioni** di [Create.](#create)

*dwStyleEx*<br/>
Specifica lo stile esteso del controllo in fase di creazione. Per un elenco di stili di Windows estesi, vedere il parametro *dwExStyle* per [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) in Windows SDK.

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo 0.

### <a name="remarks"></a>Osservazioni

Utilizzare `CreateEx` invece di `Create` applicare stili di Windows estesi, specificati dalla prefazione dello stile esteso di Windows **WS_EX_**.

## <a name="ctooltipctrlctooltipctrl"></a><a name="ctooltipctrl"></a>CToolTipCtrl::CToolTipCtrl

Costruisce un oggetto `CToolTipCtrl`.

```
CToolTipCtrl();
```

### <a name="remarks"></a>Osservazioni

È necessario `Create` chiamare dopo la costruzione dell'oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#74](../../mfc/codesnippet/cpp/ctooltipctrl-class_1.h)]

## <a name="ctooltipctrldeltool"></a><a name="deltool"></a>CToolTipCtrl::DelTool

Rimuove lo strumento specificato da *pWnd* e *nIDTool* dalla raccolta di strumenti supportati da un controllo descrizione comandi.

```cpp
void DelTool(
    CWnd* pWnd,
    UINT_PTR nIDTool = 0);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Puntatore alla finestra che contiene lo strumento.

*NIDTool (Strumento identità)*<br/>
ID dello strumento.

## <a name="ctooltipctrlgetbubblesize"></a><a name="getbubblesize"></a>CToolTipCtrl::GetBubbleSize

Recupera le dimensioni della descrizione comandi.

```
CSize GetBubbleSize(LPTOOLINFO lpToolInfo) const;
```

### <a name="parameters"></a>Parametri

*lpToolInfo (informazioni in base alla sicurezza dei dati)*<br/>
Puntatore alla struttura [TOOLINFO](/windows/win32/api/commctrl/ns-commctrl-tttoolinfoa) della descrizione comandi.

### <a name="return-value"></a>Valore restituito

Dimensioni della descrizione comandi.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_GETBUBBLESIZE](/windows/win32/Controls/ttm-getbubblesize), come descritto in Windows SDK.

## <a name="ctooltipctrlgetcurrenttool"></a><a name="getcurrenttool"></a>CToolTipCtrl::GetCurrentTool

Recupera informazioni, ad esempio le dimensioni, la posizione e il testo, della finestra della descrizione comandi visualizzata dal controllo descrizione comandi corrente.

```
BOOL GetCurrentTool(LPTOOLINFO lpToolInfo) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*lpToolInfo (informazioni in base alla sicurezza dei dati)*|[fuori] Puntatore a una struttura [TOOLINFO](/windows/win32/api/commctrl/ns-commctrl-tttoolinfoa) che riceve informazioni sulla finestra della descrizione comandi corrente.|

### <a name="return-value"></a>Valore restituito

TRUESe le informazioni vengono recuperate correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio [TTM_GETCURRENTTOOL,](/windows/win32/Controls/ttm-getcurrenttool) descritto in Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito vengono recuperate informazioni sulla finestra della descrizione comandi corrente.

[!code-cpp[NVC_MFC_CToolBarCtrl_s1#6](../../mfc/reference/codesnippet/cpp/ctooltipctrl-class_2.cpp)]

## <a name="ctooltipctrlgetdelaytime"></a><a name="getdelaytime"></a>CToolTipCtrl::GetDelayTime

Recupera le durate iniziali, pop-up e reshow attualmente impostate per un controllo descrizione comandi.

```
int GetDelayTime(DWORD dwDuration) const;
```

### <a name="parameters"></a>Parametri

*dwDuration (in base alla durata*<br/>
Flag che specifica quale valore di durata verrà recuperato. Questo parametro può essere uno dei seguenti valori:

- TTDT_AUTOPOP Recuperare il periodo di tempo in cui la finestra della descrizione comandi rimane visibile se il puntatore è fermo all'interno del rettangolo di delimitazione di uno strumento.

- TTDT_INITIAL Recuperare il periodo di tempo in cui il puntatore deve rimanere fermo all'interno del rettangolo di delimitazione di uno strumento prima che venga visualizzata la finestra della descrizione comandi.

- TTDT_RESHOW Recuperare il tempo necessario affinché le finestre successive della descrizione comandi vengano visualizzate quando il puntatore si sposta da uno strumento all'altro.

### <a name="return-value"></a>Valore restituito

Il tempo di ritardo specificato, in millisecondi

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_GETDELAYTIME](/windows/win32/Controls/ttm-getdelaytime), come descritto in Windows SDK.

## <a name="ctooltipctrlgetmargin"></a><a name="getmargin"></a>CToolTipCtrl::GetMargin

Recupera i margini superiore, sinistro, inferiore e destro impostato per una finestra della descrizione comandi.

```cpp
void GetMargin(LPRECT lprc) const;
```

### <a name="parameters"></a>Parametri

*lprc*<br/>
Indirizzo di `RECT` una struttura che riceverà le informazioni sui margini. I membri della struttura [RECT](/windows/win32/api/windef/ns-windef-rect) non definiscono un rettangolo di delimitazione. Ai fini di questo messaggio, i membri della struttura vengono interpretati come segue:

|Membro|Rappresentazione|
|------------|--------------------|
|`top`|Distanza tra il bordo superiore e la parte superiore del testo della descrizione comandi, in pixel.|
|`left`|Distanza tra il bordo sinistro e l'estremità sinistra del testo della punta, in pixel.|
|`bottom`|Distanza tra il bordo inferiore e la parte inferiore del testo della punta, in pixel.|
|`right`|Distanza tra il bordo destro e l'estremità destra del testo della punta, in pixel.|

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_GETMARGIN](/windows/win32/Controls/ttm-getmargin), come descritto in Windows SDK.

## <a name="ctooltipctrlgetmaxtipwidth"></a><a name="getmaxtipwidth"></a>CToolTipCtrl::GetMaxTipWidth

Recupera la larghezza massima per una finestra della descrizione comandi.

```
int GetMaxTipWidth() const;
```

### <a name="return-value"></a>Valore restituito

Larghezza massima per una finestra della descrizione comandi.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_GETMAXTIPWIDTH](/windows/win32/Controls/ttm-getmaxtipwidth), come descritto in Windows SDK.

## <a name="ctooltipctrlgettext"></a><a name="gettext"></a>CToolTipCtrl::GetText

Recupera il testo mantenuto da un controllo descrizione comandi per uno strumento.

```cpp
void GetText(
    CString& str,
    CWnd* pWnd,
    UINT_PTR nIDTool = 0) const;
```

### <a name="parameters"></a>Parametri

*Str*<br/>
Riferimento a `CString` un oggetto che riceve il testo dello strumento.

*pWnd (in questo stato di windows*<br/>
Puntatore alla finestra che contiene lo strumento.

*NIDTool (Strumento identità)*<br/>
ID dello strumento.

### <a name="remarks"></a>Osservazioni

I parametri *pWnd* e *nIDTool* identificano lo strumento. Se tale strumento è stato precedentemente registrato con `CToolTipCtrl::AddTool`il controllo descrizione comandi tramite una precedente chiamata a , all'oggetto a cui fa riferimento il parametro *str* viene assegnato il testo dello strumento.

## <a name="ctooltipctrlgettipbkcolor"></a><a name="gettipbkcolor"></a>CToolTipCtrl::GetTipBkColor

Recupera il colore di sfondo in una finestra della descrizione comandi.

```
COLORREF GetTipBkColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore [COLORREF](/windows/win32/gdi/colorref) che rappresenta il colore di sfondo.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_GETTIPBKCOLOR](/windows/win32/Controls/ttm-gettipbkcolor), come descritto in Windows SDK.

## <a name="ctooltipctrlgettiptextcolor"></a><a name="gettiptextcolor"></a>CToolTipCtrl::GetTipTextColor

Recupera il colore del testo in una finestra della descrizione comandi.

```
COLORREF GetTipTextColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore [COLORREF](/windows/win32/gdi/colorref) che rappresenta il colore del testo.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_GETTIPTEXTCOLOR](/windows/win32/Controls/ttm-gettiptextcolor), come descritto in Windows SDK.

## <a name="ctooltipctrlgettitle"></a><a name="gettitle"></a>CToolTipCtrl::GetTitle

Recupera il titolo del controllo descrizione comandi corrente.

```cpp
void GetTitle(PTTGETTITLE pttgt) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pttgt*|[fuori] Puntatore a una struttura [TTGETTITLE](/windows/win32/api/commctrl/ns-commctrl-ttgettitle) che contiene informazioni sul controllo ToolTip. Quando termina, il *pszTitle* membro del [TTGETTITLE](/windows/win32/api/commctrl/ns-commctrl-ttgettitle) struttura punta al testo del titolo.|

### <a name="remarks"></a>Osservazioni

Questo metodo invia il [messaggio TTM_GETTITLE,](/windows/win32/Controls/ttm-gettitle) descritto in Windows SDK.

## <a name="ctooltipctrlgettoolcount"></a><a name="gettoolcount"></a>CToolTipCtrl::GetToolCount

Recupera un conteggio degli strumenti registrati con il controllo descrizione comandi.

```
int GetToolCount() const;
```

### <a name="return-value"></a>Valore restituito

Conteggio degli strumenti registrati con il controllo descrizione comandi.

## <a name="ctooltipctrlgettoolinfo"></a><a name="gettoolinfo"></a>CToolTipCtrl::GetToolInfo

Recupera le informazioni che un controllo descrizione comandi gestisce su uno strumento.

```
BOOL GetToolInfo(
    CToolInfo& ToolInfo,
    CWnd* pWnd,
    UINT_PTR nIDTool = 0) const;
```

### <a name="parameters"></a>Parametri

*ToolInfo*<br/>
Riferimento a `TOOLINFO` un oggetto che riceve il testo dello strumento.

*pWnd (in questo stato di windows*<br/>
Puntatore alla finestra che contiene lo strumento.

*NIDTool (Strumento identità)*<br/>
ID dello strumento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

I `hwnd` `uId` membri e della struttura [TOOLINFO](/windows/win32/api/commctrl/ns-commctrl-tttoolinfoa) a cui fa riferimento *CToolInfo* identificano lo strumento. Se tale strumento è stato registrato con il `AddTool`controllo `TOOLINFO` descrizione comandi tramite una precedente chiamata a , la struttura viene riempita con informazioni sullo strumento.

## <a name="ctooltipctrlhittest"></a><a name="hittest"></a>CToolTipCtrl::HitTest

Verifica un punto per determinare se si trova all'interno del rettangolo di delimitazione dello strumento specificato e, in caso affermativo, recuperare informazioni sullo strumento.

```
BOOL HitTest(
    CWnd* pWnd,
    CPoint pt,
    LPTOOLINFO lpToolInfo) const;
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Puntatore alla finestra che contiene lo strumento.

*pt*<br/>
Puntatore `CPoint` a un oggetto contenente le coordinate del punto da testare.

*lpToolInfo (informazioni in base alla sicurezza dei dati)*<br/>
Puntatore alla struttura [TOOLINFO](/windows/win32/api/commctrl/ns-commctrl-tttoolinfoa) che contiene informazioni sullo strumento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il punto specificato dalle informazioni di hit test si trova all'interno del rettangolo di delimitazione dello strumento; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se questa funzione restituisce un valore diverso da zero, la struttura a cui punta *lpToolInfo* viene riempita con informazioni sullo strumento all'interno del cui punto si trova.

La `TTHITTESTINFO` struttura è definita come segue:

```cpp
typedef struct _TT_HITTESTINFO { // tthti
    HWND hwnd;   // handle of tool or window with tool
    POINT pt;    // client coordinates of point to test
    TOOLINFO ti; // receives information about the tool
} TTHITTESTINFO, FAR * LPHITTESTINFO;
```

- `hwnd`

   Specifica la maniglia dell'utensile.

- `pt`

   Specifica le coordinate di un punto se il punto si trova nel rettangolo di delimitazione dello strumento.

- `ti`

   Informazioni sullo strumento. Per ulteriori informazioni `TOOLINFO` sulla struttura , vedere [CToolTipCtrl::GetToolInfo](#gettoolinfo).

## <a name="ctooltipctrlpop"></a><a name="pop"></a>CToolTipCtrl::Pop

Rimuove una finestra della descrizione comandi visualizzata dalla visualizzazione.

```cpp
void Pop();
```

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_POP](/windows/win32/Controls/ttm-pop), come descritto in Windows SDK.

## <a name="ctooltipctrlpopup"></a><a name="popup"></a>CToolTipCtrl::Popup

Determina la visualizzazione del controllo descrizione comandi corrente in corrispondenza delle coordinate dell'ultimo messaggio del mouse.

```cpp
void Popup();
```

### <a name="remarks"></a>Osservazioni

Questo metodo invia il [messaggio TTM_POPUP,](/windows/win32/Controls/ttm-popup) descritto in Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene visualizzata una finestra di descrizione comandi.

[!code-cpp[NVC_MFC_CToolBarCtrl_s1#7](../../mfc/reference/codesnippet/cpp/ctooltipctrl-class_3.cpp)]

## <a name="ctooltipctrlrelayevent"></a><a name="relayevent"></a>CToolTipCtrl::RelayEvent

Passa un messaggio del mouse a un controllo descrizione comandi per l'elaborazione.

```cpp
void RelayEvent(LPMSG lpMsg);
```

### <a name="parameters"></a>Parametri

*lpMsg*<br/>
Puntatore a una struttura [MSG](/windows/win32/api/winuser/ns-winuser-msg) che contiene il messaggio da inoltrare.

### <a name="remarks"></a>Osservazioni

Un controllo descrizione comandi elabora solo i seguenti messaggi, `RelayEvent`che vengono inviati a esso da:

|WM_LBUTTONDOWN|Wm_mousemove|
|---------------------|-------------------|
|WM_LBUTTONUP|WM_RBUTTONDOWN|
|WM_MBUTTONDOWN|WM_RBUTTONUP|
|WM_MBUTTONUP||

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPropertySheet::GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).

## <a name="ctooltipctrlsetdelaytime"></a><a name="setdelaytime"></a>CToolTipCtrl::SetDelayTime

Imposta il tempo di ritardo per un controllo descrizione comandi.

```cpp
void SetDelayTime(UINT nDelay);

void SetDelayTime(
    DWORD dwDuration,
    int iTime);
```

### <a name="parameters"></a>Parametri

*nRitardo*<br/>
Specifica il nuovo tempo di ritardo, in millisecondi.

*dwDuration (in base alla durata*<br/>
Flag che specifica quale valore di durata verrà recuperato. Vedere [CToolTipCtrl::GetDelayTime](#getdelaytime) per una descrizione dei valori validi.

*iTime*<br/>
Tempo di ritardo specificato, in millisecondi.

### <a name="remarks"></a>Osservazioni

Il tempo di ritardo è il periodo di tempo in cui il cursore deve rimanere su uno strumento prima che venga visualizzata la finestra della descrizione comandi. Il tempo di ritardo predefinito è 500 millisecondi.

## <a name="ctooltipctrlsetmargin"></a><a name="setmargin"></a>CToolTipCtrl::SetMargin

Imposta i margini superiore, sinistro, inferiore e destro per una finestra della descrizione comandi.

```cpp
void SetMargin(LPRECT lprc);
```

### <a name="parameters"></a>Parametri

*lprc*<br/>
Indirizzo di `RECT` una struttura che contiene le informazioni sui margini da impostare. I membri `RECT` della struttura non definiscono un rettangolo di delimitazione. Vedere [CToolTipCtrl::GetMargin](#getmargin) per una descrizione delle informazioni sui margini.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_SETMARGIN](/windows/win32/Controls/ttm-setmargin), come descritto in Windows SDK.

## <a name="ctooltipctrlsetmaxtipwidth"></a><a name="setmaxtipwidth"></a>CToolTipCtrl::SetMaxTipWidth

Imposta la larghezza massima per una finestra della descrizione comandi.

```
int SetMaxTipWidth(int iWidth);
```

### <a name="parameters"></a>Parametri

*ILarghezza*<br/>
Larghezza massima della finestra della descrizione comandi da impostare.

### <a name="return-value"></a>Valore restituito

Larghezza massima della punta precedente.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_SETMAXTIPWIDTH](/windows/win32/Controls/ttm-setmaxtipwidth), come descritto in Windows SDK.

## <a name="ctooltipctrlsettipbkcolor"></a><a name="settipbkcolor"></a>CToolTipCtrl::SetTipBkColor

Imposta il colore di sfondo in una finestra della descrizione comandi.

```cpp
void SetTipBkColor(COLORREF clr);
```

### <a name="parameters"></a>Parametri

*Clr*<br/>
Nuovo colore di sfondo.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_SETTIPBKCOLOR](/windows/win32/Controls/ttm-settipbkcolor), come descritto in Windows SDK.

## <a name="ctooltipctrlsettiptextcolor"></a><a name="settiptextcolor"></a>CToolTipCtrl::SetTipTextColor

Imposta il colore del testo in una finestra della descrizione comandi.

```cpp
void SetTipTextColor(COLORREF clr);
```

### <a name="parameters"></a>Parametri

*Clr*<br/>
Nuovo colore del testo.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_SETTIPTEXTCOLOR](/windows/win32/Controls/ttm-settiptextcolor), come descritto in Windows SDK.

## <a name="ctooltipctrlsettitle"></a><a name="settitle"></a>CToolTipCtrl::SetTitle

Aggiunge un'icona standard e una stringa del titolo a una descrizione comandi.

```
BOOL SetTitle(
    UINT uIcon,
    LPCTSTR lpstrTitle);
```

### <a name="parameters"></a>Parametri

*uIcona*<br/>
Vedere *l'icona* in [TTM_SETTITLE](/windows/win32/Controls/ttm-settitle) in Windows SDK.

*LpstrTitle*<br/>
Puntatore alla stringa del titolo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_SETTITLE](/windows/win32/Controls/ttm-settitle), come descritto in Windows SDK.

## <a name="ctooltipctrlsettoolinfo"></a><a name="settoolinfo"></a>CToolTipCtrl::SetToolInfo

Imposta le informazioni che una descrizione comandi mantiene per uno strumento.

```cpp
void SetToolInfo(LPTOOLINFO lpToolInfo);
```

### <a name="parameters"></a>Parametri

*lpToolInfo (informazioni in base alla sicurezza dei dati)*<br/>
Puntatore a una struttura [TOOLINFO](/windows/win32/api/commctrl/ns-commctrl-tttoolinfoa) che specifica le informazioni da impostare.

## <a name="ctooltipctrlsettoolrect"></a><a name="settoolrect"></a>CToolTipCtrl::SetToolRect

Imposta un nuovo rettangolo di delimitazione per uno strumento.

```cpp
void SetToolRect(
    CWnd* pWnd,
    UINT_PTR nIDTool,
    LPCRECT lpRect);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Puntatore alla finestra che contiene lo strumento.

*NIDTool (Strumento identità)*<br/>
ID dello strumento.

*Lprect*<br/>
Puntatore a una struttura [RECT](/windows/win32/api/windef/ns-windef-rect) che specifica il nuovo rettangolo di delimitazione.

## <a name="ctooltipctrlsetwindowtheme"></a><a name="setwindowtheme"></a>CToolTipCtrl::SetWindowTheme

Imposta lo stile di visualizzazione della finestra della descrizione comandi.

```
HRESULT SetWindowTheme(LPCWSTR pszSubAppName);
```

### <a name="parameters"></a>Parametri

*pszSubAppName (nome da piszSubApp*<br/>
Puntatore a una stringa Unicode che contiene lo stile di visualizzazione da impostare.

### <a name="return-value"></a>Valore restituito

Il valore restituito non viene utilizzato.

### <a name="remarks"></a>Osservazioni

Questa funzione membro emula la funzionalità del messaggio [TTM_SETWINDOWTHEME,](/windows/win32/Controls/ttm-setwindowtheme) come descritto in Windows SDK.

## <a name="ctooltipctrlupdate"></a><a name="update"></a>CToolTipCtrl::Aggiornare

Forza il ridisegno dello strumento corrente.

```cpp
void Update();
```

## <a name="ctooltipctrlupdatetiptext"></a><a name="updatetiptext"></a>CToolTipCtrl::UpdateTipText

Aggiorna il testo della descrizione comandi per gli strumenti di questo controllo.

```cpp
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

*pWnd (in questo stato di windows*<br/>
Puntatore alla finestra che contiene lo strumento.

*NIDTool (Strumento identità)*<br/>
ID dello strumento.

*nIDTesto*<br/>
ID della risorsa stringa che contiene il testo per lo strumento.

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CToolBar](../../mfc/reference/ctoolbar-class.md)
