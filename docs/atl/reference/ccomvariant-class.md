---
title: CComVariant (classe)
ms.date: 11/04/2016
f1_keywords:
- CComVariant
- ATLCOMCLI/ATL::CComVariant
- ATLCOMCLI/ATL::CComVariant::CComVariant
- ATLCOMCLI/ATL::CComVariant::Attach
- ATLCOMCLI/ATL::CComVariant::ChangeType
- ATLCOMCLI/ATL::CComVariant::Clear
- ATLCOMCLI/ATL::CComVariant::Copy
- ATLCOMCLI/ATL::CComVariant::CopyTo
- ATLCOMCLI/ATL::CComVariant::Detach
- ATLCOMCLI/ATL::CComVariant::GetSize
- ATLCOMCLI/ATL::CComVariant::ReadFromStream
- ATLCOMCLI/ATL::CComVariant::SetByRef
- ATLCOMCLI/ATL::CComVariant::WriteToStream
helpviewer_keywords:
- VARIANT macro
- CComVariant class
- VARIANT macro, ATL
ms.assetid: 4d31149c-d005-44b5-a509-10f84afa2b61
ms.openlocfilehash: 9a84d91e20242fb206d1d3f71fcb3dd207561f62
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327222"
---
# <a name="ccomvariant-class"></a>CComVariant (classe)

Questa classe esegue il wrapping del tipo VARIANT, fornendo un membro che indica il tipo di dati archiviati.

## <a name="syntax"></a>Sintassi

