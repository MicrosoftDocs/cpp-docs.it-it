---
title: Classe CHotKeyCtrl
ms.date: 11/04/2016
f1_keywords:
- CHotKeyCtrl
- AFXCMN/CHotKeyCtrl
- AFXCMN/CHotKeyCtrl::CHotKeyCtrl
- AFXCMN/CHotKeyCtrl::Create
- AFXCMN/CHotKeyCtrl::CreateEx
- AFXCMN/CHotKeyCtrl::GetHotKey
- AFXCMN/CHotKeyCtrl::GetHotKeyName
- AFXCMN/CHotKeyCtrl::GetKeyName
- AFXCMN/CHotKeyCtrl::SetHotKey
- AFXCMN/CHotKeyCtrl::SetRules
helpviewer_keywords:
- CHotKeyCtrl [MFC], CHotKeyCtrl
- CHotKeyCtrl [MFC], Create
- CHotKeyCtrl [MFC], CreateEx
- CHotKeyCtrl [MFC], GetHotKey
- CHotKeyCtrl [MFC], GetHotKeyName
- CHotKeyCtrl [MFC], GetKeyName
- CHotKeyCtrl [MFC], SetHotKey
- CHotKeyCtrl [MFC], SetRules
ms.assetid: 896f9766-0718-4f58-aab2-20325e118ca6
ms.openlocfilehash: 758fb78fbd4e25a0e2fb8cea300c5371ece04fb4
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366889"
---
# <a name="chotkeyctrl-class"></a>Classe CHotKeyCtrl

Fornisce la funzionalità del controllo tasto di scelta comune di Windows.

## <a name="syntax"></a>Sintassi

