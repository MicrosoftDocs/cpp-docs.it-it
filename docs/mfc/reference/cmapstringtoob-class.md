---
title: Classe CMapStringToOb
ms.date: 11/04/2016
f1_keywords:
- CMapStringToOb
- AFXCOLL/CMapStringToOb
- AFXCOLL/CMapStringToOb::CMapStringToOb
- AFXCOLL/CMapStringToOb::GetCount
- AFXCOLL/CMapStringToOb::GetHashTableSize
- AFXCOLL/CMapStringToOb::GetNextAssoc
- AFXCOLL/CMapStringToOb::GetSize
- AFXCOLL/CMapStringToOb::GetStartPosition
- AFXCOLL/CMapStringToOb::HashKey
- AFXCOLL/CMapStringToOb::InitHashTable
- AFXCOLL/CMapStringToOb::IsEmpty
- AFXCOLL/CMapStringToOb::Lookup
- AFXCOLL/CMapStringToOb::LookupKey
- AFXCOLL/CMapStringToOb::RemoveAll
- AFXCOLL/CMapStringToOb::RemoveKey
- AFXCOLL/CMapStringToOb::SetAt
helpviewer_keywords:
- CMapStringToOb [MFC], CMapStringToOb
- CMapStringToOb [MFC], GetCount
- CMapStringToOb [MFC], GetHashTableSize
- CMapStringToOb [MFC], GetNextAssoc
- CMapStringToOb [MFC], GetSize
- CMapStringToOb [MFC], GetStartPosition
- CMapStringToOb [MFC], HashKey
- CMapStringToOb [MFC], InitHashTable
- CMapStringToOb [MFC], IsEmpty
- CMapStringToOb [MFC], Lookup
- CMapStringToOb [MFC], LookupKey
- CMapStringToOb [MFC], RemoveAll
- CMapStringToOb [MFC], RemoveKey
- CMapStringToOb [MFC], SetAt
ms.assetid: 09653980-b885-4f3a-8594-0aeb7f94c601
ms.openlocfilehash: b56e9052533269ba62d248312f07ac16db71bf4a
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78876374"
---
# <a name="cmapstringtoob-class"></a>Classe CMapStringToOb

Classe di raccolte dizionario che esegue il mapping di oggetti `CString` univoci ai puntatori `CObject` .

## <a name="syntax"></a>Sintassi

```
class CMapStringToOb : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMapStringToOb:: CMapStringToOb](#cmapstringtoob)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMapStringToOb:: GetCount](#getcount)|Restituisce il numero di elementi in questa mappa.|
|[CMapStringToOb:: GetHashTableSize](#gethashtablesize)|Determina il numero corrente di elementi nella tabella hash.|
|[CMapStringToOb:: GetNextAssoc](#getnextassoc)|Ottiene l'elemento successivo per l'iterazione.|
|[CMapStringToOb:: GetSize](#getsize)|Restituisce il numero di elementi in questa mappa.|
|[CMapStringToOb:: GetStartPosition](#getstartposition)|Restituisce la posizione del primo elemento.|
|[CMapStringToOb:: HashKey](#hashkey)|Calcola il valore hash di una chiave specificata.|
|[CMapStringToOb:: InitHashTable](#inithashtable)|Inizializza la tabella hash.|
|[CMapStringToOb:: IsEmpty](#isempty)|Verifica la condizione di mappa vuota (nessun elemento).|
|[CMapStringToOb:: Lookup](#lookup)|Cerca un puntatore void in base alla chiave del puntatore void. Il valore del puntatore, non l'entità a cui punta, viene usato per il confronto delle chiavi.|
|[CMapStringToOb:: LookupKey](#lookupkey)|Restituisce un riferimento alla chiave associata al valore di chiave specificato.|
|[CMapStringToOb:: RemoveAll](#removeall)|Rimuove tutti gli elementi dalla mappa.|
|[CMapStringToOb:: RemoveKey](#removekey)|Rimuove un elemento specificato da una chiave.|
|[CMapStringToOb:: SetAt](#setat)|Inserisce un elemento nella mappa. sostituisce un elemento esistente se viene trovata una chiave corrispondente.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[\[ CMapStringToOb:: operator \]](#operator_at)|Inserisce un elemento nella mappa, ovvero la sostituzione dell'operatore per `SetAt`.|

## <a name="remarks"></a>Osservazioni

Dopo aver inserito un `CString`- `CObject*` coppia (elemento) nella mappa, è possibile recuperare o eliminare in modo efficiente la coppia utilizzando una stringa o un valore `CString` come chiave. È inoltre possibile eseguire l'iterazione su tutti gli elementi della mappa.

Una variabile di tipo POSITION viene utilizzata per l'accesso alle voci alternative in tutte le varianti della mappa. È possibile usare una posizione per "ricordare" una voce e per scorrere la mappa. Si potrebbe pensare che questa iterazione sia sequenziale in base al valore della chiave. non è. La sequenza di elementi recuperati è indeterminata.

`CMapStringToOb` incorpora la macro `IMPLEMENT_SERIAL` per supportare la serializzazione e il dump dei relativi elementi. Ogni elemento viene serializzato a sua volta se una mappa viene archiviata in un archivio, con l'operatore di inserimento ( **<<** ) di overload o con la funzione membro `Serialize`.

Se è necessario un dump di diagnostica dei singoli elementi nella mappa (il valore `CString` e il contenuto del `CObject`), è necessario impostare la profondità del contesto di dump su 1 o superiore.

Quando viene eliminato un oggetto `CMapStringToOb` o quando vengono rimossi gli elementi, gli oggetti `CString` e i puntatori `CObject` vengono rimossi. Gli oggetti a cui fanno riferimento i puntatori `CObject` non vengono eliminati definitivamente.

La derivazione della classe Map è simile alla derivazione dell'elenco. Vedere le [raccolte](../../mfc/collections.md) di articoli per un'illustrazione della derivazione di una classe di elenco per scopi specifici.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CMapStringToOb`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXCOLL. h

