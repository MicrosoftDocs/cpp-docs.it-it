---
description: 'Altre informazioni su: classe CMap'
title: Classe CMap
ms.date: 11/04/2016
f1_keywords:
- CMap
- AFXTEMPL/CMap
- AFXTEMPL/CMap::CPair
- AFXTEMPL/CMap::CMap
- AFXTEMPL/CMap::GetCount
- AFXTEMPL/CMap::GetHashTableSize
- AFXTEMPL/CMap::GetNextAssoc
- AFXTEMPL/CMap::GetSize
- AFXTEMPL/CMap::GetStartPosition
- AFXTEMPL/CMap::InitHashTable
- AFXTEMPL/CMap::IsEmpty
- AFXTEMPL/CMap::Lookup
- AFXTEMPL/CMap::PGetFirstAssoc
- AFXTEMPL/CMap::PGetNextAssoc
- AFXTEMPL/CMap::PLookup
- AFXTEMPL/CMap::RemoveAll
- AFXTEMPL/CMap::RemoveKey
- AFXTEMPL/CMap::SetAt
helpviewer_keywords:
- CMap [MFC], CPair
- CMap [MFC], CMap
- CMap [MFC], GetCount
- CMap [MFC], GetHashTableSize
- CMap [MFC], GetNextAssoc
- CMap [MFC], GetSize
- CMap [MFC], GetStartPosition
- CMap [MFC], InitHashTable
- CMap [MFC], IsEmpty
- CMap [MFC], Lookup
- CMap [MFC], PGetFirstAssoc
- CMap [MFC], PGetNextAssoc
- CMap [MFC], PLookup
- CMap [MFC], RemoveAll
- CMap [MFC], RemoveKey
- CMap [MFC], SetAt
ms.assetid: 640a45ab-0993-4def-97ec-42cc78eb10b9
ms.openlocfilehash: ff88d205608cc87f06d28e6d2d4b647c35909efa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97207904"
---
# <a name="cmap-class"></a>Classe CMap

Classe Collection dizionario che esegue il mapping delle chiavi univoche ai valori.

## <a name="syntax"></a>Sintassi

```
template<class KEY, class ARG_KEY, class VALUE, class ARG_VALUE>class CMap : public CObject
```

#### <a name="parameters"></a>Parametri

*KEY*<br/>
Classe dell'oggetto utilizzato come chiave per la mappa.

*ARG_KEY*<br/>
Tipo di dati utilizzato per gli argomenti *chiave* . in genere un riferimento a *Key*.

*VALUE*<br/>
Classe dell'oggetto archiviato nella mappa.

*ARG_VALUE*<br/>
Tipo di dati utilizzato per gli argomenti del *valore* . in genere un riferimento a *value*.

## <a name="members"></a>Membri

### <a name="public-structures"></a>Strutture pubbliche

