---
title: Classe CHotKeyCtrl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 12aa039e0beede4f395da3de6eea4e6c956f9373
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50074462"
---
# <a name="chotkeyctrl-class"></a>CHotKeyCtrl (classe)

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
|[CHotKeyCtrl::Create](#create)|Crea un controllo tasto di scelta e la collega a un `CHotKeyCtrl` oggetto.|
|[CHotKeyCtrl::CreateEx](#createex)|Crea un controllo tasto di scelta con gli stili estesi di Windows specificati e lo collega a un `CHotKeyCtrl` oggetto.|
|[CHotKeyCtrl::GetHotKey](#gethotkey)|Recupera i flag di codice e il modificatore chiave virtuali di un tasto di scelta rapida da un controllo tasto di scelta.|
|[CHotKeyCtrl::GetHotKeyName](#gethotkeyname)|Recupera il nome della chiave, nel set di caratteri locali, assegnato a un tasto di scelta rapida.|
|[CHotKeyCtrl::GetKeyName](#getkeyname)|Recupera il nome della chiave, nel set di caratteri locali, assegnato per il codice tasto virtuale specificato.|
|[CHotKeyCtrl::SetHotKey](#sethotkey)|Imposta la combinazione di tasti per un controllo tasto di scelta.|
|[CHotKeyCtrl::SetRules](#setrules)|Definisce le combinazioni non è valide e la combinazione di modificatore predefinito per un controllo tasto di scelta.|

## <a name="remarks"></a>Note

Un "controllo tasto di scelta" è una finestra che consente all'utente creare un tasto di scelta rapida. Un "tasto di scelta rapida" è una combinazione di tasti da preme per eseguire velocemente un'azione utente. (Ad esempio, un utente può creare un tasto di scelta rapida che attiva una finestra specificata e viene visualizzato nella parte superiore dello Z order). Il controllo tasto di scelta sono visualizzate le scelte dell'utente e garantisce che l'utente seleziona una combinazione di tasti valida.

Questo controllo (e pertanto il `CHotKeyCtrl` classe) è disponibile solo per i programmi in esecuzione in Windows 95 o 98 e Windows NT versione 3.51 e successive.

Quando l'utente ha scelto una combinazione di tasti, l'applicazione può recuperare la combinazione di chiave specificata dal controllo e utilizzare il messaggio di messaggio WM_SETHOTKEY per configurare il tasto di scelta rapida nel sistema. Ogni volta che l'utente preme il tasto di scelta rapida in seguito, da qualsiasi parte del sistema, la finestra specificata nel messaggio di messaggio WM_SETHOTKEY riceve un messaggio WM_SYSCOMMAND specificando SC_HOTKEY. Questo messaggio è attiva la finestra che lo riceve. Il tasto di scelta rapida rimane valido finché l'applicazione che ha chiamato WM_SETHOTKEY non viene chiusa.

Questo meccanismo è diverso dal supporto delle chiavi attivo che varia a seconda di Windows e il messaggio WM_HOTKEY [RegisterHotKey](https://msdn.microsoft.com/library/windows/desktop/ms646309) e [UnregisterHotKey](https://msdn.microsoft.com/library/windows/desktop/ms646327) funzioni.

Per altre informazioni sull'uso `CHotKeyCtrl`, vedere [controlli](../../mfc/controls-mfc.md) e [usando CHotKeyCtrl](../../mfc/using-chotkeyctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CHotKeyCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

##  <a name="chotkeyctrl"></a>  CHotKeyCtrl::CHotKeyCtrl

Costruisce un oggetto `CHotKeyCtrl`.

```
CHotKeyCtrl();
```

##  <a name="create"></a>  CHotKeyCtrl::Create

Crea un controllo tasto di scelta e la collega a un `CHotKeyCtrl` oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica lo stile di controllo tasto di scelta. Applicare qualsiasi combinazione di stili del controllo. Visualizzare [stili dei controlli comuni](/windows/desktop/Controls/common-control-styles) nel SDK di Windows per altre informazioni.

*Rect*<br/>
Specifica del controllo tasto di scelta dimensione e la posizione. Può essere un' [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o una [struttura RECT](../../mfc/reference/rect-structure1.md).

*pParentWnd*<br/>
Specifica padre di finestra del controllo tasto di scelta, in genere un [CDialog](../../mfc/reference/cdialog-class.md). Non deve essere NULL.

*nID*<br/>
Specifica ID. del controllo tasto di scelta

### <a name="return-value"></a>Valore restituito

Diverso da zero, se l'inizializzazione ha avuto esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Si costruisce un `CHotKeyCtrl` oggetto in due passaggi. In primo luogo, chiamare il costruttore e quindi chiamare `Create`, che crea il controllo tasto di scelta e la collega al `CHotKeyCtrl` oggetto.

Se si desidera utilizzare gli stili estesi di windows con il controllo, chiamare [CreateEx](#createex) invece di `Create`.

##  <a name="createex"></a>  CHotKeyCtrl::CreateEx

Chiamare questa funzione per creare un controllo (una finestra figlio) e associarlo con il `CHotKeyCtrl` oggetto.

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
Specifica lo stile esteso del controllo da creare. Per un elenco di stili estesi di Windows, vedere la *dwExStyle* parametro per [CreateWindowEx](/windows/desktop/api/winuser/nf-winuser-createwindowexa) nel SDK di Windows.

*dwStyle*<br/>
Specifica lo stile di controllo tasto di scelta. Applicare qualsiasi combinazione di stili del controllo. Per altre informazioni, vedere [stili dei controlli comuni](/windows/desktop/Controls/common-control-styles) nel SDK di Windows.

*Rect*<br/>
Un riferimento a un [RECT](https://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che descrive le dimensioni e posizione della finestra da creare, nelle coordinate del client *pParentWnd*.

*pParentWnd*<br/>
Puntatore alla finestra padre del controllo.

*nID*<br/>
ID di finestra figlio. del controllo

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Uso `CreateEx` invece di [Create](#create) per applicare stili estesi di Windows, specificati dal prefisso di stile esteso di Windows **WS_EX _**.

##  <a name="gethotkey"></a>  CHotKeyCtrl::GetHotKey

Recupera i flag di codice e il modificatore chiave virtuali dei tasti di scelta rapida da un controllo tasto di scelta.

```
DWORD GetHotKey() const;

void GetHotKey(
    WORD& wVirtualKeyCode,
    WORD& wModifiers) const;
```

### <a name="parameters"></a>Parametri

*wVirtualKeyCode*<br/>
[out] Codice tasto virtuale di tasti di scelta rapida. Per un elenco di codici di tasti virtuali standard, vedere winuser. h.

*wModifiers*<br/>
[out] Una combinazione bit per bit (OR) di flag che indicano i tasti di modifica nel tasto di scelta rapida.

I flag di modifica sono i seguenti:

|Flag|Chiave corrispondente|
|----------|-----------------------|
|HOTKEYF_ALT|ALT (tasto)|
|HOTKEYF_CONTROL|Tasto CTRL|
|HOTKEYF_EXT|Chiave estesi|
|HOTKEYF_SHIFT|Tasto MAIUSC|

### <a name="return-value"></a>Valore restituito

Nel primo metodo di overload per un valore DWORD che contiene i flag codice e il modificatore chiave virtuali. Il byte meno significativi della parola meno significativa contiene il codice tasto virtuale, il byte più significativo della parola meno significativa contiene i flag di modifica e la parola più significativa è uguale a zero.

### <a name="remarks"></a>Note

Il codice tasto virtuale e i tasti di modifica insieme definiscono i tasti di scelta rapida.

##  <a name="gethotkeyname"></a>  CHotKeyCtrl::GetHotKeyName

Chiamare questa funzione membro per ottenere il nome localizzato del tasto di scelta.

```
CString GetHotKeyName() const;
```

### <a name="return-value"></a>Valore restituito

Il nome localizzato del tasto di scelta attualmente selezionato. Se non vi è alcun tasto di scelta rapida selezionato, `GetHotKeyName` restituisce una stringa vuota.

### <a name="remarks"></a>Note

Il nome che questa funzione membro restituisce deriva dal driver di tastiera. È possibile installare un driver non localizzato della tastiera in una versione localizzata di Windows e viceversa.

##  <a name="getkeyname"></a>  CHotKeyCtrl::GetKeyName

Chiamare questa funzione membro per ottenere il nome localizzato della chiave di cui è assegnato a un codice tasto virtuale specificato.

```
static CString GetKeyName(
    UINT vk,
    BOOL fExtended);
```

### <a name="parameters"></a>Parametri

*VK*<br/>
Il codice tasto virtuale.

*fExtended*<br/>
Se il codice tasto virtuale è una chiave estesa, TRUE. in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

Il nome localizzato della chiave specificata per il *vk* parametro. Se la chiave non ha alcun nome mappato, `GetKeyName` restituisce una stringa vuota.

### <a name="remarks"></a>Note

Il nome della chiave restituita da questa funzione viene fornito dal driver di tastiera, pertanto è possibile installare un driver non localizzato della tastiera in una versione localizzata di Windows e viceversa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#69](../../mfc/codesnippet/cpp/chotkeyctrl-class_1.cpp)]

##  <a name="sethotkey"></a>  CHotKeyCtrl::SetHotKey

Imposta il tasto di scelta rapida per un controllo tasto di scelta.

```
void SetHotKey(
    WORD wVirtualKeyCode,
    WORD wModifiers);
```

### <a name="parameters"></a>Parametri

*wVirtualKeyCode*<br/>
[in] Codice tasto virtuale di tasti di scelta rapida. Per un elenco di codici di tasti virtuali standard, vedere winuser. h.

*wModifiers*<br/>
[in] Una combinazione bit per bit (OR) di flag che indicano i tasti di modifica nel tasto di scelta rapida.

I flag di modifica sono i seguenti:

|Flag|Chiave corrispondente|
|----------|-----------------------|
|HOTKEYF_ALT|ALT (tasto)|
|HOTKEYF_CONTROL|Tasto CTRL|
|HOTKEYF_EXT|Chiave estesi|
|HOTKEYF_SHIFT|Tasto MAIUSC|

### <a name="remarks"></a>Note

Il codice tasto virtuale e i tasti di modifica insieme definiscono i tasti di scelta rapida.

##  <a name="setrules"></a>  CHotKeyCtrl::SetRules

Chiamare questa funzione per definire le combinazioni non è valide e la combinazione di modificatore predefinito per un controllo tasto di scelta.

```
void SetRules(
    WORD wInvalidComb,
    WORD wModifiers);
```

### <a name="parameters"></a>Parametri

*wInvalidComb*<br/>
Matrice di flag che specifica le combinazioni di tasti non valide. Può essere una combinazione dei valori seguenti:

- HKCOMB_A ALT

- HKCOMB_C CTRL

- CTRL + ALT HKCOMB_CA

- Chiavi HKCOMB_NONE non modificato

- MAIUSC HKCOMB_S

- MAIUSC + ALT HKCOMB_SA

- MAIUSC + CTRL HKCOMB_SC

- HKCOMB_SCA MAIUSC + CTRL + ALT

*wModifiers*<br/>
Matrice di flag che specifica la combinazione di tasti da utilizzare quando l'utente immette una combinazione non valida. Per altre informazioni sui flag di modifica, vedere [GetHotKey](#gethotkey).

### <a name="remarks"></a>Note

Quando un utente immette una combinazione di tasti non valida, come definito dai flag specificato nel *wInvalidComb*, il sistema utilizza l'operatore OR per combinare le chiavi immesse dall'utente con i flag specificati nella *wModifiers*. La combinazione di tasti risulta viene convertita in una stringa e quindi visualizzata nel controllo tasto di scelta.

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)

