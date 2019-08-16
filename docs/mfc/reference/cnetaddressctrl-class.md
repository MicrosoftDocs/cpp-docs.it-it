---
title: Classe CNetAddressCtrl
ms.date: 11/19/2018
f1_keywords:
- CNetAddressCtrl
- AFXCMN/CNetAddressCtrl
- AFXCMN/CNetAddressCtrl::CNetAddressCtrl
- AFXCMN/CNetAddressCtrl::Create
- AFXCMN/CNetAddressCtrl::CreateEx
- AFXCMN/CNetAddressCtrl::DisplayErrorTip
- AFXCMN/CNetAddressCtrl::GetAddress
- AFXCMN/CNetAddressCtrl::GetAllowType
- AFXCMN/CNetAddressCtrl::SetAllowType
helpviewer_keywords:
- CNetAddressCtrl [MFC], CNetAddressCtrl
- CNetAddressCtrl [MFC], Create
- CNetAddressCtrl [MFC], CreateEx
- CNetAddressCtrl [MFC], DisplayErrorTip
- CNetAddressCtrl [MFC], GetAddress
- CNetAddressCtrl [MFC], GetAllowType
- CNetAddressCtrl [MFC], SetAllowType
ms.assetid: cb4c6aca-3f49-4b52-b76c-65f57096155b
ms.openlocfilehash: 5e485c22bcc4bf35f61226d84345102052689f89
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69504530"
---
# <a name="cnetaddressctrl-class"></a>Classe CNetAddressCtrl

La classe `CNetAddressCtrl` rappresenta il controllo indirizzo di rete, che è possibile utilizzare per immettere e convalidare il formato di indirizzi IPv4, IPv6 e DNS denominati.

## <a name="syntax"></a>Sintassi