##  <a name="cmapstringtoob"></a>CMapStringToOb:: CMapStringToOb

Costruisce una mappa da `CString`a `CObject*` vuota.

```
CMapStringToOb(INT_PTR nBlockSize = 10);
```

### <a name="parameters"></a>Parametri

*nBlockSize*<br/>
Specifica la granularità di allocazione della memoria per l'estensione della mappa.

### <a name="remarks"></a>Osservazioni

Con la crescita della mappa, la memoria viene allocata in unità di *nBlockSize* .

La tabella seguente Mostra altre funzioni membro simili a `CMapStringToOb:: CMapStringToOb`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**CMapPtrToPtr (INT_PTR** `nBlockSize` **= 10);**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**CMapPtrToWord (INT_PTR** `nBlockSize` **= 10);**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**CMapStringToPtr (INT_PTR** `nBlockSize` **= 10);**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**CMapStringToString (INT_PTR** `nBlockSize` **= 10);**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**CMapWordToOb (INT_PTR** `nBlockSize` **= 10);**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**MapWordToPtr (INT_PTR** `nBlockSize` **= 10);**|

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#63](../../mfc/codesnippet/cpp/cmapstringtoob-class_1.cpp)]

Per un elenco della classe `CAge` utilizzata in tutti gli esempi di raccolta, vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) .

##  <a name="getcount"></a>CMapStringToOb:: GetCount

Determina il numero di elementi presenti nella mappa.

```
INT_PTR GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi in questa mappa.

### <a name="remarks"></a>Osservazioni

La tabella seguente Mostra altre funzioni membro simili a `CMapStringToOb::GetCount`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**INT_PTR GetCount () const;**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**INT_PTR GetCount () const;**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**INT_PTR GetCount () const;**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**INT_PTR GetCount () const;**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**INT_PTR GetCount () const;**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**INT_PTR GetCount () const;**|

### <a name="example"></a>Esempio

Per un elenco della classe `CAge` utilizzata in tutti gli esempi di raccolta, vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) .

[!code-cpp[NVC_MFCCollections#64](../../mfc/codesnippet/cpp/cmapstringtoob-class_2.cpp)]

##  <a name="gethashtablesize"></a>CMapStringToOb:: GetHashTableSize

Determina il numero corrente di elementi nella tabella hash.

```
UINT GetHashTableSize() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di elementi nella tabella hash.

### <a name="remarks"></a>Osservazioni

