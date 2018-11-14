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
ms.openlocfilehash: 6a6ad49533028dbcb8c45b63c55a51090533137e
ms.sourcegitcommit: afd6fac7c519dbc47a4befaece14a919d4e0a8a2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2018
ms.locfileid: "51522488"
---
# <a name="ccomvariant-class"></a>Classe CComVariant

Questa classe esegue il wrapping di tipo VARIANT, fornendo un membro che indica il tipo di dati archiviati.

## <a name="syntax"></a>Sintassi

```cpp
class CComVariant : public tagVARIANT
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComVariant::CComVariant](#ccomvariant)|Costruttore.|
|[CComVariant:: ~ CComVariant](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComVariant::Attach](#attach)|Collega a una variante di `CComVariant` oggetto.|
|[CComVariant::ChangeType](#changetype)|Converte il `CComVariant` oggetto in un nuovo tipo.|
|[CComVariant::Clear](#clear)|Cancella il `CComVariant` oggetto.|
|[CComVariant::Copy](#copy)|Copia una variante al `CComVariant` oggetto.|
|[CComVariant::CopyTo](#copyto)|Copia il contenuto del `CComVariant` oggetto.|
|[CComVariant::Detach](#detach)|Scollega la variante sottostante dal `CComVariant` oggetto.|
|[CComVariant::GetSize](#getsize)|Restituisce le dimensioni in numero di byte del contenuto del `CComVariant` oggetto.|
|[CComVariant::ReadFromStream](#readfromstream)|Carica una variante da un flusso.|
|[CComVariant::SetByRef](#setbyref)|Inizializza la `CComVariant` oggetto e imposta il `vt` membro VT_BYREF.|
|[CComVariant:: WriteToStream](#writetostream)|Salva la variante sottostante in un flusso.|

### <a name="public-operators"></a>Operatori pubblici

|||
|-|-|
|[CComVariant:: operator <](#operator_lt)|Indica se il `CComVariant` oggetto è minore di variante specificata.|
|[CComVariant:: operator >](#operator_gt)|Indica se il `CComVariant` oggetto è maggiore di variante specificata.|
|[operatore! =](#operator_neq)|Indica se il `CComVariant` oggetto variante specificata non è uguale.|
|[operator =](#operator_eq)|Assegna un valore per il `CComVariant` oggetto.|
|[operatore = =](#operator_eq_eq)|Indica se il `CComVariant` oggetto variante specificata è uguale.|

## <a name="remarks"></a>Note

`CComVariant` esegue il wrapping di tipo VARIANT e VARIANTARG, che è costituito da un'unione e un membro che indica il tipo di dati archiviati nell'unione. Le varianti vengono generalmente usate in automazione.

`CComVariant` deriva dal tipo di variante in modo che può essere usato ogni volta che una variante può essere usata. È possibile, ad esempio, utilizzare la macro V_VT per estrarre il tipo di un `CComVariant` alternativa, è possibile accedere la `vt` membro direttamente nello stesso modo in cui è possibile con una variante.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`tagVARIANT`

`CComVariant`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcomcli

##  <a name="attach"></a>  CComVariant::Attach

Cancella in modo sicuro il contenuto corrente del `CComVariant` dell'oggetto, copia il contenuto di *pSrc* in questo oggetto, quindi imposta il tipo di variante della *pSrc* su VT_EMPTY.

```
HRESULT Attach(VARIANT* pSrc);
```

### <a name="parameters"></a>Parametri

*pSrc*<br/>
[in] Punta al [VARIANT](/windows/desktop/api/oaidl/ns-oaidl-tagvariant) da collegare all'oggetto.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

La proprietà dei dati contenute *pSrc* viene trasferita al `CComVariant` oggetto.

##  <a name="ccomvariant"></a>  CComVariant::CComVariant

Ogni costruttore gestisce l'inizializzazione di sicuro il `CComVariant` chiamando il `VariantInit` funzione Win32 o impostando l'oggetto valore e tipo in base ai parametri passati.

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
[in] Il `CComVariant` Variant utilizzato per inizializzare il `CComVariant` oggetto. I contenuti della variante origine vengono copiati nella destinazione senza conversione.

*lpszSrc*<br/>
[in] La stringa di caratteri utilizzata per inizializzare il `CComVariant` oggetto. È possibile passare una stringa con terminazione zero a caratteri wide carattere (Unicode) alla versione del costruttore o una stringa ANSI per la versione LPCSTR LPCOLESTR. In entrambi i casi la stringa viene convertita in Unicode BSTR allocati mediante `SysAllocString`. Il tipo del `CComVariant` VT_BSTR sarà l'oggetto.

*bSrc*<br/>
[in] Il **bool** utilizzato per inizializzare il `CComVariant` oggetto. Il **bool** argomento sarà convertito in un VARIANT_BOOL prima di essere archiviati. Il tipo del `CComVariant` VT_BOOL sarà l'oggetto.

*nSrc*<br/>
[in] Il **int**, **BYTE**, **breve**, **lungo**, LongLong con, ULONGLONG, **short senza segno**, **unsigned long**, o **int senza segno** utilizzato per inizializzare il `CComVariant` oggetto. Il tipo del `CComVariant` oggetto sarà VT_I4, VT_ARRAY|VT_UI1, VT_I2, VT_I4, VT_I8, VT_UI8, VT_UI2, VT_UI4 o VT_UI4, rispettivamente.

*vtSrc*<br/>
[in] Il tipo della variante. Quando il primo parametro è **int**, i tipi validi sono VT_I4 e VT_INT. Quando il primo parametro è **lungo**, i tipi validi sono VT_I4 e VT_ERROR. Quando il primo parametro è **doppie**, i tipi validi sono VT_R8 e VT_DATE. Quando il primo parametro è **unsigned int**, i tipi validi sono VT_UI4 e VT_UINT.

*fltSrc*<br/>
[in] Il **float** utilizzato per inizializzare il `CComVariant` oggetto. Il tipo del `CComVariant` VT_R4 sarà l'oggetto.

*dblSrc*<br/>
[in] Il **doppie** utilizzato per inizializzare il `CComVariant` oggetto. Il tipo del `CComVariant` VT_R8 sarà l'oggetto.

*cySrc*<br/>
[in] Il `CY` utilizzato per inizializzare il `CComVariant` oggetto. Il tipo del `CComVariant` oggetto sarà VT_CY.

*pSrc*<br/>
[in] Il `IDispatch` oppure `IUnknown` puntatore utilizzato per inizializzare il `CComVariant` oggetto. `AddRef` verrà chiamato sul puntatore a interfaccia. Il tipo del `CComVariant` oggetto sarà VT_DISPATCH o VT_UNKNOWN, rispettivamente.

O, il puntatore SAFERRAY utilizzato per inizializzare il `CComVariant` oggetto. Una copia della matrice SAFEARRAY viene archiviata nel `CComVariant` oggetto. Il tipo del `CComVariant` oggetto sarà una combinazione del tipo originale della SAFEARRAY e VT_ARRAY.

*cSrc*<br/>
[in] Il **char** utilizzato per inizializzare il `CComVariant` oggetto. Il tipo del `CComVariant` VT_I1 sarà l'oggetto.

*bstrSrc*<br/>
[in] La stringa BSTR utilizzato per inizializzare il `CComVariant` oggetto. Il tipo del `CComVariant` VT_BSTR sarà l'oggetto.

### <a name="remarks"></a>Note

Il distruttore gestisce la pulizia chiamando [CComVariant::Clear](#clear).

##  <a name="dtor"></a>  CComVariant:: ~ CComVariant

Distruttore.

```
~CComVariant() throw();
```

### <a name="remarks"></a>Note

Questo metodo gestisce la pulizia chiamando [CComVariant::Clear](#clear).

##  <a name="changetype"></a>  CComVariant::ChangeType

Converte il `CComVariant` oggetto in un nuovo tipo.

```
HRESULT ChangeType(VARTYPE vtNew, const VARIANT* pSrc = NULL);
```

### <a name="parameters"></a>Parametri

*vtNew*<br/>
[in] Il nuovo tipo per il `CComVariant` oggetto.

*pSrc*<br/>
[in] Puntatore alla variante il cui valore verrà convertito nel nuovo tipo. Il valore predefinito è NULL, significato di `CComVariant` oggetto verrà convertito in posizione.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Se si passa un valore *pSrc*, `ChangeType` userà questa variante come origine per la conversione. In caso contrario, il `CComVariant` oggetto fungerà da origine.

##  <a name="clear"></a>  CComVariant::Clear

Cancella il `CComVariant` chiamando il `VariantClear` funzione Win32.

```
HRESULT Clear();
```

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Il distruttore chiama automaticamente `Clear`.

##  <a name="copy"></a>  CComVariant::Copy

Libera la `CComVariant` dell'oggetto e quindi lo assegna una copia della variante specificata.

```
HRESULT Copy(const VARIANT* pSrc);
```

### <a name="parameters"></a>Parametri

*pSrc*<br/>
[in] Un puntatore per il [VARIANT](/windows/desktop/api/oaidl/ns-oaidl-tagvariant) da copiare.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

##  <a name="copyto"></a>  CComVariant::CopyTo

Copia il contenuto del `CComVariant` oggetto.

```
HRESULT CopyTo(BSTR* pstrDest);
```

### <a name="parameters"></a>Parametri

*pstrDest*<br/>
Punta a un BSTR che riceverà una copia del contenuto del `CComVariant` oggetto.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Il `CComVariant` oggetto deve essere di tipo VT_BSTR.

##  <a name="detach"></a>  CComVariant::Detach

Scollega la variante sottostante dal `CComVariant` dell'oggetto e imposta il tipo dell'oggetto parametro su VT_EMPTY.

```
HRESULT Detach(VARIANT* pDest);
```

### <a name="parameters"></a>Parametri

*pDest*<br/>
[out] Restituisce il valore di variante sottostante dell'oggetto.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Si noti che fa riferimento il contenuto della variante *pDest* verrà automaticamente cancellata prima che venga assegnato il valore e il tipo dell'oggetto chiamante `CComVariant` oggetto.

##  <a name="getsize"></a>  CComVariant::GetSize

Per le varianti di dimensione fissa semplice, questo metodo restituisce il **sizeof** tipo di dati sottostante sul segno più **sizeof(VARTYPE)**.

```
ULONG GetSize() const;
```

### <a name="return-value"></a>Valore restituito

La dimensione in byte del contenuto corrente del `CComVariant` oggetto.

### <a name="remarks"></a>Note

Se la variante contiene un puntatore a interfaccia `GetSize` ricercati `IPersistStream` o `IPersistStreamInit`. Se ha esito positivo, il valore restituito è 32 bit meno significativi del valore restituito da `GetSizeMax` oltre al **sizeof** un CLSID e **sizeof(VARTYPE)**. Se il puntatore di interfaccia è NULL, `GetSize` restituisce il **sizeof** CLSID più **sizeof(VARTYPE)**. Se la dimensione totale è maggiore, ULONG_MAX `GetSize` restituisce **sizeof(VARTYPE)** che indica un errore.

In tutti gli altri casi, una variante di tipo VT_BSTR temporanea viene convertita dal tipo VARIANT corrente. La lunghezza di questo tipo BSTR viene calcolata come la dimensione della lunghezza della stringa e la lunghezza della stringa stessa più le dimensioni del carattere null plus **sizeof(VARTYPE)**. Se la variante non può essere assegnata a una variante di tipo VT_BSTR, `GetSize` restituisce **sizeof(VARTYPE)**.

Le dimensioni restituite dal metodo corrispondano al numero di byte utilizzati dal [CComVariant:: WriteToStream](#writetostream) in condizioni di esito positivo.

##  <a name="operator_eq"></a>  CComVariant:: operator =

Assegna un valore e tipo corrispondente per il `CComVariant` oggetto.

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
[in] Il `CComVariant` oppure [VARIANT](/windows/desktop/api/oaidl/ns-oaidl-tagvariant) da assegnare al `CComVariant` oggetto. I contenuti della variante origine vengono copiati nella destinazione senza conversione.

*bstrSrc*<br/>
[in] La stringa BSTR da assegnare al `CComVariant` oggetto. Il tipo del `CComVariant` VT_BSTR sarà l'oggetto.

*lpszSrc*<br/>
[in] La stringa di caratteri da assegnare al `CComVariant` oggetto. È possibile passare una stringa con terminazione zero a caratteri wide carattere (Unicode) alla versione LPCOLESTR dell'operatore o una stringa ANSI per la versione LPCSTR. In entrambi i casi, la stringa viene convertita in Unicode BSTR allocati mediante `SysAllocString`. Il tipo del `CComVariant` VT_BSTR sarà l'oggetto.

*bSrc*<br/>
[in] Il **bool** da assegnare al `CComVariant` oggetto. Il **bool** argomento sarà convertito in un VARIANT_BOOL prima di essere archiviati. Il tipo del `CComVariant` VT_BOOL sarà l'oggetto.

*nSrc*<br/>
[in] Il **int**, BYTE **breve**, **long**, LongLong con, ULONGLONG, **short senza segno**, **long senza segno**, oppure **int senza segno** da assegnare al `CComVariant` oggetto. Il tipo del `CComVariant` oggetto sarà VT_I4, VT_ARRAY|VT_UI1, VT_I2, VT_I4, VT_I8, VT_UI8, VT_UI2, VT_UI4 o VT_UI4, rispettivamente.

*fltSrc*<br/>
[in] Il **float** da assegnare al `CComVariant` oggetto. Il tipo del `CComVariant` VT_R4 sarà l'oggetto.

*dblSrc*<br/>
[in] Il **doppie** da assegnare al `CComVariant` oggetto. Il tipo del `CComVariant` VT_R8 sarà l'oggetto.

*cySrc*<br/>
[in] Il `CY` da assegnare al `CComVariant` oggetto. Il tipo del `CComVariant` oggetto sarà VT_CY.

*pSrc*<br/>
[in] Il `IDispatch` oppure `IUnknown` puntatore da assegnare al `CComVariant` oggetto. `AddRef` verrà chiamato sul puntatore a interfaccia. Il tipo del `CComVariant` oggetto sarà VT_DISPATCH o VT_UNKNOWN, rispettivamente.

Oppure, un puntatore SAFEARRAY da assegnare al `CComVariant` oggetto. Una copia della matrice SAFEARRAY viene archiviata nel `CComVariant` oggetto. Il tipo del `CComVariant` oggetto sarà una combinazione del tipo originale della SAFEARRAY e VT_ARRAY.

*cSrc*<br/>
[in] Il carattere da assegnare al `CComVariant` oggetto. Il tipo del `CComVariant` VT_I1 sarà l'oggetto.

##  <a name="operator_eq_eq"></a>  CComVariant:: operator = =

Indica se il `CComVariant` oggetto variante specificata è uguale.

```
bool operator==(const VARIANT& varSrc) const throw();
```

### <a name="remarks"></a>Note

Restituisce TRUE se il valore e il tipo della *varSrc* sono uguali al valore e al tipo, rispettivamente, del `CComVariant` oggetto. In caso contrario, FALSE. L'operatore utilizza le impostazioni locali predefinito dell'utente per eseguire il confronto.

L'operatore confronta solo il valore dei tipi varianti. Confronta le stringhe, numeri interi e punti a virgola mobile, ma non le matrici o i record.

##  <a name="operator_neq"></a>  CComVariant:: operator! =

Indica se il `CComVariant` oggetto variante specificata non è uguale.

```
bool operator!=(const VARIANT& varSrc) const throw();
```

### <a name="remarks"></a>Note

Restituisce TRUE se il valore o tipo di *varSrc* non è uguale al valore o al tipo, rispettivamente, del `CComVariant` oggetto. In caso contrario, FALSE. L'operatore utilizza le impostazioni locali predefinito dell'utente per eseguire il confronto.

L'operatore confronta solo il valore dei tipi varianti. Confronta le stringhe, numeri interi e punti a virgola mobile, ma non le matrici o i record.

##  <a name="operator_lt"></a>  CComVariant:: operator &lt;

Indica se il `CComVariant` oggetto è minore di variante specificata.

```
bool operator<(const VARIANT& varSrc) const throw();
```

### <a name="remarks"></a>Note

Restituisce TRUE se il valore della `CComVariant` oggetto è minore del valore di *varSrc*. In caso contrario, FALSE. L'operatore utilizza le impostazioni locali predefinito dell'utente per eseguire il confronto.

##  <a name="operator_gt"></a>  CComVariant:: operator &gt;

Indica se il `CComVariant` oggetto è maggiore di variante specificata.

```
bool operator>(const VARIANT& varSrc) const throw();
```

### <a name="remarks"></a>Note

Restituisce TRUE se il valore della `CComVariant` è maggiore del valore dell'oggetto *varSrc*. In caso contrario, FALSE. L'operatore utilizza le impostazioni locali predefinito dell'utente per eseguire il confronto.

##  <a name="readfromstream"></a>  CComVariant::ReadFromStream

Imposta la variante sottostante alla variante contenuta nel flusso specificato.

```
HRESULT ReadFromStream(IStream* pStream);
```

### <a name="parameters"></a>Parametri

*pStream*<br/>
[in] Un puntatore per il [IStream](/windows/desktop/api/objidl/nn-objidl-istream) interfaccia sulla base del flusso che contiene i dati.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

`ReadToStream` richiede una chiamata precedente a [WriteToStream](#writetostream).

##  <a name="setbyref"></a>  CComVariant::SetByRef

Inizializza la `CComVariant` oggetto e imposta il `vt` membro VT_BYREF.

```
template < typename T >
void SetByRef(T* pT) throw();
```

### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di variante, ad esempio, BSTR, **int**, o **char**.

*pT*<br/>
Il puntatore utilizzato per inizializzare il `CComVariant` oggetto.

### <a name="remarks"></a>Note

`SetByRef` è un modello di funzione che inizializza la `CComVariant` oggetto al puntatore *pT* e imposta il `vt` membro VT_BYREF. Ad esempio:

[!code-cpp[NVC_ATL_Utilities#76](../../atl/codesnippet/cpp/ccomvariant-class_1.cpp)]

##  <a name="writetostream"></a>  CComVariant:: WriteToStream

Salva la variante sottostante in un flusso.

```
HRESULT WriteToStream(IStream* pStream);
```

### <a name="parameters"></a>Parametri

*pStream*<br/>
[in] Un puntatore per il [IStream](/windows/desktop/api/objidl/nn-objidl-istream) interfaccia in un flusso.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)