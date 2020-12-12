---
description: 'Altre informazioni su: classe CSimpleStringT'
title: CSimpleStringT (classe)
ms.date: 10/18/2018
f1_keywords:
- CSimpleStringT
- ATLSIMPSTR/ATL::CSimpleStringT
- ATLSIMPSTR/ATL::CSimpleStringT::PCXSTR
- ATLSIMPSTR/ATL::CSimpleStringT::PXSTR
- ATLSIMPSTR/ATL::CSimpleStringT::CSimpleStringT
- ATLSIMPSTR/ATL::CSimpleStringT::Append
- ATLSIMPSTR/ATL::CSimpleStringT::AppendChar
- ATLSIMPSTR/ATL::CSimpleStringT::CopyChars
- ATLSIMPSTR/ATL::CSimpleStringT::CopyCharsOverlapped
- ATLSIMPSTR/ATL::CSimpleStringT::Empty
- ATLSIMPSTR/ATL::CSimpleStringT::FreeExtra
- ATLSIMPSTR/ATL::CSimpleStringT::GetAllocLength
- ATLSIMPSTR/ATL::CSimpleStringT::GetAt
- ATLSIMPSTR/ATL::CSimpleStringT::GetBuffer
- ATLSIMPSTR/ATL::CSimpleStringT::GetBufferSetLength
- ATLSIMPSTR/ATL::CSimpleStringT::GetLength
- ATLSIMPSTR/ATL::CSimpleStringT::GetManager
- ATLSIMPSTR/ATL::CSimpleStringT::GetString
- ATLSIMPSTR/ATL::CSimpleStringT::IsEmpty
- ATLSIMPSTR/ATL::CSimpleStringT::LockBuffer
- ATLSIMPSTR/ATL::CSimpleStringT::Preallocate
- ATLSIMPSTR/ATL::CSimpleStringT::ReleaseBuffer
- ATLSIMPSTR/ATL::CSimpleStringT::ReleaseBufferSetLength
- ATLSIMPSTR/ATL::CSimpleStringT::SetAt
- ATLSIMPSTR/ATL::CSimpleStringT::SetManager
- ATLSIMPSTR/ATL::CSimpleStringT::SetString
- ATLSIMPSTR/ATL::CSimpleStringT::StringLength
- ATLSIMPSTR/ATL::CSimpleStringT::Truncate
- ATLSIMPSTR/ATL::CSimpleStringT::UnlockBuffer
helpviewer_keywords:
- shared classes, CSimpleStringT
- strings [C++], ATL class
- CSimpleStringT class
ms.assetid: 15814fcb-5b8f-4425-a97e-3b61fc9b48d8
ms.openlocfilehash: fd2ddf79e94827ad42411eeec71dde2fce28bd8e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97166655"
---
# <a name="csimplestringt-class"></a>CSimpleStringT (classe)

Questa classe rappresenta un `CSimpleStringT` oggetto.

## <a name="syntax"></a>Sintassi

```
template <typename BaseType>
class CSimpleStringT
```

### <a name="parameters"></a>Parametri

*BaseType*<br/>
Tipo di carattere della classe String. Può essere uno dei valori seguenti:

- **`char`** (per le stringhe di caratteri ANSI).

- **`wchar_t`** (per le stringhe di caratteri Unicode).

