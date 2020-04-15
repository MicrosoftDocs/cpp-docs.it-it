---
title: Classe CComBSTR
ms.date: 11/04/2016
f1_keywords:
- CComBSTR
- ATLBASE/ATL::CComBSTR
- ATLBASE/ATL::CComBSTR::CComBSTR
- ATLBASE/ATL::CComBSTR::Append
- ATLBASE/ATL::CComBSTR::AppendBSTR
- ATLBASE/ATL::CComBSTR::AppendBytes
- ATLBASE/ATL::CComBSTR::ArrayToBSTR
- ATLBASE/ATL::CComBSTR::AssignBSTR
- ATLBASE/ATL::CComBSTR::Attach
- ATLBASE/ATL::CComBSTR::BSTRToArray
- ATLBASE/ATL::CComBSTR::ByteLength
- ATLBASE/ATL::CComBSTR::Copy
- ATLBASE/ATL::CComBSTR::CopyTo
- ATLBASE/ATL::CComBSTR::Detach
- ATLBASE/ATL::CComBSTR::Empty
- ATLBASE/ATL::CComBSTR::Length
- ATLBASE/ATL::CComBSTR::LoadString
- ATLBASE/ATL::CComBSTR::ReadFromStream
- ATLBASE/ATL::CComBSTR::ToLower
- ATLBASE/ATL::CComBSTR::ToUpper
- ATLBASE/ATL::CComBSTR::WriteToStream
- ATLBASE/ATL::CComBSTR::m_str
helpviewer_keywords:
- BSTRs, wrapper
- CComBSTR class
- CComBSTR
ms.assetid: 8fea1879-a05e-47a5-a803-8dec60eaa534
ms.openlocfilehash: adaad47c49a64c6654b70fa60ef5514e104c50a5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321046"
---
# <a name="ccombstr-class"></a>Classe CComBSTR

Questa classe è un wrapper per [BSTR](/previous-versions/windows/desktop/automat/bstr)s.

## <a name="syntax"></a>Sintassi