```cpp
class CComVariant : public tagVARIANT
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComVariant::CComVariant](#ccomvariant)|Costruttore.|
|[CComVariant:: CComVariant](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComVariant::Attach](#attach)|Associa un VARIANT all'oggetto. `CComVariant`|
|[CComVariant::ChangeType](#changetype)|Converte `CComVariant` l'oggetto in un nuovo tipo.|
|[CComVariant::Clear](#clear)|Cancella l'oggetto. `CComVariant`|
|[CComVariant::Copia](#copy)|Copia un VARIANT `CComVariant` all'oggetto.|
|[CComVariant::CopyTo](#copyto)|Copia il contenuto `CComVariant` dell'oggetto.|
|[CComVariant::Detach](#detach)|Scollega il VARIANT sottostante dall'oggetto. `CComVariant`|
|[CComVariant::GetSize](#getsize)|Restituisce la dimensione in numero di `CComVariant` byte del contenuto dell'oggetto.|
|[CComVariant::ReadFromStream](#readfromstream)|Carica un VARIANT da un flusso.|
|[CComVariant::SetByRef](#setbyref)|Inizializza l'oggetto `CComVariant` e `vt` imposta il membro su VT_BYREF.|
|[CComVariant::WriteToStream](#writetostream)|Salva l'oggetto VARIANT sottostante in un flusso.|

### <a name="public-operators"></a>Operatori pubblici

|||
|-|-|
|[CComVariant::operatore <](#operator_lt)|Indica se `CComVariant` l'oggetto è minore dell'oggetto VARIANT specificato.|
|[CComVariant::operatore >](#operator_gt)|Indica se `CComVariant` l'oggetto è maggiore dell'oggetto VARIANT specificato.|
|[Operatore !](#operator_neq)|Indica se `CComVariant` l'oggetto non è uguale all'oggetto VARIANT specificato.|
|[operatore .](#operator_eq)|Assegna un valore `CComVariant` all'oggetto.|
|[operatore .](#operator_eq_eq)|Indica se `CComVariant` l'oggetto è uguale all'oggetto VARIANT specificato.|

## <a name="remarks"></a>Osservazioni

`CComVariant`esegue il wrapping del tipo VARIANT e VARIANTARG, costituito da un'unione e da un membro che indica il tipo di dati archiviati nell'unione. I VARIANT vengono in genere utilizzati nell'automazione.

`CComVariant`deriva dal tipo VARIANT in modo che possa essere utilizzato ovunque un VARIANT possa essere utilizzato. È possibile, ad esempio, utilizzare la macro `CComVariant` V_VT per estrarre `vt` il tipo di a oppure è possibile accedere direttamente al membro come con un VARIANT.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`tagVARIANT`

`CComVariant`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcomcli.h

## <a name="ccomvariantattach"></a><a name="attach"></a>CComVariant::Attach

Cancella in modo sicuro `CComVariant` il contenuto corrente dell'oggetto, copia il contenuto di *pSrc* in questo oggetto, quindi imposta il tipo di variante di *pSrc* su VT_EMPTY.

```
HRESULT Attach(VARIANT* pSrc);
```

### <a name="parameters"></a>Parametri

*pSrc*<br/>
[in] Punta al [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant) da associare all'oggetto.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

La proprietà dei dati contenuti in *pSrc* viene trasferita all'oggetto. `CComVariant`

## <a name="ccomvariantccomvariant"></a><a name="ccomvariant"></a>CComVariant::CComVariant

Ogni costruttore gestisce `CComVariant` l'inizializzazione `VariantInit` sicura dell'oggetto chiamando la funzione Win32 o impostando il valore e il tipo dell'oggetto in base ai parametri passati.

```
CComVariant() throw();
CComVariant(const CComVariant& varSrc);
CComVariant(const VARIANT& varSrc);
CComVariant(LPCOLESTR lpszSrc);
CComVariant(LPCSTR lpszSrc);
CComVariant(bool bSrc);
CComVariant(BYTE nSrc) throw();
CComVariant(int nSrc, VARTYPE vtSrc = VT_I4) throw();
CComVariant(unsigned int  nSrc, VARTYPE vtSrc = VT_UI4) throw();
CComVariant(shor  nSrc) throw();
CComVariant(unsigned short nSrc) throw();
CComVariant(long  nSrc, VARTYPE vtSrc = VT_I4) throw();
CComVariant(unsigned long  nSrc) throw();
CComVariant(LONGLONG  nSrc) throw();
CComVariant(ULONGLONG  nSrc) throw();
CComVariant(float  fltSrc) throw();
CComVariant(double  dblSrc, VARTYPE vtSrc = VT_R8) throw();
CComVariant(CY  cySrc) throw();
CComVariant(IDispatch* pSrc) throw();
CComVariant(IUnknown* pSrc) throw();
CComVariant(const SAFEARRAY* pSrc);
CComVariant(char  cSrc) throw();
CComVariant(const CComBSTR& bstrSrc);
```

### <a name="parameters"></a>Parametri

*varSrc*<br/>
[in] O `CComVariant` VARIANT utilizzato per `CComVariant` inizializzare l'oggetto. Il contenuto della variante di origine viene copiato nella destinazione senza conversione.

*lpszSrc*<br/>
[in] Stringa di caratteri utilizzata `CComVariant` per inizializzare l'oggetto. È possibile passare una stringa di caratteri con terminazione zero (Unicode) alla versione LPCOLESTR del costruttore o una stringa ANSI alla versione LPCSTR. In entrambi i casi la stringa viene `SysAllocString`convertita in un valore Unicode BSTR allocato utilizzando . Il tipo `CComVariant` dell'oggetto verrà VT_BSTR.

*bSrc*<br/>
[in] Valore **bool** utilizzato `CComVariant` per inizializzare l'oggetto. L'argomento **bool** viene convertito in un VARIANT_BOOL prima di essere archiviato. Il tipo `CComVariant` dell'oggetto verrà VT_BOOL.

*nSrc (in modo src)*<br/>
[in] **int**, **BYTE**, **short**, **long**, LONGLONG , ULONGLONG , **unsigned short**, **unsigned long**o **unsigned int** utilizzato per inizializzare l'oggetto. `CComVariant` Il tipo `CComVariant` dell'oggetto sarà rispettivamente VT_I4, VT_UI1, VT_I2, VT_I4, VT_I8, VT_UI8, VT_UI2, VT_UI4 o VT_UI4.

*vtSrc*<br/>
[in] Tipo della variante. Quando il primo parametro è **int**, i tipi validi vengono VT_I4 e VT_INT. Quando il primo parametro è **long**, i tipi validi vengono VT_I4 e VT_ERROR. Quando il primo parametro è **double**, i tipi validi vengono VT_R8 e VT_DATE. Quando il primo parametro è **unsigned int**, vengono VT_UI4 tipi validi e VT_UINT.

*fltSrc*<br/>
[in] Float **float** utilizzato per `CComVariant` inizializzare l'oggetto. Il tipo `CComVariant` dell'oggetto verrà VT_R4.

*dblSrc*<br/>
[in] Valore **double** utilizzato `CComVariant` per inizializzare l'oggetto. Il tipo `CComVariant` dell'oggetto verrà VT_R8.

*CySrc*<br/>
[in] Oggetto `CY` utilizzato per `CComVariant` inizializzare l'oggetto. Il tipo `CComVariant` dell'oggetto verrà VT_CY.

*pSrc*<br/>
[in] Puntatore `IDispatch` o utilizzato per inizializzare l'oggetto. `CComVariant` `IUnknown` `AddRef`verrà chiamato sul puntatore a interfaccia. Il tipo `CComVariant` dell'oggetto verrà VT_DISPATCH o VT_UNKNOWN, rispettivamente.

In alternativa, il puntatore `CComVariant` SAFERRAY utilizzato per inizializzare l'oggetto. Una copia di SAFEARRAY viene `CComVariant` memorizzata nell'oggetto. Il tipo `CComVariant` dell'oggetto sarà una combinazione del tipo originale di SAFEARRAY e VT_ARRAY.

*cSrc*<br/>
[in] Char **char** utilizzato per `CComVariant` inizializzare l'oggetto. Il tipo `CComVariant` dell'oggetto verrà VT_I1.

*bstrSrc*<br/>
[in] BSTR utilizzato per `CComVariant` inizializzare l'oggetto. Il tipo `CComVariant` dell'oggetto verrà VT_BSTR.

### <a name="remarks"></a>Osservazioni

Il distruttore gestisce la pulizia chiamando [CComVariant::Clear](#clear).

## <a name="ccomvariantccomvariant"></a><a name="dtor"></a>CComVariant:: CComVariant

Distruttore.

```
~CComVariant() throw();
```

### <a name="remarks"></a>Osservazioni

Questo metodo gestisce la pulizia chiamando [CComVariant::Clear](#clear).

## <a name="ccomvariantchangetype"></a><a name="changetype"></a>CComVariant::ChangeType

Converte `CComVariant` l'oggetto in un nuovo tipo.

```
HRESULT ChangeType(VARTYPE vtNew, const VARIANT* pSrc = NULL);
```

### <a name="parameters"></a>Parametri

*VtNuovo (informazioni in base al sistema*<br/>
[in] Nuovo tipo per `CComVariant` l'oggetto.

*pSrc*<br/>
[in] Puntatore al VARIANT il cui valore verrà convertito nel nuovo tipo. Il valore predefinito è `CComVariant` NULL, ovvero l'oggetto verrà convertito sul posto.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Se si passa un valore `ChangeType` per *pSrc*, verrà utilizzato VARIANT come origine per la conversione. In caso `CComVariant` contrario, l'oggetto sarà l'origine.

## <a name="ccomvariantclear"></a><a name="clear"></a>CComVariant::Clear

Cancella l'oggetto `CComVariant` chiamando `VariantClear` la funzione Win32.

```
HRESULT Clear();
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Il distruttore chiama `Clear`automaticamente .

