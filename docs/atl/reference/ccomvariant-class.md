---
title: Classe CComVariant
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
ms.openlocfilehash: b4c157435aaffab5f1315fd4636f55f9d4e0d5b4
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69496870"
---
# <a name="ccomvariant-class"></a>Classe CComVariant

Questa classe esegue il wrapping del tipo VARIANT, fornendo un membro che indica il tipo di dati archiviati.

## <a name="syntax"></a>Sintassi

```cpp
class CComVariant : public tagVARIANT
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComVariant::CComVariant](#ccomvariant)|Costruttore.|
|[CComVariant::~CComVariant](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComVariant::Attach](#attach)|Connette una variante all' `CComVariant` oggetto.|
|[CComVariant::ChangeType](#changetype)|Converte l' `CComVariant` oggetto in un nuovo tipo.|
|[CComVariant::Clear](#clear)|Cancella l' `CComVariant` oggetto.|
|[CComVariant::Copy](#copy)|Copia un VARIANT nell' `CComVariant` oggetto.|
|[CComVariant::CopyTo](#copyto)|Copia il contenuto dell' `CComVariant` oggetto.|
|[CComVariant::Detach](#detach)|Scollega la variante sottostante dall' `CComVariant` oggetto.|
|[CComVariant::GetSize](#getsize)|Restituisce la dimensione del numero di byte del contenuto dell' `CComVariant` oggetto.|
|[CComVariant::ReadFromStream](#readfromstream)|Carica un VARIANT da un flusso.|
|[CComVariant::SetByRef](#setbyref)|Inizializza l' `CComVariant` oggetto e imposta il `vt` membro su VT_BYREF.|
|[CComVariant::WriteToStream](#writetostream)|Salva la variante sottostante in un flusso.|

### <a name="public-operators"></a>Operatori pubblici

|||
|-|-|
|[< CComVariant:: operator](#operator_lt)|Indica se l' `CComVariant` oggetto è minore della variante specificata.|
|[> CComVariant:: operator](#operator_gt)|Indica se l' `CComVariant` oggetto è maggiore della variante specificata.|
|[operatore! =](#operator_neq)|Indica se l' `CComVariant` oggetto non è uguale alla variante specificata.|
|[operatore =](#operator_eq)|Assegna un valore all' `CComVariant` oggetto.|
|[operatore = =](#operator_eq_eq)|Indica se l' `CComVariant` oggetto è uguale alla variante specificata.|

## <a name="remarks"></a>Note

`CComVariant`esegue il wrapping del tipo VARIANT e VARIANTARG, che è costituito da un'Unione e da un membro che indica il tipo dei dati archiviati nell'Unione. Le varianti vengono in genere usate in automazione.

`CComVariant`deriva dal tipo VARIANT, in modo che possa essere usato ovunque sia possibile usare una variante. È possibile, ad esempio, usare la macro V_VT per estrarre il tipo di un `CComVariant` oggetto oppure è possibile accedere `vt` direttamente al membro, esattamente come è possibile con una variante.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`tagVARIANT`

`CComVariant`

## <a name="requirements"></a>Requisiti

**Intestazione:** Atlcomcli. h

##  <a name="attach"></a>CComVariant:: Connetti

Cancella in modo sicuro il contenuto corrente dell' `CComVariant` oggetto, copia il contenuto di *pSrc* in questo oggetto, quindi imposta il tipo Variant di *pSrc* su VT_EMPTY.

```
HRESULT Attach(VARIANT* pSrc);
```

### <a name="parameters"></a>Parametri

*pSrc*<br/>
in Punta alla [variante](/windows/win32/api/oaidl/ns-oaidl-variant) da collegare all'oggetto.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

La proprietà dei dati contenuti da *pSrc* viene trasferita all' `CComVariant` oggetto.

##  <a name="ccomvariant"></a>  CComVariant::CComVariant

Ogni costruttore gestisce l'inizializzazione sicura dell' `CComVariant` oggetto chiamando la `VariantInit` funzione Win32 o impostando il valore e il tipo dell'oggetto in base ai parametri passati.

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
in Variant o utilizzato per inizializzare l' `CComVariant` oggetto. `CComVariant` Il contenuto della variante di origine viene copiato nella destinazione senza conversione.

*lpszSrc*<br/>
in Stringa di caratteri utilizzata per inizializzare `CComVariant` l'oggetto. È possibile passare una stringa di caratteri wide (Unicode) con terminazione zero alla versione LPCOLESTR del costruttore o una stringa ANSI alla versione LPCSTR. In entrambi i casi, la stringa viene convertita in un BSTR `SysAllocString`Unicode allocato usando. Il tipo dell' `CComVariant` oggetto sarà VT_BSTR.

*bSrc*<br/>
in **Bool** utilizzato per inizializzare l' `CComVariant` oggetto. L'argomento **bool** viene convertito in un VARIANT_BOOL prima di essere archiviato. Il tipo dell' `CComVariant` oggetto sarà VT_BOOL.

*nSrc*<br/>
in **Int**, **byte**, **short**, **Long**, LONGLONG, ULONGLONG, unsigned **short**, **unsigned long**o **unsigned int** usati per inizializzare l' `CComVariant` oggetto. Il tipo dell' `CComVariant` oggetto sarà VT_I4, VT_UI1, VT_I2, VT_I4, VT_I8, VT_UI8, VT_UI2, VT_UI4 o VT_UI4 rispettivamente.

*vtSrc*<br/>
in Tipo della variante. Quando il primo parametro è **int**, i tipi validi sono VT_I4 e VT_INT. Quando il primo parametro è **Long**, i tipi validi sono VT_I4 e VT_ERROR. Quando il primo parametro è **Double**, i tipi validi sono VT_R8 e VT_DATE. Quando il primo parametro è **unsigned int**, i tipi validi sono VT_UI4 e VT_UINT.

*fltSrc*<br/>
in **Float** utilizzato per inizializzare l' `CComVariant` oggetto. Il tipo dell' `CComVariant` oggetto sarà VT_R4.

*dblSrc*<br/>
in **Double** utilizzato per inizializzare l' `CComVariant` oggetto. Il tipo dell' `CComVariant` oggetto sarà VT_R8.

*cySrc*<br/>
in Oggetto utilizzato per inizializzare `CComVariant` l'oggetto. `CY` Il tipo dell' `CComVariant` oggetto sarà VT_CY.

*pSrc*<br/>
in Puntatore `IDispatch` o `IUnknown` utilizzato per inizializzare l' `CComVariant` oggetto. `AddRef`verrà chiamato sul puntatore a interfaccia. Il tipo dell' `CComVariant` oggetto sarà VT_DISPATCH o VT_UNKNOWN, rispettivamente.

O, il puntatore SAFERRAY usato per inizializzare `CComVariant` l'oggetto. Una copia di SafeArray viene archiviata nell' `CComVariant` oggetto. Il tipo dell' `CComVariant` oggetto sarà una combinazione del tipo originale di SAFEARRAY e VT_ARRAY.

*cSrc*<br/>
in Il **carattere** utilizzato per inizializzare `CComVariant` l'oggetto. Il tipo dell' `CComVariant` oggetto sarà VT_I1.

*bstrSrc*<br/>
in BSTR utilizzato per inizializzare l' `CComVariant` oggetto. Il tipo dell' `CComVariant` oggetto sarà VT_BSTR.

### <a name="remarks"></a>Note

Il distruttore gestisce la pulizia chiamando [CComVariant:: Clear](#clear).

##  <a name="dtor"></a>CComVariant:: ~ CComVariant

Distruttore.

```
~CComVariant() throw();
```

### <a name="remarks"></a>Note

Questo metodo gestisce la pulizia chiamando [CComVariant:: Clear](#clear).

##  <a name="changetype"></a>  CComVariant::ChangeType

Converte l' `CComVariant` oggetto in un nuovo tipo.

```
HRESULT ChangeType(VARTYPE vtNew, const VARIANT* pSrc = NULL);
```

### <a name="parameters"></a>Parametri

*vtNew*<br/>
in Nuovo tipo per l' `CComVariant` oggetto.

*pSrc*<br/>
in Puntatore alla variante il cui valore verrà convertito nel nuovo tipo. Il valore predefinito è null, ovvero l' `CComVariant` oggetto verrà convertito sul posto.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

Se si passa un valore per *pSrc*, `ChangeType` utilizzerà questo VARIANT come origine per la conversione. In caso contrario `CComVariant` , l'oggetto sarà il codice sorgente.

##  <a name="clear"></a>CComVariant:: Clear

Cancella l' `CComVariant` oggetto chiamando la `VariantClear` funzione Win32.

```
HRESULT Clear();
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

