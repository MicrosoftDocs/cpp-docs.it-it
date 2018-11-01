---
title: CComBSTR (classe)
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
ms.openlocfilehash: 52e8472e315932978af38d405c753b0a62fcbe45
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50475647"
---
# <a name="ccombstr-class"></a>CComBSTR (classe)

Questa classe è un wrapper [BSTR](/previous-versions/windows/desktop/automat/bstr)s.

## <a name="syntax"></a>Sintassi

```
class CComBSTR
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComBSTR::CComBSTR](#ccombstr)|Costruttore.|
|[CComBSTR:: ~ CComBSTR](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComBSTR::Append](#append)|Aggiunge una stringa a `m_str`.|
|[CComBSTR::AppendBSTR](#appendbstr)|Aggiunge un oggetto BSTR da `m_str`.|
|[CComBSTR::AppendBytes](#appendbytes)|Accoda un numero specificato di byte da `m_str`.|
|[CComBSTR::ArrayToBSTR](#arraytobstr)|Crea un oggetto BSTR dal primo carattere di ogni elemento in safearray e lo collega al `CComBSTR` oggetto.|
|[CComBSTR::AssignBSTR](#assignbstr)|Assegna un BSTR `m_str`.|
|[CComBSTR::Attach](#attach)|Collega a un BSTR di `CComBSTR` oggetto.|
|[CComBSTR::BSTRToArray](#bstrtoarray)|Crea un safearray in base zero unidimensionale in cui ogni elemento della matrice è un carattere dal `CComBSTR` oggetto.|
|[CComBSTR::ByteLength](#bytelength)|Restituisce la lunghezza di `m_str` in byte.|
|[CComBSTR::Copy](#copy)|Restituisce una copia del `m_str`.|
|[CComBSTR::CopyTo](#copyto)|Restituisce una copia del `m_str` tramite un **[out]** parametro|
|[CComBSTR::Detach](#detach)|Consente di scollegare `m_str` dal `CComBSTR` oggetto.|
|[CComBSTR::Empty](#empty)|Libera `m_str`.|
|[CComBSTR::Length](#length)|Restituisce la lunghezza di `m_str`.|
|[CComBSTR::LoadString](#loadstring)|Carica una risorsa di stringa.|
|[CComBSTR::ReadFromStream](#readfromstream)|Carica un oggetto BSTR da un flusso.|
|[CComBSTR::ToLower](#tolower)|Converte la stringa in caratteri minuscoli.|
|[CComBSTR::ToUpper](#toupper)|Converte la stringa in lettere maiuscole.|
|[CComBSTR::WriteToStream](#writetostream)|Salva `m_str` in un flusso.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComBSTR::operator BSTR](#operator_bstr)|Cast di un `CComBSTR` oggetto a un BSTR.|
|[CComBSTR::operator!](#operator_not)|Restituisce TRUE o FALSE, a seconda che `m_str`è NULL.|
|[CComBSTR::operator! =](#operator_neq)|Confronta un `CComBSTR` con una stringa.|
|[CComBSTR::operator &](#operator_amp)|Restituisce l'indirizzo del `m_str`.|
|[+ = CComBSTR::operator](#operator_add_eq)|Aggiunge un `CComBSTR` all'oggetto.|
|[CComBSTR::operator <](#operator_lt)|Confronta un `CComBSTR` con una stringa.|
|[CComBSTR::operator =](#operator_eq)|Assegna un valore a `m_str`.|
|[CComBSTR::operator = =](#operator_eq_eq)|Confronta un `CComBSTR` con una stringa.|
|[CComBSTR::operator >](#operator_gt)|Confronta un `CComBSTR` con una stringa.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComBSTR::m_str](#m_str)|Contiene la stringa BSTR associata il `CComBSTR` oggetto.|

## <a name="remarks"></a>Note

Il `CComBSTR` classe è un wrapper per BSTR, che sono stringhe con prefisso di lunghezza. La lunghezza viene archiviata come valore intero in corrispondenza della posizione di memoria che precede i dati nella stringa.

Oggetto [BSTR](/previous-versions/windows/desktop/automat/bstr) sono con terminazione null dopo l'ultimo considerati caratteri ma può anche contenere caratteri null incorporati all'interno della stringa. La lunghezza della stringa dipende dal numero di caratteri, non al primo carattere null.

> [!NOTE]
>  Il `CComBSTR` classe fornisce un numero di membri (costruttori, operatori di assegnazione e operatori di confronto) che accettano stringhe ANSI o Unicode come argomenti. Le versioni ANSI di queste funzioni sono meno efficienti rispetto alle relative controparti Unicode perché le stringhe Unicode temporanee vengono spesso create internamente. Per motivi di efficienza, usare le versioni di Unicode laddove possibile.

> [!NOTE]
>  A causa del comportamento di ricerca migliorata implementato in Visual Studio .NET, code, ad esempio `bstr = L"String2" + bstr;`, che è possibile che siano compilati nelle versioni precedenti, ma devono essere implementati come `bstr = CStringW(L"String2") + bstr`.

Per un elenco di avvisi quando si usa `CComBSTR`, vedere [programmazione con CComBSTR](../../atl/programming-with-ccombstr-atl.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="append"></a>  CComBSTR::Append

Aggiunge uno *lpsz* o il membro BSTR della *bstrSrc* al [m_str](#m_str).

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
[in] Oggetto `CComBSTR` oggetto da accodare.

*ch*<br/>
[in] Un carattere da accodare.

*lpsz*<br/>
[in] Una stringa di caratteri con terminazione zero da accodare. È possibile passare una stringa Unicode tramite l'overload LPCOLESTR o una stringa ANSI tramite la versione LPCSTR.

*nLen*<br/>
[in] Il numero di caratteri dal *lpsz* da accodare.

### <a name="return-value"></a>Valore restituito

S_OK su esito positivo o qualsiasi valore di errore HRESULT standard.

### <a name="remarks"></a>Note

Una stringa ANSI verrà convertita in Unicode prima aggiunto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#32](../../atl/codesnippet/cpp/ccombstr-class_1.cpp)]

##  <a name="appendbstr"></a>  CComBSTR::AppendBSTR

Accoda specificata BSTR [m_str](#m_str).

```
HRESULT AppendBSTR(BSTR p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
[in] BSTR da accodare.

### <a name="return-value"></a>Valore restituito

S_OK su esito positivo o qualsiasi valore di errore HRESULT standard.

### <a name="remarks"></a>Note

Non passare una stringa di caratteri "wide" normale per questo metodo. Il compilatore non è possibile rilevare l'errore e di esecuzione si verificheranno errori.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#33](../../atl/codesnippet/cpp/ccombstr-class_2.cpp)]

##  <a name="appendbytes"></a>  CComBSTR::AppendBytes

Aggiunge il numero specificato di byte da [m_str](#m_str) senza conversione.

```
HRESULT AppendBytes(const char* lpsz, int nLen) throw();
```

### <a name="parameters"></a>Parametri

*lpsz*<br/>
[in] Puntatore a una matrice di byte da aggiungere.

*p*<br/>
[in] Il numero di byte da aggiungere.

### <a name="return-value"></a>Valore restituito

S_OK su esito positivo o qualsiasi valore di errore HRESULT standard.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#34](../../atl/codesnippet/cpp/ccombstr-class_3.cpp)]

##  <a name="arraytobstr"></a>  CComBSTR::ArrayToBSTR

Consente di liberare qualsiasi stringa esistente contenuta nel `CComBSTR` dell'oggetto, quindi crea un oggetto BSTR dal primo carattere di ogni elemento in safearray e lo collega al `CComBSTR` oggetto.

```
HRESULT ArrayToBSTR(const SAFEARRAY* pSrc) throw();
```

### <a name="parameters"></a>Parametri

*pSrc*<br/>
[in] Safearray contenente gli elementi utilizzati per creare la stringa.

### <a name="return-value"></a>Valore restituito

S_OK su esito positivo o qualsiasi valore di errore HRESULT standard.

##  <a name="assignbstr"></a>  CComBSTR::AssignBSTR

Assegna un BSTR [m_str](#m_str).

```
HRESULT AssignBSTR(const BSTR bstrSrc) throw();
```

### <a name="parameters"></a>Parametri

*bstrSrc*<br/>
[in] Un oggetto BSTR da assegnare all'oggetto corrente `CComBSTR` oggetto.

### <a name="return-value"></a>Valore restituito

S_OK su esito positivo o qualsiasi valore di errore HRESULT standard.

##  <a name="attach"></a>  CComBSTR::Attach

Associa un oggetto BSTR per il `CComBSTR` oggetto impostando il [m_str](#m_str) membro *src*.

```
void Attach(BSTR src) throw();
```

### <a name="parameters"></a>Parametri

*src*<br/>
[in] BSTR da collegare all'oggetto.

### <a name="remarks"></a>Note

Non passare una stringa di caratteri "wide" normale per questo metodo. Il compilatore non è possibile rilevare l'errore e di esecuzione si verificheranno errori.

> [!NOTE]
>  Questo metodo genera un'asserzione se `m_str` è diverso da NULL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#35](../../atl/codesnippet/cpp/ccombstr-class_4.cpp)]

##  <a name="bstrtoarray"></a>  CComBSTR::BSTRToArray

Crea un safearray in base zero unidimensionale in cui ogni elemento della matrice è un carattere dal `CComBSTR` oggetto.

```
HRESULT BSTRToArray(LPSAFEARRAY* ppArray) throw();
```

### <a name="parameters"></a>Parametri

*ppArray*<br/>
[out] Puntatore a safearray usato per archiviare i risultati della funzione.

### <a name="return-value"></a>Valore restituito

S_OK su esito positivo o qualsiasi valore di errore HRESULT standard.

##  <a name="bytelength"></a>  CComBSTR::ByteLength

Restituisce il numero di byte in `m_str`, escluso il carattere di terminazione null.

```
unsigned int ByteLength() const throw();
```

### <a name="return-value"></a>Valore restituito

La lunghezza del [m_str](#m_str) membro in byte.

### <a name="remarks"></a>Note

Restituisce 0 se `m_str` è NULL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#36](../../atl/codesnippet/cpp/ccombstr-class_5.cpp)]

##  <a name="ccombstr"></a>  CComBSTR::CComBSTR

Costruttore. Il costruttore predefinito imposta i [m_str](#m_str) membro su NULL.

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
[in] Il numero di caratteri da copiare dalla *sz* o le dimensioni iniziali in caratteri per il `CComBSTR`.

*sz*<br/>
[in] Stringa da copiare. La versione Unicode specifica un LPCOLESTR; la versione ANSI specifica un LPCSTR.

*pSrc*<br/>
[in] Stringa da copiare. La versione Unicode specifica un LPCOLESTR; la versione ANSI specifica un LPCSTR.

*src*<br/>
[in] Oggetto `CComBSTR`.

*guid*<br/>
[in] Un riferimento a un `GUID` struttura.

### <a name="remarks"></a>Note

I costruttore di copia imposta `m_str` a una copia del membro di BSTR *src*. Il `REFGUID` costruttore converte GUID in una stringa usando `StringFromGUID2` e archivia il risultato.

L'altro costruttore imposta `m_str` su una copia della stringa specificata. Se si passa un valore *nSize*, quindi solo *nSize* verranno copiati i caratteri, seguito da un carattere di terminazione null.

`CComBSTR` supporta la semantica di spostamento. È possibile usare il costruttore di spostamento (il costruttore che accetta un riferimento rvalue (`&&`) per creare un nuovo oggetto che usa gli stessi dati sottostanti dell'oggetto precedente passato come argomento, senza il sovraccarico di copiare l'oggetto.

Il distruttore libera la stringa a cui punta `m_str`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#37](../../atl/codesnippet/cpp/ccombstr-class_6.cpp)]

##  <a name="dtor"></a>  CComBSTR:: ~ CComBSTR

Distruttore.

```
~CComBSTR();
```

### <a name="remarks"></a>Note

Il distruttore libera la stringa a cui punta `m_str`.

##  <a name="copy"></a>  CComBSTR::Copy

Alloca e restituisce una copia di `m_str`.

```
BSTR Copy() const throw();
```

### <a name="return-value"></a>Valore restituito

Una copia del [m_str](#m_str) membro. Se `m_str` è NULL, restituisce NULL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#38](../../atl/codesnippet/cpp/ccombstr-class_7.cpp)]

##  <a name="copyto"></a>  CComBSTR::CopyTo

Alloca e restituisce una copia del [m_str](#m_str) tramite il parametro.

```
HRESULT CopyTo(BSTR* pbstr) throw();

HRESULT CopyTo(VARIANT* pvarDest) throw();
```

### <a name="parameters"></a>Parametri

*pbstr*<br/>
[out] L'indirizzo del BSTR nella quale restituire la stringa allocata da questo metodo.

*pvarDest*<br/>
[out] L'indirizzo di una variante in cui restituire la stringa allocata da questo metodo.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard che indica l'esito positivo o negativo della copia.

### <a name="remarks"></a>Note

Dopo aver chiamato questo metodo, la variante a cui punta *pvarDest* sarà di tipo VT_BSTR.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#39](../../atl/codesnippet/cpp/ccombstr-class_8.cpp)]

##  <a name="detach"></a>  CComBSTR::Detach

Consente di scollegare [m_str](#m_str) dalle `CComBSTR` oggetto e imposta `m_str` su NULL.

```
BSTR Detach() throw();
```

### <a name="return-value"></a>Valore restituito

La stringa BSTR associato il `CComBSTR` oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#40](../../atl/codesnippet/cpp/ccombstr-class_9.cpp)]

##  <a name="empty"></a>  CComBSTR::Empty

Libera la [m_str](#m_str) membro.

```
void Empty() throw();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#41](../../atl/codesnippet/cpp/ccombstr-class_10.cpp)]

##  <a name="length"></a>  CComBSTR::Length

Restituisce il numero di caratteri in `m_str`, escluso il carattere di terminazione null.

```
unsigned int Length() const throw();
```

### <a name="return-value"></a>Valore restituito

La lunghezza del [m_str](#m_str) membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#42](../../atl/codesnippet/cpp/ccombstr-class_11.cpp)]

##  <a name="loadstring"></a>  CComBSTR::LoadString

Carica una risorsa di stringa specificata da *nID* e lo archivia in questo oggetto.

```
bool LoadString(HINSTANCE hInst, UINT nID) throw();
bool LoadString(UINT nID) throw();
```

### <a name="parameters"></a>Parametri

Visualizzare [LoadString](/windows/desktop/api/winuser/nf-winuser-loadstringa) in Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la stringa viene caricata correttamente. in caso contrario, restituisce FALSE.

### <a name="remarks"></a>Note

La prima funzione carica la risorsa del modulo identificato dall'utente tramite il *hInst* parametro. La seconda funzione carica la risorsa dal modulo di risorse associato con il [CComModule](../../atl/reference/ccommodule-class.md)-oggetto utilizzato nel progetto derivato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#43](../../atl/codesnippet/cpp/ccombstr-class_12.cpp)]

##  <a name="m_str"></a>  CComBSTR::m_str

Contiene la stringa BSTR associata il `CComBSTR` oggetto.

```
BSTR m_str;
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#49](../../atl/codesnippet/cpp/ccombstr-class_13.cpp)]

##  <a name="operator_bstr"></a>  CComBSTR::operator BSTR

Cast di un `CComBSTR` oggetto a un BSTR.

```
operator BSTR() const throw();
```

### <a name="remarks"></a>Note

Consente di passare `CComBSTR` oggetti alle funzioni che hanno **[in] BSTR** parametri.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CComBSTR::m_str](#m_str).

##  <a name="operator_not"></a>  CComBSTR::operator!

Controlla se la stringa BSTR è NULL.

```
bool operator!() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il [m_str](#m_str) membro è NULL; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo operatore controlla solo per un valore NULL, non per una stringa vuota.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#35](../../atl/codesnippet/cpp/ccombstr-class_4.cpp)]

##  <a name="operator_neq"></a>  CComBSTR::operator! =

Restituisce l'opposto logico di [operatore = =](#operator_eq_eq).

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
[in] Stringa con terminazione zero.

*Null*<br/>
[in] Deve essere NULL.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elemento di cui eseguire il confronto non è uguale al `CComBSTR` oggetto; in caso contrario, restituisce FALSE.

### <a name="remarks"></a>Note

`CComBSTR`s vengono confrontati testualmente nel contesto delle impostazioni locali predefinite dell'utente. L'operatore di confronto finale appena confronta la stringa contenuta rispetto a NULL.

##  <a name="operator_amp"></a>  CComBSTR::operator &amp;

Restituisce l'indirizzo del BSTR archiviate nel [m_str](#m_str) membro.

```
BSTR* operator&() throw();
```

### <a name="remarks"></a>Note

`CComBstr operator &` è un'asserzione speciale associato per semplificare l'identificazione delle perdite di memoria. Il programma verrà verificata quando la `m_str` inizializzazione del membro. Questa asserzione è stata creata per identificare le situazioni in cui un programmatore Usa la `& operator` assegnare un nuovo valore per `m_str` membro senza liberarla l'allocazione prima di `m_str`. Se `m_str` è uguale a NULL, il programma presuppone l'uso m_str che non è stato allocato ancora. In questo caso, il programma non verrà verificata.

Questa asserzione non è abilitata per impostazione predefinita. Definire ATL_CCOMBSTR_ADDRESS_OF_ASSERT per abilitare questa asserzione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#46](../../atl/codesnippet/cpp/ccombstr-class_14.cpp)]

[!code-cpp[NVC_ATL_Utilities#47](../../atl/codesnippet/cpp/ccombstr-class_15.cpp)]

##  <a name="operator_add_eq"></a>  + = CComBSTR::operator

Aggiunge una stringa al `CComBSTR` oggetto.

```
CComBSTR& operator+= (const CComBSTR& bstrSrc);
CComBSTR& operator+= (const LPCOLESTR pszSrc);
```

### <a name="parameters"></a>Parametri

*bstrSrc*<br/>
[in] Oggetto `CComBSTR` oggetto da accodare.

*pszSrc*<br/>
[in] Una stringa con terminazione zero da accodare.

### <a name="remarks"></a>Note

`CComBSTR`s vengono confrontati testualmente nel contesto delle impostazioni locali predefinite dell'utente. Viene effettuato il confronto LPCOLESTR usando `memcmp` dei dati non elaborati in ogni stringa. Il confronto LPCSTR viene eseguito nello stesso modo dopo una temporanea Unicode copia di *pszSrc* è stato creato. L'operatore di confronto finale appena confronta la stringa contenuta rispetto a NULL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#48](../../atl/codesnippet/cpp/ccombstr-class_16.cpp)]

##  <a name="operator_lt"></a>  CComBSTR::operator &lt;

Confronta un `CComBSTR` con una stringa.

```
bool operator<(const CComBSTR& bstrSrc) const throw();
bool operator<(LPCOLESTR pszSrc) const throw();
bool operator<(LPCSTR pszSrc) const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elemento di cui eseguire il confronto è minore di `CComBSTR` dell'oggetto; in caso contrario, restituisce FALSE.

### <a name="remarks"></a>Note

Il confronto viene eseguito con impostazioni locali predefinite dell'utente.

##  <a name="operator_eq"></a>  CComBSTR::operator =

Imposta il [m_str](#m_str) membro a una copia di *pSrc* o a una copia del membro BSTR della *src*. Sposta l'operatore di assegnazione spostamento `src` senza copiarlo.

```
CComBSTR& operator= (const CComBSTR& src);
CComBSTR& operator= (LPCOLESTR pSrc);
CComBSTR& operator= (LPCSTR pSrc);
CComBSTR& operator= (CComBSTR&& src) throw(); // (Visual Studio 2017)
```

### <a name="remarks"></a>Note

Il *pSrc* parametro specifica un LPCOLESTR per le versioni di Unicode o LPCSTR per le versioni ANSI.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CComBSTR::Copy](#copy).

##  <a name="operator_eq_eq"></a>  CComBSTR::operator = =

Confronta un `CComBSTR` con una stringa. `CComBSTR`s vengono confrontati testualmente nel contesto delle impostazioni locali predefinite dell'utente.

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
[in] Stringa con terminazione zero.

*Null*<br/>
[in] Deve essere NULL.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elemento di cui eseguire il confronto è uguale al `CComBSTR` oggetto; in caso contrario, restituisce FALSE.

### <a name="remarks"></a>Note

L'operatore di confronto finale appena confronta la stringa contenuta rispetto a NULL.

##  <a name="operator_gt"></a>  CComBSTR::operator &gt;

Confronta un `CComBSTR` con una stringa.

```
bool operator>(const CComBSTR& bstrSrc) const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elemento di cui eseguire il confronto è maggiore di `CComBSTR` dell'oggetto; in caso contrario, restituisce FALSE.

### <a name="remarks"></a>Note

Il confronto viene eseguito con impostazioni locali predefinite dell'utente.

##  <a name="readfromstream"></a>  CComBSTR::ReadFromStream

Imposta il [m_str](#m_str) membro per la stringa BSTR contenute nel flusso specificato.

```
HRESULT ReadFromStream(IStream* pStream) throw();
```

### <a name="parameters"></a>Parametri

*pStream*<br/>
[in] Un puntatore per il [IStream](/windows/desktop/api/objidl/nn-objidl-istream) interfaccia sulla base del flusso che contiene i dati.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

`ReadToStream` richiede il contenuto del flusso in corrispondenza della posizione corrente per essere compatibile con il formato dei dati scritto da una chiamata a [WriteToStream](#writetostream).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#44](../../atl/codesnippet/cpp/ccombstr-class_17.cpp)]

##  <a name="tolower"></a>  CComBSTR::ToLower

Converte la stringa contenuta in minuscolo.

```
HRESULT ToLower() throw();
```

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Vedere `CharLowerBuff` per altre informazioni sul modo in cui viene eseguita la conversione.

##  <a name="toupper"></a>  CComBSTR::ToUpper

Converte la stringa contenuta in maiuscolo.

```
HRESULT ToUpper() throw();
```

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Vedere `CharUpperBuff` per altre informazioni sul modo in cui viene eseguita la conversione.

##  <a name="writetostream"></a>  CComBSTR::WriteToStream

Salva il [m_str](#m_str) membro in un flusso.

```
HRESULT WriteToStream(IStream* pStream) throw();
```

### <a name="parameters"></a>Parametri

*pStream*<br/>
[in] Un puntatore per il [IStream](/windows/desktop/api/objidl/nn-objidl-istream) interfaccia in un flusso.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

È possibile ricreare un oggetto BSTR dal contenuto di flusso tramite il [ReadFromStream](#readfromstream) (funzione).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#45](../../atl/codesnippet/cpp/ccombstr-class_18.cpp)]

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Macro di conversione di stringhe MFC e ATL](string-conversion-macros.md)