|Nome|Description|
|----------|-----------------|
|[CMap:: CPair](#cpair)|Struttura annidata contenente un valore di chiave e il valore dell'oggetto associato.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMap:: CMap](#cmap)|Costruisce una raccolta che esegue il mapping delle chiavi ai valori.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMap:: GetCount](#getcount)|Restituisce il numero di elementi in questa mappa.|
|[CMap:: GetHashTableSize](#gethashtablesize)|Restituisce il numero di elementi nella tabella hash.|
|[CMap:: GetNextAssoc](#getnextassoc)|Ottiene l'elemento successivo per l'iterazione.|
|[CMap:: GetSize](#getsize)|Restituisce il numero di elementi in questa mappa.|
|[CMap:: GetStartPosition](#getstartposition)|Restituisce la posizione del primo elemento.|
|[CMap:: InitHashTable](#inithashtable)|Inizializza la tabella hash e ne specifica le dimensioni.|
|[CMap:: IsEmpty](#isempty)|Verifica la condizione di mappa vuota (nessun elemento).|
|[CMap:: Lookup](#lookup)|Cerca il valore mappato a una chiave specificata.|
|[CMap::P GetFirstAssoc](#pgetfirstassoc)|Restituisce un puntatore al primo elemento.|
|[CMap::P GetNextAssoc](#pgetnextassoc)|Ottiene un puntatore all'elemento successivo per l'iterazione.|
|[CMap: ricerca:P](#plookup)|Restituisce un puntatore a una chiave il cui valore corrisponde al valore specificato.|
|[CMap:: RemoveAll](#removeall)|Rimuove tutti gli elementi dalla mappa.|
|[CMap:: RemoveKey](#removekey)|Rimuove un elemento specificato da una chiave.|
|[CMap:: SetAt](#setat)|Inserisce un elemento nella mappa. sostituisce un elemento esistente se viene trovata una chiave corrispondente.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[Operatore \[ CMap:: \]](#operator_at)|Inserisce un elemento nella mappa, ovvero la sostituzione dell'operatore per `SetAt` .|

## <a name="remarks"></a>Commenti

Dopo aver inserito una coppia chiave-valore (elemento) nella mappa, è possibile recuperare o eliminare in modo efficiente la coppia usando la chiave per accedervi. È inoltre possibile eseguire l'iterazione su tutti gli elementi della mappa.

Una variabile di tipo POSITION viene utilizzata per l'accesso alternativo alle voci. È possibile usare una posizione per "ricordare" una voce e per scorrere la mappa. Si potrebbe pensare che questa iterazione sia sequenziale in base al valore della chiave. non è. La sequenza di elementi recuperati è indeterminata.

Alcune funzioni membro di questa classe chiamano funzioni helper globali che devono essere personalizzate per la maggior parte degli utilizzi della `CMap` classe. Per [informazioni sugli helper della classe Collection](../../mfc/reference/collection-class-helpers.md) , vedere la sezione macro e Globals del **riferimento MFC**.

`CMap` esegue l'override di [CObject:: Serialize](../../mfc/reference/cobject-class.md#serialize) per supportare la serializzazione e il dump dei relativi elementi. Se una mappa viene archiviata in un archivio usando `Serialize` , ogni elemento della mappa viene serializzato a sua volta. L'implementazione predefinita della `SerializeElements` funzione helper esegue una scrittura bit per bit. Per informazioni sulla serializzazione di elementi della raccolta di puntatori derivati da `CObject` o altri tipi definiti dall'utente, vedere [procedura: creare una raccolta di Type-Safe](../../mfc/how-to-make-a-type-safe-collection.md).

Se è necessario un dump di diagnostica dei singoli elementi nella mappa (le chiavi e i valori), è necessario impostare la profondità del contesto di dump su 1 o su un valore superiore.

Quando un `CMap` oggetto viene eliminato o quando vengono rimossi gli elementi, le chiavi e i valori vengono rimossi.

La derivazione della classe Map è simile alla derivazione dell'elenco. Vedere le [raccolte](../../mfc/collections.md) di articoli per un'illustrazione della derivazione di una classe di elenco per scopi specifici.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CMap`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtempl.h

## <a name="cmapcmap"></a><a name="cmap"></a> CMap:: CMap

Costruisce una mappa vuota.

```
CMap(INT_PTR nBlockSize = 10);
```

### <a name="parameters"></a>Parametri

*nBlockSize*<br/>
Specifica la granularità di allocazione della memoria per l'estensione della mappa.

### <a name="remarks"></a>Commenti

Con la crescita della mappa, la memoria viene allocata in unità di *nBlockSize* .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#56](../../mfc/codesnippet/cpp/cmap-class_1.cpp)]

## <a name="cmapcpair"></a><a name="cpair"></a> CMap:: CPair

Contiene un valore di chiave e il valore dell'oggetto associato.

### <a name="remarks"></a>Commenti

Si tratta di una struttura annidata all'interno della classe [CMap](../../mfc/reference/cmap-class.md).

La struttura è costituita da due campi:

- `key` Valore effettivo del tipo di chiave.

- `value` Valore dell'oggetto associato.

Viene usato per archiviare i valori restituiti da [CMap::P Lookup](#plookup), [CMap::P getfirstassoc](#pgetfirstassoc)e [CMap::P GetNextAssoc](#pgetnextassoc).

### <a name="example"></a>Esempio

Per un esempio di utilizzo, vedere l'esempio per [CMap: ricerca:P](#plookup).

## <a name="cmapgetcount"></a><a name="getcount"></a> CMap:: GetCount

Recupera il numero di elementi nella mappa.

```
INT_PTR GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi.

### <a name="example"></a>Esempio

Vedere l'esempio per [CMap:: Lookup](#lookup).

## <a name="cmapgethashtablesize"></a><a name="gethashtablesize"></a> CMap:: GetHashTableSize

Determina il numero di elementi nella tabella hash per la mappa.

```
UINT GetHashTableSize() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nella tabella hash.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#57](../../mfc/codesnippet/cpp/cmap-class_2.cpp)]

## <a name="cmapgetnextassoc"></a><a name="getnextassoc"></a> CMap:: GetNextAssoc

Recupera l'elemento della mappa in corrispondenza di `rNextPosition` , quindi aggiorna `rNextPosition` per fare riferimento all'elemento successivo nella mappa.

```cpp
void GetNextAssoc(
    POSITION& rNextPosition,
    KEY& rKey,
    VALUE& rValue) const;
```

### <a name="parameters"></a>Parametri

*rNextPosition*<br/>
Specifica un riferimento a un valore di posizione restituito da una `GetNextAssoc` chiamata precedente o `GetStartPosition` .

*KEY*<br/>
Parametro di modello che specifica il tipo della chiave della mappa.

*rKey*<br/>
Specifica la chiave restituita dell'elemento recuperato.

*VALUE*<br/>
Parametro di modello che specifica il tipo del valore della mappa.

*rValue*<br/>
Specifica il valore restituito dell'elemento recuperato.

### <a name="remarks"></a>Commenti

Questa funzione è particolarmente utile per scorrere tutti gli elementi della mappa. Si noti che la sequenza di posizione non è necessariamente identica alla sequenza di valori di chiave.

Se l'elemento recuperato è l'ultimo oggetto della mappa, il nuovo valore di *rNextPosition* viene impostato su null.

### <a name="example"></a>Esempio

Vedere l'esempio per [CMap:: SetAt](#setat).

## <a name="cmapgetsize"></a><a name="getsize"></a> CMap:: GetSize

Restituisce il numero di elementi della mappa.

```
INT_PTR GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nella mappa.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per recuperare il numero di elementi nella mappa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#58](../../mfc/codesnippet/cpp/cmap-class_3.cpp)]

## <a name="cmapgetstartposition"></a><a name="getstartposition"></a> CMap:: GetStartPosition

Avvia un'iterazione della mappa restituendo un valore di posizione che può essere passato a una `GetNextAssoc` chiamata.

```
POSITION GetStartPosition() const;
```

### <a name="return-value"></a>Valore restituito

Valore di posizione che indica una posizione iniziale per l'iterazione della mappa; o NULL se la mappa è vuota.

### <a name="remarks"></a>Commenti

La sequenza di iterazione non è stimabile. Pertanto, il "primo elemento della mappa" non ha un significato speciale.

### <a name="example"></a>Esempio

Vedere l'esempio per [CMap:: SetAt](#setat).

## <a name="cmapinithashtable"></a><a name="inithashtable"></a> CMap:: InitHashTable

Inizializza la tabella hash.

```cpp
void InitHashTable(UINT hashSize, BOOL  bAllocNow = TRUE);
```

### <a name="parameters"></a>Parametri

*hashSize*<br/>
Numero di voci nella tabella hash.

*bAllocNow*<br/>
Se TRUE, alloca la tabella hash durante l'inizializzazione; in caso contrario, la tabella viene allocata quando è necessario.

### <a name="remarks"></a>Commenti

Per ottenere prestazioni ottimali, le dimensioni della tabella hash devono essere un numero primo. Per ridurre al minimo i conflitti, la dimensione deve essere approssimativamente del 20% più grande del set di dati previsto più grande.

### <a name="example"></a>Esempio

Vedere l'esempio per [CMap:: Lookup](#lookup).

## <a name="cmapisempty"></a><a name="isempty"></a> CMap:: IsEmpty

Determina se la mappa è vuota.

```
BOOL IsEmpty() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la mappa non contiene elementi; in caso contrario, 0.

### <a name="example"></a>Esempio

Vedere l'esempio per [CMap:: RemoveAll](#removeall).

## <a name="cmaplookup"></a><a name="lookup"></a> CMap:: Lookup

Cerca il valore mappato a una chiave specificata.

```
BOOL Lookup(ARG_KEY key, VALUE& rValue) const;
```

### <a name="parameters"></a>Parametri

*ARG_KEY*<br/>
Parametro di modello che specifica il tipo del valore della *chiave* .

*key*<br/>
Specifica la chiave che identifica l'elemento da cercare.

*VALUE*<br/>
Specifica il tipo di valore da cercare.

*rValue*<br/>
Riceve il valore di ricerca.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento è stato trovato. in caso contrario, 0.

### <a name="remarks"></a>Commenti

`Lookup` Usa un algoritmo di hashing per trovare rapidamente l'elemento della mappa con una chiave che corrisponde esattamente alla chiave specificata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#58](../../mfc/codesnippet/cpp/cmap-class_3.cpp)]

## <a name="cmapoperator--"></a><a name="operator_at"></a> CMap:: operator []

Un comodo sostituto per la `SetAt` funzione membro.

```
VALUE& operator[](arg_key key);
```

### <a name="parameters"></a>Parametri

*VALUE*<br/>
Parametro di modello che specifica il tipo di valore della mappa.

*ARG_KEY*<br/>
Parametro di modello che specifica il tipo del valore della chiave.

*key*<br/>
Chiave utilizzata per recuperare il valore dalla mappa.

### <a name="remarks"></a>Commenti

Pertanto può essere utilizzata solo sul lato sinistro di un'istruzione di assegnazione (un l-value). Se non è presente alcun elemento map con la chiave specificata, viene creato un nuovo elemento.

Non esiste un "lato destro" (r-value) equivalente a questo operatore perché esiste la possibilità che una chiave non venga trovata nella mappa. Usare la `Lookup` funzione membro per il recupero di elementi.

### <a name="example"></a>Esempio

Vedere l'esempio per [CMap:: Lookup](#lookup).

## <a name="cmappgetfirstassoc"></a><a name="pgetfirstassoc"></a> CMap::P GetFirstAssoc

Restituisce la prima voce dell'oggetto map.

```
const CPair* PGetFirstAssoc() const;
CPair* PGetFirstAssoc();
```

### <a name="return-value"></a>Valore restituito

Puntatore alla prima voce della mappa; vedere [CMap:: CPair](#cpair). Se la mappa non contiene voci, il valore è NULL.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per restituire un puntatore al primo elemento dell'oggetto map.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#59](../../mfc/codesnippet/cpp/cmap-class_4.cpp)]

## <a name="cmappgetnextassoc"></a><a name="pgetnextassoc"></a> CMap::P GetNextAssoc

Recupera l'elemento della mappa a cui punta *pAssocRec*.

```
const CPair *PGetNextAssoc(const CPair* pAssocRet) const;

CPair *PGetNextAssoc(const CPair* pAssocRet);
```

### <a name="parameters"></a>Parametri

*pAssocRet*<br/>
Punta a una voce della mappa restituita da una chiamata a [PGetNextAssoc](#pgetnextassoc) o [CMap::P getfirstassoc](#pgetfirstassoc) precedente.

### <a name="return-value"></a>Valore restituito

Puntatore alla voce successiva nella mappa; vedere [CMap:: CPair](#cpair). Se l'elemento è l'ultimo oggetto della mappa, il valore è NULL.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per scorrere tutti gli elementi nella mappa. Recuperare il primo elemento con una chiamata a `PGetFirstAssoc` e quindi scorrere la mappa con le chiamate successive a `PGetNextAssoc` .

### <a name="example"></a>Esempio

Vedere l'esempio per [CMap::P getfirstassoc](#pgetfirstassoc).

## <a name="cmapplookup"></a><a name="plookup"></a> CMap: ricerca:P

Trova il valore mappato a una chiave specificata.

```
const CPair* PLookup(ARG_KEY key) const;
CPair* PLookup(ARG_KEY key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave per l'elemento di cui eseguire la ricerca.

### <a name="return-value"></a>Valore restituito

Puntatore a una struttura di chiavi; vedere [CMap:: CPair](#cpair). Se non viene trovata alcuna corrispondenza, `CMap::PLookup` restituisce null.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per cercare un elemento della mappa con una chiave che corrisponde esattamente alla chiave specificata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#60](../../mfc/codesnippet/cpp/cmap-class_5.cpp)]

## <a name="cmapremoveall"></a><a name="removeall"></a> CMap:: RemoveAll

Rimuove tutti i valori da questa mappa chiamando la funzione helper globale `DestructElements` .

```cpp
void RemoveAll();
```

### <a name="remarks"></a>Commenti

La funzione funziona correttamente se la mappa è già vuota.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#61](../../mfc/codesnippet/cpp/cmap-class_6.cpp)]

## <a name="cmapremovekey"></a><a name="removekey"></a> CMap:: RemoveKey

Cerca la voce della mappa corrispondente alla chiave fornita. quindi, se la chiave viene trovata, rimuove la voce.

```
BOOL RemoveKey(ARG_KEY key);
```

### <a name="parameters"></a>Parametri

*ARG_KEY*<br/>
Parametro di modello che specifica il tipo di chiave.

*key*<br/>
Chiave per l'elemento da rimuovere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la voce è stata trovata e rimossa correttamente. in caso contrario, 0.

### <a name="remarks"></a>Commenti

La `DestructElements` funzione helper viene utilizzata per rimuovere la voce.

### <a name="example"></a>Esempio

Vedere l'esempio per [CMap:: SetAt](#setat).

## <a name="cmapsetat"></a><a name="setat"></a> CMap:: SetAt

Il metodo principale per inserire un elemento in una mappa.

```cpp
void SetAt(ARG_KEY key, ARG_VALUE newValue);
```

### <a name="parameters"></a>Parametri

*ARG_KEY*<br/>
Parametro di modello che specifica il tipo del parametro *chiave* .

*key*<br/>
Specifica la chiave del nuovo elemento.

*ARG_VALUE*<br/>
Parametro di modello che specifica il tipo del parametro *NewValue* .

*newValue*<br/>
Specifica il valore del nuovo elemento.

### <a name="remarks"></a>Commenti

Innanzitutto, la chiave viene ricercata. Se la chiave viene trovata, il valore corrispondente viene modificato; in caso contrario, viene creata una nuova coppia chiave-valore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#62](../../mfc/codesnippet/cpp/cmap-class_7.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio di raccolta MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