Il distruttore chiama `Clear`automaticamente.

##  <a name="copy"></a>  CComVariant::Copy

Libera l' `CComVariant` oggetto e quindi lo assegna una copia della variante specificata.

```
HRESULT Copy(const VARIANT* pSrc);
```

### <a name="parameters"></a>Parametri

*pSrc*<br/>
in Puntatore alla [variante](/windows/win32/api/oaidl/ns-oaidl-variant) da copiare.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

##  <a name="copyto"></a>  CComVariant::CopyTo

Copia il contenuto dell' `CComVariant` oggetto.

```
HRESULT CopyTo(BSTR* pstrDest);
```

### <a name="parameters"></a>Parametri

*pstrDest*<br/>
Punta a un BSTR che riceve una copia del contenuto dell' `CComVariant` oggetto.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L' `CComVariant` oggetto deve essere di tipo VT_BSTR.

##  <a name="detach"></a>  CComVariant::Detach

Scollega la variante sottostante dall' `CComVariant` oggetto e imposta il tipo dell'oggetto su VT_EMPTY.

```
HRESULT Detach(VARIANT* pDest);
```

### <a name="parameters"></a>Parametri

*pDest*<br/>
out Restituisce il valore VARIANT sottostante dell'oggetto.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

Si noti che il contenuto del variant a cui viene fatto riferimento da *pDest* verrà cancellato automaticamente prima di essere assegnato il valore e il `CComVariant` tipo dell'oggetto chiamante.

