---
title: Classe CIPAddressCtrl
ms.date: 11/04/2016
f1_keywords:
- CIPAddressCtrl
- AFXCMN/CIPAddressCtrl
- AFXCMN/CIPAddressCtrl::CIPAddressCtrl
- AFXCMN/CIPAddressCtrl::ClearAddress
- AFXCMN/CIPAddressCtrl::Create
- AFXCMN/CIPAddressCtrl::CreateEx
- AFXCMN/CIPAddressCtrl::GetAddress
- AFXCMN/CIPAddressCtrl::IsBlank
- AFXCMN/CIPAddressCtrl::SetAddress
- AFXCMN/CIPAddressCtrl::SetFieldFocus
- AFXCMN/CIPAddressCtrl::SetFieldRange
helpviewer_keywords:
- CIPAddressCtrl [MFC], CIPAddressCtrl
- CIPAddressCtrl [MFC], ClearAddress
- CIPAddressCtrl [MFC], Create
- CIPAddressCtrl [MFC], CreateEx
- CIPAddressCtrl [MFC], GetAddress
- CIPAddressCtrl [MFC], IsBlank
- CIPAddressCtrl [MFC], SetAddress
- CIPAddressCtrl [MFC], SetFieldFocus
- CIPAddressCtrl [MFC], SetFieldRange
ms.assetid: 9764d2f4-cb14-4ba8-b799-7f57a55a47c6
ms.openlocfilehash: 5abcf838308d8965f3c55dc7d85dbac974825394
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57426394"
---
# <a name="cipaddressctrl-class"></a>Classe CIPAddressCtrl

Fornisce la funzionalità del controllo indirizzo IP comune di Windows.

## <a name="syntax"></a>Sintassi