```
class CNetAddressCtrl : public CEdit
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CNetAddressCtrl::CNetAddressCtrl](#cnetaddressctrl)|Costruisce un oggetto `CNetAddressCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CNetAddressCtrl::Create](#create)|Crea un controllo indirizzo di rete con gli stili specificati e lo associa all'oggetto `CNetAddressCtrl` corrente.|
|[CNetAddressCtrl::CreateEx](#createex)|Crea un controllo indirizzo di rete con gli stili estesi specificati e lo associa all' `CNetAddressCtrl` oggetto corrente.|
|[CNetAddressCtrl::DisplayErrorTip](#displayerrortip)|Visualizza un suggerimento per i fumetti di errore quando l'utente immette un indirizzo di rete non supportato nel controllo degli indirizzi di rete corrente.|
|[CNetAddressCtrl::GetAddress](#getaddress)|Recupera una rappresentazione convalidata e analizzata dell'indirizzo di rete associato al controllo degli indirizzi di rete corrente.|
|[CNetAddressCtrl::GetAllowType](#getallowtype)|Recupera il tipo di indirizzo di rete che il controllo dell'indirizzo di rete corrente può supportare.|
|[CNetAddressCtrl::SetAllowType](#setallowtype)|Imposta il tipo di indirizzo di rete che il controllo dell'indirizzo di rete corrente può supportare.|

## <a name="remarks"></a>Note

Il controllo dell'indirizzo di rete verifica che il formato dell'indirizzo immesso dall'utente sia corretto. Il controllo non si connette effettivamente all'indirizzo di rete. Il metodo [CNetAddressCtrl:: SetAllowType](#setallowtype) specifica uno o più tipi di indirizzo che il metodo [CNetAddressCtrl:: GetAddress](#getaddress) può analizzare e verificare. Un indirizzo può essere nel formato di un indirizzo IPv4, IPv6 o denominato per un server, una rete, un host o una destinazione dei messaggi broadcast. Se il formato dell'indirizzo non è corretto, è possibile usare il metodo [CNetAddressCtrl::D isplayerrortip](#displayerrortip) per visualizzare una finestra di messaggio infotip che punta graficamente alla casella di testo del controllo dell'indirizzo di rete e visualizza un messaggio di errore predefinito.

La `CNetAddressCtrl` classe è derivata dalla classe [CEdit](../../mfc/reference/cedit-class.md) . Di conseguenza, il controllo degli indirizzi di rete fornisce l'accesso a tutti i messaggi di controllo di modifica di Windows.

Nella figura seguente è illustrata una finestra di dialogo che contiene un controllo degli indirizzi di rete. La casella di testo (1) per il controllo dell'indirizzo di rete contiene un indirizzo di rete non valido. Se l'indirizzo di rete non è valido, viene visualizzato il messaggio infotip (2).

![Finestra di dialogo con un controllo indirizzo di rete e infotip.](../../mfc/reference/media/cnetaddctrl.png "Finestra di dialogo con un controllo indirizzo di rete e infotip.")

## <a name="example"></a>Esempio

L'esempio di codice seguente è una parte di una finestra di dialogo che convalida un indirizzo di rete. I gestori eventi per tre pulsanti di opzione specificano che l'indirizzo di rete può essere uno dei tre tipi di indirizzo. L'utente immette un indirizzo nella casella di testo del controllo di rete, quindi preme un pulsante per convalidare l'indirizzo. Se l'indirizzo è valido, viene visualizzato un messaggio di operazione completata; in caso contrario, viene visualizzato il messaggio di errore infotip predefinito.

[!code-cpp[NVC_MFC_CNetAddressCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cnetaddressctrl-class_1.cpp)]

## <a name="example"></a>Esempio

Nell'esempio di codice seguente del file di intestazione della finestra di dialogo vengono definite le variabili [NC_ADDRESS](/windows/win32/api/shellapi/ns-shellapi-nc_address) e [NET_ADDRESS_INFO](/windows/win32/shell/hkey-type) richieste dal metodo [CNetAddressCtrl:: GetAddress](#getaddress) .

[!code-cpp[NVC_MFC_CNetAddressCtrl_s1#2](../../mfc/reference/codesnippet/cpp/cnetaddressctrl-class_2.h)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CEdit](../../mfc/reference/cedit-class.md)

`CNetAddressCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

Questa classe è supportata in Windows Vista e versioni successive.

I requisiti aggiuntivi per questa classe sono descritti in [requisiti di compilazione per i controlli comuni di Windows Vista](../../mfc/build-requirements-for-windows-vista-common-controls.md).

##  <a name="cnetaddressctrl"></a>  CNetAddressCtrl::CNetAddressCtrl

Costruisce un oggetto `CNetAddressCtrl`.

```
CNetAddressCtrl();
```

### <a name="remarks"></a>Note

Usare il metodo [CNetAddressCtrl:: create](#create) o [CNetAddressCtrl:: CreateEx](#createex) per creare un controllo di rete e collegarlo all' `CNetAddressCtrl` oggetto.

##  <a name="create"></a>  CNetAddressCtrl::Create

Crea un controllo indirizzo di rete con gli stili specificati e lo associa all'oggetto `CNetAddressCtrl` corrente.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*dwStyle*|in Combinazione bit per bit di stili da applicare al controllo. Per altre informazioni, vedere [modificare gli stili](../../mfc/reference/styles-used-by-mfc.md#edit-styles).|
|*rect*|in Riferimento a una struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) che contiene la posizione e le dimensioni del controllo.|
|*pParentWnd*|in Puntatore non null a un oggetto [CWnd](../../mfc/reference/cwnd-class.md) che rappresenta la finestra padre del controllo.|
|*nID*|in ID del controllo.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

##  <a name="createex"></a>  CNetAddressCtrl::CreateEx

Crea un controllo indirizzo di rete con gli stili estesi specificati e lo associa all' `CNetAddressCtrl` oggetto corrente.

```
virtual BOOL CreateEx(
    DWORD dwExStyle,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*dwExStyle*|in Combinazione bit per bit (o) degli stili estesi da applicare al controllo. Per ulteriori informazioni, vedere il parametro *dwExStyle* della funzione [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) .|
|*dwStyle*|in Combinazione bit per bit (o) di stili da applicare al controllo. Per altre informazioni, vedere [modificare gli stili](../../mfc/reference/styles-used-by-mfc.md#edit-styles).|
|*rect*|in Riferimento a una struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) che contiene la posizione e le dimensioni del controllo.|
|*pParentWnd*|in Puntatore non null a un oggetto [CWnd](../../mfc/reference/cwnd-class.md) che rappresenta la finestra padre del controllo.|
|*nID*|in ID del controllo.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

##  <a name="displayerrortip"></a>  CNetAddressCtrl::DisplayErrorTip

Visualizza un messaggio di errore nel fumetto suggerimento associato al controllo dell'indirizzo di rete corrente.

```
HRESULT DisplayErrorTip();
```

### <a name="return-value"></a>Valore restituito

Il valore `S_OK` se questo metodo ha esito positivo; in caso contrario, un codice di errore.

### <a name="remarks"></a>Note

Usare il metodo [CNetAddressCtrl:: SetAllowType](#setallowtype) per specificare i tipi di indirizzi che il controllo dell'indirizzo di rete corrente può supportare. Usare il metodo [CNetAddressCtrl:: GetAddress](#getaddress) per convalidare e analizzare l'indirizzo di rete immesso dall'utente. Usare il metodo [CNetAddressCtrl::D isplayerrortip](#displayerrortip) per visualizzare un messaggio di errore infotip se il metodo [CNetAddressCtrl:: GetAddress](#getaddress) ha esito negativo.

Questo messaggio richiama la macro [NetAddr_DisplayErrorTip](/windows/win32/api/shellapi/nf-shellapi-netaddr_displayerrortip) , descritta in Windows SDK. Tale macro invia il `NCM_DISPLAYERRORTIP` messaggio.

##  <a name="getaddress"></a>  CNetAddressCtrl::GetAddress

Recupera una rappresentazione convalidata e analizzata dell'indirizzo di rete associato al controllo degli indirizzi di rete corrente.

```
HRESULT GetAddress(PNC_ADDRESS pAddress) const;
```

### <a name="parameters"></a>Parametri

*pAddress*<br/>
[in, out] Puntatore a una struttura [NC_ADDRESS](/windows/win32/api/shellapi/ns-shellapi-nc_address) .  Impostare il membro *pAddrInfo* della struttura sull'indirizzo di una struttura [NET_ADDRESS_INFO](/windows/win32/shell/hkey-type) prima di chiamare il Metodo GetAddress.

### <a name="return-value"></a>Valore restituito

Valore S_OK se il metodo ha esito positivo; in caso contrario, un codice di errore COM. Per ulteriori informazioni sui possibili codici di errore, vedere la sezione valore restituito della macro [NetAddr_GetAddress](/windows/win32/api/shellapi/nf-shellapi-netaddr_getaddress) .

### <a name="remarks"></a>Note

Se questo metodo ha esito positivo, la struttura [NET_ADDRESS_INFO](/windows/win32/shell/hkey-type) contiene informazioni aggiuntive sull'indirizzo di rete.

Usare il metodo [CNetAddressCtrl:: SetAllowType](#setallowtype) per specificare i tipi di indirizzi che il controllo dell'indirizzo di rete corrente può supportare. Usare il metodo [CNetAddressCtrl:: GetAddress](#getaddress) per convalidare e analizzare l'indirizzo di rete immesso dall'utente. Usare il metodo [CNetAddressCtrl::D isplayerrortip](#displayerrortip) per visualizzare un messaggio di errore infotip se il metodo [CNetAddressCtrl:: GetAddress](#getaddress) ha esito negativo.

Questo metodo richiama la macro [NetAddr_GetAddress](/windows/win32/api/shellapi/nf-shellapi-netaddr_getaddress) , descritta nell'Windows SDK. Tale macro invia il messaggio NCM_GETADDRESS.

##  <a name="getallowtype"></a>CNetAddressCtrl:: GetAllowType

Recupera il tipo di indirizzo di rete che il controllo dell'indirizzo di rete corrente può supportare.

```
DWORD GetAllowType() const;
```

### <a name="return-value"></a>Valore restituito

Combinazione bit per bit (o) di flag che specifica i tipi di indirizzi che il controllo dell'indirizzo di rete è in grado di supportare. Per ulteriori informazioni, vedere [NET_STRING](/windows/win32/shell/net-string).

### <a name="remarks"></a>Note

Questo messaggio richiama la macro [NetAddr_GetAllowType](/windows/win32/api/shellapi/nf-shellapi-netaddr_getallowtype) , descritta in Windows SDK. Tale macro invia il messaggio NCM_GETALLOWTYPE.

##  <a name="setallowtype"></a>  CNetAddressCtrl::SetAllowType

Imposta il tipo di indirizzo di rete che il controllo dell'indirizzo di rete corrente può supportare.

```
HRESULT SetAllowType(DWORD dwAddrMask);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*dwAddrMask*|in Combinazione bit per bit (o) di flag che specifica i tipi di indirizzi che il controllo dell'indirizzo di rete è in grado di supportare. Per ulteriori informazioni, vedere [NET_STRING](/windows/win32/shell/net-string).|

### <a name="return-value"></a>Valore restituito

S_OK se il metodo ha esito positivo; in caso contrario, un codice di errore COM.

### <a name="remarks"></a>Note

Usare il metodo [CNetAddressCtrl:: SetAllowType](#setallowtype) per specificare i tipi di indirizzi che il controllo dell'indirizzo di rete corrente può supportare. Usare il metodo [CNetAddressCtrl:: GetAddress](#getaddress) per convalidare e analizzare l'indirizzo di rete immesso dall'utente. Usare il metodo [CNetAddressCtrl::D isplayerrortip](#displayerrortip) per visualizzare un messaggio di errore infotip se il metodo [CNetAddressCtrl:: GetAddress](#getaddress) ha esito negativo.

Questo messaggio richiama la macro [NetAddr_SetAllowType](/windows/win32/api/shellapi/nf-shellapi-netaddr_setallowtype) , descritta in Windows SDK. Tale macro invia il messaggio NCM_SETALLOWTYPE.

## <a name="see-also"></a>Vedere anche

[Classe CNetAddressCtrl](../../mfc/reference/cnetaddressctrl-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CEdit](../../mfc/reference/cedit-class.md)
