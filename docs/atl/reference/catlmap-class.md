---
title: Classe CAtlMap
ms.date: 11/04/2016
f1_keywords:
- CAtlMap
- ATLCOLL/ATL::CAtlMap
- ATLCOLL/ATL::CAtlMap::KINARGTYPE
- ATLCOLL/ATL::CAtlMap::KOUTARGTYPE
- ATLCOLL/ATL::CAtlMap::VINARGTYPE
- ATLCOLL/ATL::CAtlMap::VOUTARGTYPE
- ATLCOLL/ATL::CPair::m_key
- ATLCOLL/ATL::CPair::m_value
- ATLCOLL/ATL::CAtlMap::CAtlMap
- ATLCOLL/ATL::CAtlMap::AssertValid
- ATLCOLL/ATL::CAtlMap::DisableAutoRehash
- ATLCOLL/ATL::CAtlMap::EnableAutoRehash
- ATLCOLL/ATL::CAtlMap::GetAt
- ATLCOLL/ATL::CAtlMap::GetCount
- ATLCOLL/ATL::CAtlMap::GetHashTableSize
- ATLCOLL/ATL::CAtlMap::GetKeyAt
- ATLCOLL/ATL::CAtlMap::GetNext
- ATLCOLL/ATL::CAtlMap::GetNextAssoc
- ATLCOLL/ATL::CAtlMap::GetNextKey
- ATLCOLL/ATL::CAtlMap::GetNextValue
- ATLCOLL/ATL::CAtlMap::GetStartPosition
- ATLCOLL/ATL::CAtlMap::GetValueAt
- ATLCOLL/ATL::CAtlMap::InitHashTable
- ATLCOLL/ATL::CAtlMap::IsEmpty
- ATLCOLL/ATL::CAtlMap::Lookup
- ATLCOLL/ATL::CAtlMap::Rehash
- ATLCOLL/ATL::CAtlMap::RemoveAll
- ATLCOLL/ATL::CAtlMap::RemoveAtPos
- ATLCOLL/ATL::CAtlMap::RemoveKey
- ATLCOLL/ATL::CAtlMap::SetAt
- ATLCOLL/ATL::CAtlMap::SetOptimalLoad
- ATLCOLL/ATL::CAtlMap::SetValueAt
helpviewer_keywords:
- CAtlMap class
ms.assetid: 5e2fe028-8e6d-4686-93df-1433d2080ec3
ms.openlocfilehash: 8954eeae28f13fb50643646b41c032588ecc278f
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81748662"
---
# <a name="catlmap-class"></a>Classe CAtlMap

Questa classe fornisce metodi per la creazione e la gestione di un oggetto mappa.

## <a name="syntax"></a>Sintassi

```
template <typename K,
          typename V,
          class KTraits = CElementTraits<K>,
          class VTraits = CElementTraits<V>>
class CAtlMap
```

#### <a name="parameters"></a>Parametri

*K*<br/>
Tipo di elemento chiave.

*Presso*<br/>
Tipo di elemento valore.

*Caratteristiche KTraits*<br/>
Codice utilizzato per copiare o spostare gli elementi chiave. Vedere [CElementTraits classe](../../atl/reference/celementtraits-class.md) per ulteriori dettagli.

