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
ms.openlocfilehash: 0613dea766b022acf140a82bb4b01784793c2589
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754959"
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
|[CIPAddressCtrl::Crea](#create)|Crea un controllo indirizzo IP e `CIPAddressCtrl` lo collega a un oggetto.|
|[CIPAddressCtrl::CreateEx](#createex)|Crea un controllo Indirizzo IP con gli stili estesi `CIPAddressCtrl` di Windows specificati e lo associa a un oggetto.|
|[CIPAddressCtrl::GetAddress](#getaddress)|Recupera i valori degli indirizzi per tutti e quattro i campi nel controllo indirizzo IP.|
|[CIPAddressCtrl::IsBlank](#isblank)|Determina se tutti i campi nel controllo indirizzo IP sono vuoti.|
|[CIPAddressCtrl::SetAddress](#setaddress)|Imposta i valori degli indirizzi per tutti e quattro i campi nel controllo indirizzo IP.|
|[CIPAddressCtrl::SetFieldFocus](#setfieldfocus)|Imposta lo stato attivo della tastiera sul campo specificato nel controllo indirizzo IP.|
|[CIPAddressCtrl::SetFieldRange](#setfieldrange)|Imposta l'intervallo nel campo specificato nel controllo indirizzo IP.|

## <a name="remarks"></a>Osservazioni

Un controllo Indirizzo IP, un controllo simile a un controllo di modifica, consente di immettere e modificare un indirizzo numerico in formato IP (Internet Protocol).

Questo controllo (e `CIPAddressCtrl` quindi la classe) è disponibile solo per i programmi in esecuzione in Microsoft Internet Explorer 4.0 e versioni successive. Saranno inoltre disponibili nelle versioni future di Windows e Windows NT.

Per ulteriori informazioni generali sul controllo indirizzo IP, vedere [controlli degli indirizzi IP](/windows/win32/Controls/ip-address-controls) in Windows SDK.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CIPAddressCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

## <a name="cipaddressctrlcipaddressctrl"></a><a name="cipaddressctrl"></a>CIPAddressCtrl::CIPAddressCtrl

Crea un oggetto `CIPAddressCtrl`.

```
CIPAddressCtrl();
```

## <a name="cipaddressctrlclearaddress"></a><a name="clearaddress"></a>CIPAddressCtrl::ClearAddress

Cancella il contenuto del controllo indirizzo IP.

```cpp
void ClearAddress();
```

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [IPM_CLEARADDRESS](/windows/win32/Controls/ipm-clearaddress), come descritto in Windows SDK.

## <a name="cipaddressctrlcreate"></a><a name="create"></a>CIPAddressCtrl::Crea

Crea un controllo indirizzo IP e `CIPAddressCtrl` lo collega a un oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*DwStyle (in stile dwStyle)*<br/>
Stile del controllo Indirizzo IP. Applicare una combinazione di stili di finestra. È necessario includere lo stile WS_CHILD perché il controllo deve essere una finestra figlio. Vedere [CreateWindow](/windows/win32/api/winuser/nf-winuser-createwindoww) in Windows SDK per un elenco di stili di Windows.

*Rect*<br/>
Un riferimento alle dimensioni e alla posizione del controllo indirizzo IP. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o un [RECT](/windows/win32/api/windef/ns-windef-rect) struttura.

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra padre del controllo indirizzo IP. Non deve essere NULL.

*nID*<br/>
ID del controllo dell'indirizzo IP.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'inizializzazione ha avuto esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Costruire un `CIPAddressCtrl` oggetto in due passaggi.

1. Chiamare il costruttore, `CIPAddressCtrl` che crea l'oggetto.

1. Chiamare `Create`, che crea il controllo dell'indirizzo IP.

Se si desidera utilizzare gli stili di finestre estese `Create`con il controllo, chiamare [CreateEx](#createex) anziché .

## <a name="cipaddressctrlcreateex"></a><a name="createex"></a>CIPAddressCtrl::CreateEx

Chiamare questa funzione per creare un controllo (una `CIPAddressCtrl` finestra figlio) e associarlo all'oggetto.

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
Stile del controllo Indirizzo IP. Applicare una combinazione di stili di finestra. È necessario includere lo stile WS_CHILD perché il controllo deve essere una finestra figlio. Vedere [CreateWindow](/windows/win32/api/winuser/nf-winuser-createwindoww) in Windows SDK per un elenco di stili di Windows.

*Rect*<br/>
Riferimento a una struttura [RECT](/windows/win32/api/windef/ns-windef-rect) che descrive le dimensioni e la posizione della finestra da creare, nelle coordinate client di *pParentWnd*.

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra che è padre del controllo.

*nID*<br/>
ID della finestra figlio del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Utilizzare `CreateEx` invece [di Crea](#create) per applicare stili di Windows estesi, specificati dalla prefazione dello stile esteso di Windows **WS_EX_**.

## <a name="cipaddressctrlgetaddress"></a><a name="getaddress"></a>CIPAddressCtrl::GetAddress

Recupera i valori degli indirizzi per tutti e quattro i campi nel controllo indirizzo IP.

```
int GetAddress(
    BYTE& nField0,
    BYTE& nField1,
    BYTE& nField2,
    BYTE& nField3);

int GetAddress(DWORD& dwAddress);
```

### <a name="parameters"></a>Parametri

*nCampo0*<br/>
Riferimento al valore del campo 0 da un indirizzo IP compresso.

*nCampo1*<br/>
Riferimento al valore del campo 1 da un indirizzo IP compresso.

*nCampo2*<br/>
Un riferimento al valore del campo 2 da un indirizzo IP compresso.

*nCampo 3*<br/>
Un riferimento al valore del campo 3 da un indirizzo IP compresso.

*DwAddress (indirizzo dwAddress)*<br/>
Riferimento all'indirizzo di un valore DWORD che riceve l'indirizzo IP. Vedere **Osservazioni** per una tabella che mostra come *dwAddress* viene riempito.

### <a name="return-value"></a>Valore restituito

Il numero di campi non vuoti nel controllo indirizzo IP.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [IPM_GETADDRESS](/windows/win32/Controls/ipm-getaddress), come descritto in Windows SDK. Nel primo prototipo precedente, i numeri nei campi da 0 a 3 del controllo, letti rispettivamente da sinistra a destra, popolano i quattro parametri. Nel secondo prototipo precedente, *dwAddress* viene popolato come segue.

|Campo|Bit contenenti il valore del campo|
|-----------|-------------------------------------|
|0|da 24 a 31|
|1|Da 16 a 23|
|2|Da 8 a 15|
|3|Da 0 a 7|

## <a name="cipaddressctrlisblank"></a><a name="isblank"></a>CIPAddressCtrl::IsBlank

Determina se tutti i campi nel controllo indirizzo IP sono vuoti.

```
BOOL IsBlank() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se tutti i campi di controllo indirizzo IP sono vuoti; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [IPM_ISBLANK](/windows/win32/Controls/ipm-isblank), come descritto in Windows SDK.

## <a name="cipaddressctrlsetaddress"></a><a name="setaddress"></a>CIPAddressCtrl::SetAddress

Imposta i valori degli indirizzi per tutti e quattro i campi nel controllo indirizzo IP.

```cpp
void SetAddress(
    BYTE nField0,
    BYTE nField1,
    BYTE nField2,
    BYTE nField3);

void SetAddress(DWORD dwAddress);
```

### <a name="parameters"></a>Parametri

*nCampo0*<br/>
Il valore del campo 0 da un indirizzo IP compresso.

*nCampo1*<br/>
Il valore del campo 1 da un indirizzo IP compresso.

*nCampo2*<br/>
Il valore del campo 2 da un indirizzo IP compresso.

*nCampo 3*<br/>
Il valore del campo 3 da un indirizzo IP compresso.

*DwAddress (indirizzo dwAddress)*<br/>
Valore DWORD contenente il nuovo indirizzo IP. Vedere **Osservazioni** per una tabella che mostra come viene riempito il valore DWORD.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [IPM_SETADDRESS](/windows/win32/Controls/ipm-setaddress), come descritto in Windows SDK. Nel primo prototipo precedente, i numeri nei campi da 0 a 3 del controllo, letti rispettivamente da sinistra a destra, popolano i quattro parametri. Nel secondo prototipo precedente, *dwAddress* viene popolato come segue.

|Campo|Bit contenenti il valore del campo|
|-----------|-------------------------------------|
|0|da 24 a 31|
|1|Da 16 a 23|
|2|Da 8 a 15|
|3|Da 0 a 7|

## <a name="cipaddressctrlsetfieldfocus"></a><a name="setfieldfocus"></a>CIPAddressCtrl::SetFieldFocus

Imposta lo stato attivo della tastiera sul campo specificato nel controllo indirizzo IP.

```cpp
void SetFieldFocus(WORD nField);
```

### <a name="parameters"></a>Parametri

*nCampo*<br/>
Indice di campo in base zero su cui deve essere impostato lo stato attivo. Se questo valore è maggiore del numero di campi, lo stato attivo viene impostato sul primo campo vuoto. Se tutti i campi non sono vuoti, lo stato attivo viene impostato sul primo campo.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [IPM_SETFOCUS](/windows/win32/Controls/ipm-setfocus), come descritto in Windows SDK.

## <a name="cipaddressctrlsetfieldrange"></a><a name="setfieldrange"></a>CIPAddressCtrl::SetFieldRange

Imposta l'intervallo nel campo specificato nel controllo indirizzo IP.

```cpp
void SetFieldRange(
    int nField,
    BYTE nLower,
    BYTE nUpper);
```

### <a name="parameters"></a>Parametri

*nCampo*<br/>
Indice di campo in base zero a cui verrà applicato l'intervallo.

*nInferiore*<br/>
Riferimento a un numero intero che riceve il limite inferiore del campo specificato in questo controllo indirizzo IP.

*nSuperiore*<br/>
Riferimento a un numero intero che riceve il limite superiore del campo specificato in questo controllo indirizzo IP.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [IPM_SETRANGE](/windows/win32/Controls/ipm-setrange), come descritto in Windows SDK. Utilizzare i due parametri, *nLower* e *nUpper*, per indicare i limiti inferiore e superiore del campo, anziché il parametro *wRange* utilizzato con il messaggio Win32.

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
