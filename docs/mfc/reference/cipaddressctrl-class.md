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
ms.openlocfilehash: fe8e3109b110c27ab32dc1a4f9a132f1e1c18638
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69505822"
---
# <a name="cipaddressctrl-class"></a>Classe CIPAddressCtrl

Fornisce la funzionalità del controllo indirizzo IP comune di Windows.

## <a name="syntax"></a>Sintassi

```
class CIPAddressCtrl : public CWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CIPAddressCtrl::CIPAddressCtrl](#cipaddressctrl)|Costruisce un oggetto `CIPAddressCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CIPAddressCtrl::ClearAddress](#clearaddress)|Cancella il contenuto del controllo degli indirizzi IP.|
|[CIPAddressCtrl::Create](#create)|Crea un controllo indirizzo IP e lo collega a un `CIPAddressCtrl` oggetto.|
|[CIPAddressCtrl::CreateEx](#createex)|Crea un controllo indirizzo IP con gli stili estesi di Windows specificati e lo collega a `CIPAddressCtrl` un oggetto.|
|[CIPAddressCtrl::GetAddress](#getaddress)|Recupera i valori di indirizzo per tutti e quattro i campi nel controllo degli indirizzi IP.|
|[CIPAddressCtrl::IsBlank](#isblank)|Determina se tutti i campi nel controllo degli indirizzi IP sono vuoti.|
|[CIPAddressCtrl::SetAddress](#setaddress)|Imposta i valori di indirizzo per tutti e quattro i campi nel controllo degli indirizzi IP.|
|[CIPAddressCtrl::SetFieldFocus](#setfieldfocus)|Imposta lo stato attivo della tastiera sul campo specificato nel controllo degli indirizzi IP.|
|[CIPAddressCtrl::SetFieldRange](#setfieldrange)|Imposta l'intervallo nel campo specificato nel controllo degli indirizzi IP.|

## <a name="remarks"></a>Note

Un controllo di indirizzo IP, un controllo simile a un controllo di modifica, consente di immettere e modificare un indirizzo numerico in formato IP (Internet Protocol).

Questo controllo (e pertanto la `CIPAddressCtrl` classe) è disponibile solo per i programmi in esecuzione in Microsoft Internet Explorer 4,0 e versioni successive. Saranno disponibili anche nelle versioni future di Windows e Windows NT.

Per informazioni generali sul controllo degli indirizzi IP, vedere la pagina relativa ai [controlli degli indirizzi IP](/windows/win32/Controls/ip-address-controls) nel Windows SDK.

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

Cancella il contenuto del controllo degli indirizzi IP.

```
void ClearAddress();
```

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [IPM_CLEARADDRESS](/windows/win32/Controls/ipm-clearaddress), come descritto nel Windows SDK.

##  <a name="create"></a>  CIPAddressCtrl::Create

Crea un controllo indirizzo IP e lo collega a un `CIPAddressCtrl` oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Stile del controllo dell'indirizzo IP. Applicare una combinazione di stili di finestra. È necessario includere lo stile WS_CHILD perché il controllo deve essere una finestra figlio. Per un elenco degli stili di Windows, vedere [CreateWindow](/windows/win32/api/winuser/nf-winuser-createwindoww) nel Windows SDK.

*rect*<br/>
Un riferimento alle dimensioni e alla posizione del controllo indirizzo IP. Può essere un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) o una struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) .

*pParentWnd*<br/>
Puntatore alla finestra padre del controllo dell'indirizzo IP. Non deve essere NULL.

*nID*<br/>
ID del controllo dell'indirizzo IP.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'inizializzazione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Si costruisce `CIPAddressCtrl` un oggetto in due passaggi.

1. Chiamare il costruttore, che consente di `CIPAddressCtrl` creare l'oggetto.

1. Chiamare `Create`, che crea il controllo degli indirizzi IP.

Se si desidera utilizzare gli stili estesi di Windows con il controllo, chiamare [CreateEx](#createex) anziché `Create`.

##  <a name="createex"></a>CIPAddressCtrl:: CreateEx

Chiamare questa funzione per creare un controllo, ovvero una finestra figlio, e associarlo `CIPAddressCtrl` all'oggetto.

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
Stile del controllo dell'indirizzo IP. Applicare una combinazione di stili di finestra. È necessario includere lo stile WS_CHILD perché il controllo deve essere una finestra figlio. Per un elenco degli stili di Windows, vedere [CreateWindow](/windows/win32/api/winuser/nf-winuser-createwindoww) nel Windows SDK.

*rect*<br/>
Riferimento a una struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) che descrive le dimensioni e la posizione della finestra da creare, nelle coordinate client di *pParentWnd*.

*pParentWnd*<br/>
Puntatore alla finestra che rappresenta l'elemento padre del controllo.

*nID*<br/>
ID della finestra figlio del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Usare `CreateEx` anziché [create](#create) per applicare gli stili estesi di Windows, specificato dalla prefazione **WS_EX_** di Windows Extended Style.

##  <a name="getaddress"></a>  CIPAddressCtrl::GetAddress

Recupera i valori di indirizzo per tutti e quattro i campi nel controllo degli indirizzi IP.

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
Riferimento al valore del campo 0 da un indirizzo IP compresso.

*nField1*<br/>
Riferimento al valore del campo 1 da un indirizzo IP compresso.

*nField2*<br/>
Riferimento al valore del campo 2 da un indirizzo IP compresso.

*nField3*<br/>
Riferimento al valore del campo 3 da un indirizzo IP compresso.

*dwAddress*<br/>
Riferimento all'indirizzo di un valore DWORD che riceve l'indirizzo IP. Vedere la **sezione Osservazioni** per una tabella che mostra il modo in cui viene compilato *dwAddress* .

### <a name="return-value"></a>Valore restituito

Numero di campi non vuoti nel controllo degli indirizzi IP.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [IPM_GETADDRESS](/windows/win32/Controls/ipm-getaddress), come descritto nel Windows SDK. Nel primo prototipo precedente, i numeri nei campi da 0 a 3 del controllo, letti da sinistra a destra, popolano i quattro parametri. Nel secondo prototipo precedente, *dwAddress* viene popolato come indicato di seguito.

|Campo|Bit contenente il valore del campo|
|-----------|-------------------------------------|
|0|da 24 a 31|
|1|da 16 a 23|
|2|da 8 a 15|
|3|da 0 a 7|

##  <a name="isblank"></a>  CIPAddressCtrl::IsBlank

Determina se tutti i campi nel controllo degli indirizzi IP sono vuoti.

```
BOOL IsBlank() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se tutti i campi di controllo degli indirizzi IP sono vuoti; in caso contrario, 0.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [IPM_ISBLANK](/windows/win32/Controls/ipm-isblank), come descritto nel Windows SDK.

##  <a name="setaddress"></a>  CIPAddressCtrl::SetAddress

Imposta i valori di indirizzo per tutti e quattro i campi nel controllo degli indirizzi IP.

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
Valore del campo 0 da un indirizzo IP compresso.

*nField1*<br/>
Valore del campo 1 da un indirizzo IP compresso.

*nField2*<br/>
Valore del campo 2 da un indirizzo IP compresso.

*nField3*<br/>
Valore del campo 3 da un indirizzo IP compresso.

*dwAddress*<br/>
Valore DWORD che contiene il nuovo indirizzo IP. Vedere la **sezione Osservazioni** per una tabella che Mostra come il valore DWORD viene riempito.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [IPM_SETADDRESS](/windows/win32/Controls/ipm-setaddress), come descritto nel Windows SDK. Nel primo prototipo precedente, i numeri nei campi da 0 a 3 del controllo, letti da sinistra a destra, popolano i quattro parametri. Nel secondo prototipo precedente, *dwAddress* viene popolato come indicato di seguito.

|Campo|Bit contenente il valore del campo|
|-----------|-------------------------------------|
|0|da 24 a 31|
|1|da 16 a 23|
|2|da 8 a 15|
|3|da 0 a 7|

##  <a name="setfieldfocus"></a>  CIPAddressCtrl::SetFieldFocus

Imposta lo stato attivo della tastiera sul campo specificato nel controllo degli indirizzi IP.

```
void SetFieldFocus(WORD nField);
```

### <a name="parameters"></a>Parametri

*nCampo*<br/>
Indice del campo in base zero in cui impostare lo stato attivo. Se questo valore è maggiore del numero di campi, lo stato attivo è impostato sul primo campo vuoto. Se tutti i campi non sono vuoti, lo stato attivo è impostato sul primo campo.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [IPM_SETFOCUS](/windows/win32/Controls/ipm-setfocus), come descritto nel Windows SDK.

##  <a name="setfieldrange"></a>CIPAddressCtrl:: SetFieldRange

Imposta l'intervallo nel campo specificato nel controllo degli indirizzi IP.

```
void SetFieldRange(
    int nField,
    BYTE nLower,
    BYTE nUpper);
```

### <a name="parameters"></a>Parametri

*nCampo*<br/>
Indice del campo in base zero a cui verrà applicato l'intervallo.

*nLower*<br/>
Riferimento a un Integer che riceve il limite inferiore del campo specificato in questo controllo indirizzo IP.

*nUpper*<br/>
Riferimento a un Integer che riceve il limite superiore del campo specificato in questo controllo indirizzo IP.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [IPM_SETRANGE](/windows/win32/Controls/ipm-setrange), come descritto nel Windows SDK. Usare i due parametri, *nLower* e *nUpper*, per indicare i limiti inferiore e superiore del campo, anziché il parametro *WRange* usato con il messaggio Win32.

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)
