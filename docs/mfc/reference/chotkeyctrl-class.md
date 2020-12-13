---
description: 'Altre informazioni su: classe CHotKeyCtrl'
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
ms.openlocfilehash: 875b35c2c683cc8502c1bc2668aad5b4a0326757
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331779"
---
# <a name="chotkeyctrl-class"></a>Classe CHotKeyCtrl

Fornisce la funzionalità del controllo tasto di scelta comune di Windows.

## <a name="syntax"></a>Sintassi

```
class CHotKeyCtrl : public CWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CHotKeyCtrl:: CHotKeyCtrl](#chotkeyctrl)|Costruisce un oggetto `CHotKeyCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CHotKeyCtrl:: create](#create)|Crea un controllo tasto di scelta e lo collega a un `CHotKeyCtrl` oggetto.|
|[CHotKeyCtrl:: CreateEx](#createex)|Crea un controllo tasto di scelta con gli stili estesi di Windows specificati e lo collega a un `CHotKeyCtrl` oggetto.|
|[CHotKeyCtrl:: GetHotKey](#gethotkey)|Recupera il codice della chiave virtuale e i flag di modifica di un tasto di scelta da un controllo tasto di scelta.|
|[CHotKeyCtrl:: GetHotKeyName](#gethotkeyname)|Recupera il nome della chiave, nel set di caratteri locale, assegnato a un tasto di scelta.|
|[CHotKeyCtrl:: GetKeyName](#getkeyname)|Recupera il nome della chiave, nel set di caratteri locale, assegnato al codice della chiave virtuale specificato.|
|[CHotKeyCtrl:: sehotkey](#sethotkey)|Imposta la combinazione di tasti di scelta rapida per un controllo tasto di scelta.|
|[CHotKeyCtrl:: serules](#setrules)|Definisce le combinazioni non valide e la combinazione di modificatore predefinita per un controllo tasto di scelta.|

## <a name="remarks"></a>Commenti

Un "controllo tasto di scelta" è una finestra che consente all'utente di creare un tasto di scelta. Un "tasto di scelta rapida" è una combinazione di tasti che l'utente può premere per eseguire rapidamente un'azione. Ad esempio, un utente può creare un tasto di scelta che attiva una determinata finestra e la porta nella parte superiore del z order.) Il controllo tasto di scelta consente di visualizzare le scelte dell'utente e garantisce che l'utente selezioni una combinazione di tasti valida.

Questo controllo (e pertanto la `CHotKeyCtrl` classe) è disponibile solo per i programmi in esecuzione in windows 95/98 e Windows NT versione 3,51 e successive.

Quando l'utente ha scelto una combinazione di tasti, l'applicazione può recuperare la combinazione di tasti specificata dal controllo e usare il messaggio WM_SETHOTKEY per configurare il tasto di scelta nel sistema. Ogni volta che l'utente preme il tasto di scelta in seguito, da qualsiasi parte del sistema, la finestra specificata nel messaggio di WM_SETHOTKEY riceve un messaggio di WM_SYSCOMMAND che specifica SC_HOTKEY. Questo messaggio attiva la finestra che la riceve. Il tasto di scelta rimane valido fino a quando l'applicazione che ha chiamato WM_SETHOTKEY non viene chiusa.

Questo meccanismo è diverso dal supporto per i tasti di scelta rapida che dipende dal messaggio WM_HOTKEY e dalle funzioni Windows [RegisterHotKey](/windows/win32/api/winuser/nf-winuser-registerhotkey) e [UnregisterHotKey](/windows/win32/api/winuser/nf-winuser-unregisterhotkey) .

Per altre informazioni sull'uso di `CHotKeyCtrl` , vedere [controlli](../../mfc/controls-mfc.md) e [uso di CHotKeyCtrl](../../mfc/using-chotkeyctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CHotKeyCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

## <a name="chotkeyctrlchotkeyctrl"></a><a name="chotkeyctrl"></a> CHotKeyCtrl:: CHotKeyCtrl

Costruisce un oggetto `CHotKeyCtrl`.

```
CHotKeyCtrl();
```

## <a name="chotkeyctrlcreate"></a><a name="create"></a> CHotKeyCtrl:: create

Crea un controllo tasto di scelta e lo collega a un `CHotKeyCtrl` oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica lo stile del controllo tasto di scelta. Applicare qualsiasi combinazione di stili del controllo. Per ulteriori informazioni, vedere [stili di controllo comuni](/windows/win32/Controls/common-control-styles) nell'Windows SDK.

*Rect*<br/>
Specifica la posizione e le dimensioni del controllo tasto di scelta. Può essere un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) o una [struttura Rect](/windows/win32/api/windef/ns-windef-rect).

*pParentWnd*<br/>
Specifica la finestra padre del controllo tasto di scelta, di solito [CDialog](../../mfc/reference/cdialog-class.md). Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo tasto di scelta.

### <a name="return-value"></a>Valore restituito

Diverso da zero, se l'inizializzazione ha avuto esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Si costruisce un `CHotKeyCtrl` oggetto in due passaggi. In primo luogo, chiamare il costruttore e quindi chiamare `Create` , che crea il controllo tasto di scelta e lo collega all' `CHotKeyCtrl` oggetto.

Se si desidera utilizzare gli stili estesi di Windows con il controllo, chiamare [CreateEx](#createex) anziché `Create` .

## <a name="chotkeyctrlcreateex"></a><a name="createex"></a> CHotKeyCtrl:: CreateEx

Chiamare questa funzione per creare un controllo, ovvero una finestra figlio, e associarlo all' `CHotKeyCtrl` oggetto.

```
virtual BOOL CreateEx(
    DWORD dwExStyle,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwExStyle*<br/>
Specifica lo stile esteso del controllo da creare. Per un elenco degli stili Windows estesi, vedere il parametro *dwExStyle* per [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) nel Windows SDK.

*dwStyle*<br/>
Specifica lo stile del controllo tasto di scelta. Applicare qualsiasi combinazione di stili del controllo. Per ulteriori informazioni, vedere [stili di controllo comuni](/windows/win32/Controls/common-control-styles) nell'Windows SDK.

*Rect*<br/>
Riferimento a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) che descrive le dimensioni e la posizione della finestra da creare, nelle coordinate client di *pParentWnd*.

*pParentWnd*<br/>
Puntatore alla finestra che rappresenta l'elemento padre del controllo.

*nID*<br/>
ID della finestra figlio del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Usare `CreateEx` anziché [create](#create) per applicare gli stili estesi di Windows, specificati dall'introduzione allo stile esteso di Windows **WS_EX_**.

## <a name="chotkeyctrlgethotkey"></a><a name="gethotkey"></a> CHotKeyCtrl:: GetHotKey

Recupera il codice della chiave virtuale e i flag di modifica di un tasto di scelta rapida da un controllo tasto di scelta.

```
DWORD GetHotKey() const;

void GetHotKey(
    WORD& wVirtualKeyCode,
    WORD& wModifiers) const;
```

### <a name="parameters"></a>Parametri

*wVirtualKeyCode*<br/>
out Codice chiave virtuale del tasto di scelta rapida. Per un elenco di codici chiave virtuali standard, vedere Winuser. h.

*wModifiers*<br/>
out Combinazione bit per bit (o) di flag che indicano i tasti di modifica nel tasto di scelta rapida.

I flag di modifica sono i seguenti:

|Flag|Chiave corrispondente|
|----------|-----------------------|
|HOTKEYF_ALT|ALT (tasto)|
|HOTKEYF_CONTROL|Tasto CTRL|
|HOTKEYF_EXT|Chiave estesa|
|HOTKEYF_SHIFT|Tasto MAIUSC|

### <a name="return-value"></a>Valore restituito

Nel primo metodo di overload, valore DWORD che contiene il codice della chiave virtuale e i flag di modifica. Il byte di ordine inferiore della parola di basso livello contiene il codice della chiave virtuale, il byte più significativo della parola di basso livello contiene i flag di modifica e la parola più ordinata è zero.

### <a name="remarks"></a>Commenti

Il codice della chiave virtuale e i tasti di modifica insieme definiscono il tasto di scelta rapida.

## <a name="chotkeyctrlgethotkeyname"></a><a name="gethotkeyname"></a> CHotKeyCtrl:: GetHotKeyName

Chiamare questa funzione membro per ottenere il nome localizzato del tasto di scelta.

```
CString GetHotKeyName() const;
```

### <a name="return-value"></a>Valore restituito

Nome localizzato del tasto di scelta corrente selezionato. Se non è presente alcun tasto di scelta, viene `GetHotKeyName` restituita una stringa vuota.

### <a name="remarks"></a>Commenti

Il nome restituito da questa funzione membro deriva dal driver della tastiera. È possibile installare un driver della tastiera non localizzato in una versione localizzata di Windows e viceversa.

## <a name="chotkeyctrlgetkeyname"></a><a name="getkeyname"></a> CHotKeyCtrl:: GetKeyName

Chiamare questa funzione membro per ottenere il nome localizzato della chiave assegnata a un codice di chiave virtuale specificato.

```
static CString GetKeyName(
    UINT vk,
    BOOL fExtended);
```

### <a name="parameters"></a>Parametri

*VK*<br/>
Codice della chiave virtuale.

*fExtended*<br/>
Se il codice della chiave virtuale è una chiave estesa, TRUE. in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

Nome localizzato della chiave specificata dal parametro *VK* . Se il nome della chiave non è mappato, viene `GetKeyName` restituita una stringa vuota.

### <a name="remarks"></a>Commenti

Il nome della chiave restituito dalla funzione deriva dal driver della tastiera, quindi è possibile installare un driver della tastiera non localizzato in una versione localizzata di Windows e viceversa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#69](../../mfc/codesnippet/cpp/chotkeyctrl-class_1.cpp)]

## <a name="chotkeyctrlsethotkey"></a><a name="sethotkey"></a> CHotKeyCtrl:: sehotkey

Imposta la scelta rapida da tastiera per un controllo tasto di scelta.

```cpp
void SetHotKey(
    WORD wVirtualKeyCode,
    WORD wModifiers);
```

### <a name="parameters"></a>Parametri

*wVirtualKeyCode*<br/>
in Codice chiave virtuale del tasto di scelta rapida. Per un elenco di codici chiave virtuali standard, vedere Winuser. h.

*wModifiers*<br/>
in Combinazione bit per bit (o) di flag che indicano i tasti di modifica nel tasto di scelta rapida.

I flag di modifica sono i seguenti:

|Flag|Chiave corrispondente|
|----------|-----------------------|
|HOTKEYF_ALT|ALT (tasto)|
|HOTKEYF_CONTROL|Tasto CTRL|
|HOTKEYF_EXT|Chiave estesa|
|HOTKEYF_SHIFT|Tasto MAIUSC|

### <a name="remarks"></a>Commenti

Il codice della chiave virtuale e i tasti di modifica insieme definiscono il tasto di scelta rapida.

## <a name="chotkeyctrlsetrules"></a><a name="setrules"></a> CHotKeyCtrl:: serules

Chiamare questa funzione per definire le combinazioni non valide e la combinazione di modificatore predefinita per un controllo tasto di scelta.

```cpp
void SetRules(
    WORD wInvalidComb,
    WORD wModifiers);
```

### <a name="parameters"></a>Parametri

*wInvalidComb*<br/>
Matrice di flag che specifica le combinazioni di tasti non valide. Può essere una combinazione dei valori seguenti:

- HKCOMB_A ALT

- HKCOMB_C CTRL

- HKCOMB_CA CTRL + ALT

- HKCOMB_NONE chiavi non modificate

- SPOSTAMENTO HKCOMB_S

- HKCOMB_SA MAIUSC + ALT

- HKCOMB_SC MAIUSC + CTRL

- HKCOMB_SCA MAIUSC + CTRL + ALT

*wModifiers*<br/>
Matrice di flag che specifica la combinazione di tasti da utilizzare quando l'utente immette una combinazione non valida. Per ulteriori informazioni sui flag di modifica, vedere [GetHotKey](#gethotkey).

### <a name="remarks"></a>Commenti

Quando un utente immette una combinazione di chiavi non valida, come definito dai flag specificati in *wInvalidComb*, il sistema usa l'operatore OR per combinare le chiavi immesse dall'utente con i flag specificati in *wModifiers*. La combinazione di tasti risultante viene convertita in una stringa e quindi visualizzata nel controllo tasto di scelta.

## <a name="see-also"></a>Vedi anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
