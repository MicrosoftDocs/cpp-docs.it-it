---
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
ms.openlocfilehash: dce33289699b9e7b7484d1feb6335476f93dee9b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317679"
---
# <a name="csimplestringt-class"></a>CSimpleStringT (classe)

Questa classe `CSimpleStringT` rappresenta un oggetto.

## <a name="syntax"></a>Sintassi

```
template <typename BaseType>
class CSimpleStringT
```

### <a name="parameters"></a>Parametri

*BaseType*<br/>
Tipo di carattere della classe stringa. Può essere uno dei valori seguenti:

- **char** (per le stringhe di caratteri ANSI).

- **wchar_t** (per le stringhe di caratteri Unicode).

- TCHAR (sia per le stringhe di caratteri ANSI che Unicode).

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSimpleStringT::PCXSTR](#pcxstr)|Puntatore a una stringa costante.|
|[CSimpleStringT::PXSTR](#pxstr)|Puntatore a una stringa.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSimpleStringT::CSimpleStringT](#ctor)|Costruisce `CSimpleStringT` oggetti in vari modi.|
|[CSimpleStringT:: : CSimpleStringT](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSimpleStringT::Append](#append)|Aggiunge un `CSimpleStringT` oggetto a `CSimpleStringT` un oggetto esistente.|
|[CSimpleStringT::AppendChar](#appendchar)|Aggiunge un carattere `CSimpleStringT` a un oggetto esistente.|
|[CSimpleStringT::CopyChars](#copychars)|Copia uno o più caratteri in un'altra stringa.|
|[CSimpleStringT::CopyCharsOverlapped](#copycharsoverlapped)|Copia uno o più caratteri in un'altra stringa in cui i buffer si sovrappongono.|
|[CSimpleStringT::Vuoto](#empty)|Forza una stringa ad avere una lunghezza pari a zero.|
|[CSimpleStringT::FreeExtra](#freeextra)|Libera la memoria aggiuntiva precedentemente allocata dall'oggetto stringa.|
|[CSimpleStringT::GetAllocLength](#getalloclength)|Recupera la lunghezza allocata di un `CSimpleStringT` oggetto.|
|[CSimpleStringT::GetAt](#getat)|Restituisce il carattere in una posizione specificata.|
|[CSimpleStringT::GetBuffer](#getbuffer)|Restituisce un puntatore `CSimpleStringT`ai caratteri in un oggetto .|
|[CSimpleStringT::GetBufferSetLength](#getbuffersetlength)|Restituisce un puntatore `CSimpleStringT`ai caratteri in un oggetto , troncandosi alla lunghezza specificata.|
|[CSimpleStringT::GetLength](#getlength)|Restituisce il numero `CSimpleStringT` di caratteri in un oggetto.|
|[CSimpleStringT::GetManager](#getmanager)|Recupera il gestore `CSimpleStringT` di memoria dell'oggetto.|
|[CSimpleStringT::GetString](#getstring)|Recupera la stringa di caratteri|
|[CSimpleStringT::IsEmpty](#isempty)|Verifica se `CSimpleStringT` un oggetto non contiene caratteri.|
|[CSimpleStringT::LockBuffer](#lockbuffer)|Disabilita il conteggio dei riferimenti e protegge la stringa nel buffer.|
|[CSimpleStringT::Priallocate](#preallocate)|Alloca una quantità specifica di memoria per il buffer di caratteri.|
|[CSimpleStringT::ReleaseBuffer](#releasebuffer)|Rilascia il controllo del `GetBuffer`buffer restituito da .|
|[CSimpleStringT::ReleaseBufferSetLength](#releasebuffersetlength)|Rilascia il controllo del `GetBuffer`buffer restituito da .|
|[CSimpleStringT::SetAt](#setat)|Imposta un carattere in una posizione specificata.|
|[CSimpleStringT::SetManager](#setmanager)|Imposta il gestore `CSimpleStringT` di memoria di un oggetto.|
|[CSimpleStringT::SetString](#setstring)|Imposta la stringa `CSimpleStringT` di un oggetto.|
|[CSimpleStringT::StringLength](#stringlength)|Restituisce il numero di caratteri nella stringa specificata.|
|[CSimpleStringT::Truncate](#truncate)|Tronca la stringa a una lunghezza specificata.|
|[CSimpleStringT::UnlockBuffer](#unlockbuffer)|Abilita il conteggio dei riferimenti e rilascia la stringa nel buffer.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSimpleStringT::operator PCXSTR](#operator_pcxstr)|Accede direttamente ai caratteri `CSimpleStringT` archiviati in un oggetto come stringa di tipo C.Directly accesses characters stored in a object as a C-style string.|
|[CSimpleStringT::operator\[\]](#operator_at)|Restituisce il carattere in una `GetAt`posizione specificata, ovvero la sostituzione dell'operatore per .|
|[CSimpleStringT::operatore](#operator_add_eq)|Concatena una nuova stringa alla fine di una stringa esistente.|
|[CSimpleStringT::operatore](#operator_eq)|Assegna un nuovo valore `CSimpleStringT` a un oggetto.|

### <a name="remarks"></a>Osservazioni

`CSimpleStringT`è la classe di base per le varie classi di stringa supportate da Visual C. Fornisce un supporto minimo per la gestione della memoria dell'oggetto stringa e la modifica del buffer di base. Per gli oggetti stringa più avanzati, vedere [Classe CStringT](../../atl-mfc-shared/reference/cstringt-class.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpstr.h

## <a name="csimplestringtappend"></a><a name="append"></a>CSimpleStringT::Append

Aggiunge un `CSimpleStringT` oggetto a `CSimpleStringT` un oggetto esistente.

### <a name="syntax"></a>Sintassi

```
void Append(const CSimpleStringT& strSrc);
void Append(PCXSTR pszSrc, int nLength);
void Append(PCXSTR pszSrc);
```

#### <a name="parameters"></a>Parametri

*strSrc*<br/>
Oggetto `CSimpleStringT` da aggiungere.

*Pszsrc*<br/>
Puntatore a una stringa contenente i caratteri da aggiungere.

*nLunghezza*<br/>
Numero di caratteri da accodare.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per `CSimpleStringT` aggiungere `CSimpleStringT` un oggetto esistente a un altro oggetto.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::Append`.

```cpp
CSimpleString str1(pMgr), str2(pMgr);
str1.SetString(_T("Soccer is"));
str2.SetString(_T(" an elegant game"));
str1.Append(str2);
ASSERT(_tcscmp(str1, _T("Soccer is an elegant game")) == 0);
```

## <a name="csimplestringtappendchar"></a><a name="appendchar"></a>CSimpleStringT::AppendChar

Aggiunge un carattere `CSimpleStringT` a un oggetto esistente.

### <a name="syntax"></a>Sintassi

```
void AppendChar(XCHAR ch);
```

#### <a name="parameters"></a>Parametri

*Ch*<br/>
Il carattere da aggiungere

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per aggiungere il carattere `CSimpleStringT` specificato alla fine di un oggetto esistente.

## <a name="csimplestringtcopychars"></a><a name="copychars"></a>CSimpleStringT::CopyChars

Copia uno o più `CSimpleStringT` caratteri in un oggetto.

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

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per copiare i caratteri da *pchSrc* alla stringa *pchDest.*

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::CopyChars`.

```cpp
CSimpleString str(_T("xxxxxxxxxxxxxxxxxxx"), 20, pMgr);
TCHAR* pszSrc = _T("Hello world!");
_tprintf_s(_T("%s\n"), str);
str.CopyChars(str.GetBuffer(), pszSrc, 12);
_tprintf_s(_T("%s\n"), str);
```

## <a name="csimplestringtcopycharsoverlapped"></a><a name="copycharsoverlapped"></a>CSimpleStringT::CopyCharsOverlapped

Copia uno o più `CSimpleStringT` caratteri in un oggetto.

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

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per copiare i caratteri da *pchSrc* alla stringa *pchDest.* A `CopyChars` `CopyCharsOverlapped` differenza di , fornisce un metodo sicuro per la copia da buffer di caratteri che potrebbero essere sovrapposti.

### <a name="example"></a>Esempio

Vedere l'esempio per [CSimpleStringT::CopyChars](#copychars)o `CSimpleStringT::SetString` il codice sorgente per (situato in atlsimpstr.h).

## <a name="csimplestringtcsimplestringt"></a><a name="ctor"></a>CSimpleStringT::CSimpleStringT

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
Oggetto `CSimpleStringT` esistente da copiare `CSimpleStringT` in questo oggetto.

*pchSrc*<br/>
Puntatore a una matrice di caratteri di lunghezza *nLength*, non null terminato.

*Pszsrc*<br/>
Stringa con terminazione null da `CSimpleStringT` copiare in questo oggetto.

*nLunghezza*<br/>
Conteggio del numero di `pch`caratteri in .

*pStringMgr (informazioni in stato indue)*<br/>
Puntatore al gestore `CSimpleStringT` della memoria dell'oggetto. Per ulteriori `IAtlStringMgr` informazioni sulla `CSimpleStringT`gestione della memoria e per , vedere [Gestione della memoria e CStringT](../memory-management-with-cstringt.md).

### <a name="remarks"></a>Osservazioni

Costruisce un nuovo oggetto `CSimpleStringT`. Poiché i costruttori copiano i dati di input in una nuova risorsa di archiviazione allocata, possono verificarsi eccezioni di memoria.

### <a name="example"></a>Esempio

Nell'esempio riportato `CSimpleStringT::CSimpleStringT` di seguito viene illustrato l'utilizzo di utilizzando il **typedef** `CSimpleString`ATL . `CSimpleString`è una specializzazione comunemente `CSimpleStringT`utilizzata del modello di classe .

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

## <a name="csimplestringtempty"></a><a name="empty"></a>CSimpleStringT::Vuoto

Rende `CSimpleStringT` questo oggetto una stringa vuota e libera la memoria in base alle esigenze.

### <a name="syntax"></a>Sintassi

```
void Empty() throw();
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [Stringhe: Pulizia delle eccezioni CString](../cstring-exception-cleanup.md).

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::Empty`.

```cpp
CSimpleString s(pMgr);
ASSERT(s.IsEmpty());
```

## <a name="csimplestringtfreeextra"></a><a name="freeextra"></a>CSimpleStringT::FreeExtra

Libera la memoria aggiuntiva precedentemente allocata dalla stringa ma non è più necessaria.

### <a name="syntax"></a>Sintassi

```
void FreeExtra();
```

### <a name="remarks"></a>Osservazioni

In questo modo è necessario ridurre l'overhead di memoria utilizzato dall'oggetto stringa. Il metodo rialloca il buffer alla lunghezza esatta restituita da [GetLength](#getlength).

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

### <a name="remarks"></a>Osservazioni

L'output di questo esempio è il seguente:The output from this example is as follows:

```Output
Alloc length is 1031, String length is 1024
Alloc length is 1031, String length is 15
Alloc length is 15, String length is 15
```

## <a name="csimplestringtgetalloclength"></a><a name="getalloclength"></a>CSimpleStringT::GetAllocLength

Recupera la lunghezza allocata di un `CSimpleStringT` oggetto.

### <a name="syntax"></a>Sintassi

```
int GetAllocLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Numero di caratteri allocati per questo oggetto.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per determinare il `CSimpleStringT` numero di caratteri allocati per questo oggetto. Vedere [FreeExtra](#freeextra) per un esempio di chiamata a questa funzione.

## <a name="csimplestringtgetat"></a><a name="getat"></a>CSimpleStringT::GetAt

Restituisce un `CSimpleStringT` carattere da un oggetto.

### <a name="syntax"></a>Sintassi

```
XCHAR GetAt(int iChar) const;
```

#### <a name="parameters"></a>Parametri

*IChar (informazioni in stato inquesto*<br/>
Indice in base zero del `CSimpleStringT` carattere nell'oggetto. Il parametro *iChar* deve essere maggiore o uguale a 0 e minore del valore restituito da [GetLength](#getlength). In `GetAt` caso contrario, verrà generata un'eccezione.

### <a name="return-value"></a>Valore restituito

Oggetto `XCHAR` che contiene il carattere nella posizione specificata nella stringa.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per restituire il carattere specificato da *iChar*. L'operatore di indice di overload ( `GetAt`**[]**) è un alias pratico per . Il carattere di terminazione null è `GetAt`indirizzabile senza generare un'eccezione utilizzando . Tuttavia, non viene `GetLength`conteggiato da e il valore restituito è 0.

### <a name="example"></a>Esempio

Nell'esempio riportato `CSimpleStringT::GetAt`di seguito viene illustrato come utilizzare .

```cpp
CSimpleString s(_T("abcdef"), pMgr);
ASSERT(s.GetAt(2) == _T('c'));
```

## <a name="csimplestringtgetbuffer"></a><a name="getbuffer"></a>CSimpleStringT::GetBuffer

Restituisce un puntatore al `CSimpleStringT` buffer di caratteri interno per l'oggetto.

### <a name="syntax"></a>Sintassi

```
PXSTR GetBuffer(int nMinBufferLength);
PXSTR GetBuffer();
```

#### <a name="parameters"></a>Parametri

*nMinBufferLength (lunghezza in base al taverificato)*<br/>
Numero minimo di caratteri che il buffer di caratteri può contenere. Questo valore non include lo spazio per un carattere di terminazione null.

Se *nMinBufferLength* è maggiore della lunghezza `GetBuffer` del buffer corrente, elimina il buffer corrente, lo sostituisce con un buffer della dimensione richiesta e reimposta il conteggio dei riferimenti all'oggetto su zero. Se in precedenza è stato chiamato [LockBuffer](#lockbuffer) su questo buffer, si perde il blocco del buffer.

### <a name="return-value"></a>Valore restituito

Puntatore `PXSTR` al buffer di caratteri dell'oggetto (con terminazione null).

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per restituire `CSimpleStringT` il contenuto del buffer dell'oggetto. Il restituito `PXSTR` non è una costante e `CSimpleStringT` pertanto consente la modifica diretta del contenuto.

Se si utilizza il `GetBuffer` puntatore restituito da per modificare il contenuto della `CSimpleStringT` stringa, è necessario chiamare [ReleaseBuffer](#releasebuffer) prima di utilizzare qualsiasi altro metodo membro.

L'indirizzo restituito `GetBuffer` da potrebbe non essere `ReleaseBuffer` valido `CSimpleStringT` dopo la `CSimpleStringT` chiamata a perché altre operazioni possono causare la riallocazione del buffer. Il buffer non viene riallocato se `CSimpleStringT`non si modifica la lunghezza dell'oggetto .

La memoria del buffer viene `CSimpleStringT` liberata automaticamente quando l'oggetto viene eliminato.

Se si tiene traccia della lunghezza della stringa manualmente, non è necessario aggiungere il carattere di terminazione null. Tuttavia, è necessario specificare la lunghezza `ReleaseBuffer`finale della stringa quando si rilascia il buffer con . Se si aggiunge un carattere di terminazione null, è necessario passare -1 (impostazione predefinita) per la lunghezza. `ReleaseBuffer`quindi determina la lunghezza del buffer.

Se la memoria non `GetBuffer` è sufficiente per soddisfare la richiesta, questo metodo genera un CMemoryException.

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

## <a name="csimplestringtgetbuffersetlength"></a><a name="getbuffersetlength"></a>CSimpleStringT::GetBufferSetLength

Restituisce un puntatore al `CSimpleStringT` buffer di caratteri interno per l'oggetto, troncandone o aumentando la lunghezza, se necessario, in modo che corrisponda esattamente alla lunghezza specificata in *nLength*.

### <a name="syntax"></a>Sintassi

```
PXSTR GetBufferSetLength(int nLength);
```

#### <a name="parameters"></a>Parametri

*nLunghezza*<br/>
Dimensione esatta del `CSimpleStringT` buffer di caratteri in caratteri.

### <a name="return-value"></a>Valore restituito

Puntatore `PXSTR` al buffer di caratteri dell'oggetto (con terminazione null).

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per recuperare una lunghezza `CSimpleStringT` specificata del buffer interno dell'oggetto. Il puntatore restituito `PXSTR` non è **const** `CSimpleStringT` e pertanto consente la modifica diretta del contenuto.

Se si utilizza il puntatore restituito da [GetBufferSetLength](#getbuffersetlength) per modificare il contenuto della stringa, chiamare `ReleaseBuffer` per aggiornare lo stato interno di prima di `CsimpleStringT` utilizzare qualsiasi altro `CSimpleStringT` metodo.

L'indirizzo restituito `GetBufferSetLength` da potrebbe non essere `ReleaseBuffer` valido `CSimpleStringT` dopo la `CSimpleStringT` chiamata a perché altre operazioni possono causare la riallocazione del buffer. Il buffer non viene riassegnato se non `CSimpleStringT`si modifica la lunghezza dell'oggetto .

La memoria del buffer viene `CSimpleStringT` liberata automaticamente quando l'oggetto viene eliminato.

Se si tiene traccia della lunghezza della stringa manualmente, non aggiungere il carattere di terminazione null. È necessario specificare la lunghezza finale della `ReleaseBuffer`stringa quando si rilascia il buffer utilizzando . Se si aggiunge un carattere di `ReleaseBuffer`terminazione null quando si chiama `ReleaseBuffer`, `ReleaseBuffer` si passa `strlen` -1 (impostazione predefinita) per la lunghezza a , ed eseguirà un valore sul buffer per determinarne la lunghezza.

Per altre informazioni sul conteggio dei riferimenti, vedere gli articoli seguenti:For more information about reference counting, see the following articles:

- [Gestione della durata degli oggetti tramite](/windows/win32/com/managing-object-lifetimes-through-reference-counting) il conteggio dei riferimenti in Windows SDK.

- [Implementazione del conteggio](/windows/win32/com/implementing-reference-counting) dei riferimenti in Windows SDK.

- [Regole per la gestione dei conteggi dei](/windows/win32/com/rules-for-managing-reference-counts) riferimenti in Windows SDK.

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

## <a name="csimplestringtgetlength"></a><a name="getlength"></a>CSimpleStringT::GetLength

Restituisce il numero `CSimpleStringT` di caratteri nell'oggetto.

### <a name="syntax"></a>Sintassi

```
int GetLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Conteggio dei caratteri nella stringa.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per restituire il numero di caratteri nell'oggetto. Il conteggio non include un carattere di terminazione null.

Per i set di caratteri `GetLength` multibyte (MBCS), conta ogni carattere a 8 bit; vale a dire, un byte iniziale e finale in un carattere multibyte vengono conteggiati come due byte. Vedere [FreeExtra](#freeextra) per un esempio di chiamata a questa funzione.

## <a name="csimplestringtgetmanager"></a><a name="getmanager"></a>CSimpleStringT::GetManager

Recupera il gestore `CSimpleStringT` di memoria dell'oggetto.

### <a name="syntax"></a>Sintassi

```
IAtlStringMgr* GetManager() const throw();
```

### <a name="return-value"></a>Valore restituito

Puntatore al gestore `CSimpleStringT` della memoria per l'oggetto.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per recuperare il `CSimpleStringT` gestore di memoria utilizzato dall'oggetto. Per ulteriori informazioni sui gestori di memoria e sugli oggetti stringa, vedere [Gestione della memoria e CStringT](../memory-management-with-cstringt.md).

## <a name="csimplestringtgetstring"></a><a name="getstring"></a>CSimpleStringT::GetString

Recupera la stringa di caratteri.

### <a name="syntax"></a>Sintassi

```
PCXSTR GetString() const throw();
```

### <a name="return-value"></a>Valore restituito

Puntatore a una stringa di caratteri con terminazione null.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per recuperare la `CSimpleStringT` stringa di caratteri associata all'oggetto.

> [!NOTE]
> Il puntatore restituito `PCXSTR` è **const** e `CSimpleStringT` non consente la modifica diretta del contenuto.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::GetString`.

```cpp
CSimpleString str(pMgr);
str += _T("Cup soccer is best!");
_tprintf_s(_T("%s"), str.GetString());
```

## <a name="csimplestringtisempty"></a><a name="isempty"></a>CSimpleStringT::IsEmpty

Verifica `CSimpleStringT` la condizione vuota di un oggetto.

### <a name="syntax"></a>Sintassi

```
bool IsEmpty() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE `CSimpleStringT` se l'oggetto ha lunghezza 0; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per determinare se l'oggetto contiene una stringa vuota.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::IsEmpty`.

```cpp
CSimpleString s(pMgr);
ASSERT(s.IsEmpty());
```

## <a name="csimplestringtlockbuffer"></a><a name="lockbuffer"></a>CSimpleStringT::LockBuffer

Disabilita il conteggio dei riferimenti e protegge la stringa nel buffer.

### <a name="syntax"></a>Sintassi

```
PXSTR LockBuffer();
```

### <a name="return-value"></a>Valore restituito

Puntatore a `CSimpleStringT` un oggetto o a una stringa con terminazione null.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per bloccare il buffer dell'oggetto. `CSimpleStringT` Chiamando `LockBuffer`, si crea una copia della stringa, con -1 per il conteggio dei riferimenti. Quando il valore del conteggio dei riferimenti è -1, la stringa nel buffer viene considerata in uno stato "bloccato". In uno stato bloccato, la stringa è protetta in due modi:

- Nessun'altra stringa può ottenere un riferimento ai dati nella stringa bloccata, anche se tale stringa è assegnata alla stringa bloccata.

- La stringa bloccata non farà mai riferimento a un'altra stringa, anche se l'altra stringa viene copiata nella stringa bloccata.

Bloccando la stringa nel buffer, si garantisce che la conservazione esclusiva della stringa sul buffer rimarrà intatta.

Al termine di `LockBuffer`, chiamare [UnlockBuffer](#unlockbuffer) per reimpostare il conteggio dei riferimenti su 1.

> [!NOTE]
> Se si chiama [GetBuffer](#getbuffer) su un `GetBuffer` buffer `nMinBufferLength` bloccato e si imposta il parametro su un valore maggiore della lunghezza del buffer corrente, il blocco del buffer andrà perso. Tale chiamata `GetBuffer` a elimina il buffer corrente, lo sostituisce con un buffer della dimensione richiesta e reimposta il conteggio dei riferimenti su zero.

Per altre informazioni sul conteggio dei riferimenti, vedere gli articoli seguenti:For more information about reference counting, see the following articles:

- Gestione della durata degli oggetti tramite il conteggio dei riferimenti in Windows SDKManaging [Object Lifetimes through Reference Counting](/windows/win32/com/managing-object-lifetimes-through-reference-counting) in the Windows SDK

- [Implementazione del conteggio](/windows/win32/com/implementing-reference-counting) dei riferimenti in Windows SDKImplementing Reference Counting in the Windows SDK

- [Regole per](/windows/win32/com/rules-for-managing-reference-counts) la gestione dei conteggi dei riferimenti in Windows SDK

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

## <a name="csimplestringtoperator"></a><a name="operator_at"></a>CSimpleStringT::operatore\[\]

Chiamare questa funzione per accedere a un singolo carattere della matrice di caratteri.

### <a name="syntax"></a>Sintassi

```
XCHAR operator[](int iChar) const;
```

#### <a name="parameters"></a>Parametri

*IChar (informazioni in stato inquesto*<br/>
Indice in base zero di un carattere nella stringa.

### <a name="remarks"></a>Osservazioni

L'operatore di indice di overload (**[]**) restituisce un singolo carattere specificato dall'indice in base zero in *iChar*. Questo operatore è un comodo sostituto per il [GetAt](#getat) funzione membro.

> [!NOTE]
> È possibile utilizzare l'operatore di indice (**[]** `CSimpleStringT`) per ottenere il valore di un carattere in un oggetto , ma non è possibile utilizzarlo per modificare il valore di un carattere in un `CSimpleStringT`oggetto .

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::operator []`.

```cpp
CSimpleString s(_T("abc"), pMgr);
ASSERT(s[1] == _T('b'));
```

## <a name="csimplestringtoperator-"></a><a name="operator_at"></a>CSimpleStringT::operatore\[\]

Chiamare questa funzione per accedere a un singolo carattere della matrice di caratteri.

### <a name="syntax"></a>Sintassi

```
XCHAR operator[](int iChar) const;
```

### <a name="parameters"></a>Parametri

*IChar (informazioni in stato inquesto*<br/>
Indice in base zero di un carattere nella stringa.

### <a name="remarks"></a>Osservazioni

L'operatore di indice di overload (**[]**) restituisce un singolo carattere specificato dall'indice in base zero in *iChar*. Questo operatore è un comodo sostituto per il [GetAt](#getat) funzione membro.

> [!NOTE]
> È possibile utilizzare l'operatore di indice (**[]** `CSimpleStringT`) per ottenere il valore di un carattere in un oggetto , ma non è possibile utilizzarlo per modificare il valore di un carattere in un `CSimpleStringT`oggetto .

## <a name="csimplestringtoperator-"></a><a name="operator_add_eq"></a>CSimpleStringT::operatore

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

*Pszsrc*<br/>
Puntatore a una stringa con terminazione null.

*strSrc*<br/>
Puntatore a `CSimpleStringT` un oggetto esistente.

*Ch*<br/>
Il carattere da aggiungere.

### <a name="remarks"></a>Osservazioni

L'operatore `CSimpleStringT` accetta un altro oggetto o un carattere. Si noti che le eccezioni di memoria possono verificarsi ogni volta che `CSimpleStringT` si utilizza questo operatore di concatenazione perché è possibile allocare nuova risorsa di archiviazione per i caratteri aggiunti a questo oggetto.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::operator +=`.

```cpp
CSimpleString str(_T("abc"), pMgr);
ASSERT(_tcscmp((str += _T("def")), _T("abcdef")) == 0);
```

## <a name="csimplestringtoperator-"></a><a name="operator_eq"></a>CSimpleStringT::operatore

Assegna un nuovo valore `CSimpleStringT` a un oggetto.

### <a name="syntax"></a>Sintassi

```
CSimpleStringT& operator =(PCXSTR pszSrc);
CSimpleStringT& operator =(const CSimpleStringT& strSrc);
```

#### <a name="parameters"></a>Parametri

*Pszsrc*<br/>
Puntatore a una stringa con terminazione null.

*strSrc*<br/>
Puntatore a `CSimpleStringT` un oggetto esistente.

### <a name="remarks"></a>Osservazioni

Se la stringa di destinazione (il lato sinistro) è già sufficientemente grande per archiviare i nuovi dati, non viene eseguita alcuna nuova allocazione di memoria. Si noti che le eccezioni di memoria possono verificarsi ogni `CSimpleStringT` volta che si utilizza l'operatore di assegnazione perché nuova risorsa di archiviazione viene spesso allocata per contenere l'oggetto risultante.

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

## <a name="csimplestringtoperator-pcxstr"></a><a name="operator_pcxstr"></a>CSimpleStringT::operator PCXSTR

Accede direttamente ai caratteri `CSimpleStringT` archiviati in un oggetto come stringa di tipo C.Directly accesses characters stored in a object as a C-style string.

### <a name="syntax"></a>Sintassi

```
operator PCXSTR() const throw();
```

### <a name="return-value"></a>Valore restituito

Puntatore a i caratteri ai dati della stringa.

### <a name="remarks"></a>Osservazioni

Non viene copiato alcun carattere; viene restituito solo un puntatore. Fate attenzione con questo operatore. Se si `CString` modifica un oggetto dopo aver ottenuto il puntatore del carattere, è possibile che si verifichi una riallocazione della memoria che invalida il puntatore.

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

## <a name="csimplestringtpcxstr"></a><a name="pcxstr"></a>CSimpleStringT::PCXSTR

Puntatore a una stringa costante.

### <a name="syntax"></a>Sintassi

```
typedef ChTraitsBase< BaseType >::PCXSTR PCXSTR;
```

## <a name="csimplestringtpreallocate"></a><a name="preallocate"></a>CSimpleStringT::Priallocate

Alloca una quantità specifica `CSimpleStringT` di byte per l'oggetto.

### <a name="syntax"></a>Sintassi

```
void Preallocate( int nLength);
```

#### <a name="parameters"></a>Parametri

*nLunghezza*<br/>
Dimensione esatta del `CSimpleStringT` buffer di caratteri in caratteri.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per allocare `CSimpleStringT` una dimensione del buffer specifica per l'oggetto.

`CSimpleStringT`genera un'eccezione STATUS_NO_MEMORY se non è in grado di allocare spazio per il buffer di caratteri. Per impostazione predefinita, l'allocazione `HeapAlloc` di `HeapReAlloc`memoria viene eseguita dalle funzioni API WIN32 o .

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::Preallocate`.

```cpp
CSimpleString str(pMgr);
_tprintf_s(_T("Allocated length: %d\n"), str.GetAllocLength());
str.Preallocate(100);
_tprintf_s(_T("Allocated length: %d\n"), str.GetAllocLength());
```

## <a name="csimplestringtpxstr"></a><a name="pxstr"></a>CSimpleStringT::PXSTR

Puntatore a una stringa.

### <a name="syntax"></a>Sintassi

```
typedef ChTraitsBase< BaseType >::PXSTR PXSTR;
```

## <a name="csimplestringtreleasebuffer"></a><a name="releasebuffer"></a>CSimpleStringT::ReleaseBuffer

Rilascia il controllo del buffer allocato da [GetBuffer](#getbuffer).

### <a name="syntax"></a>Sintassi

```
void ReleaseBuffer(int nNewLength = -1);
```

#### <a name="parameters"></a>Parametri

*nNewLength (lunghezza in cui è stato ein*<br/>
Nuova lunghezza della stringa in caratteri, senza contare un carattere di terminazione null. Se la stringa è null terminato, il `CSimpleStringT` valore predefinito -1 imposta la dimensione sulla lunghezza corrente della stringa.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per riallocare o liberare il buffer dell'oggetto stringa. Se si sa che la stringa nel buffer è terminata con null, è possibile omettere l'argomento *nNewLength.* Se la stringa non è null terminato, utilizzare *nNewLength* per specificarne la lunghezza. L'indirizzo restituito da [GetBuffer](#getbuffer) non `ReleaseBuffer` è valido `CSimpleStringT` dopo la chiamata a o qualsiasi altra operazione.

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

## <a name="csimplestringtreleasebuffersetlength"></a><a name="releasebuffersetlength"></a>CSimpleStringT::ReleaseBufferSetLength

Rilascia il controllo del buffer allocato da [GetBuffer](#getbuffer).

### <a name="syntax"></a>Sintassi

```
void ReleaseBufferSetLength(int nNewLength);
```

#### <a name="parameters"></a>Parametri

*nNewLength (lunghezza in cui è stato ein*<br/>
La lunghezza della stringa rilasciata

### <a name="remarks"></a>Osservazioni

Questa funzione è funzionalmente simile a [ReleaseBuffer,](#releasebuffer) ad eccezione del fatto che deve essere passata una lunghezza valida per l'oggetto stringa.

## <a name="csimplestringtsetat"></a><a name="setat"></a>CSimpleStringT::SetAt

Imposta un singolo `CSimpleStringT` carattere da un oggetto.

### <a name="syntax"></a>Sintassi

```
void SetAt(int iChar, XCHAR ch);
```

#### <a name="parameters"></a>Parametri

*IChar (informazioni in stato inquesto*<br/>
Indice in base zero del `CSimpleStringT` carattere nell'oggetto. Il parametro *iChar* deve essere maggiore o uguale a 0 e minore del valore restituito da [GetLength](#getlength).

*Ch*<br/>
Il nuovo personaggio.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per sovrascrivere il carattere situato in *iChar*. Questo metodo non ingrandirà la stringa se *iChar* supera i limiti della stringa esistente.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::SetAt`.

```cpp
CSimpleString s(_T("abcdef"), pMgr);
s.SetAt(1, _T('a'));
ASSERT(_tcscmp(s, _T("aacdef")) == 0);
```

## <a name="csimplestringtsetmanager"></a><a name="setmanager"></a>CSimpleStringT::SetManager

Specifica il gestore `CSimpleStringT` della memoria dell'oggetto.

### <a name="syntax"></a>Sintassi

```
void SetManager(IAtlStringMgr* pStringMgr);
```

#### <a name="parameters"></a>Parametri

*pStringMgr (informazioni in stato indue)*<br/>
Puntatore al nuovo gestore della memoria.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per specificare un `CSimpleStringT` nuovo gestore di memoria utilizzato dall'oggetto. Per ulteriori informazioni sui gestori di memoria e sugli oggetti stringa, vedere [Gestione della memoria e CStringT](../memory-management-with-cstringt.md).

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::SetManager`.

```cpp
CSimpleString s(pMgr);
s.SetManager(pCustomMgr);
```

## <a name="csimplestringtsetstring"></a><a name="setstring"></a>CSimpleStringT::SetString

Imposta la stringa `CSimpleStringT` di un oggetto.

### <a name="syntax"></a>Sintassi

```
void SetString(PCXSTR pszSrc, int nLength);
void SetString(PCXSTR pszSrc);
```

#### <a name="parameters"></a>Parametri

*Pszsrc*<br/>
Puntatore a una stringa con terminazione null.

*nLunghezza*<br/>
Conteggio del numero di caratteri in *pszSrc*.

### <a name="remarks"></a>Osservazioni

Copiare una `CSimpleStringT` stringa nell'oggetto. `SetString`sovrascrive i dati di stringa meno recenti nel buffer.

Entrambe `SetString` le versioni di verificare se *pszSrc* è un puntatore null e, in caso affermativo, genera un errore di E_INVALIDARG.

La versione con `SetString` un parametro di prevede che *pszSrc* punti a una stringa con terminazione null.

La versione a `SetString` due parametri di prevede anche *pszSrc* per essere una stringa con terminazione null. Utilizza *nLength* come lunghezza della stringa, a meno che non venga rilevato prima un carattere di terminazione null.

La versione a `SetString` due parametri di controlla anche se *pszSrc* punta a una posizione nel buffer corrente in `CSimpleStringT`. In questo caso `SetString` speciale, utilizza una funzione di copia della memoria che non sovrascrive i dati di stringa mentre copia i dati di stringa nel buffer.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::SetString`.

```cpp
CSimpleString s(_T("abcdef"), pMgr);
ASSERT(_tcscmp(s, _T("abcdef")) == 0);
s.SetString(_T("Soccer"), 6);
ASSERT(_tcscmp(s, _T("Soccer")) == 0);
```

## <a name="csimplestringtstringlength"></a><a name="stringlength"></a>CSimpleStringT::StringLength

Restituisce il numero di caratteri nella stringa specificata.

### <a name="syntax"></a>Sintassi

```
ATL_NOINLINE static int StringLength(PCXSTR psz) throw();
```

#### <a name="parameters"></a>Parametri

*Psz*<br/>
Puntatore a una stringa con terminazione null.

### <a name="return-value"></a>Valore restituito

Il numero di caratteri in *psz*; senza contare un carattere di terminazione null.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per recuperare il numero di caratteri nella stringa a cui punta *psz*.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CSimpleStringT::StringLength`.

```cpp
ASSERT(CSimpleString::StringLength(_T("soccer")) == 6);
```

## <a name="csimplestringttruncate"></a><a name="truncate"></a>CSimpleStringT::Truncate

Tronca la stringa alla nuova lunghezza.

### <a name="syntax"></a>Sintassi

```
void Truncate(int nNewLength);
```

#### <a name="parameters"></a>Parametri

*nNewLength (lunghezza in cui è stato ein*<br/>
Nuova lunghezza della stringa.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per troncare il contenuto della stringa alla nuova lunghezza.

> [!NOTE]
> Ciò non influisce sulla lunghezza allocata del buffer. Per ridurre o aumentare il buffer corrente, vedere [FreeExtra](#freeextra) e [Preallocare](#preallocate).

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

## <a name="csimplestringtunlockbuffer"></a><a name="unlockbuffer"></a>CSimpleStringT::UnlockBuffer

Sblocca il buffer `CSimpleStringT` dell'oggetto.

### <a name="syntax"></a>Sintassi

```
void UnlockBuffer() throw();
```

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per reimpostare il conteggio dei riferimenti della stringa su 1.

Il `CSimpleStringT` distruttore chiama `UnlockBuffer` automaticamente per garantire che il buffer non sia bloccato quando viene chiamato il distruttore. Per un esempio di questo metodo, vedere [LockBuffer](#lockbuffer).

## <a name="csimplestringtcsimplestringt"></a><a name="dtor"></a>CSimpleStringT:: : CSimpleStringT

Elimina un oggetto `CSimpleStringT` .

### <a name="syntax"></a>Sintassi

```
~CSimpleStringT() throw();
```

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo `CSimpleStringT` per eliminare l'oggetto.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