##  <a name="getsize"></a>  CComVariant::GetSize

Per le varianti a dimensione fissa semplice, questo metodo restituisce **sizeof** il tipo di dati sottostante più **sizeof (VARTYPE)** .

```
ULONG GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Dimensioni in byte del contenuto corrente dell' `CComVariant` oggetto.

### <a name="remarks"></a>Note

Se la variante contiene un puntatore a interfaccia `GetSize` , esegue `IPersistStream` una `IPersistStreamInit`query per o. In caso di esito positivo, il valore restituito è il bit 32 di ordine inferiore del `GetSizeMax` valore restituito da e **sizeof** a CLSID e **sizeof (VARTYPE)** . Se il puntatore di interfaccia è null `GetSize` , restituisce **sizeof** a CLSID più **sizeof (VARTYPE)** . Se la dimensione totale è maggiore di ULONG_MAX, `GetSize` restituisce **sizeof (VARTYPE)** che indica un errore.

In tutti gli altri casi, una variante temporanea di tipo VT_BSTR viene forzata dalla variante corrente. La lunghezza di questo BSTR viene calcolata come dimensione della lunghezza della stringa più la lunghezza della stringa stessa più le dimensioni del carattere null più **sizeof (VARTYPE)** . Se il VARIANT non può essere assegnato a una variante di tipo VT_BSTR, `GetSize` restituisce **sizeof (VARTYPE)** .

Le dimensioni restituite da questo metodo corrispondono al numero di byte utilizzati da [CComVariant:: WriteToStream](#writetostream) in condizioni di esito positivo.

##  <a name="operator_eq"></a>CComVariant:: operator =

Assegna un valore e un tipo corrispondente all' `CComVariant` oggetto.

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
[in] `CComVariant` o [variante](/windows/win32/api/oaidl/ns-oaidl-variant) in Variante o da assegnare all' `CComVariant` oggetto. Il contenuto della variante di origine viene copiato nella destinazione senza conversione.

*bstrSrc*<br/>
in BSTR da assegnare all' `CComVariant` oggetto. Il tipo dell' `CComVariant` oggetto sarà VT_BSTR.

*lpszSrc*<br/>
in Stringa di caratteri da assegnare all' `CComVariant` oggetto. È possibile passare una stringa di caratteri wide (Unicode) con terminazione zero alla versione LPCOLESTR dell'operatore o una stringa ANSI alla versione LPCSTR. In entrambi i casi, la stringa viene convertita in un BSTR Unicode `SysAllocString`allocato usando. Il tipo dell' `CComVariant` oggetto sarà VT_BSTR.

*bSrc*<br/>
in **Bool** da assegnare all' `CComVariant` oggetto. L'argomento **bool** viene convertito in un VARIANT_BOOL prima di essere archiviato. Il tipo dell' `CComVariant` oggetto sarà VT_BOOL.

*nSrc*<br/>
in **Int**, byte, **short**, **Long**, LONGLONG, ULONGLONG, unsigned **short**, **unsigned long**o **unsigned int** da assegnare all' `CComVariant` oggetto. Il tipo dell' `CComVariant` oggetto sarà VT_I4, VT_UI1, VT_I2, VT_I4, VT_I8, VT_UI8, VT_UI2, VT_UI4 o VT_UI4 rispettivamente.

*fltSrc*<br/>
in **Float** da assegnare all' `CComVariant` oggetto. Il tipo dell' `CComVariant` oggetto sarà VT_R4.

*dblSrc*<br/>
in **Double** da assegnare all' `CComVariant` oggetto. Il tipo dell' `CComVariant` oggetto sarà VT_R8.

*cySrc*<br/>
in `CComVariant` Oggetto `CY` da assegnare all'oggetto. Il tipo dell' `CComVariant` oggetto sarà VT_CY.

*pSrc*<br/>
in Puntatore `IDispatch` o `IUnknown` da`CComVariant` assegnare all'oggetto. `AddRef`verrà chiamato sul puntatore a interfaccia. Il tipo dell' `CComVariant` oggetto sarà VT_DISPATCH o VT_UNKNOWN, rispettivamente.

O, un puntatore SAFEARRAY da assegnare all' `CComVariant` oggetto. Una copia di SafeArray viene archiviata nell' `CComVariant` oggetto. Il tipo dell' `CComVariant` oggetto sarà una combinazione del tipo originale di SAFEARRAY e VT_ARRAY.

*cSrc*<br/>
in Carattere da assegnare all' `CComVariant` oggetto. Il tipo dell' `CComVariant` oggetto sarà VT_I1.

##  <a name="operator_eq_eq"></a>CComVariant:: operator = =

Indica se l' `CComVariant` oggetto è uguale alla variante specificata.

```
bool operator==(const VARIANT& varSrc) const throw();
```

### <a name="remarks"></a>Note

Restituisce true se il valore e il tipo di *varSrc* sono uguali al valore e al tipo rispettivamente dell' `CComVariant` oggetto. In caso contrario, FALSE. L'operatore utilizza le impostazioni locali predefinite dell'utente per eseguire il confronto.

L'operatore confronta solo il valore dei tipi Variant. Vengono confrontate le stringhe, i numeri interi e i punti a virgola mobile, ma non le matrici o i record.

##  <a name="operator_neq"></a>CComVariant:: operator! =

Indica se l' `CComVariant` oggetto non è uguale alla variante specificata.

```
bool operator!=(const VARIANT& varSrc) const throw();
```

### <a name="remarks"></a>Note

Restituisce true se il valore o il tipo di *varSrc* non è uguale al valore o al tipo, rispettivamente, dell' `CComVariant` oggetto. In caso contrario, FALSE. L'operatore utilizza le impostazioni locali predefinite dell'utente per eseguire il confronto.

L'operatore confronta solo il valore dei tipi Variant. Vengono confrontate le stringhe, i numeri interi e i punti a virgola mobile, ma non le matrici o i record.

##  <a name="operator_lt"></a>Operatore CComVariant::&lt;

Indica se l' `CComVariant` oggetto è minore della variante specificata.

```
bool operator<(const VARIANT& varSrc) const throw();
```

### <a name="remarks"></a>Note

Restituisce true se il valore dell' `CComVariant` oggetto è minore del valore di *varSrc*. In caso contrario, FALSE. L'operatore utilizza le impostazioni locali predefinite dell'utente per eseguire il confronto.

##  <a name="operator_gt"></a>Operatore CComVariant::&gt;

Indica se l' `CComVariant` oggetto è maggiore della variante specificata.

```
bool operator>(const VARIANT& varSrc) const throw();
```

### <a name="remarks"></a>Note

Restituisce true se il valore dell' `CComVariant` oggetto è maggiore del valore di *varSrc*. In caso contrario, FALSE. L'operatore utilizza le impostazioni locali predefinite dell'utente per eseguire il confronto.

##  <a name="readfromstream"></a>  CComVariant::ReadFromStream

Imposta la variante sottostante sulla variante contenuta nel flusso specificato.

```
HRESULT ReadFromStream(IStream* pStream);
```

### <a name="parameters"></a>Parametri

*pStream*<br/>
in Puntatore all'interfaccia [IStream](/windows/win32/api/objidl/nn-objidl-istream) sul flusso contenente i dati.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

`ReadToStream`richiede una chiamata precedente a [WriteToStream](#writetostream).

##  <a name="setbyref"></a>  CComVariant::SetByRef

Inizializza l' `CComVariant` oggetto e imposta il `vt` membro su VT_BYREF.

```
template < typename T >
void SetByRef(T* pT) throw();
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di VARIANT, ad esempio BSTR, **int**o **char**.

*pT*<br/>
Puntatore utilizzato per inizializzare l' `CComVariant` oggetto.

### <a name="remarks"></a>Note

`SetByRef`è un modello di funzione che inizializza `CComVariant` l'oggetto sul puntatore *PT* e imposta il `vt` membro su VT_BYREF. Ad esempio:

[!code-cpp[NVC_ATL_Utilities#76](../../atl/codesnippet/cpp/ccomvariant-class_1.cpp)]

##  <a name="writetostream"></a>  CComVariant::WriteToStream

Salva la variante sottostante in un flusso.

```
HRESULT WriteToStream(IStream* pStream);
```

### <a name="parameters"></a>Parametri

*pStream*<br/>
in Puntatore all'interfaccia [IStream](/windows/win32/api/objidl/nn-objidl-istream) in un flusso.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
