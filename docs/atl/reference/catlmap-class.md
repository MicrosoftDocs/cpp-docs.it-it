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
ms.openlocfilehash: b79e6cbd796569e6ba11c96158099de6c30b310a
ms.sourcegitcommit: 2bc15c5b36372ab01fa21e9bcf718fa22705814f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/27/2020
ms.locfileid: "82168059"
---
# <a name="catlmap-class"></a>Classe CAtlMap

Questa classe fornisce metodi per la creazione e la gestione di un oggetto map.

## <a name="syntax"></a>Sintassi

```cpp
template <typename K,
          typename V,
          class KTraits = CElementTraits<K>,
          class VTraits = CElementTraits<V>>
class CAtlMap
```

### <a name="parameters"></a>Parametri

*K*<br/>
Tipo di elemento chiave.

*V*<br/>
Tipo di elemento valore.

*KTraits*<br/>
Codice utilizzato per copiare o spostare elementi chiave. Per ulteriori informazioni, vedere la [classe CElementTraits](../../atl/reference/celementtraits-class.md) .

*VTraits*<br/>
Codice utilizzato per copiare o spostare elementi di valore.

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlMap:: KINARGTYPE](#kinargtype)|Tipo utilizzato quando una chiave viene passata come argomento di input|
|[CAtlMap:: KOUTARGTYPE](#koutargtype)|Tipo utilizzato quando un tasto viene restituito come argomento di output.|
|[CAtlMap:: VINARGTYPE](#vinargtype)|Tipo utilizzato quando un valore viene passato come argomento di input.|
|[CAtlMap:: VOUTARGTYPE](#voutargtype)|Tipo utilizzato quando un valore viene passato come argomento di output.|

### <a name="public-classes"></a>Classi pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[Classe CAtlMap:: CPair](#cpair_class)|Classe contenente gli elementi Key e value.|

### <a name="cpair-data-members"></a>Membri dati CPair

|Nome|Descrizione|
|----------|-----------------|
|[CPair:: m_key](#m_key)|Membro dati che archivia l'elemento chiave.|
|[CPair:: m_value](#m_value)|Membro dati che archivia l'elemento value.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlMap:: CAtlMap](#catlmap)|Costruttore.|
|[CAtlMap:: ~ CAtlMap](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlMap:: AssertValid](#assertvalid)|Chiamare questo metodo per generare un'ASSERZIONe se `CAtlMap` l'oggetto non è valido.|
|[CAtlMap::D isableAutoRehash](#disableautorehash)|Chiamare questo metodo per disabilitare il `CAtlMap` rihashing automatico dell'oggetto.|
|[CAtlMap:: EnableAutoRehash](#enableautorehash)|Chiamare questo metodo per abilitare il `CAtlMap` rihashing automatico dell'oggetto.|
|[CAtlMap:: GetA](#getat)|Chiamare questo metodo per restituire l'elemento in una posizione specificata nella mappa.|
|[CAtlMap:: GetCount](#getcount)|Chiamare questo metodo per recuperare il numero di elementi nella mappa.|
|[CAtlMap:: GetHashTableSize](#gethashtablesize)|Chiamare questo metodo per determinare il numero di contenitori nella tabella hash della mappa.|
|[CAtlMap:: GetKeyAt](#getkeyat)|Chiamare questo metodo per recuperare la chiave archiviata in corrispondenza della posizione specificata `CAtlMap` nell'oggetto.|
|[CAtlMap:: GetNext](#getnext)|Chiamare questo metodo per ottenere un puntatore alla coppia di elementi successiva archiviata nell' `CAtlMap` oggetto.|
|[CAtlMap:: GetNextAssoc](#getnextassoc)|Ottiene l'elemento successivo per l'iterazione.|
|[CAtlMap:: GetNextKey](#getnextkey)|Chiamare questo metodo per recuperare la chiave successiva dall' `CAtlMap` oggetto.|
|[CAtlMap:: GetNextValue](#getnextvalue)|Chiamare questo metodo per ottenere il valore successivo dall' `CAtlMap` oggetto.|
|[CAtlMap:: GetStartPosition](#getstartposition)|Chiamare questo metodo per avviare un'iterazione della mappa.|
|[CAtlMap:: GetValueAt](#getvalueat)|Chiamare questo metodo per recuperare il valore archiviato in una determinata posizione nell' `CAtlMap` oggetto.|
|[CAtlMap:: InitHashTable](#inithashtable)|Chiamare questo metodo per inizializzare la tabella hash.|
|[CAtlMap:: IsEmpty](#isempty)|Chiamare questo metodo per verificare la presenza di un oggetto map vuoto.|
|[CAtlMap:: Lookup](#lookup)|Chiamare questo metodo per cercare le `CAtlMap` chiavi o i valori nell'oggetto.|
|[CAtlMap:: rehash](#rehash)|Chiamare questo metodo per rieseguire l' `CAtlMap` hashing dell'oggetto.|
|[CAtlMap:: RemoveAll](#removeall)|Chiamare questo metodo per rimuovere tutti gli elementi dall' `CAtlMap` oggetto.|
|[CAtlMap:: RemoveAtPos](#removeatpos)|Chiamare questo metodo per rimuovere l'elemento in corrispondenza della posizione specificata nell' `CAtlMap` oggetto.|
|[CAtlMap:: RemoveKey](#removekey)|Chiamare questo metodo per rimuovere un elemento dall' `CAtlMap` oggetto, in base alla chiave.|
|[CAtlMap:: SetAt](#setat)|Chiamare questo metodo per inserire una coppia di elementi nella mappa.|
|[CAtlMap:: SetOptimalLoad](#setoptimalload)|Chiamare questo metodo per impostare il carico ottimale dell' `CAtlMap` oggetto.|
|[CAtlMap:: SetValueAt](#setvalueat)|Chiamare questo metodo per modificare il valore archiviato in una determinata posizione nell' `CAtlMap` oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlMap::operator\[\]](catlmap-class.md#operator_at)|Sostituisce o aggiunge un nuovo elemento a `CAtlMap`.|

## <a name="remarks"></a>Osservazioni

`CAtlMap`fornisce supporto per una matrice di mapping di qualsiasi tipo specificato, gestendo una matrice non ordinata di elementi chiave e i relativi valori associati. Gli elementi (costituiti da una chiave e un valore) vengono archiviati usando un algoritmo di hash, consentendo di archiviare e recuperare in modo efficiente una grande quantità di dati.

I parametri *KTraits* e *VTraits* sono classi di tratti che contengono qualsiasi codice supplementare necessario per copiare o spostare elementi.

Un'alternativa a `CAtlMap` è offerta dalla classe [CRBMap](../../atl/reference/crbmap-class.md) . `CRBMap`archivia anche le coppie chiave/valore, ma presenta caratteristiche di prestazioni diverse. Il tempo impiegato per inserire un elemento, cercare una chiave o eliminare una chiave da un `CRBMap` oggetto è log degli ordini *(n)*, dove *n* è il numero di elementi. Per `CAtlMap`, tutte queste operazioni in genere accettano un tempo costante, sebbene gli scenari peggiori possano essere di ordine *n*. Pertanto, in un caso tipico, `CAtlMap` è più veloce.

L'altra differenza tra `CRBMap` e `CAtlMap` diventa evidente quando si scorrono gli elementi archiviati. In `CRBMap`, gli elementi vengono visitati in un ordine ordinato. In un `CAtlMap`gli elementi non sono ordinati e non è possibile dedurre alcun ordine.

Quando è necessario archiviare un numero ridotto di elementi, è consigliabile usare invece la classe [CSimpleMap](../../atl/reference/csimplemap-class.md) .

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

## <a name="catlmapassertvalid"></a><a name="assertvalid"></a>CAtlMap:: AssertValid

Chiamare questo metodo per generare un'ASSERZIONe se `CAtlMap` l'oggetto non è valido.

```cpp
void AssertValid() const;
```

### <a name="remarks"></a>Osservazioni

Nelle compilazioni di debug, questo metodo provocherà un' `CAtlMap` asserzione se l'oggetto non è valido.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlMap:: CAtlMap](#catlmap).

## <a name="catlmapcatlmap"></a><a name="catlmap"></a>CAtlMap:: CAtlMap

Costruttore.

```cpp
CAtlMap(
    UINT nBins = 17,
    float fOptimalLoad = 0.75f,
    float fLoThreshold = 0.25f,
    float fHiThreshold = 2.25f,
    UINT nBlockSize = 10) throw ();
```

### <a name="parameters"></a>Parametri

*nBins*<br/>
Il numero di contenitori che forniscono i puntatori agli elementi archiviati. Per una spiegazione dei contenitori, vedere la sezione Osservazioni più avanti in questo argomento.

*fOptimalLoad*<br/>
Rapporto di carico ottimale.

*fLoThreshold*<br/>
Soglia inferiore per il rapporto di carico.

*fHiThreshold*<br/>
Soglia superiore per il rapporto di carico.

*nBlockSize*<br/>
Dimensione del blocco.

### <a name="remarks"></a>Osservazioni

`CAtlMap`fa riferimento a tutti gli elementi archiviati creando innanzitutto un indice usando un algoritmo di hashing sulla chiave. Questo indice fa riferimento a un "bin" che contiene un puntatore agli elementi archiviati. Se il contenitore è già in uso, viene creato un elenco collegato per accedere agli elementi successivi. L'attraversamento di un elenco è più lento rispetto all'accesso diretto all'elemento corretto, quindi la struttura della mappa deve bilanciare i requisiti di archiviazione in base alle prestazioni. I parametri predefiniti sono stati scelti per fornire risultati validi nella maggior parte dei casi.

Il rapporto di carico è il rapporto tra il numero di contenitori e il numero di elementi archiviati nell'oggetto mappa. Quando la struttura della mappa viene ricalcolata, il valore del parametro *fOptimalLoad* verrà usato per calcolare il numero di contenitori necessari. Questo valore può essere modificato usando il metodo [CAtlMap:: SetOptimalLoad](#setoptimalload) .

Il parametro *fLoThreshold* è il valore inferiore che il rapporto di carico può raggiungere `CAtlMap` prima di ricalcolare la dimensione ottimale della mappa.

Il parametro *fHiThreshold* è il valore superiore che il rapporto di carico può raggiungere prima `CAtlMap` che l'oggetto ricalcoli le dimensioni ottimali della mappa.

Questo processo di ricalcolo (noto come rihashing) è abilitato per impostazione predefinita. Se si vuole disabilitare questo processo, ad esempio quando si immette una grande quantità di dati alla volta, chiamare il metodo [CAtlMap::D isableautorehash](#disableautorehash) . Riattivarla con il metodo [CAtlMap:: EnableAutoRehash](#enableautorehash) .

Il parametro *nBlockSize* è una misura della quantità di memoria allocata quando è richiesto un nuovo elemento. Dimensioni maggiori dei blocchi riducono le chiamate alle routine di allocazione di memoria, ma utilizzano più risorse.

Prima di poter archiviare i dati, è necessario inizializzare la tabella hash con una chiamata a [CAtlMap:: InitHashTable](#inithashtable).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#72](../../atl/codesnippet/cpp/catlmap-class_1.cpp)]

## <a name="catlmapcatlmap"></a><a name="dtor"></a>CAtlMap:: ~ CAtlMap

Distruttore.

```cpp
~CAtlMap() throw();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate.

## <a name="catlmapcpair-class"></a><a name="cpair_class"></a>Classe CAtlMap:: CPair

Classe contenente gli elementi Key e value.

```cpp
class CPair : public __POSITION
```

### <a name="remarks"></a>Osservazioni

Questa classe viene utilizzata dai metodi [CAtlMap:: GetNext](#getnext) e [CAtlMap:: Lookup](#lookup) per accedere agli elementi Key e value archiviati nella struttura di mapping.

## <a name="catlmapdisableautorehash"></a><a name="disableautorehash"></a>CAtlMap::D isableAutoRehash

Chiamare questo metodo per disabilitare il `CAtlMap` rihashing automatico dell'oggetto.

```cpp
void DisableAutoRehash() throw();
```

### <a name="remarks"></a>Osservazioni

Quando è abilitato il rihashing automatico (per impostazione predefinita), il numero di bin nella tabella hash verrà ricalcolato automaticamente se il valore di caricamento (il rapporto del numero di contenitori al numero di elementi archiviati nella matrice) supera i valori massimi o minimi specificati al momento della creazione della mappa.

`DisableAutoRehash`è particolarmente utile quando un numero elevato di elementi verrà aggiunto contemporaneamente alla mappa. Anziché attivare il processo di rihashing ogni volta che vengono superati i limiti, è più efficiente chiamare `DisableAutoRehash`, aggiungere gli elementi e infine chiamare [CAtlMap:: EnableAutoRehash](#enableautorehash).

## <a name="catlmapenableautorehash"></a><a name="enableautorehash"></a>CAtlMap:: EnableAutoRehash

Chiamare questo metodo per abilitare il `CAtlMap` rihashing automatico dell'oggetto.

```cpp
void EnableAutoRehash() throw();
```

### <a name="remarks"></a>Osservazioni

Quando è abilitato il rihashing automatico (per impostazione predefinita), il numero di bin nella tabella hash verrà ricalcolato automaticamente se il valore di caricamento (il rapporto del numero di contenitori al numero di elementi archiviati nella matrice) supera i valori massimi o minimi specificati al momento della creazione della mappa.

`EnableAutoRefresh`viene usato più spesso dopo una chiamata a [CAtlMap::D isableautorehash](#disableautorehash).

## <a name="catlmapgetat"></a><a name="getat"></a>CAtlMap:: GetA

Chiamare questo metodo per restituire l'elemento in una posizione specificata nella mappa.

```cpp
void GetAt(
    POSITION pos,
    KOUTARGTYPE key,
    VOUTARGTYPE value) const;

CPair* GetAt(POSITION& pos) throw();
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Il contatore della posizione, restituito da una chiamata precedente a [CAtlMap:: GetNextAssoc](#getnextassoc) o [CAtlMap:: GetStartPosition](#getstartposition).

*key*<br/>
Parametro di modello che specifica il tipo della chiave della mappa.

*value*<br/>
Parametro di modello che specifica il tipo del valore della mappa.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla coppia corrente di elementi chiave/valore archiviati nella mappa.

### <a name="remarks"></a>Osservazioni

Nelle build di debug, si verificherà un errore di asserzione se *pos* è uguale a null.

## <a name="catlmapgetcount"></a><a name="getcount"></a>CAtlMap:: GetCount

Chiamare questo metodo per recuperare il numero di elementi nella mappa.

```cpp
size_t GetCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di elementi nell'oggetto map. Un singolo elemento è una coppia chiave/valore.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlMap:: CAtlMap](#catlmap).

## <a name="catlmapgethashtablesize"></a><a name="gethashtablesize"></a>CAtlMap:: GetHashTableSize

Chiamare questo metodo per determinare il numero di contenitori nella tabella hash della mappa.

```cpp
UINT GetHashTableSize() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di contenitori nella tabella hash. Per una spiegazione, vedere [CAtlMap:: CAtlMap](#catlmap) .

## <a name="catlmapgetkeyat"></a><a name="getkeyat"></a>CAtlMap:: GetKeyAt

Chiamare questo metodo per recuperare la chiave archiviata in corrispondenza della posizione specificata `CAtlMap` nell'oggetto.

```cpp
const K& GetKeyAt(POSITION pos) const throw();
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Il contatore della posizione, restituito da una chiamata precedente a [CAtlMap:: GetNextAssoc](#getnextassoc) o [CAtlMap:: GetStartPosition](#getstartposition).

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento alla chiave archiviata in corrispondenza della posizione specificata nell' `CAtlMap` oggetto.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlMap:: CAtlMap](#catlmap).

## <a name="catlmapgetnext"></a><a name="getnext"></a>CAtlMap:: GetNext

Chiamare questo metodo per ottenere un puntatore alla coppia di elementi successiva archiviata nell' `CAtlMap` oggetto.

```cpp
CPair* GetNext(POSITION& pos) throw();
const CPair* GetNext(POSITION& pos) const throw();
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Il contatore della posizione, restituito da una chiamata precedente a [CAtlMap:: GetNextAssoc](#getnextassoc) o [CAtlMap:: GetStartPosition](#getstartposition).

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla coppia di elementi chiave/valore successiva archiviata nella mappa. Il contatore posizione *pos* viene aggiornato dopo ogni chiamata. Se l'elemento recuperato è l'ultimo oggetto della mappa, *pos* viene impostato su null.

## <a name="catlmapgetnextassoc"></a><a name="getnextassoc"></a>CAtlMap:: GetNextAssoc

Ottiene l'elemento successivo per l'iterazione.

```cpp
void GetNextAssoc(
    POSITION& pos,
    KOUTARGTYPE key,
    VOUTARGTYPE value) const;
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Il contatore della posizione, restituito da una chiamata precedente a [CAtlMap:: GetNextAssoc](#getnextassoc) o [CAtlMap:: GetStartPosition](#getstartposition).

*key*<br/>
Parametro di modello che specifica il tipo della chiave della mappa.

*value*<br/>
Parametro di modello che specifica il tipo del valore della mappa.

### <a name="remarks"></a>Osservazioni

Il contatore posizione *pos* viene aggiornato dopo ogni chiamata. Se l'elemento recuperato è l'ultimo oggetto della mappa, *pos* viene impostato su null.

## <a name="catlmapgetnextkey"></a><a name="getnextkey"></a>CAtlMap:: GetNextKey

Chiamare questo metodo per recuperare la chiave successiva dall' `CAtlMap` oggetto.

```cpp
const K& GetNextKey(POSITION& pos) const throw();
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Il contatore della posizione, restituito da una chiamata precedente a [CAtlMap:: GetNextAssoc](#getnextassoc) o [CAtlMap:: GetStartPosition](#getstartposition).

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento alla chiave successiva nella mappa.

### <a name="remarks"></a>Osservazioni

Aggiorna il contatore della posizione corrente, *pos*. Se la mappa non contiene più voci, il contatore di posizioni viene impostato su NULL.

## <a name="catlmapgetnextvalue"></a><a name="getnextvalue"></a>CAtlMap:: GetNextValue

Chiamare questo metodo per ottenere il valore successivo dall' `CAtlMap` oggetto.

```cpp
V& GetNextValue(POSITION& pos) throw();
const V& GetNextValue(POSITION& pos) const throw();
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Il contatore della posizione, restituito da una chiamata precedente a [CAtlMap:: GetNextAssoc](#getnextassoc) o [CAtlMap:: GetStartPosition](#getstartposition).

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento al valore successivo nella mappa.

### <a name="remarks"></a>Osservazioni

Aggiorna il contatore della posizione corrente, *pos*. Se la mappa non contiene più voci, il contatore di posizioni viene impostato su NULL.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlMap:: CAtlMap](#catlmap).

## <a name="catlmapgetstartposition"></a><a name="getstartposition"></a>CAtlMap:: GetStartPosition

Chiamare questo metodo per avviare un'iterazione della mappa.

```cpp
POSITION GetStartPosition() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la posizione iniziale o viene restituito NULL se la mappa è vuota.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per avviare un'iterazione della `GetNextAssoc` mappa restituendo un valore di posizione che può essere passato al metodo.

> [!NOTE]
> La sequenza di iterazione non è stimabile

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlMap:: CAtlMap](#catlmap).

## <a name="catlmapgetvalueat"></a><a name="getvalueat"></a>CAtlMap:: GetValueAt

Chiamare questo metodo per recuperare il valore archiviato in una determinata posizione nell' `CAtlMap` oggetto.

```cpp
V& GetValueAt(POSITION pos) throw();
const V& GetValueAt(POSITION pos) const throw();
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Il contatore della posizione, restituito da una chiamata precedente a [CAtlMap:: GetNextAssoc](#getnextassoc) o [CAtlMap:: GetStartPosition](#getstartposition).

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento al valore archiviato in corrispondenza della posizione specificata nell' `CAtlMap` oggetto.

## <a name="catlmapinithashtable"></a><a name="inithashtable"></a>CAtlMap:: InitHashTable

Chiamare questo metodo per inizializzare la tabella hash.

```cpp
bool InitHashTable(
    UINT nBins,
    bool bAllocNow = true);
```

### <a name="parameters"></a>Parametri

*nBins*<br/>
Numero di contenitori utilizzati dalla tabella hash. Per una spiegazione, vedere [CAtlMap:: CAtlMap](#catlmap) .

*bAllocNow*<br/>
Indicazione del flag quando la memoria deve essere allocata.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di inizializzazione riuscita, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

`InitHashTable`deve essere chiamato prima che tutti gli elementi vengano archiviati nella tabella hash.  Se questo metodo non viene chiamato in modo esplicito, verrà chiamato automaticamente la prima volta che un elemento viene aggiunto usando il numero di bin specificato `CAtlMap` dal costruttore.  In caso contrario, la mappa verrà inizializzata usando il nuovo numero di bin specificato dal parametro *nBins* .

Se il parametro *bAllocNow* è false, la memoria richiesta dalla tabella hash non verrà allocata fino alla prima richiesta. Questo può essere utile se è incerto se verrà utilizzata la mappa.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlMap:: CAtlMap](#catlmap).

## <a name="catlmapisempty"></a><a name="isempty"></a>CAtlMap:: IsEmpty

Chiamare questo metodo per verificare la presenza di un oggetto map vuoto.

```cpp
bool IsEmpty() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la mappa è vuota; in caso contrario, FALSE.

## <a name="catlmapkinargtype"></a><a name="kinargtype"></a>CAtlMap:: KINARGTYPE

Tipo utilizzato quando un tasto viene passato come argomento di input.

```cpp
typedef KTraits::INARGTYPE KINARGTYPE;
```

## <a name="catlmapkoutargtype"></a><a name="koutargtype"></a>CAtlMap:: KOUTARGTYPE

Tipo utilizzato quando un tasto viene restituito come argomento di output.

```cpp
typedef KTraits::OUTARGTYPE KOUTARGTYPE;
```

## <a name="catlmaplookup"></a><a name="lookup"></a>CAtlMap:: Lookup

Chiamare questo metodo per cercare le `CAtlMap` chiavi o i valori nell'oggetto.

```cpp
bool Lookup(KINARGTYPE key, VOUTARGTYPE value) const;
const CPair* Lookup(KINARGTYPE key) const throw();
CPair* Lookup(KINARGTYPE key) throw();
```

### <a name="parameters"></a>Parametri

*key*<br/>
Specifica la chiave che identifica l'elemento da cercare.

*value*<br/>
Variabile che riceve il valore di ricerca.

### <a name="return-value"></a>Valore restituito

Il primo form del metodo restituisce true se la chiave viene trovata; in caso contrario, false. Il secondo e il terzo modulo restituiscono un puntatore a un [CPair](#cpair_class) che può essere usato come posizione per le chiamate a [CAtlMap:: GetNext](#getnext) e così via.

### <a name="remarks"></a>Osservazioni

`Lookup`Usa un algoritmo di hashing per trovare rapidamente l'elemento della mappa contenente una chiave che corrisponde esattamente al parametro di chiave specificato.

## <a name="catlmapoperator-"></a><a name="operator_at"></a>Operatore CAtlMap::\[\]

Sostituisce o aggiunge un nuovo elemento a `CAtlMap`.

```cpp
V& operator[](kinargtype key) throw();
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave dell'elemento da aggiungere o sostituire.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento al valore associato alla chiave specificata.

### <a name="example"></a>Esempio

Se la chiave esiste già, l'elemento viene sostituito. Se la chiave non esiste, viene aggiunto un nuovo elemento. Vedere l'esempio per [CAtlMap:: CAtlMap](#catlmap).

## <a name="catlmaprehash"></a><a name="rehash"></a>CAtlMap:: rehash

Chiamare questo metodo per rieseguire l' `CAtlMap` hashing dell'oggetto.

```cpp
void Rehash(UINT nBins = 0);
```

### <a name="parameters"></a>Parametri

*nBins*<br/>
Nuovo numero di contenitori da usare nella tabella hash. Per una spiegazione, vedere [CAtlMap:: CAtlMap](#catlmap) .

### <a name="remarks"></a>Osservazioni

Se *nBins* è 0, `CAtlMap` calcola un numero ragionevole in base al numero di elementi nella mappa e all'impostazione di carico ottimale. In genere il processo di rihashing è automatico, ma se [CAtlMap::D isableautorehash](#disableautorehash) è stato chiamato, questo metodo eseguirà il ridimensionamento necessario.

## <a name="catlmapremoveall"></a><a name="removeall"></a>CAtlMap:: RemoveAll

Chiamare questo metodo per rimuovere tutti gli elementi dall' `CAtlMap` oggetto.

```cpp
void RemoveAll() throw();
```

### <a name="remarks"></a>Osservazioni

Cancella l' `CAtlMap` oggetto, liberando la memoria usata per archiviare gli elementi.

## <a name="catlmapremoveatpos"></a><a name="removeatpos"></a>CAtlMap:: RemoveAtPos

Chiamare questo metodo per rimuovere l'elemento in corrispondenza della posizione specificata nell' `CAtlMap` oggetto.

```cpp
void RemoveAtPos(POSITION pos) throw();
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Il contatore della posizione, restituito da una chiamata precedente a [CAtlMap:: GetNextAssoc](#getnextassoc) o [CAtlMap:: GetStartPosition](#getstartposition).

### <a name="remarks"></a>Osservazioni

Rimuove la coppia chiave/valore archiviata nella posizione specificata. La memoria utilizzata per archiviare l'elemento viene liberata. La posizione a cui fa riferimento *pos* diventa non valida e mentre la posizione di altri elementi nella mappa rimane valida, non mantengono necessariamente lo stesso ordine.

## <a name="catlmapremovekey"></a><a name="removekey"></a>CAtlMap:: RemoveKey

Chiamare questo metodo per rimuovere un elemento dall' `CAtlMap` oggetto, in base alla chiave.

```cpp
bool RemoveKey(KINARGTYPE key) throw();
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave corrispondente alla coppia di elementi che si desidera rimuovere.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la chiave viene trovata e rimossa, FALSE in caso di errore.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlMap:: CAtlMap](#catlmap).

## <a name="catlmapsetat"></a><a name="setat"></a>CAtlMap:: SetAt

Chiamare questo metodo per inserire una coppia di elementi nella mappa.

```cpp
POSITION SetAt(
    KINARGTYPE key,
    VINARGTYPE value);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Valore della chiave da aggiungere all' `CAtlMap` oggetto.

*value*<br/>
Valore da aggiungere all' `CAtlMap` oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce la posizione della coppia di elementi chiave/valore nell' `CAtlMap` oggetto.

### <a name="remarks"></a>Osservazioni

`SetAt`sostituisce un elemento esistente se viene trovata una chiave corrispondente. Se la chiave non viene trovata, viene creata una nuova coppia chiave/valore.

## <a name="catlmapsetoptimalload"></a><a name="setoptimalload"></a>CAtlMap:: SetOptimalLoad

Chiamare questo metodo per impostare il carico ottimale dell' `CAtlMap` oggetto.

```cpp
void SetOptimalLoad(
    float fOptimalLoad,
    float fLoThreshold,
    float fHiThreshold,
    bool bRehashNow = false);
```

### <a name="parameters"></a>Parametri

*fOptimalLoad*<br/>
Rapporto di carico ottimale.

*fLoThreshold*<br/>
Soglia inferiore per il rapporto di carico.

*fHiThreshold*<br/>
Soglia superiore per il rapporto di carico.

*bRehashNow*<br/>
Flag che indica se la tabella hash deve essere ricalcolata.

### <a name="remarks"></a>Osservazioni

Questo metodo consente di ridefinire il valore di carico ottimale `CAtlMap` per l'oggetto. Per una descrizione dei vari parametri, vedere [CAtlMap:: CAtlMap](#catlmap) . Se *bRehashNow* è true e il numero di elementi non è compreso nei valori minimo e massimo, la tabella hash viene ricalcolata.

## <a name="catlmapsetvalueat"></a><a name="setvalueat"></a>CAtlMap:: SetValueAt

Chiamare questo metodo per modificare il valore archiviato in una determinata posizione nell' `CAtlMap` oggetto.

```cpp
void SetValueAt(
    POSITION pos,
    VINARGTYPE value);
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Il contatore della posizione, restituito da una chiamata precedente a [CAtlMap:: GetNextAssoc](#getnextassoc) o [CAtlMap:: GetStartPosition](#getstartposition).

*value*<br/>
Valore da aggiungere all' `CAtlMap` oggetto.

### <a name="remarks"></a>Osservazioni

Modifica l'elemento del valore archiviato in corrispondenza della posizione specificata `CAtlMap` nell'oggetto.

## <a name="catlmapvinargtype"></a><a name="vinargtype"></a>CAtlMap:: VINARGTYPE

Tipo utilizzato quando un valore viene passato come argomento di input.

```cpp
typedef VTraits::INARGTYPE VINARGTYPE;
```

## <a name="catlmapvoutargtype"></a><a name="voutargtype"></a>CAtlMap:: VOUTARGTYPE

Tipo utilizzato quando un valore viene passato come argomento di output.

```cpp
typedef VTraits::OUTARGTYPE VOUTARGTYPE;
```

## <a name="catlmapcpairm_key"></a><a name="m_key"></a>CAtlMap:: CPair:: m_key

Membro dati che archivia l'elemento chiave.

```cpp
const K m_key;
```

### <a name="parameters"></a>Parametri

*K*<br/>
Tipo di elemento chiave.

## <a name="catlmapcpairm_value"></a><a name="m_value"></a>CAtlMap:: CPair:: m_value

Membro dati che archivia l'elemento value.

```cpp
V  m_value;
```

### <a name="parameters"></a>Parametri

*V*<br/>
Tipo di elemento valore.

## <a name="see-also"></a>Vedere anche

[Esempio Marquee](../../overview/visual-cpp-samples.md)<br/>
[Esempio UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