```
class CHotKeyCtrl : public CWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHotKeyCtrl::CHotKeyCtrl](#chotkeyctrl)|Costruisce un oggetto `CHotKeyCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHotKeyCtrl::Crea](#create)|Crea un controllo tasto di scelta `CHotKeyCtrl` e lo associa a un oggetto.|
|[CHotKeyCtrl::CreateEx](#createex)|Crea un controllo tasto di scelta con gli stili `CHotKeyCtrl` estesi di Windows specificati e lo associa a un oggetto.|
|[CHotKeyCtrl::GetHotKey](#gethotkey)|Recupera il codice tasto virtuale e i flag di modifica di un tasto di scelta da un controllo tasto di scelta.|
|[CHotKeyCtrl::GetHotKeyName](#gethotkeyname)|Recupera il nome della chiave, nel set di caratteri locale, assegnato a un tasto di scelta rapida.|
|[CHotKeyCtrl::NomeChiave](#getkeyname)|Recupera il nome della chiave, nel set di caratteri locale, assegnato al codice della chiave virtuale specificato.|
|[CHotKeyCtrl::SetHotKey](#sethotkey)|Imposta la combinazione di tasti di scelta rapida per un controllo tasto di scelta.|
|[CHotKeyCtrl::SetRules](#setrules)|Definisce le combinazioni non valide e la combinazione di modificatori predefinita per un controllo tasto di scelta.|

## <a name="remarks"></a>Osservazioni

Un "controllo tasto di scelta" è una finestra che consente all'utente di creare un tasto di scelta rapida. Un "tasto di scelta rapida" è una combinazione di tasti che l'utente può premere per eseguire rapidamente un'azione. (Ad esempio, un utente può creare un tasto di scelta rapida che attiva una determinata finestra e lo porta all'inizio dell'ordine di z.) Il controllo tasto di scelta consente di visualizzare le scelte dell'utente e garantisce che l'utente selezioni una combinazione di tasti valida.

Questo controllo (e `CHotKeyCtrl` quindi la classe) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versione 3.51 e successive.

Quando l'utente ha scelto una combinazione di tasti, l'applicazione può recuperare la combinazione di tasti specificata dal controllo e utilizzare il messaggio di WM_SETHOTKEY per impostare il tasto di scelta nel sistema. Ogni volta che l'utente preme il tasto di scelta rapida in seguito, da qualsiasi parte del sistema, la finestra specificata nel messaggio WM_SETHOTKEY riceve un messaggio di WM_SYSCOMMAND che specifica SC_HOTKEY. Questo messaggio attiva la finestra che lo riceve. Il tasto di scelta rimane valido fino alla chiusura dell'applicazione che ha chiamato WM_SETHOTKEY.

Questo meccanismo è diverso dal supporto dei tasti di scelta che dipende dal messaggio WM_HOTKEY e dalle funzioni [RegisterHotKey](/windows/win32/api/winuser/nf-winuser-registerhotkey) e [UnregisterHotKey](/windows/win32/api/winuser/nf-winuser-unregisterhotkey) di Windows.

Per ulteriori informazioni `CHotKeyCtrl`sull'utilizzo di , vedere [Controlli](../../mfc/controls-mfc.md) e Utilizzo di [CHotKeyCtrl](../../mfc/using-chotkeyctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CHotKeyCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

## <a name="chotkeyctrlchotkeyctrl"></a><a name="chotkeyctrl"></a>CHotKeyCtrl::CHotKeyCtrl

Costruisce un oggetto `CHotKeyCtrl`.

```
CHotKeyCtrl();
```

## <a name="chotkeyctrlcreate"></a><a name="create"></a>CHotKeyCtrl::Crea

Crea un controllo tasto di scelta `CHotKeyCtrl` e lo associa a un oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*DwStyle (in stile dwStyle)*<br/>
Specifica lo stile del controllo tasto di scelta. Applicare qualsiasi combinazione di stili di controllo. Per altre informazioni, vedere [Stili di controllo comuni](/windows/win32/Controls/common-control-styles) in Windows SDK.

*Rect*<br/>
Specifica le dimensioni e la posizione del controllo tasto di scelta. Può essere un [oggetto CRect](../../atl-mfc-shared/reference/crect-class.md) o una [struttura RECT](/windows/win32/api/windef/ns-windef-rect).

*pParentWnd (informazioni in due)*<br/>
Specifica la finestra padre del controllo tasto di scelta, in genere un [oggetto CDialog](../../mfc/reference/cdialog-class.md). Non deve essere NULL.

*nID*<br/>
Specifica l'ID del tasto di scelta.

### <a name="return-value"></a>Valore restituito

Diverso da zero, se l'inizializzazione ha avuto esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Costruire un `CHotKeyCtrl` oggetto in due passaggi. Chiamare innanzitutto il costruttore e quindi chiamare `Create`, che crea `CHotKeyCtrl` il controllo tasto di scelta e lo associa all'oggetto .

Se si desidera utilizzare gli stili di finestre estese `Create`con il controllo, chiamare [CreateEx](#createex) anziché .

## <a name="chotkeyctrlcreateex"></a><a name="createex"></a>CHotKeyCtrl::CreateEx

Chiamare questa funzione per creare un controllo (una `CHotKeyCtrl` finestra figlio) e associarlo all'oggetto.

```
virtual BOOL CreateEx(
    DWORD dwExStyle,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*DwExStyle (in stile dwExStyle)*<br/>
Specifica lo stile esteso del controllo in fase di creazione. Per un elenco di stili di Windows estesi, vedere il parametro *dwExStyle* per [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) in Windows SDK.

*DwStyle (in stile dwStyle)*<br/>
Specifica lo stile del controllo tasto di scelta. Applicare qualsiasi combinazione di stili di controllo. Per altre informazioni, vedere [Stili di controllo comuni](/windows/win32/Controls/common-control-styles) in Windows SDK.

*Rect*<br/>
Riferimento a una struttura [RECT](/previous-versions/dd162897\(v=vs.85\)) che descrive le dimensioni e la posizione della finestra da creare, nelle coordinate client di *pParentWnd*.

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra che è padre del controllo.

*nID*<br/>
ID della finestra figlio del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Utilizzare `CreateEx` invece [di Crea](#create) per applicare stili di Windows estesi, specificati dalla prefazione dello stile esteso di Windows **WS_EX_**.

## <a name="chotkeyctrlgethotkey"></a><a name="gethotkey"></a>CHotKeyCtrl::GetHotKey

Recupera il codice tasto virtuale e i flag di modifica di una scelta rapida da tastiera da un controllo tasto di scelta.

```
DWORD GetHotKey() const;

void GetHotKey(
    WORD& wVirtualKeyCode,
    WORD& wModifiers) const;
```

### <a name="parameters"></a>Parametri

*wVirtualKeyCode (Codice chiave virtuale)*<br/>
[fuori] Codice tasto virtuale della scelta rapida da tastiera. Per un elenco dei codici tasto virtuali standard, vedere Winuser.h.For a list of standard virtual key codes, see Winuser.h.

*wModificatori*<br/>
[fuori] Combinazione bit per bit (OR) di flag che indicano i tasti di modifica nella scelta rapida da tastiera.

I flag di modifica sono i seguenti:

|Flag|Chiave corrispondente|
|----------|-----------------------|
|HOTKEYF_ALT|ALT (tasto)|
|HOTKEYF_CONTROL|Tasto CTRL|
|HOTKEYF_EXT|Tasto esteso|
|HOTKEYF_SHIFT|Tasto MAIUSC|

### <a name="return-value"></a>Valore restituito

Nel primo metodo di overload, un DWORD che contiene il codice tasto virtuale e i flag di modifica. Il byte meno significativo della parola meno ordine contiene il codice tasto virtuale, il byte più significativo della parola meno ordine contiene i flag di modifica e la parola più in ordine è zero.

### <a name="remarks"></a>Osservazioni

Il codice tasto virtuale e i tasti di modifica definiscono insieme la scelta rapida da tastiera.

## <a name="chotkeyctrlgethotkeyname"></a><a name="gethotkeyname"></a>CHotKeyCtrl::GetHotKeyName

Chiamare questa funzione membro per ottenere il nome localizzato del tasto di scelta.

```
CString GetHotKeyName() const;
```

### <a name="return-value"></a>Valore restituito

Nome localizzato del tasto di scelta attualmente selezionato. Se non è presente `GetHotKeyName` alcun tasto di scelta selezionato, restituisce una stringa vuota.

### <a name="remarks"></a>Osservazioni

Il nome restituito da questa funzione membro proviene dal driver della tastiera. È possibile installare un driver della tastiera non localizzato in una versione localizzata di Windows e viceversa.

## <a name="chotkeyctrlgetkeyname"></a><a name="getkeyname"></a>CHotKeyCtrl::NomeChiave

Chiamare questa funzione membro per ottenere il nome localizzato del tasto assegnato a un codice tasto virtuale specificato.

```
static CString GetKeyName(
    UINT vk,
    BOOL fExtended);
```

### <a name="parameters"></a>Parametri

*Vk*<br/>
Il codice del tasto virtuale.

*fExtended*<br/>
Se il codice tasto virtuale è una chiave estesa, TRUE; in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

Nome localizzato della chiave specificata dal parametro *vk.* Se la chiave non ha `GetKeyName` un nome mappato, restituisce una stringa vuota.

### <a name="remarks"></a>Osservazioni

Il nome della chiave restituito da questa funzione proviene dal driver della tastiera, pertanto è possibile installare un driver della tastiera non localizzato in una versione localizzata di Windows e viceversa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#69](../../mfc/codesnippet/cpp/chotkeyctrl-class_1.cpp)]

## <a name="chotkeyctrlsethotkey"></a><a name="sethotkey"></a>CHotKeyCtrl::SetHotKey

Imposta la scelta rapida da tastiera per un controllo tasto di scelta.

```
void SetHotKey(
    WORD wVirtualKeyCode,
    WORD wModifiers);
```

### <a name="parameters"></a>Parametri

*wVirtualKeyCode (Codice chiave virtuale)*<br/>
[in] Codice tasto virtuale della scelta rapida da tastiera. Per un elenco dei codici tasto virtuali standard, vedere Winuser.h.For a list of standard virtual key codes, see Winuser.h.

*wModificatori*<br/>
[in] Combinazione bit per bit (OR) di flag che indicano i tasti di modifica nella scelta rapida da tastiera.

I flag di modifica sono i seguenti:

|Flag|Chiave corrispondente|
|----------|-----------------------|
|HOTKEYF_ALT|ALT (tasto)|
|HOTKEYF_CONTROL|Tasto CTRL|
|HOTKEYF_EXT|Tasto esteso|
|HOTKEYF_SHIFT|Tasto MAIUSC|

### <a name="remarks"></a>Osservazioni

Il codice tasto virtuale e i tasti di modifica definiscono insieme la scelta rapida da tastiera.

## <a name="chotkeyctrlsetrules"></a><a name="setrules"></a>CHotKeyCtrl::SetRules

Chiamare questa funzione per definire le combinazioni non valide e la combinazione di modificatori predefinita per un controllo tasto di scelta.

```
void SetRules(
    WORD wInvalidComb,
    WORD wModifiers);
```

### <a name="parameters"></a>Parametri

*wInvalidComb (esempio) wInvalidComb (informazioni*<br/>
Matrice di flag che specifica combinazioni di tasti non valide. Può essere una combinazione dei seguenti valori:

- HKCOMB_A ALT

- HKCOMB_C CTRL

- HKCOMB_CA CTRL

- HKCOMB_NONE tasti non modificati

- HKCOMB_S MAIUSC

- HKCOMB_SA MAIUSC .

- HKCOMB_SC MAIUSC di CTRL

- HKCOMB_SCA Maiusc-CTRL-ALT

*wModificatori*<br/>
Matrice di flag che specifica la combinazione di tasti da utilizzare quando l'utente immette una combinazione non valida. Per ulteriori informazioni sui flag di modifica, vedere [GetHotKey](#gethotkey).

### <a name="remarks"></a>Osservazioni

Quando un utente immette una combinazione di tasti non valida, come definito dai flag specificati in *wInvalidComb*, il sistema utilizza l'operatore OR per combinare i tasti immessi dall'utente con i flag specificati in *wModifiers*. La combinazione di tasti risultante viene convertita in una stringa e quindi visualizzata nel controllo tasto di scelta.

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