*Tratti V*<br/>
Codice utilizzato per copiare o spostare gli elementi valore.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlMap::KINARGTYPE](#kinargtype)|Tipo utilizzato quando un tasto viene passato come argomento di inputType used when a key is passed as an input argument|
|[CAtlMap::KOUTARGTYPE (informazioni in base alla proprietà del](#koutargtype)|Tipo utilizzato quando viene restituita una chiave come argomento di output.|
|[CAtlMap::VINARGTYPE (informazioni in base alla proprietà del](#vinargtype)|Tipo utilizzato quando un valore viene passato come argomento di input.|
|[CAtlMap::VOUTARGTYPE (informazioni in base alla proprietà del](#voutargtype)|Tipo utilizzato quando un valore viene passato come argomento di output.|

### <a name="public-classes"></a>Classi pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[Classe CAtlMap::CPair](#cpair_class)|Classe contenente gli elementi key e value.|

### <a name="cpair-data-members"></a>Membri dati CPair

|Nome|Descrizione|
|----------|-----------------|
|[CPair::m_key](#m_key)|Membro dati che archivia l'elemento chiave.|
|[CPair::m_value](#m_value)|Membro dati che archivia l'elemento value.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlMap::CAtlMap](#catlmap)|Costruttore.|
|[CAtlMap:: : CAtlMap](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlMap::AssertValid](#assertvalid)|Chiamare questo metodo per causare `CAtlMap` un ASSERT se l'oggetto non è valido.|
|[CAtlMap::DisableAutoRehash](#disableautorehash)|Chiamare questo metodo per disabilitare `CAtlMap` il rehashing automatico dell'oggetto.|
|[CAtlMap::EnableAutoRehash](#enableautorehash)|Chiamare questo metodo per abilitare `CAtlMap` il rehashing automatico dell'oggetto.|
|[CAtlMap::GetAt](#getat)|Chiamare questo metodo per restituire l'elemento in una posizione specificata nella mappa.|
|[CAtlMap::GetCount](#getcount)|Chiamare questo metodo per recuperare il numero di elementi nella mappa.|
|[CAtlMap::GetHashTableSize](#gethashtablesize)|Chiamare questo metodo per determinare il numero di raccoglitori nella tabella hash della mappa.|
|[CAtlMap::GetKeyAt](#getkeyat)|Chiamare questo metodo per recuperare la chiave `CAtlMap` archiviata nella posizione specificata nell'oggetto.|
|[CAtlMap::GetNext](#getnext)|Chiamare questo metodo per ottenere un puntatore `CAtlMap` alla coppia di elementi successiva archiviata nell'oggetto.|
|[CAtlMap::GetNextAssoc](#getnextassoc)|Ottiene l'elemento successivo per l'iterazione.|
|[CAtlMap::GetNextKey](#getnextkey)|Chiamare questo metodo per recuperare `CAtlMap` la chiave successiva dall'oggetto.|
|[CAtlMap::GetNextValue](#getnextvalue)|Chiamare questo metodo per ottenere `CAtlMap` il valore successivo dall'oggetto.|
|[CAtlMap::GetStartPosition](#getstartposition)|Chiamare questo metodo per avviare un'iterazione della mappa.|
|[CAtlMap::GetValueAt](#getvalueat)|Chiamare questo metodo per recuperare il valore `CAtlMap` archiviato in una posizione specificata nell'oggetto.|
|[CAtlMap::InitHashTable](#inithashtable)|Chiamare questo metodo per inizializzare la tabella hash.|
|[CAtlMap::IsEmpty](#isempty)|Chiamare questo metodo per verificare la ricerca di un oggetto mappa vuoto.|
|[CAtlMap::Ricerca](#lookup)|Chiamare questo metodo per cercare chiavi `CAtlMap` o valori nell'oggetto.|
|[CAtlMap::Rehash](#rehash)|Chiamare questo metodo per `CAtlMap` eseguire nuovamente l'hashing dell'oggetto.|
|[CAtlMap::RemoveAll](#removeall)|Chiamare questo metodo per rimuovere `CAtlMap` tutti gli elementi dall'oggetto.|
|[CAtlMap::RemoveAtPos](#removeatpos)|Chiamare questo metodo per rimuovere l'elemento `CAtlMap` nella posizione specificata nell'oggetto.|
|[CAtlMap::RemoveKey](#removekey)|Chiamare questo metodo per rimuovere `CAtlMap` un elemento dall'oggetto, data la chiave.|
|[CAtlMap::SetAt](#setat)|Chiamare questo metodo per inserire una coppia di elementi nella mappa.|
|[CAtlMap::SetOptimalLoad (Informazioni in base al gruppo dei coievi](#setoptimalload)|Chiamare questo metodo per impostare `CAtlMap` il carico ottimale dell'oggetto.|
|[CAtlMap::SetValueAt](#setvalueat)|Chiamare questo metodo per modificare il valore `CAtlMap` archiviato in una determinata posizione nell'oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlMap::operator\[\]](catlmap-class.md#operator_at)|Sostituisce o aggiunge un `CAtlMap`nuovo elemento all'oggetto .|

## <a name="remarks"></a>Osservazioni

`CAtlMap`fornisce il supporto per una matrice di mapping di qualsiasi tipo specificato, la gestione di una matrice non ordinata di elementi chiave e dei relativi valori associati. Gli elementi (costituiti da una chiave e da un valore) vengono archiviati tramite un algoritmo hash, consentendo l'archiviazione e il recupero in modo efficiente di una grande quantità di dati.

I parametri *KTraits* e *VTraits* sono classi di tratti che contengono codice supplementare necessario per copiare o spostare gli elementi.

Un'alternativa `CAtlMap` è offerta dalla classe [CRBMap.](../../atl/reference/crbmap-class.md) `CRBMap`memorizza anche coppie chiave/valore, ma presenta caratteristiche di prestazioni diverse. Il tempo impiegato per inserire un elemento, cercare una `CRBMap` chiave o eliminare una chiave da un oggetto è di *log ordine(n)*, dove *n* è il numero di elementi. Per `CAtlMap`, tutte queste operazioni richiedono in genere un tempo costante, anche se gli scenari peggiori potrebbero essere di ordine *n*. Pertanto, in un `CAtlMap` caso tipico, è più veloce.

L'altra `CRBMap` differenza `CAtlMap` tra e diventa evidente quando si scorrono gli elementi memorizzati. In `CRBMap`un oggetto , gli elementi vengono visitati in un ordine ordinato. In `CAtlMap`un oggetto , gli elementi non vengono ordinati e non è possibile dedurre alcun ordine.

Quando è necessario archiviare un numero ridotto di elementi, è consigliabile usare la classe [CSimpleMap.When](../../atl/reference/csimplemap-class.md) a small number of elements need to be stored, consider using the CSimpleMap class instead.

Per ulteriori informazioni, vedere Classi di raccolte [ATL](../../atl/atl-collection-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll.h

## <a name="catlmapassertvalid"></a><a name="assertvalid"></a>CAtlMap::AssertValid

Chiamare questo metodo per fare `CAtlMap` un'operazione ASSERT se l'oggetto non è valido.

```cpp
void AssertValid() const;
```

### <a name="remarks"></a>Osservazioni

Nelle build di debug, questo metodo `CAtlMap` causerà un ASSERT se l'oggetto non è valido.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlMap::CAtlMap](#catlmap).

## <a name="catlmapcatlmap"></a><a name="catlmap"></a>CAtlMap::CAtlMap

Costruttore.

```
CAtlMap(
    UINT nBins = 17,
    float fOptimalLoad = 0.75f,
    float fLoThreshold = 0.25f,
    float fHiThreshold = 2.25f,
    UINT nBlockSize = 10) throw ();
```

### <a name="parameters"></a>Parametri

*nBins (inn*<br/>
Numero di contenitori che forniscono puntatori agli elementi archiviati. Vedere osservazioni più avanti in questo argomento per una spiegazione dei contenitori.

*fOptimalLoad (Caricamento ottimale)*<br/>
Rapporto di carico ottimale.

*fLoSoglia*<br/>
Soglia inferiore per il rapporto di carico.

*FHiSoglia*<br/>
Soglia superiore per il rapporto di carico.

*nBlockSize (dimensioni di blocco)*<br/>
Dimensione del blocco.

### <a name="remarks"></a>Osservazioni

`CAtlMap`fa riferimento a tutti i relativi elementi archiviati creando innanzitutto un indice utilizzando un algoritmo hash sulla chiave. Questo indice fa riferimento a un "bin" che contiene un puntatore agli elementi archiviati. Se il raccoglitore è già in uso, viene creata una lista collegata per accedere agli elementi successivi. L'attraversamento di un elenco è più lento rispetto all'accesso diretto all'elemento corretto e pertanto la struttura della mappa deve bilanciare i requisiti di archiviazione rispetto alle prestazioni. I parametri predefiniti sono stati scelti per dare buoni risultati nella maggior parte dei casi.

Il rapporto di carico è il rapporto tra il numero di contenitori e il numero di elementi archiviati nell'oggetto mappa. Quando la struttura della mappa viene ricalcolata, il valore del parametro *fOptimalLoad* verrà utilizzato per calcolare il numero di contenitori necessari. Questo valore può essere modificato utilizzando il [CAtlMap::SetOptimalLoad](#setoptimalload) metodo.

Il parametro *fLoThreshold* è il valore inferiore `CAtlMap` che il rapporto di carico può raggiungere prima di ricalcolare le dimensioni ottimali della mappa.

Il parametro *fHiThreshold* è il valore superiore `CAtlMap` che il rapporto di carico può raggiungere prima che l'oggetto ricalcoli le dimensioni ottimali della mappa.

Questo processo di ricalcolo (noto come rehashing) è abilitato per impostazione predefinita. Se si desidera disabilitare questo processo, ad esempio quando si immette una grande data contemporaneamente, chiamare il [CAtlMap::DisableAutoRehash](#disableautorehash) metodo. Riattivarlo con il metodo [CAtlMap::EnableAutoRehash.](#enableautorehash)

Il *nBlockSize* parametro è una misura della quantità di memoria allocata quando è necessario un nuovo elemento. Blocchi di dimensioni maggiori riducono le chiamate alle routine di allocazione della memoria, ma utilizzano più risorse.

Prima di poter archiviare i dati, è necessario inizializzare la tabella hash con una chiamata a [CAtlMap::InitHashTable](#inithashtable).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#72](../../atl/codesnippet/cpp/catlmap-class_1.cpp)]

## <a name="catlmapcatlmap"></a><a name="dtor"></a>CAtlMap:: : CAtlMap

Distruttore.

```
~CAtlMap() throw();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate.

## <a name="catlmapcpair-class"></a><a name="cpair_class"></a>Classe CAtlMap::CPair

Classe contenente gli elementi key e value.

```
class CPair : public __POSITION
```

### <a name="remarks"></a>Osservazioni

Questa classe viene utilizzata dai metodi [CAtlMap::GetNext](#getnext) e [CAtlMap::Lookup](#lookup) per accedere agli elementi chiave e valore archiviati nella struttura di mapping.

## <a name="catlmapdisableautorehash"></a><a name="disableautorehash"></a>CAtlMap::DisableAutoRehash

Chiamare questo metodo per disabilitare `CAtlMap` il rehashing automatico dell'oggetto.

```cpp
void DisableAutoRehash() throw();
```

### <a name="remarks"></a>Osservazioni

Quando il rehashing automatico è abilitato (che è per impostazione predefinita), il numero di contenitori nella tabella hash verrà ricalcolato automaticamente se il valore di carico (il rapporto tra il numero di contenitori e il numero di elementi archiviati nella matrice) supera i valori massimi o minimi specificati al momento della creazione della mappa.

`DisableAutoRehash`è particolarmente utile quando un gran numero di elementi verrà aggiunto alla mappa contemporaneamente. Anziché attivare il processo di rehashing ogni volta che vengono `DisableAutoRehash`superati i limiti, è più efficiente chiamare , aggiungere gli elementi e infine chiamare [CAtlMap::EnableAutoRehash](#enableautorehash).

## <a name="catlmapenableautorehash"></a><a name="enableautorehash"></a>CAtlMap::EnableAutoRehash

Chiamare questo metodo per abilitare `CAtlMap` il rehashing automatico dell'oggetto.

```cpp
void EnableAutoRehash() throw();
```

### <a name="remarks"></a>Osservazioni

Quando il rehashing automatico è abilitato (che è per impostazione predefinita), il numero di contenitori nella tabella hash verrà ricalcolato automaticamente se il valore di carico (il rapporto tra il numero di contenitori e il numero di elementi archiviati nella matrice) supera i valori massimi o minimi specificati al momento della creazione della mappa.

`EnableAutoRefresh`viene utilizzato più spesso dopo una chiamata a [CAtlMap::DisableAutoRehash](#disableautorehash).

## <a name="catlmapgetat"></a><a name="getat"></a>CAtlMap::GetAt

Chiamare questo metodo per restituire l'elemento in una posizione specificata nella mappa.

```cpp
void GetAt(
    POSITION pos,
    KOUTARGTYPE key,
    VOUTARGTYPE value) const;

CPair* GetAt(POSITION& pos) throw();
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
Contatore di posizione, restituito da una precedente chiamata a [CAtlMap::GetNextAssoc](#getnextassoc) o [CAtlMap::GetStartPosition](#getstartposition).

*key*<br/>
Parametro di modello che specifica il tipo della chiave della mappa.

*value*<br/>
Parametro di modello che specifica il tipo del valore della mappa.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla coppia corrente di elementi chiave/valore archiviati nella mappa.

### <a name="remarks"></a>Osservazioni

Nelle build di debug, si verificherà un errore di asserzione se *pos* è uguale a NULL.

## <a name="catlmapgetcount"></a><a name="getcount"></a>CAtlMap::GetCount

Chiamare questo metodo per recuperare il numero di elementi nella mappa.

```
size_t GetCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di elementi nell'oggetto mappa. Un singolo elemento è una coppia chiave/valore.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlMap::CAtlMap](#catlmap).

## <a name="catlmapgethashtablesize"></a><a name="gethashtablesize"></a>CAtlMap::GetHashTableSize

Chiamare questo metodo per determinare il numero di raccoglitori nella tabella hash della mappa.

```
UINT GetHashTableSize() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di contenitori nella tabella hash. Vedere [CAtlMap::CAtlMap](#catlmap) per una spiegazione.

## <a name="catlmapgetkeyat"></a><a name="getkeyat"></a>CAtlMap::GetKeyAt

Chiamare questo metodo per recuperare la chiave `CAtlMap` archiviata nella posizione specificata nell'oggetto.

```
const K& GetKeyAt(POSITION pos) const throw();
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
Contatore di posizione, restituito da una precedente chiamata a [CAtlMap::GetNextAssoc](#getnextassoc) o [CAtlMap::GetStartPosition](#getstartposition).

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento alla chiave archiviata `CAtlMap` nella posizione specificata nell'oggetto.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlMap::CAtlMap](#catlmap).

## <a name="catlmapgetnext"></a><a name="getnext"></a>CAtlMap::GetNext

Chiamare questo metodo per ottenere un puntatore `CAtlMap` alla coppia di elementi successiva archiviata nell'oggetto.

```
CPair* GetNext(POSITION& pos) throw();
const CPair* GetNext(POSITION& pos) const throw();
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
Contatore di posizione, restituito da una precedente chiamata a [CAtlMap::GetNextAssoc](#getnextassoc) o [CAtlMap::GetStartPosition](#getstartposition).

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla coppia successiva di elementi chiave/valore archiviati nella mappa. Il contatore di posizione *pos* viene aggiornato dopo ogni chiamata. Se l'elemento recuperato è l'ultimo nella mappa, *pos* è impostato su NULL.

## <a name="catlmapgetnextassoc"></a><a name="getnextassoc"></a>CAtlMap::GetNextAssoc

Ottiene l'elemento successivo per l'iterazione.

```cpp
void GetNextAssoc(
    POSITION& pos,
    KOUTARGTYPE key,
    VOUTARGTYPE value) const;
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
Contatore di posizione, restituito da una precedente chiamata a [CAtlMap::GetNextAssoc](#getnextassoc) o [CAtlMap::GetStartPosition](#getstartposition).

*key*<br/>
Parametro di modello che specifica il tipo della chiave della mappa.

*value*<br/>
Parametro di modello che specifica il tipo del valore della mappa.

### <a name="remarks"></a>Osservazioni

Il contatore di posizione *pos* viene aggiornato dopo ogni chiamata. Se l'elemento recuperato è l'ultimo nella mappa, *pos* è impostato su NULL.

## <a name="catlmapgetnextkey"></a><a name="getnextkey"></a>CAtlMap::GetNextKey

Chiamare questo metodo per recuperare `CAtlMap` la chiave successiva dall'oggetto.

```
const K& GetNextKey(POSITION& pos) const throw();
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
Contatore di posizione, restituito da una precedente chiamata a [CAtlMap::GetNextAssoc](#getnextassoc) o [CAtlMap::GetStartPosition](#getstartposition).

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento alla chiave successiva nella mappa.

### <a name="remarks"></a>Osservazioni

Aggiorna il contatore di posizione corrente, *pos*. Se non sono presenti altre voci nella mappa, il contatore di posizione è impostato su NULL.

## <a name="catlmapgetnextvalue"></a><a name="getnextvalue"></a>CAtlMap::GetNextValue

Chiamare questo metodo per ottenere `CAtlMap` il valore successivo dall'oggetto.

```
V& GetNextValue(POSITION& pos) throw();
const V& GetNextValue(POSITION& pos) const throw();
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
Contatore di posizione, restituito da una precedente chiamata a [CAtlMap::GetNextAssoc](#getnextassoc) o [CAtlMap::GetStartPosition](#getstartposition).

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento al valore successivo nella mappa.

### <a name="remarks"></a>Osservazioni

Aggiorna il contatore di posizione corrente, *pos*. Se non sono presenti altre voci nella mappa, il contatore di posizione è impostato su NULL.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlMap::CAtlMap](#catlmap).

## <a name="catlmapgetstartposition"></a><a name="getstartposition"></a>CAtlMap::GetStartPosition

Chiamare questo metodo per avviare un'iterazione della mappa.

```
POSITION GetStartPosition() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la posizione iniziale o viene restituito NULL se la mappa è vuota.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per avviare un'iterazione della mappa `GetNextAssoc` restituendo un POSITION valore che può essere passato al metodo.

> [!NOTE]
> La sequenza di iterazione non è prevedibile

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlMap::CAtlMap](#catlmap).

## <a name="catlmapgetvalueat"></a><a name="getvalueat"></a>CAtlMap::GetValueAt

Chiamare questo metodo per recuperare il valore `CAtlMap` archiviato in una posizione specificata nell'oggetto.

```
V& GetValueAt(POSITION pos) throw();
const V& GetValueAt(POSITION pos) const throw();
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
Contatore di posizione, restituito da una precedente chiamata a [CAtlMap::GetNextAssoc](#getnextassoc) o [CAtlMap::GetStartPosition](#getstartposition).

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento al valore archiviato `CAtlMap` nella posizione specificata nell'oggetto.

## <a name="catlmapinithashtable"></a><a name="inithashtable"></a>CAtlMap::InitHashTable

Chiamare questo metodo per inizializzare la tabella hash.

```
bool InitHashTable(
    UINT nBins,
    bool bAllocNow = true);
```

### <a name="parameters"></a>Parametri

*nBins (inn*<br/>
Numero di contenitori utilizzati dalla tabella hash. Vedere [CAtlMap::CAtlMap](#catlmap) per una spiegazione.

*bAllocNow*<br/>
Un flag indica quando deve essere allocata la memoria.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE al termine dell'inizializzazione, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

`InitHashTable`deve essere chiamato prima di tutti gli elementi vengono archiviati nella tabella hash.  Se questo metodo non viene chiamato in modo esplicito, verrà chiamato automaticamente la `CAtlMap` prima volta che viene aggiunto un elemento utilizzando il numero di bin specificato dal costruttore.  In caso contrario, la mappa verrà inizializzata utilizzando il nuovo conteggio bin specificato dal *nBins* parametro.

Se il parametro *bAllocNow* è false, la memoria richiesta dalla tabella hash non verrà allocata fino a quando non sarà richiesta per la prima volta. Ciò può essere utile se non è sicuro se la mappa verrà utilizzata.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlMap::CAtlMap](#catlmap).

## <a name="catlmapisempty"></a><a name="isempty"></a>CAtlMap::IsEmpty

Chiamare questo metodo per verificare la ricerca di un oggetto mappa vuoto.

```
bool IsEmpty() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la mappa è vuota, FALSE in caso contrario.

## <a name="catlmapkinargtype"></a><a name="kinargtype"></a>CAtlMap::KINARGTYPE

Tipo utilizzato quando un tasto viene passato come argomento di input.

```
typedef KTraits::INARGTYPE KINARGTYPE;
```

## <a name="catlmapkoutargtype"></a><a name="koutargtype"></a>CAtlMap::KOUTARGTYPE (informazioni in base alla proprietà del

Tipo utilizzato quando viene restituita una chiave come argomento di output.

```
typedef KTraits::OUTARGTYPE KOUTARGTYPE;
```

## <a name="catlmaplookup"></a><a name="lookup"></a>CAtlMap::Ricerca

Chiamare questo metodo per cercare chiavi `CAtlMap` o valori nell'oggetto.

```
bool Lookup(KINARGTYPE key, VOUTARGTYPE value) const;
const CPair* Lookup(KINARGTYPE key) const throw();
CPair* Lookup(KINARGTYPE key) throw();
```

### <a name="parameters"></a>Parametri

*key*<br/>
Specifica la chiave che identifica l'elemento da cercare.

*value*<br/>
Variabile che riceve il valore cercato.

### <a name="return-value"></a>Valore restituito

La prima forma del metodo restituisce true se la chiave viene trovata, in caso contrario false. La seconda e la terza forme restituiscono un puntatore a un [CPair](#cpair_class) che può essere utilizzato come posizione per le chiamate a [CAtlMap::GetNext](#getnext) e così via.

### <a name="remarks"></a>Osservazioni

`Lookup`utilizza un algoritmo hash per trovare rapidamente l'elemento della mappa contenente una chiave che corrisponde esattamente al parametro chiave specificato.

## <a name="catlmapoperator-"></a><a name="operator_at"></a>CAtlMap::operatore\[\]

Sostituisce o aggiunge un `CAtlMap`nuovo elemento all'oggetto .

```
V& operator[](kinargtype key) throw();
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave dell'elemento da aggiungere o sostituire.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento al valore associato alla chiave specificata.

### <a name="example"></a>Esempio

Se la chiave esiste già, l'elemento viene sostituito. Se la chiave non esiste, viene aggiunto un nuovo elemento. Vedere l'esempio per [CAtlMap::CAtlMap](#catlmap).

## <a name="catlmaprehash"></a><a name="rehash"></a>CAtlMap::Rehash

Chiamare questo metodo per `CAtlMap` eseguire nuovamente l'hashing dell'oggetto.

```cpp
void Rehash(UINT nBins = 0);
```

### <a name="parameters"></a>Parametri

*nBins (inn*<br/>
Nuovo numero di contenitori da utilizzare nella tabella hash. Vedere [CAtlMap::CAtlMap](#catlmap) per una spiegazione.

### <a name="remarks"></a>Osservazioni

Se *nBins* è `CAtlMap` 0, calcola un numero ragionevole in base al numero di elementi nella mappa e all'impostazione di carico ottimale. In genere il processo di rehashing è automatico, ma se [CAtlMap::DisableAutoRehash](#disableautorehash) è stato chiamato, questo metodo eseguirà il ridimensionamento necessario.

## <a name="catlmapremoveall"></a><a name="removeall"></a>CAtlMap::RemoveAll

Chiamare questo metodo per rimuovere `CAtlMap` tutti gli elementi dall'oggetto.

```cpp
void RemoveAll() throw();
```

### <a name="remarks"></a>Osservazioni

Cancella l'oggetto, `CAtlMap` liberando la memoria utilizzata per memorizzare gli elementi.

## <a name="catlmapremoveatpos"></a><a name="removeatpos"></a>CAtlMap::RemoveAtPos

Chiamare questo metodo per rimuovere l'elemento `CAtlMap` nella posizione specificata nell'oggetto.

```cpp
void RemoveAtPos(POSITION pos) throw();
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
Contatore di posizione, restituito da una precedente chiamata a [CAtlMap::GetNextAssoc](#getnextassoc) o [CAtlMap::GetStartPosition](#getstartposition).

### <a name="remarks"></a>Osservazioni

Rimuove la coppia chiave/valore archiviata nella posizione specificata. La memoria utilizzata per archiviare l'elemento viene liberata. La POSITION a cui fa riferimento *pos* diventa non valida e, mentre la POSITION di qualsiasi altro elemento nella mappa rimane valida, non mantengono necessariamente lo stesso ordine.

## <a name="catlmapremovekey"></a><a name="removekey"></a>CAtlMap::RemoveKey

Chiamare questo metodo per rimuovere `CAtlMap` un elemento dall'oggetto, data la chiave.

```
bool RemoveKey(KINARGTYPE key) throw();
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave corrispondente alla coppia di elementi che si desidera rimuovere.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la chiave viene trovata e rimossa, FALSE in caso di errore.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlMap::CAtlMap](#catlmap).

## <a name="catlmapsetat"></a><a name="setat"></a>CAtlMap::SetAt

Chiamare questo metodo per inserire una coppia di elementi nella mappa.

```
POSITION SetAt(
    KINARGTYPE key,
    VINARGTYPE value);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Valore della chiave da `CAtlMap` aggiungere all'oggetto.

*value*<br/>
Valore da aggiungere `CAtlMap` all'oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce la posizione della coppia di `CAtlMap` elementi chiave/valore nell'oggetto.

### <a name="remarks"></a>Osservazioni

`SetAt`sostituisce un elemento esistente se viene trovata una chiave corrispondente. Se la chiave non viene trovata, viene creata una nuova coppia chiave/valore.

## <a name="catlmapsetoptimalload"></a><a name="setoptimalload"></a>CAtlMap::SetOptimalLoad (Informazioni in base al gruppo dei coievi

Chiamare questo metodo per impostare `CAtlMap` il carico ottimale dell'oggetto.

```cpp
void SetOptimalLoad(
    float fOptimalLoad,
    float fLoThreshold,
    float fHiThreshold,
    bool bRehashNow = false);
```

### <a name="parameters"></a>Parametri

*fOptimalLoad (Caricamento ottimale)*<br/>
Rapporto di carico ottimale.

*fLoSoglia*<br/>
Soglia inferiore per il rapporto di carico.

*FHiSoglia*<br/>
Soglia superiore per il rapporto di carico.

*bRehashNow*<br/>
Flag che indica se la tabella hash deve essere ricalcolata.

### <a name="remarks"></a>Osservazioni

Questo metodo ridefinisce il valore `CAtlMap` di carico ottimale per l'oggetto. Vedere [CAtlMap::CAtlMap](#catlmap) per una descrizione dei vari parametri. Se *bRehashNow* è true e il numero di elementi non è compreso tra i valori minimo e massimo, la tabella hash viene ricalcolata.

## <a name="catlmapsetvalueat"></a><a name="setvalueat"></a>CAtlMap::SetValueAt

Chiamare questo metodo per modificare il valore `CAtlMap` archiviato in una determinata posizione nell'oggetto.

```cpp
void SetValueAt(
    POSITION pos,
    VINARGTYPE value);
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
Contatore di posizione, restituito da una precedente chiamata a [CAtlMap::GetNextAssoc](#getnextassoc) o [CAtlMap::GetStartPosition](#getstartposition).

*value*<br/>
Valore da aggiungere `CAtlMap` all'oggetto.

### <a name="remarks"></a>Osservazioni

Modifica l'elemento valore memorizzato `CAtlMap` nella posizione specificata nell'oggetto.

## <a name="catlmapvinargtype"></a><a name="vinargtype"></a>CAtlMap::VINARGTYPE (informazioni in base alla proprietà del

Tipo utilizzato quando un valore viene passato come argomento di input.

```
typedef VTraits::INARGTYPE VINARGTYPE;
```

## <a name="catlmapvoutargtype"></a><a name="voutargtype"></a>CAtlMap::VOUTARGTYPE (informazioni in base alla proprietà del

Tipo utilizzato quando un valore viene passato come argomento di output.

```
typedef VTraits::OUTARGTYPE VOUTARGTYPE;
```

## <a name="catlmapcpairm_key"></a><a name="m_key"></a>CAtlMap::CPair::m_key

Membro dati che archivia l'elemento chiave.

```
const K m_key;
```

### <a name="parameters"></a>Parametri

*K*<br/>
Tipo di elemento chiave.

## <a name="catlmapcpairm_value"></a><a name="m_value"></a>CAtlMap::CPair::m_value

Membro dati che archivia l'elemento value.

```
V  m_value;
```

### <a name="parameters"></a>Parametri

*Presso*<br/>
Tipo di elemento valore.

## <a name="see-also"></a>Vedere anche

[Esempio Marquee](../../overview/visual-cpp-samples.md)<br/>
[Esempio UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