```
class CComBSTR
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComBSTR::CComBSTR](#ccombstr)|Costruttore.|
|[CComBSTR:: CComBSTR](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComBSTR::Aggiungi](#append)|Aggiunge una stringa `m_str`a .|
|[CComBSTR::AppendBSTR](#appendbstr)|Aggiunge un BSTR `m_str`a .|
|[CComBSTR::AppendBytes](#appendbytes)|Aggiunge un numero specificato `m_str`di byte a .|
|[CComBSTR::ArrayToBSTR](#arraytobstr)|Crea un BSTR dal primo carattere di ogni elemento nell'array safe array e lo associa all'oggetto. `CComBSTR`|
|[CComBSTR::AssignBSTR](#assignbstr)|Assegna un BSTR `m_str`a .|
|[CComBSTR::Allegare](#attach)|Associa un BSTR all'oggetto. `CComBSTR`|
|[CComBSTR::BSTRToArray](#bstrtoarray)|Crea un safearray unidimensionale in base zero, in cui `CComBSTR` ogni elemento della matrice è un carattere dell'oggetto.|
|[CComBSTR::ByteLength](#bytelength)|Restituisce la `m_str` lunghezza in byte.|
|[CComBSTR::Copia](#copy)|Restituisce una `m_str`copia di .|
|[CComBSTR::CopiaA](#copyto)|Restituisce una `m_str` copia di tramite un parametro **[out]**|
|[CComBSTR::Detach](#detach)|Si `m_str` stacca `CComBSTR` dall'oggetto.|
|[CComBSTR::Vuoto](#empty)|Liberazioni `m_str`.|
|[CComBSTR::Lunghezza](#length)|Restituisce la `m_str`lunghezza di .|
|[CComBSTR::LoadString](#loadstring)|Carica una risorsa di tipo stringa.|
|[CComBSTR::ReadFromStream](#readfromstream)|Carica un oggetto BSTR da un flusso.|
|[CComBSTR::ToLower](#tolower)|Converte la stringa in caratteri minuscoli.|
|[CComBSTR::ToUpper](#toupper)|Converte la stringa in maiuscolo.|
|[CComBSTR::WriteToStream](#writetostream)|Salva `m_str` in un flusso.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComBSTR::operatore BSTR](#operator_bstr)|Esegue il `CComBSTR` cast di un oggetto in un BSTR.|
|[CComBSTR::operatore !](#operator_not)|Restituisce TRUE o FALSE, a seconda che `m_str`sia NULL.|
|[CComBSTR::operator !](#operator_neq)|Confronta a `CComBSTR` con una stringa.|
|[CComBSTR::&operatore CComBSTR::operator](#operator_amp)|Restituisce l'indirizzo di `m_str`.|
|[CComBSTR::operatore](#operator_add_eq)|Aggiunge a `CComBSTR` all'oggetto.|
|[CComBSTR::<operatore CComBSTR::operator](#operator_lt)|Confronta a `CComBSTR` con una stringa.|
|[CComBSTR::operatore](#operator_eq)|Assegna un valore `m_str`a .|
|[CComBSTR::operatore](#operator_eq_eq)|Confronta a `CComBSTR` con una stringa.|
|[CComBSTR::>operatore CComBSTR::operator](#operator_gt)|Confronta a `CComBSTR` con una stringa.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComBSTR::m_str](#m_str)|Contiene il BSTR `CComBSTR` associato all'oggetto.|

## <a name="remarks"></a>Osservazioni

La `CComBSTR` classe è un wrapper per i BSTR, ovvero stringhe con prefisso di lunghezza. La lunghezza viene archiviata come numero intero nella posizione di memoria che precede i dati nella stringa.

Un [BSTR](/previous-versions/windows/desktop/automat/bstr) è con terminazione null dopo l'ultimo carattere contato, ma può anche contenere caratteri null incorporati all'interno della stringa. La lunghezza della stringa è determinata dal numero di caratteri, non dal primo carattere null.

> [!NOTE]
> La `CComBSTR` classe fornisce un numero di membri (costruttori, operatori di assegnazione e operatori di confronto) che accettano stringhe ANSI o Unicode come argomenti. Le versioni ANSI di queste funzioni sono meno efficienti delle relative controparti Unicode perché le stringhe Unicode temporanee vengono spesso create internamente. Per migliorare l'efficienza, utilizzare le versioni Unicode, se possibile.

> [!NOTE]
> A causa del miglioramento del comportamento di ricerca `bstr = L"String2" + bstr;`implementato in Visual Studio .NET, codice `bstr = CStringW(L"String2") + bstr`come , che potrebbe essere stato compilato nelle versioni precedenti, deve invece essere implementato come .

Per un elenco di `CComBSTR`precauzioni durante l'utilizzo di , vedere [Programmazione con CComBSTR](../../atl/programming-with-ccombstr-atl.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="ccombstrappend"></a><a name="append"></a>CComBSTR::Aggiungi

Aggiunge *lpsz* o il membro BSTR di *bstrSrc* a [m_str](#m_str).

```
HRESULT Append(const CComBSTR& bstrSrc) throw();
HRESULT Append(wchar_t ch) throw();
HRESULT Append(char ch) throw();
HRESULT Append(LPCOLESTR lpsz) throw();
HRESULT Append(LPCSTR lpsz) throw();
HRESULT Append(LPCOLESTR lpsz, int nLen) throw();
```

### <a name="parameters"></a>Parametri

*bstrSrc*<br/>
[in] Oggetto `CComBSTR` da aggiungere.

*Ch*<br/>
[in] Carattere da aggiungere.

*lpsz*<br/>
[in] Stringa di caratteri con terminazione zero da aggiungere. È possibile passare una stringa Unicode tramite l'overload LPCOLESTR o una stringa ANSI tramite la versione LPCSTR.

*nLen*<br/>
[in] Numero di caratteri da *lpsz* da aggiungere.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo o qualsiasi valore di errore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Una stringa ANSI verrà convertita in Unicode prima di essere aggiunta.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#32](../../atl/codesnippet/cpp/ccombstr-class_1.cpp)]

## <a name="ccombstrappendbstr"></a><a name="appendbstr"></a>CComBSTR::AppendBSTR

Aggiunge l'oggetto BSTR specificato a [m_str](#m_str).

```
HRESULT AppendBSTR(BSTR p) throw();
```

### <a name="parameters"></a>Parametri

*P*<br/>
[in] Un BSTR da aggiungere.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo o qualsiasi valore di errore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Non passare una stringa di caratteri wide a questo metodo. Il compilatore non è in grado di rilevare l'errore e si verificheranno errori di runtime.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#33](../../atl/codesnippet/cpp/ccombstr-class_2.cpp)]

## <a name="ccombstrappendbytes"></a><a name="appendbytes"></a>CComBSTR::AppendBytes

Aggiunge il numero specificato di byte a [m_str](#m_str) senza conversione.

```
HRESULT AppendBytes(const char* lpsz, int nLen) throw();
```

### <a name="parameters"></a>Parametri

*lpsz*<br/>
[in] Puntatore a una matrice di byte da accodare.

*P*<br/>
[in] Numero di byte da aggiungere.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo o qualsiasi valore di errore HRESULT standard.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#34](../../atl/codesnippet/cpp/ccombstr-class_3.cpp)]

## <a name="ccombstrarraytobstr"></a><a name="arraytobstr"></a>CComBSTR::ArrayToBSTR

Libera qualsiasi stringa esistente `CComBSTR` contenuta nell'oggetto, quindi crea un BSTR dal primo carattere di `CComBSTR` ogni elemento in safearray e lo associa all'oggetto.

```
HRESULT ArrayToBSTR(const SAFEARRAY* pSrc) throw();
```

### <a name="parameters"></a>Parametri

*pSrc*<br/>
[in] Oggetto safearray contenente gli elementi utilizzati per creare la stringa.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo o qualsiasi valore di errore HRESULT standard.

## <a name="ccombstrassignbstr"></a><a name="assignbstr"></a>CComBSTR::AssignBSTR

Assegna un BSTR a [m_str](#m_str).

```
HRESULT AssignBSTR(const BSTR bstrSrc) throw();
```

### <a name="parameters"></a>Parametri

*bstrSrc*<br/>
[in] Un BSTR da assegnare all'oggetto corrente. `CComBSTR`

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo o qualsiasi valore di errore HRESULT standard.

## <a name="ccombstrattach"></a><a name="attach"></a>CComBSTR::Allegare

Associa un BSTR all'oggetto `CComBSTR` impostando il membro [m_str](#m_str) su *src*.

```
void Attach(BSTR src) throw();
```

### <a name="parameters"></a>Parametri

*src*<br/>
[in] BSTR da associare all'oggetto.

### <a name="remarks"></a>Osservazioni

Non passare una stringa di caratteri wide a questo metodo. Il compilatore non è in grado di rilevare l'errore e si verificheranno errori di runtime.

> [!NOTE]
> Questo metodo asserirà se `m_str` non è NULL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#35](../../atl/codesnippet/cpp/ccombstr-class_4.cpp)]

## <a name="ccombstrbstrtoarray"></a><a name="bstrtoarray"></a>CComBSTR::BSTRToArray

Crea un safearray unidimensionale in base zero, in cui `CComBSTR` ogni elemento della matrice è un carattere dell'oggetto.

```
HRESULT BSTRToArray(LPSAFEARRAY* ppArray) throw();
```

### <a name="parameters"></a>Parametri

*libreria di file ppArray*<br/>
[fuori] Puntatore all'array safe utilizzato per contenere i risultati della funzione.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo o qualsiasi valore di errore HRESULT standard.

## <a name="ccombstrbytelength"></a><a name="bytelength"></a>CComBSTR::ByteLength

Restituisce il numero `m_str`di byte in , escluso il carattere di terminazione null.

```
unsigned int ByteLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Lunghezza del [membro m_str](#m_str) in byte.

### <a name="remarks"></a>Osservazioni

Restituisce `m_str` 0 se è NULL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#36](../../atl/codesnippet/cpp/ccombstr-class_5.cpp)]

## <a name="ccombstrccombstr"></a><a name="ccombstr"></a>CComBSTR::CComBSTR

Costruttore. Il costruttore predefinito imposta il [membro m_str](#m_str) su NULL.

```
CComBSTR() throw();
CComBSTR(const CComBSTR& src);
CComBSTR(REFGUID  guid);
CComBSTR(int nSize);
CComBSTR(int nSize, LPCOLESTR sz);
CComBSTR(int nSize, LPCSTR sz);
CComBSTR(LPCOLESTR pSrc);
CComBSTR(LPCSTR pSrc);
CComBSTR(CComBSTR&& src) throw(); // (Visual Studio 2017)
```

### <a name="parameters"></a>Parametri

*nDimensioni*<br/>
[in] Il numero di caratteri da copiare da *sz* o la dimensione iniziale in caratteri per il `CComBSTR`file .

*Sz*<br/>
[in] Stringa da copiare. La versione Unicode specifica un LPCOLESTR; la versione ANSI specifica un LPCSTR.

*pSrc*<br/>
[in] Stringa da copiare. La versione Unicode specifica un LPCOLESTR; la versione ANSI specifica un LPCSTR.

*src*<br/>
[in] Oggetto `CComBSTR`.

*Guid*<br/>
[in] Riferimento a `GUID` una struttura.

### <a name="remarks"></a>Osservazioni

Il costruttore `m_str` di copia imposta su una copia del membro BSTR di *src*. Il `REFGUID` costruttore converte il `StringFromGUID2` GUID in una stringa utilizzando e archivia il risultato.

L'altro costruttore imposta `m_str` su una copia della stringa specificata. Se passate un valore per *nSize*, verranno copiati solo i caratteri *nSize,* seguiti da un carattere di terminazione null.

`CComBSTR` supporta la semantica di spostamento. È possibile usare il costruttore di spostamento (il costruttore che accetta un riferimento rvalue (`&&`) per creare un nuovo oggetto che usa gli stessi dati sottostanti dell'oggetto precedente passato come argomento, senza il sovraccarico di copiare l'oggetto.

Il distruttore libera la stringa a cui punta `m_str`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#37](../../atl/codesnippet/cpp/ccombstr-class_6.cpp)]

## <a name="ccombstrccombstr"></a><a name="dtor"></a>CComBSTR:: CComBSTR

Distruttore.

```
~CComBSTR();
```

### <a name="remarks"></a>Osservazioni

Il distruttore libera la stringa a cui punta `m_str`.

## <a name="ccombstrcopy"></a><a name="copy"></a>CComBSTR::Copia

Alloca e restituisce `m_str`una copia di .

```
BSTR Copy() const throw();
```

### <a name="return-value"></a>Valore restituito

Una copia del membro [m_str.](#m_str) Se `m_str` è NULL, restituisce NULL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#38](../../atl/codesnippet/cpp/ccombstr-class_7.cpp)]

## <a name="ccombstrcopyto"></a><a name="copyto"></a>CComBSTR::CopiaA

Alloca e restituisce una copia di [m_str](#m_str) tramite il parametro.

```
HRESULT CopyTo(BSTR* pbstr) throw();

HRESULT CopyTo(VARIANT* pvarDest) throw();
```

### <a name="parameters"></a>Parametri

*pbstr*<br/>
[fuori] Indirizzo di un BSTR in cui restituire la stringa allocata da questo metodo.

*pvarDest*<br/>
[fuori] Indirizzo di un oggetto VARIANT in cui restituire la stringa allocata da questo metodo.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard che indica l'esito positivo o negativo della copia.

### <a name="remarks"></a>Osservazioni

Dopo aver chiamato questo metodo, il VARIANT a cui punta da *pvarDest* sarà di tipo VT_BSTR.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#39](../../atl/codesnippet/cpp/ccombstr-class_8.cpp)]

## <a name="ccombstrdetach"></a><a name="detach"></a>CComBSTR::Detach

Scollega [m_str](#m_str) dall'oggetto `CComBSTR` `m_str` e imposta su NULL.

```
BSTR Detach() throw();
```

### <a name="return-value"></a>Valore restituito

BSTR associato all'oggetto. `CComBSTR`

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#40](../../atl/codesnippet/cpp/ccombstr-class_9.cpp)]

## <a name="ccombstrempty"></a><a name="empty"></a>CComBSTR::Vuoto

Libera il membro [m_str.](#m_str)

```
void Empty() throw();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#41](../../atl/codesnippet/cpp/ccombstr-class_10.cpp)]

## <a name="ccombstrlength"></a><a name="length"></a>CComBSTR::Lunghezza

Restituisce il numero `m_str`di caratteri in , escluso il carattere di terminazione null.

```
unsigned int Length() const throw();
```

### <a name="return-value"></a>Valore restituito

Lunghezza del membro [m_str.](#m_str)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#42](../../atl/codesnippet/cpp/ccombstr-class_11.cpp)]

## <a name="ccombstrloadstring"></a><a name="loadstring"></a>CComBSTR::LoadString

Carica una risorsa stringa specificata da *nID* e la archivia in questo oggetto.

```
bool LoadString(HINSTANCE hInst, UINT nID) throw();
bool LoadString(UINT nID) throw();
```

### <a name="parameters"></a>Parametri

Vedere [LoadString](/windows/win32/api/winuser/nf-winuser-loadstringw) in Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la stringa viene caricata correttamente; in caso contrario, restituisce FALSE.

### <a name="remarks"></a>Osservazioni

La prima funzione carica la risorsa dal modulo identificato dall'utente tramite il parametro *hInst.* La seconda funzione carica la risorsa dal modulo di risorsa associato all'oggetto derivato da [CComModule](../../atl/reference/ccommodule-class.md)utilizzato in questo progetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#43](../../atl/codesnippet/cpp/ccombstr-class_12.cpp)]

## <a name="ccombstrm_str"></a><a name="m_str"></a>CComBSTR::m_str

Contiene il BSTR `CComBSTR` associato all'oggetto.

```
BSTR m_str;
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#49](../../atl/codesnippet/cpp/ccombstr-class_13.cpp)]

## <a name="ccombstroperator-bstr"></a><a name="operator_bstr"></a>CComBSTR::operatore BSTR

Esegue il `CComBSTR` cast di un oggetto in un BSTR.

```
operator BSTR() const throw();
```

### <a name="remarks"></a>Osservazioni

Consente di `CComBSTR` passare oggetti a funzioni che hanno **[in] parametri BSTR.**

### <a name="example"></a>Esempio

Vedere l'esempio per [CComBSTR::m_str](#m_str).

## <a name="ccombstroperator-"></a><a name="operator_not"></a>CComBSTR::operatore !

Controlla se la stringa BSTR è NULL.

```
bool operator!() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il [membro m_str](#m_str) è NULL; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo operatore controlla solo un valore NULL, non una stringa vuota.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#35](../../atl/codesnippet/cpp/ccombstr-class_4.cpp)]

## <a name="ccombstroperator-"></a><a name="operator_neq"></a>CComBSTR::operator !

Restituisce l'opposto logico [dell'operatore .](#operator_eq_eq)

```
bool operator!= (const CComBSTR& bstrSrc) const throw();
bool operator!= (LPCOLESTR pszSrc) const;
bool operator!= (LPCSTR pszSrc) const;
bool operator!= (int nNull) const throw();
```

### <a name="parameters"></a>Parametri

*bstrSrc*<br/>
[in] Oggetto `CComBSTR`.

*Pszsrc*<br/>
[in] Stringa con terminazione zero.

*nNull*<br/>
[in] Deve essere NULL.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elemento confrontato non è uguale all'oggetto; `CComBSTR` in caso contrario, restituisce FALSE.

### <a name="remarks"></a>Osservazioni

`CComBSTR`s vengono confrontati testualmente nel contesto delle impostazioni locali predefinite dell'utente. L'operatore di confronto finale confronta semplicemente la stringa contenuta con NULL.

## <a name="ccombstroperator-amp"></a><a name="operator_amp"></a>CComBSTR::operatore&amp;

Restituisce l'indirizzo del BSTR archiviato nel [membro m_str.](#m_str)

```
BSTR* operator&() throw();
```

### <a name="remarks"></a>Osservazioni

`CComBstr operator &`ha un'asserzione speciale associata ad esso per aiutare a identificare le perdite di memoria. Il programma asserirà quando il `m_str` membro viene inizializzato. Questa asserzione è stata creata `& operator` per identificare le `m_str` situazioni in cui un `m_str`programmatore utilizza l'oggetto per assegnare un nuovo valore al membro senza liberare la prima allocazione di . Se `m_str` è uguale a NULL, il programma presuppone che non m_str è stato ancora allocato. In questo caso, il programma non asserirà.

Questa asserzione non è abilitata per impostazione predefinita. Definire ATL_CCOMBSTR_ADDRESS_OF_ASSERT per abilitare questa asserzione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#46](../../atl/codesnippet/cpp/ccombstr-class_14.cpp)]

[!code-cpp[NVC_ATL_Utilities#47](../../atl/codesnippet/cpp/ccombstr-class_15.cpp)]

## <a name="ccombstroperator-"></a><a name="operator_add_eq"></a>CComBSTR::operatore

Aggiunge una stringa `CComBSTR` all'oggetto.

```
CComBSTR& operator+= (const CComBSTR& bstrSrc);
CComBSTR& operator+= (const LPCOLESTR pszSrc);
```

### <a name="parameters"></a>Parametri

*bstrSrc*<br/>
[in] Oggetto `CComBSTR` da aggiungere.

*Pszsrc*<br/>
[in] Stringa con terminazione zero da aggiungere.

### <a name="remarks"></a>Osservazioni

`CComBSTR`s vengono confrontati testualmente nel contesto delle impostazioni locali predefinite dell'utente. Il confronto LPCOLESTR `memcmp` viene eseguito utilizzando i dati non elaborati in ogni stringa. Il confronto LPCSTR viene effettuato nello stesso modo una volta creata una copia Unicode temporanea di *pszSrc.* L'operatore di confronto finale confronta semplicemente la stringa contenuta con NULL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#48](../../atl/codesnippet/cpp/ccombstr-class_16.cpp)]

## <a name="ccombstroperator-lt"></a><a name="operator_lt"></a>CComBSTR::operatore&lt;

Confronta a `CComBSTR` con una stringa.

```
bool operator<(const CComBSTR& bstrSrc) const throw();
bool operator<(LPCOLESTR pszSrc) const throw();
bool operator<(LPCSTR pszSrc) const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elemento `CComBSTR` confrontato è minore dell'oggetto; in caso contrario, restituisce FALSE.

### <a name="remarks"></a>Osservazioni

Il confronto viene eseguito utilizzando le impostazioni locali predefinite dell'utente.

## <a name="ccombstroperator-"></a><a name="operator_eq"></a>CComBSTR::operatore

Imposta il [membro m_str](#m_str) su una copia di *pSrc* o su una copia del membro BSTR di *src*. L'operatore `src` di assegnazione di spostamento si sposta senza copiarlo.

```
CComBSTR& operator= (const CComBSTR& src);
CComBSTR& operator= (LPCOLESTR pSrc);
CComBSTR& operator= (LPCSTR pSrc);
CComBSTR& operator= (CComBSTR&& src) throw(); // (Visual Studio 2017)
```

### <a name="remarks"></a>Osservazioni

Il parametro *pSrc* consente di specificare un LPCOLESTR per le versioni Unicode o LPCSTR per le versioni ANSI.

### <a name="example"></a>Esempio

Vedere l'esempio per [CComBSTR::Copy](#copy).

## <a name="ccombstroperator-"></a><a name="operator_eq_eq"></a>CComBSTR::operatore

Confronta a `CComBSTR` con una stringa. `CComBSTR`s vengono confrontati testualmente nel contesto delle impostazioni locali predefinite dell'utente.

```
bool operator== (const CComBSTR& bstrSrc) const throw();
bool operator== (LPCOLESTR pszSrc) const;
bool operator== (LPCSTR pszSrc) const;
bool operator== (int nNull) const throw();
```

### <a name="parameters"></a>Parametri

*bstrSrc*<br/>
[in] Oggetto `CComBSTR`.

*Pszsrc*<br/>
[in] Stringa con terminazione zero.

*nNull*<br/>
[in] Deve essere NULL.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elemento `CComBSTR` confrontato è uguale all'oggetto; in caso contrario, restituisce FALSE.

### <a name="remarks"></a>Osservazioni

L'operatore di confronto finale confronta semplicemente la stringa contenuta con NULL.

## <a name="ccombstroperator-gt"></a><a name="operator_gt"></a>CComBSTR::operatore&gt;

Confronta a `CComBSTR` con una stringa.

```
bool operator>(const CComBSTR& bstrSrc) const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elemento `CComBSTR` confrontato è maggiore dell'oggetto; in caso contrario, restituisce FALSE.

### <a name="remarks"></a>Osservazioni

Il confronto viene eseguito utilizzando le impostazioni locali predefinite dell'utente.

## <a name="ccombstrreadfromstream"></a><a name="readfromstream"></a>CComBSTR::ReadFromStream

Imposta il [membro m_str](#m_str) su BSTR contenuto nel flusso specificato.

```
HRESULT ReadFromStream(IStream* pStream) throw();
```

### <a name="parameters"></a>Parametri

*pStream (corso)*<br/>
[in] Puntatore all'interfaccia [IStream](/windows/win32/api/objidl/nn-objidl-istream) nel flusso contenente i dati.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

`ReadToStream`richiede che il contenuto del flusso nella posizione corrente sia compatibile con il formato dati scritto da una chiamata a [WriteToStream](#writetostream).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#44](../../atl/codesnippet/cpp/ccombstr-class_17.cpp)]

## <a name="ccombstrtolower"></a><a name="tolower"></a>CComBSTR::ToLower

Converte la stringa contenuta in caratteri minuscoli.

```
HRESULT ToLower() throw();
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Per `CharLowerBuff` ulteriori informazioni sulle modalità di conversione, vedere .

## <a name="ccombstrtoupper"></a><a name="toupper"></a>CComBSTR::ToUpper

Converte la stringa contenuta in lettere maiuscole.

```
HRESULT ToUpper() throw();
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Per `CharUpperBuff` ulteriori informazioni sulle modalità di conversione, vedere .

## <a name="ccombstrwritetostream"></a><a name="writetostream"></a>CComBSTR::WriteToStream

Salva il [membro m_str](#m_str) in un flusso.

```
HRESULT WriteToStream(IStream* pStream) throw();
```

### <a name="parameters"></a>Parametri

*pStream (corso)*<br/>
[in] Puntatore all'interfaccia [IStream](/windows/win32/api/objidl/nn-objidl-istream) in un flusso.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

È possibile ricreare un BSTR dal contenuto del flusso utilizzando la funzione [ReadFromStream.You](#readfromstream) can recreate a BSTR from the contents of the stream using the ReadFromStream function.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#45](../../atl/codesnippet/cpp/ccombstr-class_18.cpp)]

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Macro di conversione di stringhe ATL e MFC](string-conversion-macros.md)
