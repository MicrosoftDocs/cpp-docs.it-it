---
title: Classe CMapStringToOb | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0d00faec0ac65ded0c8e4ddc9f1ab50796bdecd6
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46396324"
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
|[CMapStringToOb::GetNextAssoc](#getnextassoc)|Ottiene l'elemento successivo per eseguire l'iterazione.|
|[CMapStringToOb::GetSize](#getsize)|Restituisce il numero di elementi in questa mappa.|
|[CMapStringToOb::GetStartPosition](#getstartposition)|Restituisce la posizione del primo elemento.|
|[CMapStringToOb::HashKey](#hashkey)|Calcola il valore hash di una chiave specificata.|
|[CMapStringToOb::InitHashTable](#inithashtable)|Inizializza la tabella hash.|
|[CMapStringToOb::IsEmpty](#isempty)|Verifica se la condizione vuota-map (nessun elemento).|
|[CMapStringToOb::Lookup](#lookup)|Cerca un puntatore void in base alla chiave di puntatore void. Il valore del puntatore, non le entità cui fa riferimento, viene utilizzato per il confronto delle chiavi.|
|[CMapStringToOb::LookupKey](#lookupkey)|Restituisce un riferimento alla chiave associata al valore di chiave specificato.|
|[CMapStringToOb::RemoveAll](#removeall)|Rimuove tutti gli elementi da questa mappa.|
|[CMapStringToOb::RemoveKey](#removekey)|Rimuove un elemento specificato da una chiave.|
|[CMapStringToOb::SetAt](#setat)|Inserisce un elemento nella mappa; sostituisce un elemento esistente se viene trovata una chiave corrispondente.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[[] CMapStringToOb::operator](#operator_at)|Inserisce un elemento nella mappa, la sostituzione di operatore per `SetAt`.|

## <a name="remarks"></a>Note

Dopo aver inserito un `CString` -  `CObject*` coppia (elemento) nella mappa, è possibile recuperare in modo efficiente o eliminare la coppia di utilizzando una stringa o un `CString` valore come chiave. È anche possibile scorrere tutti gli elementi della mappa.

Viene utilizzata una variabile di tipo di posizione per l'accesso voce alternativa in tutte le variazioni della mappa. È possibile utilizzare una posizione a "ricorda" una voce e per scorrere la mappa. Si potrebbe pensare che questa iterazione è sequenziale in base al valore di chiave non è. La sequenza di elementi recuperati è indeterminata.

`CMapStringToOb` incorpora la macro `IMPLEMENT_SERIAL` per supportare la serializzazione e il dump dei relativi elementi. Ogni elemento viene serializzato a turno se una mappa è archiviata in un archivio, con l'inserimento di overload ( **<<**) operatore o con il `Serialize` funzione membro.

Se è necessario un dump di diagnostica dei singoli elementi della mappa (il `CString` valore e il `CObject` contenuto), è necessario impostare la profondità del contesto di dump su 1 o versioni successive.

Quando un `CMapStringToOb` oggetto viene eliminato o quando gli elementi vengono rimossi, il `CString` gli oggetti e `CObject` puntatori sono stati rimossi. Gli oggetti cui fa riferimento il `CObject` puntatori non vengono eliminati definitivamente.

Derivazione della classe Map è simile alla derivazione di elenco. Vedere l'articolo [raccolte](../../mfc/collections.md) per un'illustrazione di derivazione di una classe di elenco di scopi specifici.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CMapStringToOb`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcoll. h

##  <a name="cmapstringtoob"></a>  CMapStringToOb::CMapStringToOb

Costruisce un oggetto vuoto `CString`- a - `CObject*` mappa.

```
CMapStringToOb(INT_PTR nBlockSize = 10);
```

### <a name="parameters"></a>Parametri

*nBlockSize*<br/>
Specifica la granularità di allocazione della memoria per l'estensione della mappa.

### <a name="remarks"></a>Note

Man mano che aumenta la mappa, la memoria viene allocata in unità pari *nBlockSize* voci.

La tabella seguente mostra altri membri funzioni simili a quelle `CMapStringToOb:: CMapStringToOb`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**CMapPtrToPtr( INT_PTR** `nBlockSize` **= 10 );**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**CMapPtrToWord( INT_PTR** `nBlockSize` **= 10 );**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**CMapStringToPtr( INT_PTR** `nBlockSize` **= 10 );**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**CMapStringToString( INT_PTR** `nBlockSize` **= 10 );**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**CMapWordToOb( INT_PTR** `nBlockSize` **= 10 );**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**MapWordToPtr( INT_PTR** `nBlockSize` **= 10 );**|

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#63](../../mfc/codesnippet/cpp/cmapstringtoob-class_1.cpp)]

Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti gli esempi di raccolta.

##  <a name="getcount"></a>  CMapStringToOb::GetCount

Determina il numero di elementi nella mappa.

```
INT_PTR GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di elementi in questa mappa.

### <a name="remarks"></a>Note

La tabella seguente mostra altri membri funzioni simili a quelle `CMapStringToOb::GetCount`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**() GetCount INT_PTR const.**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**() GetCount INT_PTR const.**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**() GetCount INT_PTR const.**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**() GetCount INT_PTR const.**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**() GetCount INT_PTR const.**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**() GetCount INT_PTR const.**|

### <a name="example"></a>Esempio

Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#64](../../mfc/codesnippet/cpp/cmapstringtoob-class_2.cpp)]

##  <a name="gethashtablesize"></a>  CMapStringToOb::GetHashTableSize

Determina il numero corrente di elementi nella tabella hash.

```
UINT GetHashTableSize() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di elementi nella tabella hash.

### <a name="remarks"></a>Note

La tabella seguente mostra altri membri funzioni simili a quelle `CMapStringToOb::GetHashTableSize`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**() GetHashTableSize UINT const.**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**() GetHashTableSize UINT const.**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**() GetHashTableSize UINT const.**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**() GetHashTableSize UINT const.**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**() GetHashTableSize UINT const.**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**() GetHashTableSize UINT const.**|

##  <a name="getnextassoc"></a>  CMapStringToOb::GetNextAssoc

Recupera l'elemento della mappa in corrispondenza *rNextPosition*, quindi Aggiorna *rNextPosition* per fare riferimento all'elemento successivo nella mappa.

```
void GetNextAssoc(
    POSITION& rNextPosition,
    CString& rKey,
    CObject*& rValue) const;
```

### <a name="parameters"></a>Parametri

*rNextPosition*<br/>
Specifica un riferimento a un valore di posizione restituito da una precedente `GetNextAssoc` o `GetStartPosition` chiamare.

*rKey*<br/>
Specifica la chiave restituita dell'elemento recuperato (stringa).

*rValue*<br/>
Specifica il valore restituito dell'elemento recuperato (un `CObject` puntatore). Per altre informazioni su questo parametro, vedere la sezione Osservazioni.

### <a name="remarks"></a>Note

Questa funzione è particolarmente utile per l'iterazione di tutti gli elementi della mappa. Si noti che la sequenza di posizione non è necessariamente quello utilizzato per la sequenza di valori chiave.

Se l'elemento recuperato è l'ultimo nella mappa, quindi il nuovo valore della *rNextPosition* è impostato su NULL.

Per il *rValue* parametro, assicurarsi di eseguire il cast del tipo di oggetto da **CObject\*&**, che è ciò che il compilatore richiede, come illustrato nell'esempio seguente:

[!code-cpp[NVC_MFCCollections#65](../../mfc/codesnippet/cpp/cmapstringtoob-class_3.cpp)]

Ciò non vale `GetNextAssoc` per le mappe basate su modelli.

La tabella seguente mostra altri membri funzioni simili a quelle `CMapStringToOb::GetNextAssoc`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**void GetNextAssoc (posizione &** *rNextPosition* **, void\* &**  *rKey* **, void\* &**  *rValue* **) const;**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**void GetNextAssoc (posizione &** *rNextPosition* **, void\* &**  *rKey* **, WORD &** *rValue* **) const;**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**void GetNextAssoc (posizione &** *rNextPosition* **, CString &** *rKey* **, void\* &**  *rValue* **) const;**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**void GetNextAssoc (posizione &** *rNextPosition* **, CString &** *rKey* **, CString &** *rValue* **) const;**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**void GetNextAssoc (posizione &** *rNextPosition* **, WORD &** *rKey* **, CObject\* &**  *rValue* **) const;**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**void GetNextAssoc (posizione &** *rNextPosition* **, WORD &** *rKey* **, void\* &**  *rValue* **) const;**|

### <a name="example"></a>Esempio

Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#66](../../mfc/codesnippet/cpp/cmapstringtoob-class_4.cpp)]

I risultati di questo programma sono come segue:

```Output
Lisa : a CAge at $4724 11
Marge : a CAge at $47A8 35
Homer : a CAge at $4766 36
Bart : a CAge at $45D4 13
```

##  <a name="getsize"></a>  CMapStringToOb::GetSize

Restituisce il numero di elementi della mappa.

```
INT_PTR GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di elementi nella mappa.

### <a name="remarks"></a>Note

Chiamare questo metodo per recuperare il numero di elementi nella mappa.

La tabella seguente mostra altri membri funzioni simili a quelle `CMapStringToOb::GetSize`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**() GetSize INT_PTR const.**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**() GetSize INT_PTR const.**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**() GetSize INT_PTR const.**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**() GetSize INT_PTR const.**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**() GetSize INT_PTR const.**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**() GetSize INT_PTR const.**|

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#67](../../mfc/codesnippet/cpp/cmapstringtoob-class_5.cpp)]

##  <a name="getstartposition"></a>  CMapStringToOb::GetStartPosition

Inizia un'iterazione di mappa, restituendo un valore di posizione che può essere passato a un `GetNextAssoc` chiamare.

```
POSITION GetStartPosition() const;
```

### <a name="return-value"></a>Valore restituito

Un valore di posizione che indica una posizione di inizio per l'iterazione della mappa; o NULL se la mappa è vuota.

### <a name="remarks"></a>Note

La sequenza di iterazione non è stimabile; Pertanto, il "primo elemento nella mappa" non ha alcun significato speciale.

La tabella seguente mostra altri membri funzioni simili a quelle `CMapStringToOb::GetStartPosition`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**POSIZIONARE GetStartPosition () const;**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**POSIZIONARE GetStartPosition () const;**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**POSIZIONARE GetStartPosition () const;**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**POSIZIONARE GetStartPosition () const;**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**POSIZIONARE GetStartPosition () const;**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**POSIZIONARE GetStartPosition () const;**|

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CMapStringToOb::GetNextAssoc](#getnextassoc).

##  <a name="hashkey"></a>  CMapStringToOb::HashKey

Calcola il valore hash di una chiave specificata.

```
UINT HashKey(LPCTSTR key) const;
```

### <a name="parameters"></a>Parametri

*key*<br/>
La chiave deve essere calcolata il cui valore hash.

### <a name="return-value"></a>Valore restituito

Il valore della chiave hash

### <a name="remarks"></a>Note

La tabella seguente mostra altri membri funzioni simili a quelle `CMapStringToOb::HashKey`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**UINT HashKey (void** <strong>\*</strong> `key` **) const;**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**UINT HashKey (void** <strong>\*</strong> `key` **) const;**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**UINT HashKey (LPCTSTR** `key` **) const;**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**UINT HashKey (LPCTSTR** `key` **) const;**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**HashKey UINT (parola** `key` **) const;**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**HashKey UINT (parola** `key` **) const;**|

##  <a name="inithashtable"></a>  CMapStringToOb::InitHashTable

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
Se TRUE, consente di allocare la tabella hash in fase di inizializzazione; in caso contrario, la tabella viene allocata quando necessario.

### <a name="remarks"></a>Note

Per prestazioni ottimali, le dimensioni della tabella hash devono essere un numero primo. Per ridurre al minimo i conflitti, la dimensione deve essere circa il 20% di dimensioni superiori a set di dati più grande previsto.

La tabella seguente mostra altri membri funzioni simili a quelle `CMapStringToOb::InitHashTable`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**void InitHashTable (UINT** `hashSize` **, BOOL** `bAllocNow` **= TRUE);**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**void InitHashTable (UINT** `hashSize` **, BOOL** `bAllocNow` **= TRUE);**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**void InitHashTable (UINT** `hashSize` **, BOOL** `bAllocNow` **= TRUE);**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**void InitHashTable (UINT** `hashSize` **, BOOL** `bAllocNow` **= TRUE);**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**void InitHashTable (UINT** `hashSize` **, BOOL** `bAllocNow` **= TRUE);**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**void InitHashTable (UINT** `hashSize` **, BOOL** `bAllocNow` **= TRUE);**|

##  <a name="isempty"></a>  CMapStringToOb::IsEmpty

Determina se la mappa è vuota.

```
BOOL IsEmpty() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se questa mappa non contiene elementi; in caso contrario 0.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [RemoveAll](#removeall).

### <a name="remarks"></a>Note

La tabella seguente mostra altri membri funzioni simili a quelle **CMapStringToOb:: IsEmpty**.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**IsEmpty BOOL () const;**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**IsEmpty BOOL () const;**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**IsEmpty BOOL () const;**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**IsEmpty BOOL () const;**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**IsEmpty BOOL () const;**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**IsEmpty BOOL () const;**|

##  <a name="lookup"></a>  CMapStringToOb::Lookup

Restituisce un `CObject` puntatore basato su un `CString` valore.

```
BOOL Lookup(
    LPCTSTR key,
    CObject*& rValue) const;
```

### <a name="parameters"></a>Parametri

*key*<br/>
Specifica la chiave di stringa che identifica l'elemento per essere cercato.

*rValue*<br/>
Specifica il valore restituito dall'elemento cercato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento è stato trovato. in caso contrario 0.

### <a name="remarks"></a>Note

`Lookup` Usa un algoritmo di hash per trovare rapidamente l'elemento della mappa con una chiave che corrisponde esattamente ( `CString` valore).

La tabella seguente mostra altri membri funzioni simili a quelle `CMapStringToOb::LookUp`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**Ricerca BOOL (void** <strong>\*</strong> `key` **, void\* &**  `rValue` **) const;**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**Ricerca BOOL (void** <strong>\*</strong> `key` **, WORD &** `rValue` **) const;**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**Ricerca BOOL (LPCTSTR** `key` **, void\* &**  `rValue` **) const;**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**Ricerca BOOL (LPCTSTR** `key` **, CString &** `rValue` **) const;**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**Ricerca BOOL (parola** `key` **, CObject\* &**  `rValue` **) const;**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**Ricerca BOOL (parola** `key` **, void\* &**  `rValue` **) const;**|

### <a name="example"></a>Esempio

Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#68](../../mfc/codesnippet/cpp/cmapstringtoob-class_6.cpp)]

##  <a name="lookupkey"></a>  CMapStringToOb::LookupKey

Restituisce un riferimento alla chiave associata al valore di chiave specificato.

```
BOOL LookupKey(
    LPCTSTR key,
    LPCTSTR& rKey) const;
```

### <a name="parameters"></a>Parametri

*key*<br/>
Specifica la chiave di stringa che identifica l'elemento per essere cercato.

*rKey*<br/>
Riferimento per la chiave associata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la chiave è stata trovata. in caso contrario 0.

### <a name="remarks"></a>Note

Utilizzo di un riferimento a una chiave è sicuro se usato dopo l'elemento associato è stato rimosso dalla mappa o dopo la mappa è stato eliminato definitivamente.

La tabella seguente mostra altri membri funzioni simili a quelle `CMapStringToOb:: LookupKey`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**BOOL LookupKey (LPCTSTR** `key` **, LPCTSTR &** `rKey` **) const;**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**BOOL LookupKey (LPCTSTR** `key` **, LPCTSTR &** `rKey` **) const;**|

##  <a name="operator_at"></a>  [] CMapStringToOb::operator

Sostituiscono il pratico di `SetAt` funzione membro.

```
CObject*& operator[ ](lpctstr key);
```

### <a name="return-value"></a>Valore restituito

Un riferimento a un puntatore a un `CObject` oggetto; o NULL se la mappa è vuota o *chiave* è compreso nell'intervallo.

### <a name="remarks"></a>Note

In questo modo può essere utilizzato solo sul lato sinistro di un'istruzione di assegnazione (un l-value). Se non è presente alcun elemento della mappa con la chiave specificata, viene creato un nuovo elemento.

Non c'è alcun "destra" (r-value) equivalente a questo operatore perché è possibile che non può essere trovata una chiave nella mappa. Usare il `Lookup` funzione membro per il recupero dell'elemento.

La tabella seguente mostra altri membri funzioni simili a quelle `CMapStringToOb::operator []`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|<strong>void\*& operatore\[] (void \*</strong>  `key`  **\);**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**Operatore & WORD\[] (void** <strong>\*</strong> `key`  **\);**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**void\*& operatore\[] (lpctstr** `key`  **\);**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**CString & operatore\[] (lpctstr** `key`  **\);**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**CObject\*& operatore\[] (word** `key`  **\);**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**void\*& operatore\[] (word** `key`  **\);**|

### <a name="example"></a>Esempio

Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#72](../../mfc/codesnippet/cpp/cmapstringtoob-class_7.cpp)]

I risultati di questo programma sono come segue:

```Output
Operator [] example: A CMapStringToOb with 2 elements
[Lisa] = a CAge at $4A02 11
[Bart] = a CAge at $497E 13
```

##  <a name="removeall"></a>  CMapStringToOb::RemoveAll

Rimuove tutti gli elementi da questa mappa ed elimina il `CString` gli oggetti della chiave.

```
void RemoveAll();
```

### <a name="remarks"></a>Note

Il `CObject` non vengono eliminati definitivamente gli oggetti cui viene fatto riferimento da ciascuna chiave. Il `RemoveAll` funzione può causare perdite di memoria se si garantisce che il riferimento `CObject` gli oggetti vengono eliminati.

La funzione funziona correttamente se la mappa è vuota.

La tabella seguente mostra altri membri funzioni simili a quelle `CMapStringToOb::RemoveAll`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**void RemoveAll( );**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**void RemoveAll( );**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**void RemoveAll( );**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**void RemoveAll( );**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**void RemoveAll( );**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**void RemoveAll( );**|

### <a name="example"></a>Esempio

Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#69](../../mfc/codesnippet/cpp/cmapstringtoob-class_8.cpp)]

##  <a name="removekey"></a>  CMapStringToOb::RemoveKey

Cerca la voce della mappa corrispondente alla chiave fornita; quindi, se la chiave viene trovata, rimuove la voce.

```
BOOL RemoveKey(LPCTSTR key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Specifica la stringa utilizzata per la ricerca della mappa.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la voce è stata trovata e rimosso correttamente. in caso contrario 0.

### <a name="remarks"></a>Note

Ciò può causare perdite di memoria se il `CObject` oggetto non viene eliminato in un' posizione.

La tabella seguente mostra altri membri funzioni simili a quelle `CMapStringToOb::RemoveKey`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**BOOL RemoveKey (void** <strong>\*</strong> `key` **);**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**BOOL RemoveKey (void** <strong>\*</strong> `key` **);**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**BOOL RemoveKey (LPCTSTR** `key` **);**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**BOOL RemoveKey (LPCTSTR** `key` **);**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**RemoveKey BOOL (parola** `key` **);**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**RemoveKey BOOL (parola** `key` **);**|

### <a name="example"></a>Esempio

Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#70](../../mfc/codesnippet/cpp/cmapstringtoob-class_9.cpp)]

I risultati di questo programma sono come segue:

```Output
RemoveKey example: A CMapStringToOb with 3 elements
[Marge] = a CAge at $49A0 35
[Homer] = a CAge at $495E 36
[Bart] = a CAge at $4634 13
```

##  <a name="setat"></a>  CMapStringToOb::SetAt

Strumento fondamentale per inserire un elemento in una mappa.

```
void SetAt(
    LPCTSTR key,
    CObject* newValue);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Specifica la stringa che rappresenta la chiave del nuovo elemento.

*newValue*<br/>
Specifica il `CObject` puntatore che rappresenta il valore del nuovo elemento.

### <a name="remarks"></a>Note

In primo luogo, viene cercata la chiave. Se la chiave viene trovata, il valore corrispondente è stato modificato; in caso contrario, viene creato un nuovo elemento di chiave-valore.

La tabella seguente mostra altri membri funzioni simili a quelle `CMapStringToOb::SetAt`.

|Classe|Funzione membro|
|-----------|---------------------|
|[CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)|**void SetAt (void** <strong>\*</strong> `key` **, void** <strong>\*</strong> `newValue` **);**|
|[CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)|**void SetAt (void** <strong>\*</strong> `key` **, WORD** `newValue` **);**|
|[CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)|**void SetAt (LPCTSTR** `key` **, void** <strong>\*</strong> `newValue` **);**|
|[CMapStringToString](../../mfc/reference/cmapstringtostring-class.md)|**void SetAt( LPCTSTR** `key` **, LPCTSTR** `newValue` **);**|
|[CMapWordToOb](../../mfc/reference/cmapwordtoob-class.md)|**void SetAt (WORD** `key` **, CObject** <strong>\*</strong> `newValue` **);**|
|[CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)|**void SetAt (WORD** `key` **, void** <strong>\*</strong> `newValue` **);**|

### <a name="example"></a>Esempio

Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#71](../../mfc/codesnippet/cpp/cmapstringtoob-class_10.cpp)]

I risultati di questo programma sono come segue:

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
