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
ms.openlocfilehash: 6520d1c38701647ae51450b9b9800a7cd2701b7a
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754587"
---
# <a name="cmapstringtoob-class"></a>Classe CMapStringToOb

Classe di raccolte dizionario che esegue il mapping di oggetti `CString` univoci ai puntatori `CObject` .

## <a name="syntax"></a>Sintassi

```
class CMapStringToOb : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMapStringToOb::CMapStringToOb](#cmapstringtoob)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMapStringToOb::GetCount](#getcount)|Restituisce il numero di elementi in questa mappa.|
|[CMapStringToOb::GetHashTableSize](#gethashtablesize)|Determina il numero corrente di elementi nella tabella hash.|
|[CMapStringToOb::GetNextAssoc](#getnextassoc)|Ottiene l'elemento successivo per l'iterazione.|
|[CMapStringToOb::GetSize](#getsize)|Restituisce il numero di elementi in questa mappa.|
|[CMapStringToOb::GetStartPosition](#getstartposition)|Restituisce la posizione del primo elemento.|
|[CMapStringToOb::HashKey](#hashkey)|Calcola il valore hash di una chiave specificata.|
|[CMapStringToOb::InitHashTable](#inithashtable)|Inizializza la tabella hash.|
|[CMapStringToOb::IsEmpty](#isempty)|Verifica la condizione della mappa vuota (nessun elemento).|
|[CMapStringToOb::Ricerca](#lookup)|Cerca un puntatore void in base al tasto del puntatore void. Il valore del puntatore, non l'entità a cui punta, viene utilizzato per il confronto delle chiavi.|
|[CMapStringToOb::LookupKey](#lookupkey)|Restituisce un riferimento alla chiave associata al valore della chiave specificato.|
|[CMapStringToOb::RemoveAll](#removeall)|Rimuove tutti gli elementi da questa mappa.|
|[CMapStringToOb::RemoveKey](#removekey)|Rimuove un elemento specificato da una chiave.|
|[CMapStringToOb::SetAt](#setat)|Inserisce un elemento nella mappa; sostituisce un elemento esistente se viene trovata una chiave corrispondente.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMapStringToOb::operatore \[\]](#operator_at)|Inserisce un elemento nella mappa, `SetAt`ovvero la sostituzione dell'operatore per .|

## <a name="remarks"></a>Osservazioni

Dopo aver inserito una `CString` -  `CObject*` coppia (elemento) nella mappa, è possibile recuperare `CString` o eliminare in modo efficiente la coppia utilizzando una stringa o un valore come chiave. È inoltre possibile scorrere tutti gli elementi nella mappa.

Una variabile di tipo POSITION viene utilizzata per l'accesso alternativo all'ingresso in tutte le varianti della mappa. È possibile utilizzare un POSITION per "ricordare" una voce e per scorrere la mappa. Si potrebbe pensare che questa iterazione è sequenziale per valore della chiave; non lo è. La sequenza degli elementi recuperati è indeterminata.

`CMapStringToOb` incorpora la macro `IMPLEMENT_SERIAL` per supportare la serializzazione e il dump dei relativi elementi. Ogni elemento viene serializzato a sua volta se una mappa viene **<<** archiviata in `Serialize` un archivio, con l'operatore di inserimento di overload ( ) o con la funzione membro .

Se è necessario un dump diagnostico dei `CString` singoli elementi `CObject` nella mappa (il valore e il contenuto), è necessario impostare la profondità del contesto di dump su 1 o su un valore maggiore.

Quando `CMapStringToOb` un oggetto viene eliminato o quando `CString` i relativi `CObject` elementi vengono rimossi, gli oggetti e i puntatori vengono rimossi. Gli oggetti a `CObject` cui fanno riferimento i puntatori non vengono eliminati.

La derivazione della classe mappa è simile alla derivazione dell'elenco. Vedere l'articolo [Raccolte](../../mfc/collections.md) per un'illustrazione della derivazione di una classe di elenco per scopi speciali.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CMapStringToOb`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcoll.h

