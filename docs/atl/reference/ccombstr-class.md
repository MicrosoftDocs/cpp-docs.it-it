---
description: 'Altre informazioni su: classe CComBSTR'
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
ms.openlocfilehash: 1ddb830846747f0e3efe36f02be07ce1a45b353e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97152308"
---
# <a name="ccombstr-class"></a>Classe CComBSTR

Questa classe è un wrapper per [BSTR](/previous-versions/windows/desktop/automat/bstr)s.

## <a name="syntax"></a>Sintassi

```
class CComBSTR
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CComBSTR:: CComBSTR](#ccombstr)|Costruttore.|
|[CComBSTR:: ~ CComBSTR](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CComBSTR:: Append](#append)|Accoda una stringa a `m_str` .|
|[CComBSTR:: AppendBSTR](#appendbstr)|Accoda un BSTR a `m_str` .|
|[CComBSTR:: AppendBytes](#appendbytes)|Accoda un numero specificato di byte a `m_str` .|
|[CComBSTR:: ArrayToBSTR](#arraytobstr)|Crea un BSTR dal primo carattere di ogni elemento di SAFEARRAY e lo connette all' `CComBSTR` oggetto.|
|[CComBSTR:: AssignBSTR](#assignbstr)|Assegna un BSTR a `m_str` .|
|[CComBSTR:: Connetti](#attach)|Connette un BSTR all' `CComBSTR` oggetto.|
|[CComBSTR:: BSTRToArray](#bstrtoarray)|Crea un SAFEARRAY unidimensionale in base zero, in cui ogni elemento della matrice è un carattere dell' `CComBSTR` oggetto.|
|[CComBSTR:: ByteLength](#bytelength)|Restituisce la lunghezza `m_str` in byte.|
|[CComBSTR:: Copy](#copy)|Restituisce una copia di `m_str` .|
|[CComBSTR:: CopyTo](#copyto)|Restituisce una copia di `m_str` tramite un parametro **[out]**|
|[CComBSTR::D etach](#detach)|Disconnette `m_str` dall' `CComBSTR` oggetto.|
|[CComBSTR:: Empty](#empty)|Libera `m_str` .|
|[CComBSTR:: length](#length)|Restituisce la lunghezza di `m_str` .|
|[CComBSTR:: LoadString](#loadstring)|Carica una risorsa di stringa.|
|[CComBSTR:: ReadFromStream](#readfromstream)|Carica un oggetto BSTR da un flusso.|
|[CComBSTR:: ToLower](#tolower)|Converte la stringa in caratteri minuscoli.|
|[CComBSTR:: ToUpper](#toupper)|Converte la stringa in lettere maiuscole.|
|[CComBSTR:: WriteToStream](#writetostream)|Salva `m_str` in un flusso.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CComBSTR:: operator (BSTR)](#operator_bstr)|Esegue il cast `CComBSTR` di un oggetto in un BSTR.|
|[CComBSTR:: operator!](#operator_not)|Restituisce TRUE o FALSE, a seconda che `m_str` sia null.|
|[CComBSTR:: operator! =](#operator_neq)|Confronta un oggetto `CComBSTR` con una stringa.|
|[&CComBSTR:: operator ](#operator_amp)|Restituisce l'indirizzo di `m_str` .|
|[CComBSTR:: operator + =](#operator_add_eq)|Aggiunge un `CComBSTR` oggetto all'oggetto.|
|[<CComBSTR:: operator ](#operator_lt)|Confronta un oggetto `CComBSTR` con una stringa.|
|[CComBSTR:: operator =](#operator_eq)|Assegna un valore a `m_str` .|
|[CComBSTR:: operator = =](#operator_eq_eq)|Confronta un oggetto `CComBSTR` con una stringa.|
|[>CComBSTR:: operator ](#operator_gt)|Confronta un oggetto `CComBSTR` con una stringa.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CComBSTR:: m_str](#m_str)|Contiene il BSTR associato all' `CComBSTR` oggetto.|

## <a name="remarks"></a>Commenti

La `CComBSTR` classe è un wrapper per BSTRS, che è costituito da stringhe con prefisso di lunghezza. La lunghezza viene archiviata come Integer nella posizione di memoria che precede i dati nella stringa.

Un [BSTR](/previous-versions/windows/desktop/automat/bstr) è con terminazione null dopo l'ultimo carattere conteggiato, ma può contenere anche caratteri null incorporati all'interno della stringa. La lunghezza della stringa è determinata dal numero di caratteri, non dal primo carattere null.

> [!NOTE]
> La `CComBSTR` classe fornisce un numero di membri (costruttori, operatori di assegnazione e operatori di confronto) che accettano stringhe ANSI o Unicode come argomenti. Le versioni ANSI di queste funzioni sono meno efficienti rispetto alle relative controparti Unicode perché spesso le stringhe Unicode temporanee vengono create internamente. Per maggiore efficienza, utilizzare le versioni Unicode laddove possibile.

> [!NOTE]
> A causa del miglioramento del comportamento di ricerca implementato in Visual Studio .NET, il codice, ad esempio `bstr = L"String2" + bstr;` , che potrebbe essere stato compilato nelle versioni precedenti, deve invece essere implementato come `bstr = CStringW(L"String2") + bstr` .

Per un elenco di attenzioni quando si usa `CComBSTR` , vedere [programmazione con CComBSTR](../../atl/programming-with-ccombstr-atl.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="ccombstrappend"></a><a name="append"></a> CComBSTR:: Append

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
in `CComBSTR` Oggetto da accodare.

*ch*<br/>
in Carattere da accodare.

*lpsz*<br/>
in Stringa di caratteri con terminazione zero da accodare. È possibile passare una stringa Unicode tramite l'overload LPCOLESTR o una stringa ANSI tramite la versione LPCSTR.

*nLen*<br/>
in Numero di caratteri di *lpsz* da accodare.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo o qualsiasi valore di errore HRESULT standard.

### <a name="remarks"></a>Commenti

Una stringa ANSI verrà convertita in Unicode prima di essere accodata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#32](../../atl/codesnippet/cpp/ccombstr-class_1.cpp)]

## <a name="ccombstrappendbstr"></a><a name="appendbstr"></a> CComBSTR:: AppendBSTR

Accoda il BSTR specificato a [m_str](#m_str).

```
HRESULT AppendBSTR(BSTR p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
in BSTR da accodare.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo o qualsiasi valore di errore HRESULT standard.

### <a name="remarks"></a>Commenti

Non passare una stringa di caratteri wide comune a questo metodo. Il compilatore non è in grado di rilevare l'errore e si verificheranno errori in fase di esecuzione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#33](../../atl/codesnippet/cpp/ccombstr-class_2.cpp)]

## <a name="ccombstrappendbytes"></a><a name="appendbytes"></a> CComBSTR:: AppendBytes

Aggiunge il numero specificato di byte a [m_str](#m_str) senza conversione.

```
HRESULT AppendBytes(const char* lpsz, int nLen) throw();
```

### <a name="parameters"></a>Parametri

*lpsz*<br/>
in Puntatore a una matrice di byte da accodare.

*p*<br/>
in Numero di byte da accodare.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo o qualsiasi valore di errore HRESULT standard.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#34](../../atl/codesnippet/cpp/ccombstr-class_3.cpp)]

## <a name="ccombstrarraytobstr"></a><a name="arraytobstr"></a> CComBSTR:: ArrayToBSTR

Libera qualsiasi stringa esistente contenuta nell' `CComBSTR` oggetto, quindi crea un BSTR dal primo carattere di ogni elemento di SAFEARRAY e lo collega all' `CComBSTR` oggetto.

```
HRESULT ArrayToBSTR(const SAFEARRAY* pSrc) throw();
```

### <a name="parameters"></a>Parametri

*pSrc*<br/>
in SafeArray contenente gli elementi utilizzati per creare la stringa.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo o qualsiasi valore di errore HRESULT standard.

## <a name="ccombstrassignbstr"></a><a name="assignbstr"></a> CComBSTR:: AssignBSTR

Assegna un BSTR a [m_str](#m_str).

```
HRESULT AssignBSTR(const BSTR bstrSrc) throw();
```

### <a name="parameters"></a>Parametri

*bstrSrc*<br/>
in BSTR da assegnare all' `CComBSTR` oggetto corrente.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo o qualsiasi valore di errore HRESULT standard.

## <a name="ccombstrattach"></a><a name="attach"></a> CComBSTR:: Connetti

Connette un BSTR all'oggetto impostando `CComBSTR` il membro [m_str](#m_str) su *src*.

```cpp
void Attach(BSTR src) throw();
```

### <a name="parameters"></a>Parametri

*src*<br/>
in BSTR da connettersi all'oggetto.

### <a name="remarks"></a>Commenti

Non passare una stringa di caratteri wide comune a questo metodo. Il compilatore non è in grado di rilevare l'errore e si verificheranno errori in fase di esecuzione.

> [!NOTE]
> Questo metodo asserirà se `m_str` è diverso da null.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#35](../../atl/codesnippet/cpp/ccombstr-class_4.cpp)]

## <a name="ccombstrbstrtoarray"></a><a name="bstrtoarray"></a> CComBSTR:: BSTRToArray

Crea un SAFEARRAY unidimensionale in base zero, in cui ogni elemento della matrice è un carattere dell' `CComBSTR` oggetto.

```
HRESULT BSTRToArray(LPSAFEARRAY* ppArray) throw();
```

### <a name="parameters"></a>Parametri

*ppArray*<br/>
out Puntatore all'elemento SafeArray utilizzato per conservare i risultati della funzione.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo o qualsiasi valore di errore HRESULT standard.

## <a name="ccombstrbytelength"></a><a name="bytelength"></a> CComBSTR:: ByteLength

Restituisce il numero di byte in `m_str` , escluso il carattere null di terminazione.

```
unsigned int ByteLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Lunghezza del membro [m_str](#m_str) in byte.

### <a name="remarks"></a>Commenti

Restituisce 0 se `m_str` è null.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#36](../../atl/codesnippet/cpp/ccombstr-class_5.cpp)]

## <a name="ccombstrccombstr"></a><a name="ccombstr"></a> CComBSTR:: CComBSTR

Costruttore. Il costruttore predefinito imposta il membro [m_str](#m_str) su null.

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

*nSize*<br/>
in Numero di caratteri da copiare da *SZ* o dalle dimensioni iniziali in caratteri per l'oggetto `CComBSTR` .

*SZ*<br/>
[in] Stringa da copiare. La versione Unicode specifica un LPCOLESTR. la versione ANSI specifica un LPCSTR.

*pSrc*<br/>
[in] Stringa da copiare. La versione Unicode specifica un LPCOLESTR. la versione ANSI specifica un LPCSTR.

*src*<br/>
[in] Oggetto `CComBSTR`.

*guid*<br/>
in Riferimento a una `GUID` struttura.

### <a name="remarks"></a>Commenti

Il costruttore di copia imposta `m_str` su una copia del membro BSTR di *src*. Il `REFGUID` Costruttore converte il GUID in una stringa utilizzando `StringFromGUID2` e archivia il risultato.

L'altro costruttore imposta `m_str` su una copia della stringa specificata. Se si passa un valore per *nSize*, verranno copiati solo i caratteri *nSize* , seguiti da un carattere di terminazione null.

`CComBSTR` supporta la semantica di spostamento. È possibile usare il costruttore di spostamento (il costruttore che accetta un riferimento rvalue (`&&`) per creare un nuovo oggetto che usa gli stessi dati sottostanti dell'oggetto precedente passato come argomento, senza il sovraccarico di copiare l'oggetto.

Il distruttore libera la stringa a cui punta `m_str`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#37](../../atl/codesnippet/cpp/ccombstr-class_6.cpp)]

## <a name="ccombstrccombstr"></a><a name="dtor"></a> CComBSTR:: ~ CComBSTR

Distruttore.

```
~CComBSTR();
```

### <a name="remarks"></a>Commenti

Il distruttore libera la stringa a cui punta `m_str`.

## <a name="ccombstrcopy"></a><a name="copy"></a> CComBSTR:: Copy

Alloca e restituisce una copia di `m_str` .

```
BSTR Copy() const throw();
```

### <a name="return-value"></a>Valore restituito

Una copia del membro [m_str](#m_str) . Se `m_str` è null, restituisce null.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#38](../../atl/codesnippet/cpp/ccombstr-class_7.cpp)]

## <a name="ccombstrcopyto"></a><a name="copyto"></a> CComBSTR:: CopyTo

Alloca e restituisce una copia di [m_str](#m_str) tramite il parametro.

```
HRESULT CopyTo(BSTR* pbstr) throw();

HRESULT CopyTo(VARIANT* pvarDest) throw();
```

### <a name="parameters"></a>Parametri

*pbstr*<br/>
out Indirizzo di un BSTR in cui restituire la stringa allocata da questo metodo.

*pvarDest*<br/>
out Indirizzo di una variante in cui restituire la stringa allocata da questo metodo.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard che indica l'esito positivo o negativo della copia.

### <a name="remarks"></a>Commenti

Dopo aver chiamato questo metodo, il VARIANT a cui punta *pvarDest* sarà di tipo VT_BSTR.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#39](../../atl/codesnippet/cpp/ccombstr-class_8.cpp)]

## <a name="ccombstrdetach"></a><a name="detach"></a> CComBSTR::D etach

Scollega [m_str](#m_str) dall' `CComBSTR` oggetto e imposta `m_str` su null.

```
BSTR Detach() throw();
```

### <a name="return-value"></a>Valore restituito

BSTR associato all' `CComBSTR` oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#40](../../atl/codesnippet/cpp/ccombstr-class_9.cpp)]

## <a name="ccombstrempty"></a><a name="empty"></a> CComBSTR:: Empty

Libera il membro [m_str](#m_str) .

```cpp
void Empty() throw();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#41](../../atl/codesnippet/cpp/ccombstr-class_10.cpp)]

## <a name="ccombstrlength"></a><a name="length"></a> CComBSTR:: length

Restituisce il numero di caratteri in `m_str` , escluso il carattere null di terminazione.

```
unsigned int Length() const throw();
```

### <a name="return-value"></a>Valore restituito

Lunghezza del membro [m_str](#m_str) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#42](../../atl/codesnippet/cpp/ccombstr-class_11.cpp)]

## <a name="ccombstrloadstring"></a><a name="loadstring"></a> CComBSTR:: LoadString

Carica una risorsa di stringa specificata da *NID* e la archivia in questo oggetto.

```
bool LoadString(HINSTANCE hInst, UINT nID) throw();
bool LoadString(UINT nID) throw();
```

### <a name="parameters"></a>Parametri

Vedere [LoadString](/windows/win32/api/winuser/nf-winuser-loadstringw) nel Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la stringa è stata caricata correttamente. in caso contrario, restituisce FALSE.

### <a name="remarks"></a>Commenti

La prima funzione carica la risorsa dal modulo identificato dall'utente tramite il parametro *hInst* . La seconda funzione carica la risorsa dal modulo Resource associato all'oggetto derivato da [CComModule](../../atl/reference/ccommodule-class.md)usato in questo progetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#43](../../atl/codesnippet/cpp/ccombstr-class_12.cpp)]

## <a name="ccombstrm_str"></a><a name="m_str"></a> CComBSTR:: m_str

Contiene il BSTR associato all' `CComBSTR` oggetto.

```
BSTR m_str;
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#49](../../atl/codesnippet/cpp/ccombstr-class_13.cpp)]

## <a name="ccombstroperator-bstr"></a><a name="operator_bstr"></a> CComBSTR:: operator (BSTR)

Esegue il cast `CComBSTR` di un oggetto in un BSTR.

```
operator BSTR() const throw();
```

### <a name="remarks"></a>Commenti

Consente di passare `CComBSTR` oggetti a funzioni con parametri **[in] BSTR** .

### <a name="example"></a>Esempio

Vedere l'esempio per [CComBSTR:: m_str](#m_str).

## <a name="ccombstroperator-"></a><a name="operator_not"></a> CComBSTR:: operator!

Verifica se la stringa BSTR è NULL.

```
bool operator!() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il membro [m_str](#m_str) è null; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Questo operatore controlla solo la presenza di un valore NULL e non di una stringa vuota.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#35](../../atl/codesnippet/cpp/ccombstr-class_4.cpp)]

## <a name="ccombstroperator-"></a><a name="operator_neq"></a> CComBSTR:: operator! =

Restituisce l'opposto logico di [operator = =](#operator_eq_eq).

```
bool operator!= (const CComBSTR& bstrSrc) const throw();
bool operator!= (LPCOLESTR pszSrc) const;
bool operator!= (LPCSTR pszSrc) const;
bool operator!= (int nNull) const throw();
```

### <a name="parameters"></a>Parametri

*bstrSrc*<br/>
[in] Oggetto `CComBSTR`.

*pszSrc*<br/>
in Stringa con terminazione zero.

*Null*<br/>
in Deve essere NULL.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elemento da confrontare non è uguale all' `CComBSTR` oggetto; in caso contrario, restituisce false.

### <a name="remarks"></a>Commenti

`CComBSTR`le istanze di vengono confrontate testualmente nel contesto delle impostazioni locali predefinite dell'utente. L'operatore di confronto finale confronta solo la stringa contenuta rispetto a NULL.

## <a name="ccombstroperator-amp"></a><a name="operator_amp"></a> Operatore CComBSTR:: &amp;

Restituisce l'indirizzo di BSTR archiviato nel membro [m_str](#m_str) .

```
BSTR* operator&() throw();
```

### <a name="remarks"></a>Commenti

`CComBstr operator &` dispone di un'asserzione speciale associata per facilitare l'identificazione delle perdite di memoria. Il programma verrà asserito quando il `m_str` membro viene inizializzato. Questa asserzione è stata creata per identificare le situazioni in cui un programmatore usa `& operator` per assegnare un nuovo valore al `m_str` membro senza liberare la prima allocazione di `m_str` . Se `m_str` è uguale a null, il programma presuppone che m_str non sia ancora stato allocato. In questo caso, il programma non verrà asserita.

Questa asserzione non è abilitata per impostazione predefinita. Definire ATL_CCOMBSTR_ADDRESS_OF_ASSERT per abilitare questa asserzione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#46](../../atl/codesnippet/cpp/ccombstr-class_14.cpp)]

[!code-cpp[NVC_ATL_Utilities#47](../../atl/codesnippet/cpp/ccombstr-class_15.cpp)]

## <a name="ccombstroperator-"></a><a name="operator_add_eq"></a> CComBSTR:: operator + =

Accoda una stringa all' `CComBSTR` oggetto.

```
CComBSTR& operator+= (const CComBSTR& bstrSrc);
CComBSTR& operator+= (const LPCOLESTR pszSrc);
```

### <a name="parameters"></a>Parametri

*bstrSrc*<br/>
in `CComBSTR` Oggetto da accodare.

*pszSrc*<br/>
in Stringa con terminazione zero da accodare.

### <a name="remarks"></a>Commenti

`CComBSTR`le istanze di vengono confrontate testualmente nel contesto delle impostazioni locali predefinite dell'utente. Il confronto LPCOLESTR viene eseguito utilizzando `memcmp` sui dati non elaborati in ogni stringa. Il confronto LPCSTR viene eseguito nello stesso modo in cui è stata creata una copia Unicode temporanea di *pszSrc* . L'operatore di confronto finale confronta solo la stringa contenuta rispetto a NULL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#48](../../atl/codesnippet/cpp/ccombstr-class_16.cpp)]

## <a name="ccombstroperator-lt"></a><a name="operator_lt"></a> Operatore CComBSTR:: &lt;

Confronta un oggetto `CComBSTR` con una stringa.

```
bool operator<(const CComBSTR& bstrSrc) const throw();
bool operator<(LPCOLESTR pszSrc) const throw();
bool operator<(LPCSTR pszSrc) const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elemento da confrontare è minore dell' `CComBSTR` oggetto; in caso contrario, restituisce false.

### <a name="remarks"></a>Commenti

Il confronto viene eseguito usando le impostazioni locali predefinite dell'utente.

## <a name="ccombstroperator-"></a><a name="operator_eq"></a> CComBSTR:: operator =

Imposta il membro [m_str](#m_str) a una copia di *pSrc* o a una copia del membro BSTR di *src*. L'operatore di assegnazione di spostamento `src` viene spostato senza copiarlo.

```
CComBSTR& operator= (const CComBSTR& src);
CComBSTR& operator= (LPCOLESTR pSrc);
CComBSTR& operator= (LPCSTR pSrc);
CComBSTR& operator= (CComBSTR&& src) throw(); // (Visual Studio 2017)
```

### <a name="remarks"></a>Commenti

Il parametro *pSrc* specifica un LPCOLESTR per le versioni Unicode o LPCSTR per le versioni ANSI.

### <a name="example"></a>Esempio

Vedere l'esempio per [CComBSTR:: Copy](#copy).

## <a name="ccombstroperator-"></a><a name="operator_eq_eq"></a> CComBSTR:: operator = =

Confronta un oggetto `CComBSTR` con una stringa. `CComBSTR`le istanze di vengono confrontate testualmente nel contesto delle impostazioni locali predefinite dell'utente.

```
bool operator== (const CComBSTR& bstrSrc) const throw();
bool operator== (LPCOLESTR pszSrc) const;
bool operator== (LPCSTR pszSrc) const;
bool operator== (int nNull) const throw();
```

### <a name="parameters"></a>Parametri

*bstrSrc*<br/>
[in] Oggetto `CComBSTR`.

*pszSrc*<br/>
in Stringa con terminazione zero.

*Null*<br/>
in Deve essere NULL.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elemento da confrontare è uguale all' `CComBSTR` oggetto; in caso contrario, restituisce false.

### <a name="remarks"></a>Commenti

L'operatore di confronto finale confronta solo la stringa contenuta rispetto a NULL.

## <a name="ccombstroperator-gt"></a><a name="operator_gt"></a> Operatore CComBSTR:: &gt;

Confronta un oggetto `CComBSTR` con una stringa.

```
bool operator>(const CComBSTR& bstrSrc) const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elemento da confrontare è maggiore dell' `CComBSTR` oggetto; in caso contrario, restituisce false.

### <a name="remarks"></a>Commenti

Il confronto viene eseguito usando le impostazioni locali predefinite dell'utente.

## <a name="ccombstrreadfromstream"></a><a name="readfromstream"></a> CComBSTR:: ReadFromStream

Imposta il membro [m_str](#m_str) su BSTR contenuto nel flusso specificato.

```
HRESULT ReadFromStream(IStream* pStream) throw();
```

### <a name="parameters"></a>Parametri

*pStream*<br/>
in Puntatore all'interfaccia [IStream](/windows/win32/api/objidl/nn-objidl-istream) sul flusso contenente i dati.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

`ReadToStream` richiede che il contenuto del flusso nella posizione corrente sia compatibile con il formato dati scritto da una chiamata a [WriteToStream](#writetostream).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#44](../../atl/codesnippet/cpp/ccombstr-class_17.cpp)]

## <a name="ccombstrtolower"></a><a name="tolower"></a> CComBSTR:: ToLower

Converte la stringa contenuta in minuscolo.

```
HRESULT ToLower() throw();
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

`CharLowerBuff`Per ulteriori informazioni sulla modalità di esecuzione della conversione, vedere.

## <a name="ccombstrtoupper"></a><a name="toupper"></a> CComBSTR:: ToUpper

Converte la stringa contenuta in maiuscolo.

```
HRESULT ToUpper() throw();
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

`CharUpperBuff`Per ulteriori informazioni sulla modalità di esecuzione della conversione, vedere.

## <a name="ccombstrwritetostream"></a><a name="writetostream"></a> CComBSTR:: WriteToStream

Salva il membro [m_str](#m_str) in un flusso.

```
HRESULT WriteToStream(IStream* pStream) throw();
```

### <a name="parameters"></a>Parametri

*pStream*<br/>
in Puntatore all'interfaccia [IStream](/windows/win32/api/objidl/nn-objidl-istream) in un flusso.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

È possibile ricreare un BSTR dal contenuto del flusso usando la funzione [ReadFromStream](#readfromstream) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#45](../../atl/codesnippet/cpp/ccombstr-class_18.cpp)]

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Macro di conversione di stringhe ATL e MFC](string-conversion-macros.md)