- TCHAR (per le stringhe di caratteri ANSI e Unicode).

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|[CSimpleStringT::P CXSTR](#pcxstr)|Puntatore a una stringa costante.|
|[CSimpleStringT::P XSTR](#pxstr)|Puntatore a una stringa.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CSimpleStringT:: CSimpleStringT](#ctor)|Costruisce `CSimpleStringT` oggetti in diversi modi.|
|[CSimpleStringT:: ~ CSimpleStringT](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CSimpleStringT:: Append](#append)|Accoda un `CSimpleStringT` oggetto a un oggetto esistente `CSimpleStringT` .|
|[CSimpleStringT:: AppendChar](#appendchar)|Aggiunge un carattere a un oggetto esistente `CSimpleStringT` .|
|[CSimpleStringT:: CopyChars](#copychars)|Copia un carattere o caratteri in un'altra stringa.|
|[CSimpleStringT:: CopyCharsOverlapped](#copycharsoverlapped)|Copia un carattere o caratteri in un'altra stringa in cui si sovrappongono i buffer.|
|[CSimpleStringT:: Empty](#empty)|Impone una stringa con una lunghezza pari a zero.|
|[CSimpleStringT:: FreeExtra](#freeextra)|Libera qualsiasi memoria aggiuntiva precedentemente allocata dall'oggetto stringa.|
|[CSimpleStringT:: GetAllocLength](#getalloclength)|Recupera la lunghezza allocata di un `CSimpleStringT` oggetto.|
|[CSimpleStringT:: GetAt](#getat)|Restituisce il carattere in una posizione specificata.|
|[CSimpleStringT:: GetBuffer](#getbuffer)|Restituisce un puntatore ai caratteri in un oggetto `CSimpleStringT` .|
|[CSimpleStringT:: GetBufferSetLength](#getbuffersetlength)|Restituisce un puntatore ai caratteri in un oggetto `CSimpleStringT` , troncando alla lunghezza specificata.|
|[CSimpleStringT:: GetLength](#getlength)|Restituisce il numero di caratteri in un `CSimpleStringT` oggetto.|
|[CSimpleStringT:: GetManager](#getmanager)|Recupera il gestore della memoria dell' `CSimpleStringT` oggetto.|
|[CSimpleStringT:: GetString](#getstring)|Recupera la stringa di caratteri|
|[CSimpleStringT:: IsEmpty](#isempty)|Verifica se un `CSimpleStringT` oggetto non contiene caratteri.|
|[CSimpleStringT:: LockBuffer](#lockbuffer)|Disabilita il conteggio dei riferimenti e protegge la stringa nel buffer.|
|[CSimpleStringT::P riallocare](#preallocate)|Alloca una quantità specifica di memoria per il buffer di caratteri.|
|[CSimpleStringT:: ReleaseBuffer](#releasebuffer)|Rilascia il controllo del buffer restituito da `GetBuffer` .|
|[CSimpleStringT:: ReleaseBufferSetLength](#releasebuffersetlength)|Rilascia il controllo del buffer restituito da `GetBuffer` .|
|[CSimpleStringT:: SetAt](#setat)|Imposta un carattere in una posizione specificata.|
|[CSimpleStringT:: semanager](#setmanager)|Imposta il gestore della memoria di un `CSimpleStringT` oggetto.|
|[CSimpleStringT:: sestring](#setstring)|Imposta la stringa di un `CSimpleStringT` oggetto.|
|[CSimpleStringT:: StringLength](#stringlength)|Restituisce il numero di caratteri nella stringa specificata.|
|[CSimpleStringT:: TRUNCATE](#truncate)|Tronca la stringa fino a una lunghezza specificata.|
|[CSimpleStringT:: UnlockBuffer](#unlockbuffer)|Consente il conteggio dei riferimenti e rilascia la stringa nel buffer.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CSimpleStringT:: operator PCXSTR](#operator_pcxstr)|Accede direttamente ai caratteri archiviati in un `CSimpleStringT` oggetto come una stringa di tipo C.|
|[CSimpleStringT::operator\[\]](#operator_at)|Restituisce il carattere in una posizione specificata, ovvero la sostituzione dell'operatore per `GetAt` .|
|[CSimpleStringT:: operator + =](#operator_add_eq)|Concatena una nuova stringa alla fine di una stringa esistente.|
|[CSimpleStringT:: operator =](#operator_eq)|Assegna un nuovo valore a un `CSimpleStringT` oggetto.|

### <a name="remarks"></a>Commenti

`CSimpleStringT` è la classe base per le varie classi stringa supportate da Visual C++. Fornisce supporto minimo per la gestione della memoria dell'oggetto stringa e della manipolazione del buffer di base. Per oggetti stringa più avanzati, vedere la [classe CStringT](../../atl-mfc-shared/reference/cstringt-class.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpstr. h

## <a name="csimplestringtappend"></a><a name="append"></a> CSimpleStringT:: Append

Accoda un `CSimpleStringT` oggetto a un oggetto esistente `CSimpleStringT` .

### <a name="syntax"></a>Sintassi

```cpp
void Append(const CSimpleStringT& strSrc);
void Append(PCXSTR pszSrc, int nLength);
void Append(PCXSTR pszSrc);
```

#### <a name="parameters"></a>Parametri

*strSrc*<br/>
`CSimpleStringT`Oggetto da accodare.

*pszSrc*<br/>
Puntatore a una stringa contenente i caratteri da accodare.

*nLength*<br/>
Numero di caratteri da accodare.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per aggiungere un `CSimpleStringT` oggetto esistente a un altro `CSimpleStringT` oggetto.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::Append`.

```cpp
CSimpleString str1(pMgr), str2(pMgr);
str1.SetString(_T("Soccer is"));
str2.SetString(_T(" an elegant game"));
str1.Append(str2);
ASSERT(_tcscmp(str1, _T("Soccer is an elegant game")) == 0);
```

## <a name="csimplestringtappendchar"></a><a name="appendchar"></a> CSimpleStringT:: AppendChar

Aggiunge un carattere a un oggetto esistente `CSimpleStringT` .

### <a name="syntax"></a>Sintassi

```cpp
void AppendChar(XCHAR ch);
```

#### <a name="parameters"></a>Parametri

*ch*<br/>
Carattere da accodare

### <a name="remarks"></a>Commenti

Chiamare questa funzione per aggiungere il carattere specificato alla fine di un oggetto esistente `CSimpleStringT` .

## <a name="csimplestringtcopychars"></a><a name="copychars"></a> CSimpleStringT:: CopyChars

Copia un carattere o caratteri in un `CSimpleStringT` oggetto.

### <a name="syntax"></a>Sintassi

```
static void CopyChars(
    XCHAR* pchDest,
    const XCHAR* pchSrc,
    int nChars) throw();
```

#### <a name="parameters"></a>Parametri

*pchDest*<br/>
Puntatore a una stringa di caratteri.

*pchSrc*<br/>
Puntatore a una stringa contenente i caratteri da copiare.

*nChars*<br/>
Numero di caratteri *pchSrc* da copiare.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per copiare i caratteri da *pchSrc* alla stringa *pchDest* .

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::CopyChars`.

```cpp
CSimpleString str(_T("xxxxxxxxxxxxxxxxxxx"), 20, pMgr);
TCHAR* pszSrc = _T("Hello world!");
_tprintf_s(_T("%s\n"), str);
str.CopyChars(str.GetBuffer(), pszSrc, 12);
_tprintf_s(_T("%s\n"), str);
```

## <a name="csimplestringtcopycharsoverlapped"></a><a name="copycharsoverlapped"></a> CSimpleStringT:: CopyCharsOverlapped

Copia un carattere o caratteri in un `CSimpleStringT` oggetto.

### <a name="syntax"></a>Sintassi

```
static void CopyCharsOverlapped(
    XCHAR* pchDest,
    const XCHAR* pchSrc,
    int nChars) throw();
```

#### <a name="parameters"></a>Parametri

*pchDest*<br/>
Puntatore a una stringa di caratteri.

*pchSrc*<br/>
Puntatore a una stringa contenente i caratteri da copiare.

*nChars*<br/>
Numero di caratteri *pchSrc* da copiare.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per copiare i caratteri da *pchSrc* alla stringa *pchDest* . Diversamente `CopyChars` da, `CopyCharsOverlapped` fornisce un metodo sicuro per la copia da buffer di caratteri che potrebbero essere sovrapposti.

### <a name="example"></a>Esempio

Vedere l'esempio per [CSimpleStringT:: CopyChars](#copychars)o il codice sorgente per `CSimpleStringT::SetString` (situato in atlsimpstr. h).

## <a name="csimplestringtcsimplestringt"></a><a name="ctor"></a> CSimpleStringT:: CSimpleStringT

Costruisce un oggetto `CSimpleStringT`.

### <a name="syntax"></a>Sintassi

```
CSimpleStringT(const XCHAR* pchSrc, int nLength, IAtlStringMgr* pStringMgr);
CSimpleStringT(PCXSTR pszSrc, IAtlStringMgr* pStringMgr);
CSimpleStringT(const CSimpleStringT& strSrc);
explicit CSimpleStringT(IAtlStringMgr* pStringMgr) throw();
```

#### <a name="parameters"></a>Parametri

*strSrc*<br/>
Oggetto esistente `CSimpleStringT` da copiare in questo `CSimpleStringT` oggetto.

*pchSrc*<br/>
Puntatore a una matrice di caratteri di lunghezza *nLength*, not null terminato.

*pszSrc*<br/>
Stringa con terminazione null da copiare in questo `CSimpleStringT` oggetto.

*nLength*<br/>
Conteggio del numero di caratteri in `pch` .

*pStringMgr*<br/>
Puntatore al gestore della memoria dell' `CSimpleStringT` oggetto. Per ulteriori informazioni su `IAtlStringMgr` e sulla gestione della memoria per `CSimpleStringT` , vedere [gestione della memoria e CStringT](../memory-management-with-cstringt.md).

### <a name="remarks"></a>Commenti

Costruisce un nuovo oggetto `CSimpleStringT`. Poiché i costruttori copiano i dati di input in una nuova risorsa di archiviazione allocata, possono verificarsi eccezioni di memoria.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato l'utilizzo di `CSimpleStringT::CSimpleStringT` utilizzando ATL **`typedef`** `CSimpleString` . `CSimpleString` è una specializzazione comunemente utilizzata del modello di classe `CSimpleStringT` .

```cpp
CSimpleString s1(pMgr);
// Empty string
CSimpleString s2(_T("cat"), pMgr);
// From a C string literal

CSimpleString s3(s2);
// Copy constructor
CSimpleString s4(s2 + _T(" ") + s3);

// From a string expression
CSimpleString s5(_T("xxxxxx"), 6, pMgr);
// s5 = "xxxxxx"
```

## <a name="csimplestringtempty"></a><a name="empty"></a> CSimpleStringT:: Empty

Rende questo `CSimpleStringT` oggetto una stringa vuota e libera la memoria nel modo appropriato.

### <a name="syntax"></a>Sintassi

```cpp
void Empty() throw();
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [stringhe: pulizia delle eccezioni di CString](../cstring-exception-cleanup.md).

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::Empty`.

```cpp
CSimpleString s(pMgr);
ASSERT(s.IsEmpty());
```

## <a name="csimplestringtfreeextra"></a><a name="freeextra"></a> CSimpleStringT:: FreeExtra

Libera qualsiasi memoria aggiuntiva precedentemente allocata dalla stringa, ma non più necessaria.

### <a name="syntax"></a>Sintassi

```cpp
void FreeExtra();
```

### <a name="remarks"></a>Osservazioni

Questa operazione dovrebbe ridurre il sovraccarico di memoria utilizzato dall'oggetto stringa. Il metodo consente di riallocare il buffer alla lunghezza esatta restituita da [GetLength](#getlength).

### <a name="example"></a>Esempio

```cpp
CAtlString basestr;
IAtlStringMgr* pMgr;

pMgr= basestr.GetManager();
ASSERT(pMgr != NULL);

// Create a CSimpleString with 28 characters
CSimpleString str(_T("Many sports are fun to play."), 28, pMgr);
_tprintf_s(_T("Alloc length is %d, String length is %d\n"),
   str.GetAllocLength(), str.GetLength());

// Assigning a smaller string won't cause CSimpleString to free its
// memory, because it assumes the string will grow again anyway.
str = _T("Soccer is best!");
_tprintf_s(_T("Alloc length is %d, String length is %d\n"),
   str.GetAllocLength(), str.GetLength());

// This call forces CSimpleString to release the extra
// memory it doesn't need.
str.FreeExtra();
_tprintf_s(_T("Alloc length is %d, String length is %d\n"),
   str.GetAllocLength(), str.GetLength());
```

### <a name="remarks"></a>Commenti

L'output di questo esempio è il seguente:

```Output
Alloc length is 1031, String length is 1024
Alloc length is 1031, String length is 15
Alloc length is 15, String length is 15
```

## <a name="csimplestringtgetalloclength"></a><a name="getalloclength"></a> CSimpleStringT:: GetAllocLength

Recupera la lunghezza allocata di un `CSimpleStringT` oggetto.

### <a name="syntax"></a>Sintassi

```
int GetAllocLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Numero di caratteri allocati per questo oggetto.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per determinare il numero di caratteri allocati per questo `CSimpleStringT` oggetto. Vedere [FreeExtra](#freeextra) per un esempio di chiamata a questa funzione.

## <a name="csimplestringtgetat"></a><a name="getat"></a> CSimpleStringT:: GetAt

Restituisce un carattere da un `CSimpleStringT` oggetto.

### <a name="syntax"></a>Sintassi

```
XCHAR GetAt(int iChar) const;
```

#### <a name="parameters"></a>Parametri

*iChar*<br/>
Indice in base zero del carattere nell' `CSimpleStringT` oggetto. Il parametro *ICHAR* deve essere maggiore o uguale a 0 e minore del valore restituito da [GetLength](#getlength). In caso contrario, genererà `GetAt` un'eccezione.

### <a name="return-value"></a>Valore restituito

Oggetto `XCHAR` che contiene il carattere in corrispondenza della posizione specificata nella stringa.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per restituire il carattere specificato da *ICHAR*. L'operatore di indice (**[]**) di overload è un alias appropriato per `GetAt` . Il terminatore null è indirizzabile senza generare un'eccezione usando `GetAt` . Tuttavia, non viene conteggiato da `GetLength` e il valore restituito è 0.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare `CSimpleStringT::GetAt` .

```cpp
CSimpleString s(_T("abcdef"), pMgr);
ASSERT(s.GetAt(2) == _T('c'));
```

## <a name="csimplestringtgetbuffer"></a><a name="getbuffer"></a> CSimpleStringT:: GetBuffer

Restituisce un puntatore al buffer di caratteri interno per l' `CSimpleStringT` oggetto.

### <a name="syntax"></a>Sintassi

```
PXSTR GetBuffer(int nMinBufferLength);
PXSTR GetBuffer();
```

#### <a name="parameters"></a>Parametri

*nMinBufferLength*<br/>
Numero minimo di caratteri che il buffer di caratteri può memorizzare. Questo valore non include lo spazio per un carattere di terminazione null.

Se *nMinBufferLength* è maggiore della lunghezza del buffer corrente, `GetBuffer` Elimina il buffer corrente, lo sostituisce con un buffer della dimensione richiesta e reimposta il conteggio dei riferimenti all'oggetto su zero. Se in precedenza è stato chiamato [LockBuffer](#lockbuffer) in questo buffer, si perde il blocco del buffer.

### <a name="return-value"></a>Valore restituito

`PXSTR`Puntatore al buffer di caratteri (con terminazione null) dell'oggetto.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per restituire il contenuto del buffer dell' `CSimpleStringT` oggetto. Il valore restituito `PXSTR` non è una costante e pertanto consente la modifica diretta del `CSimpleStringT` contenuto.

Se si utilizza il puntatore restituito da `GetBuffer` per modificare il contenuto della stringa, è necessario chiamare [ReleaseBuffer](#releasebuffer) prima di utilizzare qualsiasi altro `CSimpleStringT` metodo membro.

L'indirizzo restituito da `GetBuffer` potrebbe non essere valido dopo la chiamata a `ReleaseBuffer` perché altre `CSimpleStringT` operazioni possono causare la `CSimpleStringT` riallocazione del buffer. Il buffer non viene riallocato se non si modifica la lunghezza di `CSimpleStringT` .

La memoria del buffer viene liberata automaticamente quando l' `CSimpleStringT` oggetto viene eliminato definitivamente.

Se si tiene traccia della lunghezza della stringa manualmente, è consigliabile non accodare il carattere null di terminazione. Tuttavia, è necessario specificare la lunghezza finale della stringa quando si rilascia il buffer con `ReleaseBuffer` . Se si aggiunge un carattere di terminazione null, è necessario passare-1 (impostazione predefinita) per la lunghezza. `ReleaseBuffer` determina quindi la lunghezza del buffer.

Se la memoria disponibile non è sufficiente per soddisfare la `GetBuffer` richiesta, questo metodo genera un'eccezione CMemoryException *.

### <a name="example"></a>Esempio

```cpp
CSimpleString s(_T("abcd"), pMgr);
LPTSTR pBuffer = s.GetBuffer(10);
int sizeOfBuffer = s.GetAllocLength();

// Directly access CSimpleString buffer
_tcscpy_s(pBuffer, sizeOfBuffer, _T("Hello"));
ASSERT(_tcscmp(s, _T("Hello")) == 0);
s.ReleaseBuffer();
```

## <a name="csimplestringtgetbuffersetlength"></a><a name="getbuffersetlength"></a> CSimpleStringT:: GetBufferSetLength

Restituisce un puntatore al buffer di caratteri interno per l' `CSimpleStringT` oggetto, troncando o aumentando la lunghezza, se necessario, per corrispondere esattamente alla lunghezza specificata in *nLength*.

### <a name="syntax"></a>Sintassi

```
PXSTR GetBufferSetLength(int nLength);
```

#### <a name="parameters"></a>Parametri

*nLength*<br/>
Dimensioni esatte del buffer di caratteri `CSimpleStringT` .

### <a name="return-value"></a>Valore restituito

`PXSTR`Puntatore al buffer di caratteri (con terminazione null) dell'oggetto.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per recuperare una lunghezza specificata del buffer interno dell' `CSimpleStringT` oggetto. Il `PXSTR` puntatore restituito non è **`const`** e quindi consente la modifica diretta del `CSimpleStringT` contenuto.

Se si utilizza il puntatore restituito da [GetBufferSetLength](#getbuffersetlength) per modificare il contenuto della stringa, chiamare `ReleaseBuffer` per aggiornare lo stato interno di `CsimpleStringT` prima di utilizzare qualsiasi altro `CSimpleStringT` metodo.

L'indirizzo restituito da `GetBufferSetLength` potrebbe non essere valido dopo la chiamata a `ReleaseBuffer` perché altre `CSimpleStringT` operazioni possono causare la `CSimpleStringT` riallocazione del buffer. Il buffer non viene riassegnato se non si modifica la lunghezza di `CSimpleStringT` .

La memoria del buffer viene liberata automaticamente quando l' `CSimpleStringT` oggetto viene eliminato definitivamente.

Se si tiene traccia della lunghezza della stringa manualmente, non aggiungere il carattere null di terminazione. È necessario specificare la lunghezza finale della stringa quando si rilascia il buffer usando `ReleaseBuffer` . Se si aggiunge un carattere di terminazione null quando si chiama `ReleaseBuffer` , passare-1 (impostazione predefinita) per la lunghezza a `ReleaseBuffer` ed eseguirà `ReleaseBuffer` un `strlen` sul buffer per determinarne la lunghezza.

Per ulteriori informazioni sul conteggio dei riferimenti, vedere gli articoli seguenti:

- [Gestione della durata degli oggetti tramite il conteggio dei riferimenti](/windows/win32/com/managing-object-lifetimes-through-reference-counting) nell'Windows SDK.

- [Implementazione del conteggio dei riferimenti](/windows/win32/com/implementing-reference-counting) nell'Windows SDK.

- [Regole per la gestione dei conteggi dei riferimenti](/windows/win32/com/rules-for-managing-reference-counts) nel Windows SDK.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::GetBufferSetLength`.

```cpp
CSimpleString str(pMgr);
LPTSTR pstr = str.GetBufferSetLength(3);
pstr[0] = _T('C');
pstr[1] = _T('u');
pstr[2] = _T('p');

// No need for trailing zero or call to ReleaseBuffer()
// because GetBufferSetLength() set it for us.

str += _T(" soccer is best!");
ASSERT(_tcscmp(str, _T("Cup soccer is best!")) == 0);
```

## <a name="csimplestringtgetlength"></a><a name="getlength"></a> CSimpleStringT:: GetLength

Restituisce il numero di caratteri nell' `CSimpleStringT` oggetto.

### <a name="syntax"></a>Sintassi

```
int GetLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Conteggio dei caratteri nella stringa.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per restituire il numero di caratteri nell'oggetto. Il conteggio non include un carattere di terminazione null.

Per i set di caratteri multibyte (MBCS), `GetLength` conteggia ogni carattere a 8 bit, ovvero un byte iniziale e finale in un carattere multibyte vengono conteggiati come due byte. Vedere [FreeExtra](#freeextra) per un esempio di chiamata a questa funzione.

## <a name="csimplestringtgetmanager"></a><a name="getmanager"></a> CSimpleStringT:: GetManager

Recupera il gestore della memoria dell' `CSimpleStringT` oggetto.

### <a name="syntax"></a>Sintassi

```
IAtlStringMgr* GetManager() const throw();
```

### <a name="return-value"></a>Valore restituito

Puntatore al gestore della memoria per l' `CSimpleStringT` oggetto.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per recuperare il gestore della memoria usato dall' `CSimpleStringT` oggetto. Per ulteriori informazioni sui gestori della memoria e sugli oggetti stringa, vedere [gestione della memoria e CStringT](../memory-management-with-cstringt.md).

## <a name="csimplestringtgetstring"></a><a name="getstring"></a> CSimpleStringT:: GetString

Recupera la stringa di caratteri.

### <a name="syntax"></a>Sintassi

```
PCXSTR GetString() const throw();
```

### <a name="return-value"></a>Valore restituito

Puntatore a una stringa di caratteri con terminazione null.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per recuperare la stringa di caratteri associata all' `CSimpleStringT` oggetto.

> [!NOTE]
> Il `PCXSTR` puntatore restituito è **`const`** e non consente la modifica diretta del `CSimpleStringT` contenuto.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::GetString`.

```cpp
CSimpleString str(pMgr);
str += _T("Cup soccer is best!");
_tprintf_s(_T("%s"), str.GetString());
```

## <a name="csimplestringtisempty"></a><a name="isempty"></a> CSimpleStringT:: IsEmpty

Verifica un `CSimpleStringT` oggetto per la condizione vuota.

### <a name="syntax"></a>Sintassi

```
bool IsEmpty() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l' `CSimpleStringT` oggetto ha una lunghezza pari a 0; in caso contrario, false.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per determinare se l'oggetto contiene una stringa vuota.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::IsEmpty`.

```cpp
CSimpleString s(pMgr);
ASSERT(s.IsEmpty());
```

## <a name="csimplestringtlockbuffer"></a><a name="lockbuffer"></a> CSimpleStringT:: LockBuffer

Disabilita il conteggio dei riferimenti e protegge la stringa nel buffer.

### <a name="syntax"></a>Sintassi

```
PXSTR LockBuffer();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un `CSimpleStringT` oggetto o a una stringa con terminazione null.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per bloccare il buffer dell' `CSimpleStringT` oggetto. Chiamando `LockBuffer` , si crea una copia della stringa con-1 per il conteggio dei riferimenti. Quando il valore del conteggio dei riferimenti è-1, la stringa nel buffer viene considerata nello stato "bloccato". In uno stato bloccato, la stringa è protetta in due modi:

- Nessun'altra stringa può ottenere un riferimento ai dati nella stringa bloccata, anche se tale stringa viene assegnata alla stringa bloccata.

- La stringa bloccata non fa mai riferimento a un'altra stringa, anche se tale stringa viene copiata nella stringa bloccata.

Bloccando la stringa nel buffer, è possibile verificare che il blocco esclusivo della stringa nel buffer rimanga intatto.

Al termine di `LockBuffer` , chiamare [UnlockBuffer](#unlockbuffer) per reimpostare il conteggio dei riferimenti su 1.

> [!NOTE]
> Se si chiama [GetBuffer](#getbuffer) su un buffer bloccato e si imposta il `GetBuffer` parametro `nMinBufferLength` su un valore maggiore della lunghezza del buffer corrente, si perderà il blocco del buffer. Tale chiamata a `GetBuffer` Elimina il buffer corrente, la sostituisce con un buffer della dimensione richiesta e reimposta il conteggio dei riferimenti su zero.

Per ulteriori informazioni sul conteggio dei riferimenti, vedere gli articoli seguenti:

- [Gestione della durata degli oggetti tramite il conteggio dei riferimenti](/windows/win32/com/managing-object-lifetimes-through-reference-counting) nell'Windows SDK

- [Implementazione del conteggio dei riferimenti](/windows/win32/com/implementing-reference-counting) nell'Windows SDK

- [Regole per la gestione dei conteggi dei riferimenti](/windows/win32/com/rules-for-managing-reference-counts) nel Windows SDK

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::LockBuffer`.

```cpp
CSimpleString str(_T("Hello"), pMgr);
TCHAR ch;

str.LockBuffer();
ch = str.GetAt(2);
_tprintf_s(_T("%c"), ch);
str.UnlockBuffer();
```

## <a name="csimplestringtoperator"></a><a name="operator_at"></a> CSimpleStringT:: operator\[\]

Chiamare questa funzione per accedere a un singolo carattere della matrice di caratteri.

### <a name="syntax"></a>Sintassi

```
XCHAR operator[](int iChar) const;
```

#### <a name="parameters"></a>Parametri

*iChar*<br/>
Indice in base zero di un carattere nella stringa.

### <a name="remarks"></a>Commenti

L'operatore pedice (**[]**) di overload restituisce un singolo carattere specificato dall'indice in base zero in *ICHAR*. Questo operatore rappresenta un comodo sostituto per la funzione membro [Geta](#getat) .

> [!NOTE]
> È possibile utilizzare l'operatore di indice (**[]**) per ottenere il valore di un carattere in un oggetto `CSimpleStringT` , ma non è possibile utilizzarlo per modificare il valore di un carattere in un oggetto `CSimpleStringT` .

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::operator []`.

```cpp
CSimpleString s(_T("abc"), pMgr);
ASSERT(s[1] == _T('b'));
```

## <a name="csimplestringtoperator-"></a><a name="operator_at"></a> CSimpleStringT:: operator \[\]

Chiamare questa funzione per accedere a un singolo carattere della matrice di caratteri.

### <a name="syntax"></a>Sintassi

```
XCHAR operator[](int iChar) const;
```

### <a name="parameters"></a>Parametri

*iChar*<br/>
Indice in base zero di un carattere nella stringa.

### <a name="remarks"></a>Commenti

L'operatore pedice (**[]**) di overload restituisce un singolo carattere specificato dall'indice in base zero in *ICHAR*. Questo operatore rappresenta un comodo sostituto per la funzione membro [Geta](#getat) .

> [!NOTE]
> È possibile utilizzare l'operatore di indice (**[]**) per ottenere il valore di un carattere in un oggetto `CSimpleStringT` , ma non è possibile utilizzarlo per modificare il valore di un carattere in un oggetto `CSimpleStringT` .

## <a name="csimplestringtoperator-"></a><a name="operator_add_eq"></a> CSimpleStringT:: operator + =

Unisce una nuova stringa o carattere alla fine di una stringa esistente.

### <a name="syntax"></a>Sintassi

```
CSimpleStringT& operator +=(PCXSTR pszSrc);
CSimpleStringT& operator +=(const CSimpleStringT& strSrc);
template<int t_nSize>
CSimpleStringT& operator+=(const CStaticString< XCHAR, t_nSize >& strSrc);
CSimpleStringT& operator +=(char ch);
CSimpleStringT& operator +=(unsigned char ch);
CSimpleStringT& operator +=(wchar_t ch);
```

#### <a name="parameters"></a>Parametri

*pszSrc*<br/>
Puntatore a una stringa con terminazione null.

*strSrc*<br/>
Puntatore a un oggetto esistente `CSimpleStringT` .

*ch*<br/>
Il carattere da aggiungere.

### <a name="remarks"></a>Commenti

L'operatore accetta un altro `CSimpleStringT` oggetto o un carattere. Si noti che le eccezioni di memoria possono verificarsi quando si usa questo operatore di concatenazione perché è possibile allocare una nuova risorsa di archiviazione per i caratteri aggiunti a questo `CSimpleStringT` oggetto.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::operator +=`.

```cpp
CSimpleString str(_T("abc"), pMgr);
ASSERT(_tcscmp((str += _T("def")), _T("abcdef")) == 0);
```

## <a name="csimplestringtoperator-"></a><a name="operator_eq"></a> CSimpleStringT:: operator =

Assegna un nuovo valore a un `CSimpleStringT` oggetto.

### <a name="syntax"></a>Sintassi

```
CSimpleStringT& operator =(PCXSTR pszSrc);
CSimpleStringT& operator =(const CSimpleStringT& strSrc);
```

#### <a name="parameters"></a>Parametri

*pszSrc*<br/>
Puntatore a una stringa con terminazione null.

*strSrc*<br/>
Puntatore a un oggetto esistente `CSimpleStringT` .

### <a name="remarks"></a>Commenti

Se la stringa di destinazione (lato sinistro) è già abbastanza grande da archiviare i nuovi dati, non viene eseguita alcuna nuova allocazione di memoria. Si noti che le eccezioni di memoria possono verificarsi quando si usa l'operatore di assegnazione perché la nuova risorsa di archiviazione viene spesso allocata per conservare l' `CSimpleStringT` oggetto risultante.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::operator =`.

```cpp
CSimpleString s1(pMgr), s2(pMgr);
// Empty CSimpleStringT objects

s1 = _T("cat");
// s1 = "cat"
ASSERT(_tcscmp(s1, _T("cat")) == 0);

s2 = s1;               // s1 and s2 each = "cat"
ASSERT(_tcscmp(s2, _T("cat")) == 0);

s1 = _T("the ") + s1;
// Or expressions
ASSERT(_tcscmp(s1, _T("the cat")) == 0);

s1 = _T("x");
// Or just individual characters
ASSERT(_tcscmp(s1, _T("x")) == 0);
```

## <a name="csimplestringtoperator-pcxstr"></a><a name="operator_pcxstr"></a> CSimpleStringT:: operator PCXSTR

Accede direttamente ai caratteri archiviati in un `CSimpleStringT` oggetto come una stringa di tipo C.

### <a name="syntax"></a>Sintassi

```
operator PCXSTR() const throw();
```

### <a name="return-value"></a>Valore restituito

Puntatore di caratteri ai dati della stringa.

### <a name="remarks"></a>Commenti

Nessun carattere copiato; viene restituito solo un puntatore. Prestare attenzione a questo operatore. Se si modifica un `CString` oggetto dopo avere ottenuto il puntatore a caratteri, è possibile che si verifichi una riallocazione della memoria che invalida il puntatore.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::operator PCXSTR`.

```cpp
// If the prototype of a function is known to the compiler,
// the PCXSTR cast operator may be invoked implicitly.

CSimpleString strSports(L"Soccer is Best!", pMgr);
WCHAR sz[1024];

wcscpy_s(sz, strSports);

// If the prototype isn't known or is a va_arg prototype,
// you must invoke the cast operator explicitly. For example,
// the va_arg part of a call to swprintf_s() needs the cast:

swprintf_s(sz, 1024, L"I think that %s!\n", (PCWSTR)strSports);

// While the format parameter is known to be an PCXSTR and
// therefore doesn't need the cast:

swprintf_s(sz, 1024, strSports);

// Note that some situations are ambiguous. This line will
// put the address of the strSports object to stdout:

wcout << strSports;

// while this line will put the content of the string out:

wcout << (PCWSTR)strSports;
```

## <a name="csimplestringtpcxstr"></a><a name="pcxstr"></a> CSimpleStringT::P CXSTR

Puntatore a una stringa costante.

### <a name="syntax"></a>Sintassi

```
typedef ChTraitsBase< BaseType >::PCXSTR PCXSTR;
```

## <a name="csimplestringtpreallocate"></a><a name="preallocate"></a> CSimpleStringT::P riallocare

Alloca una quantità specifica di byte per l' `CSimpleStringT` oggetto.

### <a name="syntax"></a>Sintassi

```cpp
void Preallocate( int nLength);
```

#### <a name="parameters"></a>Parametri

*nLength*<br/>
Dimensioni esatte del buffer di caratteri `CSimpleStringT` .

### <a name="remarks"></a>Commenti

Chiamare questo metodo per allocare una dimensione del buffer specifica per l' `CSimpleStringT` oggetto.

`CSimpleStringT` genera un'eccezione STATUS_NO_MEMORY se non è in grado di allocare spazio per il buffer di caratteri. Per impostazione predefinita, l'allocazione di memoria viene eseguita dalle funzioni API WIN32 `HeapAlloc` o `HeapReAlloc` .

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::Preallocate`.

```cpp
CSimpleString str(pMgr);
_tprintf_s(_T("Allocated length: %d\n"), str.GetAllocLength());
str.Preallocate(100);
_tprintf_s(_T("Allocated length: %d\n"), str.GetAllocLength());
```

## <a name="csimplestringtpxstr"></a><a name="pxstr"></a> CSimpleStringT::P XSTR

Puntatore a una stringa.

### <a name="syntax"></a>Sintassi

```
typedef ChTraitsBase< BaseType >::PXSTR PXSTR;
```

## <a name="csimplestringtreleasebuffer"></a><a name="releasebuffer"></a> CSimpleStringT:: ReleaseBuffer

Rilascia il controllo del buffer allocato da [GetBuffer](#getbuffer).

### <a name="syntax"></a>Sintassi

```cpp
void ReleaseBuffer(int nNewLength = -1);
```

#### <a name="parameters"></a>Parametri

*nNewLength*<br/>
Nuova lunghezza della stringa in caratteri, senza contare un carattere di terminazione null. Se la stringa è con terminazione null, il valore predefinito-1 imposta la `CSimpleStringT` dimensione sulla lunghezza corrente della stringa.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per riallocare o liberare il buffer dell'oggetto stringa. Se si è certi che la stringa nel buffer è con terminazione null, è possibile omettere l'argomento *nNewLength* . Se la stringa non è con terminazione null, usare *nNewLength* per specificarne la lunghezza. L'indirizzo restituito da [GetBuffer](#getbuffer) non è valido dopo la chiamata a `ReleaseBuffer` o a qualsiasi altra `CSimpleStringT` operazione.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::ReleaseBuffer`.

```cpp
const int bufferSize = 1024;
CSimpleString s(_T("abc"), pMgr);
LPTSTR p = s.GetBuffer(bufferSize);
_tcscpy_s(p, bufferSize, _T("abc"));

// use the buffer directly
ASSERT(s.GetLength() == 3);

// String length = 3
s.ReleaseBuffer();

// Surplus memory released, p is now invalid.
ASSERT(s.GetLength() == 3);

// Length still 3
```

## <a name="csimplestringtreleasebuffersetlength"></a><a name="releasebuffersetlength"></a> CSimpleStringT:: ReleaseBufferSetLength

Rilascia il controllo del buffer allocato da [GetBuffer](#getbuffer).

### <a name="syntax"></a>Sintassi

```cpp
void ReleaseBufferSetLength(int nNewLength);
```

#### <a name="parameters"></a>Parametri

*nNewLength*<br/>
Lunghezza della stringa da rilasciare

### <a name="remarks"></a>Commenti

Questa funzione è funzionalmente simile a [ReleaseBuffer](#releasebuffer) , con la differenza che è necessario passare una lunghezza valida per l'oggetto stringa.

## <a name="csimplestringtsetat"></a><a name="setat"></a> CSimpleStringT:: SetAt

Imposta un singolo carattere da un `CSimpleStringT` oggetto.

### <a name="syntax"></a>Sintassi

```cpp
void SetAt(int iChar, XCHAR ch);
```

#### <a name="parameters"></a>Parametri

*iChar*<br/>
Indice in base zero del carattere nell' `CSimpleStringT` oggetto. Il parametro *ICHAR* deve essere maggiore o uguale a 0 e minore del valore restituito da [GetLength](#getlength).

*ch*<br/>
Nuovo carattere.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per sovrascrivere il carattere che si trova in *ICHAR*. Questo metodo non consente di ingrandire la stringa se *ICHAR* supera i limiti della stringa esistente.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::SetAt`.

```cpp
CSimpleString s(_T("abcdef"), pMgr);
s.SetAt(1, _T('a'));
ASSERT(_tcscmp(s, _T("aacdef")) == 0);
```

## <a name="csimplestringtsetmanager"></a><a name="setmanager"></a> CSimpleStringT:: semanager

Specifica il gestore della memoria dell' `CSimpleStringT` oggetto.

### <a name="syntax"></a>Sintassi

```cpp
void SetManager(IAtlStringMgr* pStringMgr);
```

#### <a name="parameters"></a>Parametri

*pStringMgr*<br/>
Puntatore al nuovo gestore della memoria.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per specificare un nuovo gestore della memoria usato dall' `CSimpleStringT` oggetto. Per ulteriori informazioni sui gestori della memoria e sugli oggetti stringa, vedere [gestione della memoria e CStringT](../memory-management-with-cstringt.md).

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::SetManager`.

```cpp
CSimpleString s(pMgr);
s.SetManager(pCustomMgr);
```

## <a name="csimplestringtsetstring"></a><a name="setstring"></a> CSimpleStringT:: sestring

Imposta la stringa di un `CSimpleStringT` oggetto.

### <a name="syntax"></a>Sintassi

```cpp
void SetString(PCXSTR pszSrc, int nLength);
void SetString(PCXSTR pszSrc);
```

#### <a name="parameters"></a>Parametri

*pszSrc*<br/>
Puntatore a una stringa con terminazione null.

*nLength*<br/>
Conteggio del numero di caratteri in *pszSrc*.

### <a name="remarks"></a>Commenti

Copiare una stringa nell' `CSimpleStringT` oggetto. `SetString` sovrascrive i dati di stringa meno recenti nel buffer.

Entrambe le versioni di `SetString` verificano se *pszSrc* è un puntatore null e, in caso contrario, generano un errore di E_INVALIDARG.

La versione di un parametro di `SetString` prevede che *pszSrc* punti a una stringa con terminazione null.

La versione a due parametri di `SetString` prevede anche che *pszSrc* sia una stringa con terminazione null. USA *nLength* come lunghezza della stringa a meno che non riscontri prima un carattere di terminazione null.

La versione a due parametri di `SetString` Controlla anche se *pszSrc* punta a una posizione nel buffer corrente in `CSimpleStringT` . In questo caso speciale, `SetString` Usa una funzione di copia della memoria che non sovrascrive i dati stringa durante la copia dei dati di stringa nel buffer.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::SetString`.

```cpp
CSimpleString s(_T("abcdef"), pMgr);
ASSERT(_tcscmp(s, _T("abcdef")) == 0);
s.SetString(_T("Soccer"), 6);
ASSERT(_tcscmp(s, _T("Soccer")) == 0);
```

## <a name="csimplestringtstringlength"></a><a name="stringlength"></a> CSimpleStringT:: StringLength

Restituisce il numero di caratteri nella stringa specificata.

### <a name="syntax"></a>Sintassi

```
ATL_NOINLINE static int StringLength(PCXSTR psz) throw();
```

#### <a name="parameters"></a>Parametri

*PSZ*<br/>
Puntatore a una stringa con terminazione null.

### <a name="return-value"></a>Valore restituito

Il numero di caratteri in *PSZ*; nessun carattere di terminazione null.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per recuperare il numero di caratteri nella stringa a cui punta *PSZ*.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::StringLength`.

```cpp
ASSERT(CSimpleString::StringLength(_T("soccer")) == 6);
```

## <a name="csimplestringttruncate"></a><a name="truncate"></a> CSimpleStringT:: TRUNCATE

Tronca la stringa alla nuova lunghezza.

### <a name="syntax"></a>Sintassi

```cpp
void Truncate(int nNewLength);
```

#### <a name="parameters"></a>Parametri

*nNewLength*<br/>
Nuova lunghezza della stringa.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per troncare il contenuto della stringa alla nuova lunghezza.

> [!NOTE]
> Questa operazione non influisce sulla lunghezza allocata del buffer. Per ridurre o aumentare il buffer corrente, vedere [FreeExtra](#freeextra) e [preallocate](#preallocate).

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::Truncate`.

```cpp
CSimpleString str(_T("abcdefghi"), pMgr);
_tprintf_s(_T("Allocated length: %d\n"), str.GetLength());
_tprintf_s(_T("Contents: %s\n"), str);
str.Truncate(4);
_tprintf_s(_T("Allocated length: %d\n"), str.GetLength());
_tprintf_s(_T("Contents: %s\n"), str);
```

## <a name="csimplestringtunlockbuffer"></a><a name="unlockbuffer"></a> CSimpleStringT:: UnlockBuffer

Sblocca il buffer dell' `CSimpleStringT` oggetto.

### <a name="syntax"></a>Sintassi

```cpp
void UnlockBuffer() throw();
```

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per reimpostare il conteggio dei riferimenti della stringa su 1.

Il `CSimpleStringT` distruttore chiama automaticamente `UnlockBuffer` per assicurarsi che il buffer non venga bloccato quando viene chiamato il distruttore. Per un esempio di questo metodo, vedere [LockBuffer](#lockbuffer).

## <a name="csimplestringtcsimplestringt"></a><a name="dtor"></a> CSimpleStringT:: ~ CSimpleStringT

Elimina un oggetto `CSimpleStringT` .

### <a name="syntax"></a>Sintassi

```
~CSimpleStringT() throw();
```

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per eliminare definitivamente l' `CSimpleStringT` oggetto.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