## <a name="cmapstringtoobcmapstringtoob"></a><a name="cmapstringtoob"></a>CMapStringToOb::CMapStringToOb

Costruisce una `CString`mappa vuota-a-. `CObject*`

```
CMapStringToOb(INT_PTR nBlockSize = 10);
```

### <a name="parameters"></a>Parametri

*nBlockSize (dimensioni di blocco)*<br/>
Specifica la granularità di allocazione della memoria per l'estensione della mappa.

### <a name="remarks"></a>Osservazioni

Man mano che la mappa cresce, la memoria viene allocata in unità di voci *nBlockSize.*

Nella tabella seguente vengono illustrate altre `CMapStringToOb:: CMapStringToOb`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**CMapPtrToPtr( INT_PTR** `nBlockSize` **- 10 );**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**CMapPtrToWord( INT_PTR** `nBlockSize` **- 10 );**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**CMapStringToPtr( INT_PTR** `nBlockSize` **: 10 );**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**CMapStringToString( INT_PTR** `nBlockSize` **- 10 );**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**CMapWordToOb( INT_PTR** `nBlockSize` **- 10 );**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**MapWordToPtr( INT_PTR** `nBlockSize` **: 10 );**|

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#63](../../mfc/codesnippet/cpp/cmapstringtoob-class_1.cpp)]

Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della classe utilizzata in tutti gli esempi di raccolte.

## <a name="cmapstringtoobgetcount"></a><a name="getcount"></a>CMapStringToOb::GetCount

Determina il numero di elementi presenti nella mappa.

```
INT_PTR GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi in questa mappa.

### <a name="remarks"></a>Osservazioni

Nella tabella seguente vengono illustrate altre `CMapStringToOb::GetCount`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**INT_PTR GetCount( ) const;**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**INT_PTR GetCount( ) const;**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**INT_PTR GetCount( ) const;**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**INT_PTR GetCount( ) const;**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**INT_PTR GetCount( ) const;**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**INT_PTR GetCount( ) const;**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della classe utilizzata in tutti gli esempi di raccolte.

[!code-cpp[NVC_MFCCollections#64](../../mfc/codesnippet/cpp/cmapstringtoob-class_2.cpp)]

## <a name="cmapstringtoobgethashtablesize"></a><a name="gethashtablesize"></a>CMapStringToOb::GetHashTableSize

Determina il numero corrente di elementi nella tabella hash.

```
UINT GetHashTableSize() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di elementi nella tabella hash.

### <a name="remarks"></a>Osservazioni

Nella tabella seguente vengono illustrate altre `CMapStringToOb::GetHashTableSize`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**UINT GetHashTableSize( ) const;**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**UINT GetHashTableSize( ) const;**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**UINT GetHashTableSize( ) const;**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**UINT GetHashTableSize( ) const;**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**UINT GetHashTableSize( ) const;**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**UINT GetHashTableSize( ) const;**|

## <a name="cmapstringtoobgetnextassoc"></a><a name="getnextassoc"></a>CMapStringToOb::GetNextAssoc

Recupera l'elemento della mappa in *rNextPosition*, quindi aggiorna *rNextPosition* per fare riferimento all'elemento successivo nella mappa.

```cpp
void GetNextAssoc(
    POSITION& rNextPosition,
    CString& rKey,
    CObject*& rValue) const;
```

### <a name="parameters"></a>Parametri

*rNextPosition*<br/>
Specifica un riferimento a un valore POSITION `GetNextAssoc` `GetStartPosition` restituito da una chiamata o precedente.

*Rkey*<br/>
Specifica la chiave restituita dell'elemento recuperato (una stringa).

*Rvalue*<br/>
Specifica il valore restituito dell'elemento `CObject` recuperato (un puntatore). Per ulteriori informazioni su questo parametro, vedere Osservazioni.

### <a name="remarks"></a>Osservazioni