La tabella seguente Mostra altre funzioni membro simili a `CMapStringToOb::GetHashTableSize`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**UINT GetHashTableSize () const;**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**UINT GetHashTableSize () const;**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**UINT GetHashTableSize () const;**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**UINT GetHashTableSize () const;**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**UINT GetHashTableSize () const;**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**UINT GetHashTableSize () const;**|

##  <a name="getnextassoc"></a>CMapStringToOb:: GetNextAssoc

Recupera l'elemento della mappa in *rNextPosition*, quindi aggiorna *rNextPosition* per fare riferimento all'elemento successivo nella mappa.

```
void GetNextAssoc(
    POSITION& rNextPosition,
    CString& rKey,
    CObject*& rValue) const;
```

### <a name="parameters"></a>Parametri

*rNextPosition*<br/>
Specifica un riferimento a un valore di posizione restituito da un `GetNextAssoc` o una chiamata `GetStartPosition` precedente.

*rKey*<br/>
Specifica la chiave restituita dell'elemento recuperato (una stringa).

*rValue*<br/>
Specifica il valore restituito dell'elemento recuperato (un puntatore `CObject`). Per ulteriori informazioni su questo parametro, vedere la sezione Osservazioni.

### <a name="remarks"></a>Osservazioni

Questa funzione è particolarmente utile per scorrere tutti gli elementi della mappa. Si noti che la sequenza di posizione non è necessariamente identica alla sequenza di valori di chiave.

Se l'elemento recuperato è l'ultimo oggetto della mappa, il nuovo valore di *rNextPosition* viene impostato su null.

Per il parametro *rvalue* , assicurarsi di eseguire il cast del tipo di oggetto a **CObject\*&** , ovvero ciò che il compilatore richiede, come illustrato nell'esempio seguente:

[!code-cpp[NVC_MFCCollections#65](../../mfc/codesnippet/cpp/cmapstringtoob-class_3.cpp)]

Questo non vale per `GetNextAssoc` per le mappe basate su modelli.

La tabella seguente Mostra altre funzioni membro simili a `CMapStringToOb::GetNextAssoc`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**void GetNextAssoc (POSITION &** *rNextPosition* **, void\*&** *RKEY* **, void\*&** *rvalue* **) const;**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**void GetNextAssoc (POSITION &** *rNextPosition* **, void\*&** *RKEY* **, Word &** *rvalue* **) const;**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**void GetNextAssoc (POSITION &** *rNextPosition* **, CString &** *RKEY* **, void\*&** *rvalue* **) const;**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**void GetNextAssoc (POSITION &** *rNextPosition* **, cstring &** *RKEY* **, CString &** *rvalue* **) const;**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**void GetNextAssoc (POSITION &** *rNextPosition* **, WORD &** *RKEY* **, CObject\*&** *rvalue* **) const;**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**void GetNextAssoc (POSITION &** *rNextPosition* **, WORD &** *RKEY* **, void\*&** *rvalue* **) const;**|

### <a name="example"></a>Esempio

Per un elenco della classe `CAge` utilizzata in tutti gli esempi di raccolta, vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) .

[!code-cpp[NVC_MFCCollections#66](../../mfc/codesnippet/cpp/cmapstringtoob-class_4.cpp)]

I risultati di questo programma sono i seguenti:

```Output
Lisa : a CAge at $4724 11
Marge : a CAge at $47A8 35
Homer : a CAge at $4766 36
Bart : a CAge at $45D4 13
```

##  <a name="getsize"></a>CMapStringToOb:: GetSize

Restituisce il numero di elementi della mappa.

```
INT_PTR GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nella mappa.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per recuperare il numero di elementi nella mappa.

La tabella seguente Mostra altre funzioni membro simili a `CMapStringToOb::GetSize`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**INT_PTR GetSize () const;**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**INT_PTR GetSize () const;**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**INT_PTR GetSize () const;**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**INT_PTR GetSize () const;**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**INT_PTR GetSize () const;**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**INT_PTR GetSize () const;**|

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#67](../../mfc/codesnippet/cpp/cmapstringtoob-class_5.cpp)]

##  <a name="getstartposition"></a>CMapStringToOb:: GetStartPosition

Avvia un'iterazione della mappa restituendo un valore di posizione che può essere passato a una chiamata `GetNextAssoc`.

```
POSITION GetStartPosition() const;
```

### <a name="return-value"></a>Valore restituito

Valore di posizione che indica una posizione iniziale per l'iterazione della mappa; o NULL se la mappa è vuota.

### <a name="remarks"></a>Osservazioni

La sequenza di iterazione non è stimabile. Pertanto, il "primo elemento della mappa" non ha un significato speciale.

La tabella seguente Mostra altre funzioni membro simili a `CMapStringToOb::GetStartPosition`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**POSITION GetStartPosition () const;**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**POSITION GetStartPosition () const;**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**POSITION GetStartPosition () const;**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**POSITION GetStartPosition () const;**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**POSITION GetStartPosition () const;**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**POSITION GetStartPosition () const;**|

### <a name="example"></a>Esempio

Vedere l'esempio per [CMapStringToOb:: GetNextAssoc](#getnextassoc).

##  <a name="hashkey"></a>CMapStringToOb:: HashKey

Calcola il valore hash di una chiave specificata.

```
UINT HashKey(LPCTSTR key) const;
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave il cui valore hash deve essere calcolato.

### <a name="return-value"></a>Valore restituito

Valore hash della chiave

### <a name="remarks"></a>Osservazioni

La tabella seguente Mostra altre funzioni membro simili a `CMapStringToOb::HashKey`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**UINT HashKey (void** <strong>\*</strong> `key` **) const;**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**UINT HashKey (void** <strong>\*</strong> `key` **) const;**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**UINT HashKey (LPCTSTR** `key` **) const;**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**UINT HashKey (LPCTSTR** `key` **) const;**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**UINT HashKey (WORD** `key` **) const;**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**UINT HashKey (WORD** `key` **) const;**|

##  <a name="inithashtable"></a>CMapStringToOb:: InitHashTable

Inizializza la tabella hash.

```
void InitHashTable(
    UINT hashSize,
    BOOL bAllocNow = TRUE);
```

### <a name="parameters"></a>Parametri

*hashSize*<br/>
Numero di voci nella tabella hash.

*bAllocNow*<br/>
Se TRUE, alloca la tabella hash durante l'inizializzazione; in caso contrario, la tabella viene allocata quando è necessario.

### <a name="remarks"></a>Osservazioni

Per ottenere prestazioni ottimali, le dimensioni della tabella hash devono essere un numero primo. Per ridurre al minimo i conflitti, la dimensione deve essere approssimativamente del 20% più grande del set di dati previsto più grande.

La tabella seguente Mostra altre funzioni membro simili a `CMapStringToOb::InitHashTable`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**void InitHashTable (UINT** `hashSize` **, bool** `bAllocNow` **= true);**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**void InitHashTable (UINT** `hashSize` **, bool** `bAllocNow` **= true);**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**void InitHashTable (UINT** `hashSize` **, bool** `bAllocNow` **= true);**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**void InitHashTable (UINT** `hashSize` **, bool** `bAllocNow` **= true);**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**void InitHashTable (UINT** `hashSize` **, bool** `bAllocNow` **= true);**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**void InitHashTable (UINT** `hashSize` **, bool** `bAllocNow` **= true);**|

##  <a name="isempty"></a>CMapStringToOb:: IsEmpty

Determina se la mappa è vuota.

```
BOOL IsEmpty() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la mappa non contiene elementi; in caso contrario, 0.

### <a name="example"></a>Esempio

Vedere l'esempio per [RemoveAll](#removeall).

### <a name="remarks"></a>Osservazioni

La tabella seguente Mostra altre funzioni membro simili a **CMapStringToOb:: IsEmpty**.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**BOOL IsEmpty () const;**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**BOOL IsEmpty () const;**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**BOOL IsEmpty () const;**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**BOOL IsEmpty () const;**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**BOOL IsEmpty () const;**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**BOOL IsEmpty () const;**|

##  <a name="lookup"></a>CMapStringToOb:: Lookup

Restituisce un puntatore `CObject` in base a un valore `CString`.

```
BOOL Lookup(
    LPCTSTR key,
    CObject*& rValue) const;
```

### <a name="parameters"></a>Parametri

*key*<br/>
Specifica la chiave di stringa che identifica l'elemento da cercare.

*rValue*<br/>
Specifica il valore restituito dall'elemento cercato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento è stato trovato. in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

`Lookup` usa un algoritmo di hashing per trovare rapidamente l'elemento della mappa con una chiave corrispondente esattamente (`CString` valore).

La tabella seguente Mostra altre funzioni membro simili a `CMapStringToOb::LookUp`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**Bool Lookup (void** <strong>\*</strong> `key` **, void\*&** `rValue` **) const;**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**Bool Lookup (void** <strong>\*</strong> `key` **, Word &** `rValue` **) const;**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**Bool Lookup (LPCTSTR** `key` **, void\*&** `rValue` **) const;**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**Bool Lookup (LPCTSTR** `key` **, CString &** `rValue` **) const;**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**Ricerca bool (WORD** `key` **, CObject\*&** `rValue` **) const;**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**Ricerca bool (WORD** `key` **, void\*&** `rValue` **) const;**|

### <a name="example"></a>Esempio

Per un elenco della classe `CAge` utilizzata in tutti gli esempi di raccolta, vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) .

[!code-cpp[NVC_MFCCollections#68](../../mfc/codesnippet/cpp/cmapstringtoob-class_6.cpp)]

##  <a name="lookupkey"></a>CMapStringToOb:: LookupKey

Restituisce un riferimento alla chiave associata al valore di chiave specificato.

```
BOOL LookupKey(
    LPCTSTR key,
    LPCTSTR& rKey) const;
```

### <a name="parameters"></a>Parametri

*key*<br/>
Specifica la chiave di stringa che identifica l'elemento da cercare.

*rKey*<br/>
Riferimento alla chiave associata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la chiave è stata trovata; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

L'uso di un riferimento a una chiave non è sicuro se usato dopo che l'elemento associato è stato rimosso dalla mappa o dopo che la mappa è stata distrutta.

La tabella seguente Mostra altre funzioni membro simili a `CMapStringToOb:: LookupKey`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**Bool LookupKey (LPCTSTR** `key` **, LPCTSTR &** `rKey` **) const;**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**Bool LookupKey (LPCTSTR** `key` **, LPCTSTR &** `rKey` **) const;**|

##  <a name="operator_at"></a>CMapStringToOb:: operator []

Un comodo sostituto per la funzione membro `SetAt`.

```
CObject*& operator[ ](lpctstr key);
```

### <a name="return-value"></a>Valore restituito

Riferimento a un puntatore a un oggetto `CObject`; o NULL se la mappa è vuota o la *chiave* non è compresa nell'intervallo.

### <a name="remarks"></a>Osservazioni

Pertanto può essere utilizzata solo sul lato sinistro di un'istruzione di assegnazione (un l-value). Se non è presente alcun elemento map con la chiave specificata, viene creato un nuovo elemento.

Non esiste un "lato destro" (r-value) equivalente a questo operatore perché esiste la possibilità che una chiave non venga trovata nella mappa. Usare la funzione membro `Lookup` per il recupero degli elementi.

La tabella seguente Mostra altre funzioni membro simili a `CMapStringToOb::operator []`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|<strong>void\*& operator\[] (void \*</strong> `key` **\);**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**WORD & operator\[] (void** <strong>\*</strong> `key` **\);**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**void\*& operator\[] (lpctstr** `key` **\);**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**CString & operator\[] (lpctstr** `key` **\);**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**\[operatore & di\*CObject] (word** `key` **\);**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**void\*& operator\[] (word** `key` **\);**|

### <a name="example"></a>Esempio

Per un elenco della classe `CAge` utilizzata in tutti gli esempi di raccolta, vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) .

[!code-cpp[NVC_MFCCollections#72](../../mfc/codesnippet/cpp/cmapstringtoob-class_7.cpp)]

I risultati di questo programma sono i seguenti:

```Output
Operator [] example: A CMapStringToOb with 2 elements
[Lisa] = a CAge at $4A02 11
[Bart] = a CAge at $497E 13
```

##  <a name="removeall"></a>CMapStringToOb:: RemoveAll

Rimuove tutti gli elementi dalla mappa ed Elimina gli oggetti chiave `CString`.

```
void RemoveAll();
```

### <a name="remarks"></a>Osservazioni

Gli oggetti `CObject` a cui fa riferimento ogni chiave non vengono eliminati definitivamente. La funzione `RemoveAll` può causare perdite di memoria se non si garantisce che gli oggetti `CObject` a cui si fa riferimento vengano eliminati definitivamente.

La funzione funziona correttamente se la mappa è già vuota.

La tabella seguente Mostra altre funzioni membro simili a `CMapStringToOb::RemoveAll`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**il void RemoveAll ();**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**il void RemoveAll ();**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**il void RemoveAll ();**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**il void RemoveAll ();**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**il void RemoveAll ();**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**il void RemoveAll ();**|

### <a name="example"></a>Esempio

Per un elenco della classe `CAge` utilizzata in tutti gli esempi di raccolta, vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) .

[!code-cpp[NVC_MFCCollections#69](../../mfc/codesnippet/cpp/cmapstringtoob-class_8.cpp)]

##  <a name="removekey"></a>CMapStringToOb:: RemoveKey

Cerca la voce della mappa corrispondente alla chiave fornita. quindi, se la chiave viene trovata, rimuove la voce.

```
BOOL RemoveKey(LPCTSTR key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Specifica la stringa utilizzata per la ricerca della mappa.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la voce è stata trovata e rimossa correttamente. in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Questo può causare perdite di memoria se l'oggetto `CObject` non viene eliminato altrove.

La tabella seguente Mostra altre funzioni membro simili a `CMapStringToOb::RemoveKey`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**Bool RemoveKey (void** <strong>\*</strong> `key` **);**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**Bool RemoveKey (void** <strong>\*</strong> `key` **);**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**Bool RemoveKey (LPCTSTR** `key` **);**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**Bool RemoveKey (LPCTSTR** `key` **);**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**Bool RemoveKey (WORD** `key` **);**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**Bool RemoveKey (WORD** `key` **);**|

### <a name="example"></a>Esempio

Per un elenco della classe `CAge` utilizzata in tutti gli esempi di raccolta, vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) .

[!code-cpp[NVC_MFCCollections#70](../../mfc/codesnippet/cpp/cmapstringtoob-class_9.cpp)]

I risultati di questo programma sono i seguenti:

```Output
RemoveKey example: A CMapStringToOb with 3 elements
[Marge] = a CAge at $49A0 35
[Homer] = a CAge at $495E 36
[Bart] = a CAge at $4634 13
```

##  <a name="setat"></a>CMapStringToOb:: SetAt

Il metodo principale per inserire un elemento in una mappa.

```
void SetAt(
    LPCTSTR key,
    CObject* newValue);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Specifica la stringa che rappresenta la chiave del nuovo elemento.

*newValue*<br/>
Specifica il puntatore `CObject` che corrisponde al valore del nuovo elemento.

### <a name="remarks"></a>Osservazioni

Innanzitutto, la chiave viene ricercata. Se la chiave viene trovata, il valore corrispondente viene modificato; in caso contrario, viene creato un nuovo elemento chiave-valore.

La tabella seguente Mostra altre funzioni membro simili a `CMapStringToOb::SetAt`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**void SetAt (void** <strong>\*</strong> `key` **, void** <strong>\*</strong> `newValue` **);**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**void SetAt (void** <strong>\*</strong> `key` **, Word** `newValue` **);**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**void SetAt (LPCTSTR** `key` **, void** <strong>\*</strong> `newValue` **);**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**void SetAt (LPCTSTR** `key` **, LPCTSTR** `newValue` **);**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**void SetAt (WORD** `key` **, CObject** <strong>\*</strong> `newValue` **);**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**void SetAt (WORD** `key` **, void** <strong>\*</strong> `newValue` **);**|

### <a name="example"></a>Esempio

Per un elenco della classe `CAge` utilizzata in tutti gli esempi di raccolta, vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) .

[!code-cpp[NVC_MFCCollections#71](../../mfc/codesnippet/cpp/cmapstringtoob-class_10.cpp)]

I risultati di questo programma sono i seguenti:

```Output
before Lisa's birthday: A CMapStringToOb with 2 elements
[Lisa] = a CAge at $493C 11
[Bart] = a CAge at $4654 13
after Lisa's birthday: A CMapStringToOb with 2 elements
[Lisa] = a CAge at $49C0 12
[Bart] = a CAge at $4654 13
```

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)<br/>
[Classe CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)<br/>
[Classe CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)<br/>
[Classe CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)<br/>
[Classe CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)<br/>
[Classe CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)