## <a name="ccomvariantcopy"></a><a name="copy"></a>CComVariant::Copia

Libera l'oggetto `CComVariant` e quindi gli assegna una copia dell'oggetto VARIANT specificato.

```
HRESULT Copy(const VARIANT* pSrc);
```

### <a name="parameters"></a>Parametri

*pSrc*<br/>
[in] Puntatore al [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant) da copiare.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="ccomvariantcopyto"></a><a name="copyto"></a>CComVariant::CopyTo

Copia il contenuto `CComVariant` dell'oggetto.

```
HRESULT CopyTo(BSTR* pstrDest);
```

### <a name="parameters"></a>Parametri

*pstrDest*<br/>
Punta a un BSTR che riceverà una `CComVariant` copia del contenuto dell'oggetto.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'oggetto `CComVariant` deve essere di tipo VT_BSTR.

## <a name="ccomvariantdetach"></a><a name="detach"></a>CComVariant::Detach

Scollega il VARIANT sottostante dall'oggetto `CComVariant` e imposta il tipo dell'oggetto su VT_EMPTY.

```
HRESULT Detach(VARIANT* pDest);
```

### <a name="parameters"></a>Parametri

*pDest*<br/>
[fuori] Restituisce il valore VARIANT sottostante dell'oggetto.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Si noti che il contenuto del VARIANT a cui fa riferimento *pDest* `CComVariant` verrà automaticamente cancellato prima di essere assegnato il valore e il tipo dell'oggetto chiamante.