Questa funzione è particolarmente utile per scorrere tutti gli elementi nella mappa. Si noti che la sequenza di posizione non è necessariamente la stessa della sequenza di valori chiave.

Se l'elemento recuperato è l'ultimo nella mappa, il nuovo valore di *rNextPosition* è impostato su NULL.

Per il parametro *rValue,* assicurarsi di eseguire il cast del tipo di oggetto in **\*CObject**, che è ciò che il compilatore richiede, come illustrato nell'esempio seguente:

[!code-cpp[NVC_MFCCollections#65](../../mfc/codesnippet/cpp/cmapstringtoob-class_3.cpp)]

Questo non vale `GetNextAssoc` per le mappe basate su modelli.

Nella tabella seguente vengono illustrate altre `CMapStringToOb::GetNextAssoc`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**void GetNextAssoc( POSITION&** *rNextPosition* **, void\* ** *rKey* **, void\* ** *rValue* **) const;**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**void GetNextAssoc( POSITION&** *rNextPosition* **, void\* ** *rKey* **, WORD&** *rValue* **) const;**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**void GetNextAssoc( POSITION&** *rNextPosition* **, CString&** *rKey* **, void\* ** *rValue* **) const;**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**void GetNextAssoc( POSITION&** *rNextPosition* **, CString&** *rKey* **, CString&** *rValue* **) const;**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**void GetNextAssoc( POSITION&** *rNextPosition* **, WORD&** *rKey* **, CObject\* ** *rValue* **) const;**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**void GetNextAssoc( POSITION&** *rNextPosition* **, WORD&** *rKey* **, void\* ** *rValue* **) const;**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della classe utilizzata in tutti gli esempi di raccolte.

[!code-cpp[NVC_MFCCollections#66](../../mfc/codesnippet/cpp/cmapstringtoob-class_4.cpp)]

I risultati di questo programma sono i seguenti:

```Output
Lisa : a CAge at $4724 11
Marge : a CAge at $47A8 35
Homer : a CAge at $4766 36
Bart : a CAge at $45D4 13
```

## <a name="cmapstringtoobgetsize"></a><a name="getsize"></a>CMapStringToOb::GetSize

Restituisce il numero di elementi della mappa.

```
INT_PTR GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nella mappa.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per recuperare il numero di elementi nella mappa.

Nella tabella seguente vengono illustrate altre `CMapStringToOb::GetSize`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**INT_PTR GetSize( ) const;**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**INT_PTR GetSize( ) const;**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**INT_PTR GetSize( ) const;**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**INT_PTR GetSize( ) const;**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**INT_PTR GetSize( ) const;**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**INT_PTR GetSize( ) const;**|

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#67](../../mfc/codesnippet/cpp/cmapstringtoob-class_5.cpp)]

## <a name="cmapstringtoobgetstartposition"></a><a name="getstartposition"></a>CMapStringToOb::GetStartPosition

Avvia un'iterazione della mappa restituendo un `GetNextAssoc` valore POSITION che può essere passato a una chiamata.

```
POSITION GetStartPosition() const;
```

### <a name="return-value"></a>Valore restituito

Valore POSITION che indica una posizione iniziale per l'iterazione della mappa; o NULL se la mappa è vuota.

### <a name="remarks"></a>Osservazioni

La sequenza di iterazione non è prevedibile. pertanto, il "primo elemento nella mappa" non ha un significato speciale.

Nella tabella seguente vengono illustrate altre `CMapStringToOb::GetStartPosition`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**POSITION GetStartPosition( ) const;**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**POSITION GetStartPosition( ) const;**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**POSITION GetStartPosition( ) const;**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**POSITION GetStartPosition( ) const;**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**POSITION GetStartPosition( ) const;**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**POSITION GetStartPosition( ) const;**|

### <a name="example"></a>Esempio

Vedere l'esempio per [CMapStringToOb::GetNextAssoc](#getnextassoc).

## <a name="cmapstringtoobhashkey"></a><a name="hashkey"></a>CMapStringToOb::HashKey

Calcola il valore hash di una chiave specificata.

```
UINT HashKey(LPCTSTR key) const;
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave di cui deve essere calcolato il valore hash.

### <a name="return-value"></a>Valore restituito

Valore hash della chiave

### <a name="remarks"></a>Osservazioni

Nella tabella seguente vengono illustrate altre `CMapStringToOb::HashKey`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**UINT HashKey( void** <strong>\*</strong> `key` **) const;**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**UINT HashKey( void** <strong>\*</strong> `key` **) const;**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**UINT HashKey( LPCTSTR** `key` **) const;**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**UINT HashKey( LPCTSTR** `key` **) const;**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**UINT HashKey( WORD** `key` **) const;**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**UINT HashKey( WORD** `key` **) const;**|

## <a name="cmapstringtoobinithashtable"></a><a name="inithashtable"></a>CMapStringToOb::InitHashTable

Inizializza la tabella hash.

```cpp
void InitHashTable(
    UINT hashSize,
    BOOL bAllocNow = TRUE);
```

### <a name="parameters"></a>Parametri

*hashSize (Dimensioni hash)*<br/>
Numero di voci nella tabella hash.

*bAllocNow*<br/>
Se TRUE, alloca la tabella hash al momento dell'inizializzazione; in caso contrario, la tabella viene allocata quando necessario.

### <a name="remarks"></a>Osservazioni

Per ottenere prestazioni ottimali, la dimensione della tabella hash deve essere un numero primo. Per ridurre al minimo le collisioni, le dimensioni devono essere maggiori di circa il 20% rispetto al set di dati previsto più grande.

Nella tabella seguente vengono illustrate altre `CMapStringToOb::InitHashTable`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**void InitHashTable( UINT** `hashSize` **, BOOL** `bAllocNow` **- VERO );**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**void InitHashTable( UINT** `hashSize` **, BOOL** `bAllocNow` **- VERO );**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**void InitHashTable( UINT** `hashSize` **, BOOL** `bAllocNow` **- VERO );**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**void InitHashTable( UINT** `hashSize` **, BOOL** `bAllocNow` **- VERO );**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**void InitHashTable( UINT** `hashSize` **, BOOL** `bAllocNow` **- VERO );**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**void InitHashTable( UINT** `hashSize` **, BOOL** `bAllocNow` **- VERO );**|

## <a name="cmapstringtoobisempty"></a><a name="isempty"></a>CMapStringToOb::IsEmpty

Determina se la mappa è vuota.

```
BOOL IsEmpty() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se questa mappa non contiene elementi; in caso contrario 0.

### <a name="example"></a>Esempio

Vedere l'esempio per [RemoveAll](#removeall).

### <a name="remarks"></a>Osservazioni

Nella tabella seguente vengono illustrate altre funzioni membro simili a **CMapStringToOb:: IsEmpty**.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**BOOL IsEmpty( ) const;**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**BOOL IsEmpty( ) const;**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**BOOL IsEmpty( ) const;**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**BOOL IsEmpty( ) const;**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**BOOL IsEmpty( ) const;**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**BOOL IsEmpty( ) const;**|

## <a name="cmapstringtooblookup"></a><a name="lookup"></a>CMapStringToOb::Ricerca

Restituisce `CObject` un puntatore basato su un `CString` valore.

```
BOOL Lookup(
    LPCTSTR key,
    CObject*& rValue) const;
```

### <a name="parameters"></a>Parametri

*key*<br/>
Specifica la chiave di stringa che identifica l'elemento da cercare.

*Rvalue*<br/>
Specifica il valore restituito dall'elemento cercato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento è stato trovato; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

`Lookup`utilizza un algoritmo hash per trovare rapidamente l'elemento `CString` della mappa con una chiave che corrisponde esattamente ( valore).

Nella tabella seguente vengono illustrate altre `CMapStringToOb::LookUp`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**Ricerca BOOL( void** <strong>\*</strong> `key` **, void\* ** `rValue` ) **const;**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**Ricerca BOOL ( void** <strong>\*</strong> `key` **, WORD&** `rValue` **) const;**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**Ricerca BOOL( LPCTSTR** `key` **, void\* ** `rValue` ) **const;**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**RICERCA BOOL( LPCTSTR** `key` **, CString&** `rValue` **) const;**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**RICERCA BOOL( WORD** `key` **\* , CObject** `rValue` **) const;**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**Ricerca BOOL( WORD** `key` **, void\* ** `rValue` ) **const;**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della classe utilizzata in tutti gli esempi di raccolte.

[!code-cpp[NVC_MFCCollections#68](../../mfc/codesnippet/cpp/cmapstringtoob-class_6.cpp)]

## <a name="cmapstringtooblookupkey"></a><a name="lookupkey"></a>CMapStringToOb::LookupKey

Restituisce un riferimento alla chiave associata al valore della chiave specificato.

```
BOOL LookupKey(
    LPCTSTR key,
    LPCTSTR& rKey) const;
```

### <a name="parameters"></a>Parametri

*key*<br/>
Specifica la chiave di stringa che identifica l'elemento da cercare.

*Rkey*<br/>
Riferimento alla chiave associata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la chiave è stata trovata; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'utilizzo di un riferimento a una chiave non è sicuro se viene utilizzato dopo che l'elemento associato è stato rimosso dalla mappa o dopo che la mappa è stata eliminata.

Nella tabella seguente vengono illustrate altre `CMapStringToOb:: LookupKey`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**BOOL LookupKey( LPCTSTR** `key` **, LPCTSTR&** `rKey` **) const;**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**BOOL LookupKey( LPCTSTR** `key` **, LPCTSTR&** `rKey` **) const;**|

## <a name="cmapstringtooboperator--"></a><a name="operator_at"></a>CMapStringToOb::operator [ ]

Un comodo sostituto per la `SetAt` funzione membro.

```
CObject*& operator[ ](lpctstr key);
```

### <a name="return-value"></a>Valore restituito

Un riferimento a un `CObject` puntatore a un oggetto; o NULL se la mappa è vuota o *chiave* non compresa nell'intervallo.

### <a name="remarks"></a>Osservazioni

In questo modo può essere utilizzato solo sul lato sinistro di un'istruzione di assegnazione (un l-value). Se non è presente alcun elemento della mappa con la chiave specificata, viene creato un nuovo elemento.

Non esiste un "lato destro" (r-value) equivalente a questo operatore perché è possibile che una chiave non venga trovata nella mappa. Utilizzare `Lookup` la funzione membro per il recupero degli elementi.

Nella tabella seguente vengono illustrate altre `CMapStringToOb::operator []`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|<strong>void\*&\[operatore \* ](void</strong> `key` ** \);**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**WORD&\[operatore ](void** <strong>\*</strong> `key` ** \);**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**void\*&\[operatore ](lpctstr** `key` ** \);**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**CString&\[operatore ](lpctstr** `key` ** \);**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**CObject\*&\[operatore ](parola** `key` ** \);**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**void\*&\[operatore ](parola** `key` ** \);**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della classe utilizzata in tutti gli esempi di raccolte.

[!code-cpp[NVC_MFCCollections#72](../../mfc/codesnippet/cpp/cmapstringtoob-class_7.cpp)]

I risultati di questo programma sono i seguenti:

```Output
Operator [] example: A CMapStringToOb with 2 elements
[Lisa] = a CAge at $4A02 11
[Bart] = a CAge at $497E 13
```

## <a name="cmapstringtoobremoveall"></a><a name="removeall"></a>CMapStringToOb::RemoveAll

Rimuove tutti gli elementi da questa `CString` mappa ed elimina gli oggetti chiave.

```cpp
void RemoveAll();
```

### <a name="remarks"></a>Osservazioni

Gli `CObject` oggetti a cui fa riferimento ogni chiave non vengono eliminati. La `RemoveAll` funzione può causare perdite di memoria se `CObject` non si garantisce che gli oggetti di riferimento vengono eliminati.

La funzione funziona correttamente se la mappa è già vuota.

Nella tabella seguente vengono illustrate altre `CMapStringToOb::RemoveAll`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**void RemoveAll( );**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**void RemoveAll( );**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**void RemoveAll( );**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**void RemoveAll( );**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**void RemoveAll( );**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**void RemoveAll( );**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della classe utilizzata in tutti gli esempi di raccolte.

[!code-cpp[NVC_MFCCollections#69](../../mfc/codesnippet/cpp/cmapstringtoob-class_8.cpp)]

## <a name="cmapstringtoobremovekey"></a><a name="removekey"></a>CMapStringToOb::RemoveKey

Cerca la voce della mappa corrispondente alla chiave fornita; quindi, se la chiave viene trovata, rimuove la voce.

```
BOOL RemoveKey(LPCTSTR key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Specifica la stringa utilizzata per la ricerca della mappa.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la voce è stata trovata e rimossa correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Ciò può causare perdite di memoria se l'oggetto `CObject` non viene eliminato altrove.

Nella tabella seguente vengono illustrate altre `CMapStringToOb::RemoveKey`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**BOOL RemoveKey( void** <strong>\*</strong> `key` **);**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**BOOL RemoveKey( void** <strong>\*</strong> `key` **);**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**BOOL RemoveKey( LPCTSTR** `key` **);**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**BOOL RemoveKey( LPCTSTR** `key` **);**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**BOOL RemoveKey( WORD** `key` **);**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**BOOL RemoveKey( WORD** `key` **);**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della classe utilizzata in tutti gli esempi di raccolte.

[!code-cpp[NVC_MFCCollections#70](../../mfc/codesnippet/cpp/cmapstringtoob-class_9.cpp)]

I risultati di questo programma sono i seguenti:

```Output
RemoveKey example: A CMapStringToOb with 3 elements
[Marge] = a CAge at $49A0 35
[Homer] = a CAge at $495E 36
[Bart] = a CAge at $4634 13
```

## <a name="cmapstringtoobsetat"></a><a name="setat"></a>CMapStringToOb::SetAt

Il mezzo principale per inserire un elemento in una mappa.

```cpp
void SetAt(
    LPCTSTR key,
    CObject* newValue);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Specifica la stringa che è la chiave del nuovo elemento.

*newValue*<br/>
Specifica il `CObject` puntatore che è il valore del nuovo elemento.

### <a name="remarks"></a>Osservazioni

In primo luogo, la chiave viene cercata. Se la chiave viene trovata, il valore corrispondente viene modificato; in caso contrario, viene creato un nuovo elemento chiave-valore.

Nella tabella seguente vengono illustrate altre `CMapStringToOb::SetAt`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**void SetAt( void** <strong>\*</strong> `key` **, void** <strong>\*</strong> `newValue` **);**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**void SetAt( void** <strong>\*</strong> `key` **, WORD** `newValue` **);**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**void SetAt( LPCTSTR** `key` **, void** <strong>\*</strong> `newValue` **);**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**void SetAt( LPCTSTR** `key` **, LPCTSTR** `newValue` **);**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**void SetAt( WORD** `key` **, CObject** <strong>\*</strong> `newValue` **);**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**void SetAt( WORD** `key` **, void** <strong>\*</strong> `newValue` **);**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della classe utilizzata in tutti gli esempi di raccolte.

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
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)<br/>
[Classe CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)<br/>
[CMapStringToPtr (classe)](../../mfc/reference/cmapstringtoptr-class.md)<br/>
[Classe CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)<br/>
[Classe CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)<br/>
[CMapWordToPtr (classe)](../../mfc/reference/cmapwordtoptr-class.md)