```
class CIPAddressCtrl : public CWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CIPAddressCtrl::CIPAddressCtrl](#cipaddressctrl)|Costruisce un oggetto `CIPAddressCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CIPAddressCtrl::ClearAddress](#clearaddress)|Cancella il contenuto del controllo indirizzo IP.|
|[CIPAddressCtrl::Create](#create)|Crea un controllo di indirizzo IP e lo collega a un `CIPAddressCtrl` oggetto.|
|[CIPAddressCtrl::CreateEx](#createex)|Crea un controllo indirizzo IP con gli stili estesi di Windows specificati e lo collega a un `CIPAddressCtrl` oggetto.|
|[CIPAddressCtrl::GetAddress](#getaddress)|Recupera i valori di indirizzo per tutti i quattro campi nel controllo indirizzo IP.|
|[CIPAddressCtrl::IsBlank](#isblank)|Determina se tutti i campi nel controllo di indirizzi IP sono vuoti.|
|[CIPAddressCtrl::SetAddress](#setaddress)|Imposta i valori di indirizzo per tutti i quattro campi nel controllo indirizzo IP.|
|[CIPAddressCtrl::SetFieldFocus](#setfieldfocus)|Imposta lo stato attivo per il campo specificato nel controllo indirizzo IP.|
|[CIPAddressCtrl::SetFieldRange](#setfieldrange)|Imposta l'intervallo del campo specificato nel controllo indirizzo IP.|

## <a name="remarks"></a>Note

Un controllo indirizzo IP, un controllo simile a un controllo di modifica, consente di immettere e modificare un indirizzo numerico in formato IP (Internet Protocol).

Questo controllo (e pertanto il `CIPAddressCtrl` classe) è disponibile solo per i programmi in esecuzione in Microsoft Internet Explorer 4.0 e versioni successive. Inoltre, saranno disponibili in versioni future di Windows e Windows NT.

Per ulteriori informazioni generali sul controllo indirizzo IP, vedere [controlli di indirizzi IP](/windows/desktop/Controls/ip-address-controls) nel SDK di Windows.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CIPAddressCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

##  <a name="cipaddressctrl"></a>  CIPAddressCtrl::CIPAddressCtrl

Crea un oggetto `CIPAddressCtrl`.

```
CIPAddressCtrl();
```

##  <a name="clearaddress"></a>  CIPAddressCtrl::ClearAddress

Cancella il contenuto del controllo indirizzo IP.

```
void ClearAddress();
```

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [IPM_CLEARADDRESS](/windows/desktop/Controls/ipm-clearaddress), come descritto nel SDK di Windows.

##  <a name="create"></a>  CIPAddressCtrl::Create

Crea un controllo di indirizzo IP e lo collega a un `CIPAddressCtrl` oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Stile del controllo indirizzo IP. Applicare una combinazione degli stili di finestra. È necessario includere lo stile WS_CHILD perché il controllo deve essere una finestra figlio. Visualizzare [CreateWindow](/windows/desktop/api/winuser/nf-winuser-createwindowa) nel SDK di Windows per un elenco degli stili di windows.

*rect*<br/>
Un riferimento a dimensioni e la posizione del controllo indirizzo IP. Può essere un' [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o una [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura.

*pParentWnd*<br/>
Puntatore alla finestra padre del controllo indirizzo IP. Non deve essere NULL.

*nID*<br/>
ID. del controllo indirizzo IP

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'inizializzazione ha avuto esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Si costruisce un `CIPAddressCtrl` oggetto in due passaggi.

1. Chiamare il costruttore che crea il `CIPAddressCtrl` oggetto.

1. Chiamare `Create`, che consente di creare il controllo dell'indirizzo IP.

Se si desidera utilizzare gli stili estesi di windows con il controllo, chiamare [CreateEx](#createex) invece di `Create`.

##  <a name="createex"></a>  CIPAddressCtrl::CreateEx

Chiamare questa funzione per creare un controllo (una finestra figlio) e associarlo con il `CIPAddressCtrl` oggetto.

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
Stile del controllo indirizzo IP. Applicare una combinazione degli stili di finestra. È necessario includere lo stile WS_CHILD perché il controllo deve essere una finestra figlio. Visualizzare [CreateWindow](/windows/desktop/api/winuser/nf-winuser-createwindowa) nel SDK di Windows per un elenco degli stili di windows.

*rect*<br/>
Un riferimento a un [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura che descrive le dimensioni e posizione della finestra da creare, nelle coordinate del client *pParentWnd*.

*pParentWnd*<br/>
Puntatore alla finestra padre del controllo.

*nID*<br/>
ID di finestra figlio. del controllo

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Uso `CreateEx` invece di [Create](#create) per applicare stili estesi di Windows, specificati dal prefisso di stile esteso di Windows **WS_EX _**.

##  <a name="getaddress"></a>  CIPAddressCtrl::GetAddress

Recupera i valori di indirizzo per tutti i quattro campi nel controllo indirizzo IP.

```
int GetAddress(
    BYTE& nField0,
    BYTE& nField1,
    BYTE& nField2,
    BYTE& nField3);

int GetAddress(DWORD& dwAddress);
```

### <a name="parameters"></a>Parametri

*nField0*<br/>
Un riferimento al valore del campo 0 da un indirizzo IP compresso.

*nField1*<br/>
Un riferimento al valore del campo 1 da un indirizzo IP compresso.

*nField2*<br/>
Un riferimento al valore del campo 2 da un indirizzo IP compresso.

*nField3*<br/>
Un riferimento al valore del campo 3 da un indirizzo IP compresso.

*dwAddress*<br/>
Un riferimento all'indirizzo di un valore DWORD che riceve l'indirizzo IP. Visualizzare **osservazioni** per una tabella che mostra come *dwAddress* viene riempita.

### <a name="return-value"></a>Valore restituito

Il numero di campi non vuoti nel controllo indirizzo IP.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [IPM_GETADDRESS](/windows/desktop/Controls/ipm-getaddress), come descritto nel SDK di Windows. Nel primo prototipo riportato sopra, i numeri di campi da 0 a 3 del controllo, di lettura da sinistra a destra rispettivamente, popolare i quattro parametri. Nel secondo precedente, prototipo *dwAddress* viene popolata come segue.

|Campo|Che contiene il valore del campo di bit|
|-----------|-------------------------------------|
|0|24 a 31|
|1|16 e 23|
|2|8 a 15|
|3|da 0 a 7|

##  <a name="isblank"></a>  CIPAddressCtrl::IsBlank

Determina se tutti i campi nel controllo di indirizzi IP sono vuoti.

```
BOOL IsBlank() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se tutti i campi di controllo dell'indirizzo IP sono vuoti; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [IPM_ISBLANK](/windows/desktop/Controls/ipm-isblank), come descritto nel SDK di Windows.

##  <a name="setaddress"></a>  CIPAddressCtrl::SetAddress

Imposta i valori di indirizzo per tutti i quattro campi nel controllo indirizzo IP.

```
void SetAddress(
    BYTE nField0,
    BYTE nField1,
    BYTE nField2,
    BYTE nField3);

void SetAddress(DWORD dwAddress);
```

### <a name="parameters"></a>Parametri

*nField0*<br/>
Il valore del campo 0 da un indirizzo IP compresso.

*nField1*<br/>
Il valore del campo 1 da un indirizzo IP compresso.

*nField2*<br/>
Il valore del campo 2 da un indirizzo IP compresso.

*nField3*<br/>
Il valore del campo 3 da un indirizzo IP compresso.

*dwAddress*<br/>
Un valore DWORD che contiene il nuovo indirizzo IP. Visualizzare **osservazioni** per una tabella che mostra la modalità di riempimento il valore DWORD.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [IPM_SETADDRESS](/windows/desktop/Controls/ipm-setaddress), come descritto nel SDK di Windows. Nel primo prototipo riportato sopra, i numeri di campi da 0 a 3 del controllo, di lettura da sinistra a destra rispettivamente, popolare i quattro parametri. Nel secondo precedente, prototipo *dwAddress* viene popolata come segue.

|Campo|Che contiene il valore del campo di bit|
|-----------|-------------------------------------|
|0|24 a 31|
|1|16 e 23|
|2|8 a 15|
|3|da 0 a 7|

##  <a name="setfieldfocus"></a>  CIPAddressCtrl::SetFieldFocus

Imposta lo stato attivo per il campo specificato nel controllo indirizzo IP.

```
void SetFieldFocus(WORD nField);
```

### <a name="parameters"></a>Parametri

*nField*<br/>
Indice del campo in base zero in cui deve essere impostato lo stato attivo. Se questo valore è maggiore del numero di campi, lo stato attivo è impostato sul primo campo vuoto. Se tutti i campi sono non vuoto, lo stato attivo viene impostato sul primo campo.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [IPM_SETFOCUS](/windows/desktop/Controls/ipm-setfocus), come descritto nel SDK di Windows.

##  <a name="setfieldrange"></a>  CIPAddressCtrl::SetFieldRange

Imposta l'intervallo del campo specificato nel controllo indirizzo IP.

```
void SetFieldRange(
    int nField,
    BYTE nLower,
    BYTE nUpper);
```

### <a name="parameters"></a>Parametri

*nField*<br/>
Indice del campo in base zero in cui verrà applicato l'intervallo.

*nLower*<br/>
Un riferimento a un integer che riceve il limite inferiore del campo specificato in questo controllo indirizzo IP.

*nUpper*<br/>
Un riferimento a un integer che riceve il limite massimo del campo specificato in questo controllo indirizzo IP.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [IPM_SETRANGE](/windows/desktop/Controls/ipm-setrange), come descritto nel SDK di Windows. I due parametri, usare *nLower* e *nUpper*, per indicare i limiti superiori e inferiori del campo, anziché il *wRange* parametro utilizzato con il messaggio Win32.

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)