## <a name="ccomvariantgetsize"></a><a name="getsize"></a>CComVariant::GetSize

Per le dimensioni semplici, questo metodo restituisce la **dimensione del** tipo di dati sottostante più **sizeof(VARTYPE)**.

```
ULONG GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Dimensione in byte del contenuto `CComVariant` corrente dell'oggetto.

### <a name="remarks"></a>Osservazioni

Se il VARIANT contiene `GetSize` un `IPersistStream` puntatore a interfaccia, esegue una query for o `IPersistStreamInit`. In caso di esito positivo, il valore restituito è i `GetSizeMax` 32 bit meno ordinato del valore restituito da più la **dimensione di** un CLSID e **sizeof(VARTYPE)**. Se il puntatore `GetSize` a interfaccia è NULL, restituisce il **valore sizeof** di un CLSID più **sizeof(VARTYPE)**. Se la dimensione totale è `GetSize` maggiore di ULONG_MAX, restituisce **sizeof(VARTYPE)** che indica un errore.

In tutti gli altri casi, un VARIANT temporaneo di tipo VT_BSTR è coercito dall'attuale VARIANT. La lunghezza di questo BSTR viene calcolata come la dimensione della lunghezza della stringa più la lunghezza della stringa stessa più la dimensione del carattere null più **sizeof(VARTYPE)**. Se non è possibile usare il valore VARIANT `GetSize` a un valore VARIANT di tipo VT_BSTR, restituisce **sizeof(VARTYPE)**.

La dimensione restituita da questo metodo corrisponde al numero di byte utilizzati da [CComVariant::WriteToStream](#writetostream) in condizioni di esito positivo.

## <a name="ccomvariantoperator-"></a><a name="operator_eq"></a>CComVariant::operatore

Assegna un valore e il `CComVariant` tipo corrispondente all'oggetto.

```
CComVariant& operator=(const CComVariant& varSrc);
CComVariant& operator=(const VARIANT& varSrc);
CComVariant& operator=(const CComBSTR& bstrSrc);
CComVariant& operator=(LPCOLESTR lpszSrc);
CComVariant& operator=(LPCSTR lpszSrc);
CComVariant& operator=(bool bSrc);
CComVariant& operator=(BYTE nSrc) throw();
CComVariant& operator=int nSrc) throw();
CComVariant& operator=(unsigned int nSrc) throw();
CComVariant& operator=(short nSrc) throw();
CComVariant& operator=(unsigned short nSrc) throw();
CComVariant& operator=(long nSrc) throw();
CComVariant& operator=(unsigned long nSrc) throw();
CComVariant& operator=(LONGLONG nSrc) throw();
CComVariant& operator=(ULONGLONG nSrc) throw();
CComVariant& operator=(float fltSrc) throw();
CComVariant& operator=(double dblSrc) throw();
CComVariant& operator=(CY cySrc) throw();
CComVariant& operator=(IDispatch* pSrc) throw();
CComVariant& operator=(IUnknown* pSrc) throw();
CComVariant& operator=(const SAFEARRAY* pSrc);
CComVariant& operator=(char cSrc) throw();
```

### <a name="parameters"></a>Parametri

*varSrc*<br/>
[in] O `CComVariant` [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant) da assegnare `CComVariant` all'oggetto. Il contenuto della variante di origine viene copiato nella destinazione senza conversione.

*bstrSrc*<br/>
[in] BSTR da assegnare `CComVariant` all'oggetto. Il tipo `CComVariant` dell'oggetto verrà VT_BSTR.

*lpszSrc*<br/>
[in] Stringa di caratteri da `CComVariant` assegnare all'oggetto. È possibile passare una stringa di caratteri wide (Unicode) con terminazione zero alla versione LPCOLESTR dell'operatore o una stringa ANSI alla versione LPCSTR. In entrambi i casi, la stringa viene `SysAllocString`convertita in un valore Unicode BSTR allocato utilizzando . Il tipo `CComVariant` dell'oggetto verrà VT_BSTR.

*bSrc*<br/>
[in] **Bool** da assegnare `CComVariant` all'oggetto. L'argomento **bool** viene convertito in un VARIANT_BOOL prima di essere archiviato. Il tipo `CComVariant` dell'oggetto verrà VT_BOOL.

*nSrc (in modo src)*<br/>
[in] **int**, BYTE, **short**, **long**, LONGLONG, ULONGLONG , **unsigned short**, **unsigned long**o **unsigned int** da assegnare all'oggetto. `CComVariant` Il tipo `CComVariant` dell'oggetto sarà rispettivamente VT_I4, VT_UI1, VT_I2, VT_I4, VT_I8, VT_UI8, VT_UI2, VT_UI4 o VT_UI4.

*fltSrc*<br/>
[in] Valore **float** da assegnare all'oggetto. `CComVariant` Il tipo `CComVariant` dell'oggetto verrà VT_R4.

*dblSrc*<br/>
[in] Doppio **double** da assegnare `CComVariant` all'oggetto. Il tipo `CComVariant` dell'oggetto verrà VT_R8.

*CySrc*<br/>
[in] Oggetto `CY` da assegnare `CComVariant` all'oggetto. Il tipo `CComVariant` dell'oggetto verrà VT_CY.

*pSrc*<br/>
[in] `IDispatch` Puntatore `IUnknown` o da assegnare all'oggetto. `CComVariant` `AddRef`verrà chiamato sul puntatore a interfaccia. Il tipo `CComVariant` dell'oggetto verrà VT_DISPATCH o VT_UNKNOWN, rispettivamente.

In alternativa, un puntatore SAFEARRAY da assegnare all'oggetto. `CComVariant` Una copia di SAFEARRAY viene `CComVariant` memorizzata nell'oggetto. Il tipo `CComVariant` dell'oggetto sarà una combinazione del tipo originale di SAFEARRAY e VT_ARRAY.

*cSrc*<br/>
[in] Char da assegnare `CComVariant` all'oggetto. Il tipo `CComVariant` dell'oggetto verrà VT_I1.

## <a name="ccomvariantoperator-"></a><a name="operator_eq_eq"></a>CComVariant::operatore

Indica se `CComVariant` l'oggetto è uguale all'oggetto VARIANT specificato.

```
bool operator==(const VARIANT& varSrc) const throw();
```

### <a name="remarks"></a>Osservazioni

Restituisce TRUE se il valore e il tipo di *varSrc* sono `CComVariant` uguali al valore e al tipo, rispettivamente, dell'oggetto. In caso contrario, FALSE. L'operatore utilizza le impostazioni locali predefinite dell'utente per eseguire il confronto.

L'operatore confronta solo il valore dei tipi variant. Confronta stringhe, numeri interi e a virgola mobile, ma non matrici o record.

## <a name="ccomvariantoperator-"></a><a name="operator_neq"></a>CComVariant::operatore !

Indica se `CComVariant` l'oggetto non è uguale all'oggetto VARIANT specificato.

```
bool operator!=(const VARIANT& varSrc) const throw();
```

### <a name="remarks"></a>Osservazioni

Restituisce TRUE se il valore o il tipo di *varSrc* non è `CComVariant` uguale al valore o al tipo, rispettivamente, dell'oggetto. In caso contrario, FALSE. L'operatore utilizza le impostazioni locali predefinite dell'utente per eseguire il confronto.

L'operatore confronta solo il valore dei tipi variant. Confronta stringhe, numeri interi e a virgola mobile, ma non matrici o record.

## <a name="ccomvariantoperator-lt"></a><a name="operator_lt"></a>CComVariant::operatore&lt;

Indica se `CComVariant` l'oggetto è minore dell'oggetto VARIANT specificato.

```
bool operator<(const VARIANT& varSrc) const throw();
```

### <a name="remarks"></a>Osservazioni

Restituisce TRUE se `CComVariant` il valore dell'oggetto è minore del valore di *varSrc*. In caso contrario, FALSE. L'operatore utilizza le impostazioni locali predefinite dell'utente per eseguire il confronto.

## <a name="ccomvariantoperator-gt"></a><a name="operator_gt"></a>CComVariant::operatore&gt;

Indica se `CComVariant` l'oggetto è maggiore dell'oggetto VARIANT specificato.

```
bool operator>(const VARIANT& varSrc) const throw();
```

### <a name="remarks"></a>Osservazioni

Restituisce TRUE se `CComVariant` il valore dell'oggetto è maggiore del valore di *varSrc*. In caso contrario, FALSE. L'operatore utilizza le impostazioni locali predefinite dell'utente per eseguire il confronto.

## <a name="ccomvariantreadfromstream"></a><a name="readfromstream"></a>CComVariant::ReadFromStream

Imposta il VALORE VARIANT sottostante sul VARIANT contenuto nel flusso specificato.

```
HRESULT ReadFromStream(IStream* pStream);
```

### <a name="parameters"></a>Parametri

*pStream (corso)*<br/>
[in] Puntatore all'interfaccia [IStream](/windows/win32/api/objidl/nn-objidl-istream) nel flusso contenente i dati.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

`ReadToStream`richiede una chiamata precedente a [WriteToStream](#writetostream).

## <a name="ccomvariantsetbyref"></a><a name="setbyref"></a>CComVariant::SetByRef

Inizializza l'oggetto `CComVariant` e `vt` imposta il membro su VT_BYREF.

```
template < typename T >
void SetByRef(T* pT) throw();
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di VARIANT, ad esempio BSTR, **int**o **char**.

*Pt*<br/>
Puntatore utilizzato per `CComVariant` inizializzare l'oggetto.

### <a name="remarks"></a>Osservazioni

`SetByRef`è un modello di `CComVariant` funzione che inizializza l'oggetto `vt` al puntatore *pT* e imposta il membro su VT_BYREF. Ad esempio:

[!code-cpp[NVC_ATL_Utilities#76](../../atl/codesnippet/cpp/ccomvariant-class_1.cpp)]

## <a name="ccomvariantwritetostream"></a><a name="writetostream"></a>CComVariant::WriteToStream

Salva l'oggetto VARIANT sottostante in un flusso.

```
HRESULT WriteToStream(IStream* pStream);
```

### <a name="parameters"></a>Parametri

*pStream (corso)*<br/>
[in] Puntatore all'interfaccia [IStream](/windows/win32/api/objidl/nn-objidl-istream) in un flusso.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
