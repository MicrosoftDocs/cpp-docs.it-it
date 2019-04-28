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
ms.openlocfilehash: 1821532a4d5a3078202f180273b02945b8d8e4ba
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62260610"
---
# <a name="catlmap-class"></a>Classe CAtlMap

Questa classe fornisce metodi per creare e gestire un oggetto map.

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
Il tipo di elemento key.

*V*<br/>
Il tipo di elemento di valore.

*KTraits*<br/>
Il codice usato per copiare o spostare gli elementi chiave. Visualizzare [classe CElementTraits](../../atl/reference/celementtraits-class.md) per altri dettagli.

*VTraits*<br/>
Il codice usato per copiare o spostare gli elementi di valore.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlMap::KINARGTYPE](#kinargtype)|Tipo utilizzato quando una chiave viene passata come argomento di input|
|[CAtlMap::KOUTARGTYPE](#koutargtype)|Tipo utilizzato quando una chiave viene restituita come argomento di output.|
|[CAtlMap::VINARGTYPE](#vinargtype)|Tipo utilizzato quando un valore viene passato come argomento di input.|
|[CAtlMap::VOUTARGTYPE](#voutargtype)|Tipo utilizzato quando un valore viene passato come argomento di output.|

### <a name="public-classes"></a>Classi pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[Classe CAtlMap::CPair](#cpair_class)|Una classe che contiene gli elementi chiave / valore.|

### <a name="cpair-data-members"></a>Membri dati CPair

|Nome|Descrizione|
|----------|-----------------|
|[CPair::m_key](#m_key)|Membro dati archiviare l'elemento principale.|
|[CPair::m_value](#m_value)|Membro dati archiviare l'elemento valore.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlMap::CAtlMap](#catlmap)|Costruttore.|
|[CAtlMap::~CAtlMap](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlMap::AssertValid](#assertvalid)|Chiamare questo metodo per generare un'ASSERZIONE se il `CAtlMap` non è valido.|
|[CAtlMap::DisableAutoRehash](#disableautorehash)|Chiamare questo metodo per disabilitare generando automatica del `CAtlMap` oggetto.|
|[CAtlMap::EnableAutoRehash](#enableautorehash)|Chiamare questo metodo per abilitare generando automatica del `CAtlMap` oggetto.|
|[CAtlMap::GetAt](#getat)|Chiamare questo metodo per restituire l'elemento in una posizione specificata nella mappa.|
|[CAtlMap::GetCount](#getcount)|Chiamare questo metodo per recuperare il numero di elementi nella mappa.|
|[CAtlMap::GetHashTableSize](#gethashtablesize)|Chiamare questo metodo per determinare il numero di bin nella tabella di hash della mappa.|
|[CAtlMap::GetKeyAt](#getkeyat)|Chiamare questo metodo per recuperare la chiave archiviata in corrispondenza della posizione specificata nel `CAtlMap` oggetto.|
|[CAtlMap::GetNext](#getnext)|Chiamare questo metodo per ottenere un puntatore al successivo elemento archiviata nella coppia di `CAtlMap` oggetto.|
|[CAtlMap::GetNextAssoc](#getnextassoc)|Ottiene l'elemento successivo per eseguire l'iterazione.|
|[CAtlMap::GetNextKey](#getnextkey)|Chiamare questo metodo per recuperare la successiva chiave dal `CAtlMap` oggetto.|
|[CAtlMap::GetNextValue](#getnextvalue)|Chiamare questo metodo per ottenere il successivo valore di `CAtlMap` oggetto.|
|[CAtlMap::GetStartPosition](#getstartposition)|Chiamare questo metodo per avviare un'iterazione della mappa.|
|[CAtlMap::GetValueAt](#getvalueat)|Chiamare questo metodo per recuperare il valore archiviato nella posizione specificata nel `CAtlMap` oggetto.|
|[CAtlMap::InitHashTable](#inithashtable)|Chiamare questo metodo per inizializzare la tabella hash.|
|[CAtlMap::IsEmpty](#isempty)|Chiamare questo metodo per verificare se un oggetto map vuoto.|
|[CAtlMap::Lookup](#lookup)|Chiamare questo metodo per cercare le chiavi o valori di `CAtlMap` oggetto.|
|[CAtlMap::Rehash](#rehash)|Chiamare questo metodo offrire il `CAtlMap` oggetto.|
|[CAtlMap::RemoveAll](#removeall)|Chiamare questo metodo per rimuovere tutti gli elementi dal `CAtlMap` oggetto.|
|[CAtlMap::RemoveAtPos](#removeatpos)|Chiamare questo metodo per rimuovere l'elemento in corrispondenza della posizione specificata nel `CAtlMap` oggetto.|
|[CAtlMap::RemoveKey](#removekey)|Chiamare questo metodo per rimuovere un elemento di `CAtlMap` oggetto, viene assegnato la chiave.|
|[CAtlMap::SetAt](#setat)|Chiamare questo metodo per inserire una coppia di elementi nella mappa.|
|[CAtlMap::SetOptimalLoad](#setoptimalload)|Chiamare questo metodo per impostare il carico ottima del `CAtlMap` oggetto.|
|[CAtlMap::SetValueAt](#setvalueat)|Chiamare questo metodo per modificare il valore archiviato nella posizione specificata nel `CAtlMap` oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlMap::operator\[\]](catlmap-class.md#operator_at)|Sostituisce o aggiunge un nuovo elemento per il `CAtlMap`.|

## <a name="remarks"></a>Note

`CAtlMap` fornisce supporto per una matrice di mapping di un determinato tipo, la gestione di una matrice non ordinata di elementi chiave e i relativi valori associati. Elementi (costituito da una chiave e valore) vengono archiviati usando un algoritmo di hash, che consente una grande quantità di dati archiviati e recuperati in modo efficiente.

Il *KTraits* e *VTraits* i parametri sono traits (classi) che contengono il codice necessario per copiare o spostare elementi supplementare.

Un'alternativa al `CAtlMap` è disponibile per il [CRBMap](../../atl/reference/crbmap-class.md) classe. `CRBMap` inoltre archivia coppie chiave/valore, ma presenta diverse caratteristiche di prestazioni. Il tempo impiegato per inserire un elemento, cercare una chiave o eliminare una chiave da un `CRBMap` oggetto è di ordine *log(n)*, dove *n* è il numero di elementi. Per la `CAtlMap`, tutte queste operazioni hanno in genere un tempo costante, anche se potrebbero essere peggiori scenari immaginabili dell'ordine *n*. Pertanto, in un caso tipico, `CAtlMap` è più veloce.

L'altra differenza tra `CRBMap` e `CAtlMap` diventa evidente quando si scorrono gli elementi archiviati. In un `CRBMap`, visitati gli elementi ordinati. In un `CAtlMap`, gli elementi non sono ordinati e non può essere dedotto alcun ordine.

Quando un numero ridotto di elementi desidera essere archiviati, è consigliabile usare la [CSimpleMap](../../atl/reference/csimplemap-class.md) classe.

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

##  <a name="assertvalid"></a>  CAtlMap::AssertValid

Chiamare questo metodo per generare un'ASSERZIONE se il `CAtlMap` oggetto non è valido.

```
void AssertValid() const;
```

### <a name="remarks"></a>Note

Nelle build di debug, questo metodo genererà un'ASSERZIONE se il `CAtlMap` oggetto non è valido.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CAtlMap:: CAtlMap](#catlmap).

##  <a name="catlmap"></a>  CAtlMap::CAtlMap

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

*nBins*<br/>
Il numero di bin fornendo i puntatori agli elementi archiviati. Vedere la sezione Osservazioni più avanti in questo argomento per una spiegazione di bin.

*fOptimalLoad*<br/>
Il rapporto tra carico ottimale.

*fLoThreshold*<br/>
La soglia inferiore per il rapporto tra carico.

*fHiThreshold*<br/>
La soglia superiore per il rapporto tra carico.

*nBlockSize*<br/>
La dimensione del blocco.

### <a name="remarks"></a>Note

`CAtlMap` fa riferimento a tutti i relativi elementi stored creando innanzitutto un indice usando un algoritmo di hash per la chiave. Questo indice fa riferimento a un "bin" che contiene un puntatore agli elementi archiviati. Se il contenitore è già in uso, viene creato un elenco collegato per accedere agli elementi successivi. Attraversamento di un elenco è più lento dell'accesso direttamente l'elemento corretto e deve quindi risalire la struttura della mappa a bilanciare i requisiti di archiviazione rispetto alle prestazioni. I parametri predefiniti sono stati scelti per offrire risultati validi nella maggior parte dei casi.

Il rapporto tra carico è il rapporto tra il numero di bin per il numero di elementi archiviati nell'oggetto map. Quando viene ricalcolata la struttura della mappa, il *fOptimalLoad* verrà utilizzato il valore di parametro per la quale calcolare il numero di bin necessari. Questo valore può essere modificato tramite il [CAtlMap::SetOptimalLoad](#setoptimalload) (metodo).

Il *fLoThreshold* parametro è il valore più basso che può raggiungere il rapporto tra carico prima `CAtlMap` Ricalcola le dimensioni ottimale della mappa.

Il *fHiThreshold* parametro è il valore massimo che il rapporto tra carico può raggiungere prima i `CAtlMap` oggetto Ricalcola le dimensioni ottimale della mappa.

Questo processo di ricalcolo (noto come generando) è abilitato per impostazione predefinita. Se si desidera disabilitare questo processo, ad esempio quando si immette una grande quantità di dati in una sola volta, chiamata di [CAtlMap::DisableAutoRehash](#disableautorehash) (metodo). Riattivarla con il [CAtlMap::EnableAutoRehash](#enableautorehash) (metodo).

Il *nBlockSize* parametro è una misura della quantità di memoria allocata quando un nuovo elemento è obbligatorio. Blocchi di dimensioni maggiori riducono le chiamate alle routine di allocazione della memoria, ma usano più risorse.

Prima di tutti i dati possono essere archiviati, è necessario inizializzare la tabella hash con una chiamata a [CAtlMap::InitHashTable](#inithashtable).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#72](../../atl/codesnippet/cpp/catlmap-class_1.cpp)]

##  <a name="dtor"></a>  CAtlMap::~CAtlMap

Distruttore.

```
~CAtlMap() throw();
```

### <a name="remarks"></a>Note

Libera tutte le risorse allocate.

##  <a name="cpair_class"></a>  Classe CAtlMap::CPair

Una classe che contiene gli elementi chiave / valore.

```
class CPair : public __POSITION
```

### <a name="remarks"></a>Note

Questa classe viene utilizzata dai metodi [CAtlMap::GetNext](#getnext) e [CAtlMap::Lookup](#lookup) accedere agli elementi chiave e il valore archiviati nella struttura di mapping.

##  <a name="disableautorehash"></a>  CAtlMap::DisableAutoRehash

Chiamare questo metodo per disabilitare generando automatica del `CAtlMap` oggetto.

```
void DisableAutoRehash() throw();
```

### <a name="remarks"></a>Note

Quando generando automatico è abilitato (ovvero l'impostazione predefinita), il numero di bin nella tabella hash verrà ricalcolato automaticamente se il valore di carico (il rapporto tra il numero di bin sul numero di elementi della matrice archiviati) supera i valori massimi o minimi specificato al momento che della creazione della mappa.

`DisableAutoRehash` è particolarmente utile quando un numero elevato di elementi verrà aggiunto alla mappa in una sola volta. Invece di attivare il processo rehashing ogni volta che vengono superati i limiti, è più efficiente per chiamare `DisableAutoRehash`, aggiungere gli elementi e infine chiamare [CAtlMap::EnableAutoRehash](#enableautorehash).

##  <a name="enableautorehash"></a>  CAtlMap::EnableAutoRehash

Chiamare questo metodo per abilitare generando automatica del `CAtlMap` oggetto.

```
void EnableAutoRehash() throw();
```

### <a name="remarks"></a>Note

Quando generando automatico è abilitato (ovvero l'impostazione predefinita), il numero di bin nella tabella hash verrà ricalcolato automaticamente se il valore di carico (il rapporto tra il numero di bin sul numero di elementi della matrice archiviati) supera i valori massimi o minimi specificato al momento che della creazione della mappa.

`EnableAutoRefresh` vengono spesso usati dopo una chiamata a [CAtlMap::DisableAutoRehash](#disableautorehash).

##  <a name="getat"></a>  CAtlMap::GetAt

Chiamare questo metodo per restituire l'elemento in una posizione specificata nella mappa.

```
void GetAt(
    POSITION pos,
    KOUTARGTYPE key,
    VOUTARGTYPE value) const;

CPair* GetAt(POSITION& pos) throw();
```

### <a name="parameters"></a>Parametri

*pos*<br/>
Il contatore di posizione, restituito da una chiamata precedente a [CAtlMap:: GetNextAssoc](#getnextassoc) oppure [CAtlMap:: GetStartPosition](#getstartposition).

*key*<br/>
Parametro di modello che specifica il tipo di chiave della mappa.

*value*<br/>
Parametro di modello che specifica il tipo del valore della mappa.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore a una coppia di elementi chiave/valore archiviati nella mappa corrente.

### <a name="remarks"></a>Note

Nelle build di debug, si verifica un errore di asserzione se *pos* è uguale a NULL.

##  <a name="getcount"></a>  CAtlMap::GetCount

Chiamare questo metodo per recuperare il numero di elementi nella mappa.

```
size_t GetCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di elementi nell'oggetto map. Un singolo elemento è una coppia chiave/valore.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CAtlMap:: CAtlMap](#catlmap).

##  <a name="gethashtablesize"></a>  CAtlMap::GetHashTableSize

Chiamare questo metodo per determinare il numero di bin nella tabella di hash della mappa.

```
UINT GetHashTableSize() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di bin nella tabella hash. Visualizzare [CAtlMap:: CAtlMap](#catlmap) per una spiegazione.

##  <a name="getkeyat"></a>  CAtlMap::GetKeyAt

Chiamare questo metodo per recuperare la chiave archiviata in corrispondenza della posizione specificata nel `CAtlMap` oggetto.

```
const K& GetKeyAt(POSITION pos) const throw();
```

### <a name="parameters"></a>Parametri

*pos*<br/>
Il contatore di posizione, restituito da una chiamata precedente a [CAtlMap:: GetNextAssoc](#getnextassoc) oppure [CAtlMap:: GetStartPosition](#getstartposition).

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento alla chiave di cui è archiviato in corrispondenza della posizione specificata nel `CAtlMap` oggetto.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CAtlMap:: CAtlMap](#catlmap).

##  <a name="getnext"></a>  CAtlMap::GetNext

Chiamare questo metodo per ottenere un puntatore al successivo elemento archiviata nella coppia di `CAtlMap` oggetto.

```
CPair* GetNext(POSITION& pos) throw();
const CPair* GetNext(POSITION& pos) const throw();
```

### <a name="parameters"></a>Parametri

*pos*<br/>
Il contatore di posizione, restituito da una chiamata precedente a [CAtlMap:: GetNextAssoc](#getnextassoc) oppure [CAtlMap:: GetStartPosition](#getstartposition).

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla successiva coppia di elementi chiave/valore archiviati nella mappa. Il *pos* posizione contatore viene aggiornato dopo ogni chiamata. Se l'elemento recuperato è l'ultimo nella mappa *pos* è impostato su NULL.

##  <a name="getnextassoc"></a>  CAtlMap::GetNextAssoc

Ottiene l'elemento successivo per eseguire l'iterazione.

```
void GetNextAssoc(
    POSITION& pos,
    KOUTARGTYPE key,
    VOUTARGTYPE value) const;
```

### <a name="parameters"></a>Parametri

*pos*<br/>
Il contatore di posizione, restituito da una chiamata precedente a [CAtlMap:: GetNextAssoc](#getnextassoc) oppure [CAtlMap:: GetStartPosition](#getstartposition).

*key*<br/>
Parametro di modello che specifica il tipo di chiave della mappa.

*value*<br/>
Parametro di modello che specifica il tipo del valore della mappa.

### <a name="remarks"></a>Note

Il *pos* posizione contatore viene aggiornato dopo ogni chiamata. Se l'elemento recuperato è l'ultimo nella mappa *pos* è impostato su NULL.

##  <a name="getnextkey"></a>  CAtlMap::GetNextKey

Chiamare questo metodo per recuperare la successiva chiave dal `CAtlMap` oggetto.

```
const K& GetNextKey(POSITION& pos) const throw();
```

### <a name="parameters"></a>Parametri

*pos*<br/>
Il contatore di posizione, restituito da una chiamata precedente a [CAtlMap:: GetNextAssoc](#getnextassoc) oppure [CAtlMap:: GetStartPosition](#getstartposition).

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento alla chiave del successivo nella mappa.

### <a name="remarks"></a>Note

Aggiornamento del contatore di posizione corrente, *pos*. Se non sono presenti più voci nella mappa, il contatore di posizione è impostato su NULL.

##  <a name="getnextvalue"></a>  CAtlMap::GetNextValue

Chiamare questo metodo per ottenere il successivo valore di `CAtlMap` oggetto.

```
V& GetNextValue(POSITION& pos) throw();
const V& GetNextValue(POSITION& pos) const throw();
```

### <a name="parameters"></a>Parametri

*pos*<br/>
Il contatore di posizione, restituito da una chiamata precedente a [CAtlMap:: GetNextAssoc](#getnextassoc) oppure [CAtlMap:: GetStartPosition](#getstartposition).

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento al valore successivo nella mappa.

### <a name="remarks"></a>Note

Aggiornamento del contatore di posizione corrente, *pos*. Se non sono presenti più voci nella mappa, il contatore di posizione è impostato su NULL.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CAtlMap:: CAtlMap](#catlmap).

##  <a name="getstartposition"></a>  CAtlMap::GetStartPosition

Chiamare questo metodo per avviare un'iterazione della mappa.

```
POSITION GetStartPosition() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce che la posizione iniziale, o NULL viene restituito se la mappa è vuota.

### <a name="remarks"></a>Note

Chiamata di questo metodo per avviare un'iterazione della mappa, restituendo una posizione di valore che può essere passato al `GetNextAssoc` (metodo).

> [!NOTE]
>  La sequenza di iterazione non è possibile prevedere

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CAtlMap:: CAtlMap](#catlmap).

##  <a name="getvalueat"></a>  CAtlMap::GetValueAt

Chiamare questo metodo per recuperare il valore archiviato nella posizione specificata nel `CAtlMap` oggetto.

```
V& GetValueAt(POSITION pos) throw();
const V& GetValueAt(POSITION pos) const throw();
```

### <a name="parameters"></a>Parametri

*pos*<br/>
Il contatore di posizione, restituito da una chiamata precedente a [CAtlMap:: GetNextAssoc](#getnextassoc) oppure [CAtlMap:: GetStartPosition](#getstartposition).

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento al valore archiviato nella posizione specificata nel `CAtlMap` oggetto.

##  <a name="inithashtable"></a>  CAtlMap::InitHashTable

Chiamare questo metodo per inizializzare la tabella hash.

```
bool InitHashTable(
    UINT nBins,
    bool bAllocNow = true);
```

### <a name="parameters"></a>Parametri

*nBins*<br/>
Il numero di bin utilizzato dalla tabella di hash. Visualizzare [CAtlMap:: CAtlMap](#catlmap) per una spiegazione.

*bAllocNow*<br/>
Un'indicazione di flag quando di memoria da allocare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE durante l'inizializzazione ha esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Note

`InitHashTable` deve essere chiamato prima che tutti gli elementi vengono archiviati nella tabella hash.  Se questo metodo non viene chiamato in modo esplicito, verrà chiamato automaticamente la prima volta un elemento venga aggiunto mediante il conteggio di bin specificato da di `CAtlMap` costruttore.  In caso contrario, la mappa verrà inizializzata utilizzando il nuovo numero di bin specificato per il *nBins* parametro.

Se il *bAllocNow* parametro ha valore false, la memoria necessaria per la tabella hash non verrà allocata fino a quando non è innanzitutto necessario. Ciò può essere utile se è incerto se la mappa verrà utilizzata.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CAtlMap:: CAtlMap](#catlmap).

##  <a name="isempty"></a>  CAtlMap::IsEmpty

Chiamare questo metodo per verificare se un oggetto map vuoto.

```
bool IsEmpty() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la mappa è vuota, FALSE in caso contrario.

##  <a name="kinargtype"></a>  CAtlMap::KINARGTYPE

Tipo utilizzato quando una chiave viene passata come argomento di input.

```
typedef KTraits::INARGTYPE KINARGTYPE;
```

##  <a name="koutargtype"></a>  CAtlMap::KOUTARGTYPE

Tipo utilizzato quando una chiave viene restituita come argomento di output.

```
typedef KTraits::OUTARGTYPE KOUTARGTYPE;
```

##  <a name="lookup"></a>  CAtlMap::Lookup

Chiamare questo metodo per cercare le chiavi o valori di `CAtlMap` oggetto.

```
bool Lookup(KINARGTYPE key, VOUTARGTYPE value) const;
const CPair* Lookup(KINARGTYPE key) const throw();
CPair* Lookup(KINARGTYPE key) throw();
```

### <a name="parameters"></a>Parametri

*key*<br/>
Specifica la chiave che identifica l'elemento per essere cercato.

*value*<br/>
Variabile che riceve il valore cercato.

### <a name="return-value"></a>Valore restituito

Il primo form del metodo restituisce true se la chiave viene trovata, in caso contrario, false. Le forme seconda e terza restituiscono un puntatore a un [CPair](#cpair_class) utilizzabile come posizione per le chiamate ai [CAtlMap::GetNext](#getnext) e così via.

### <a name="remarks"></a>Note

`Lookup` Usa un algoritmo di hash per trovare rapidamente l'elemento della mappa contenente una chiave che corrisponde esattamente al parametro di chiave specificato.

##  <a name="operator_at"></a>  CAtlMap::operator \[\]

Sostituisce o aggiunge un nuovo elemento per il `CAtlMap`.

```
V& operator[](kinargtype key) throw();
```

### <a name="parameters"></a>Parametri

*key*<br/>
La chiave dell'elemento da aggiungere o sostituire.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento al valore associato alla chiave specificata.

### <a name="example"></a>Esempio

Se la chiave esiste già, l'elemento viene sostituito. Se la chiave non esiste, viene aggiunto un nuovo elemento. Vedere l'esempio relativo [CAtlMap:: CAtlMap](#catlmap).

##  <a name="rehash"></a>  CAtlMap::Rehash

Chiamare questo metodo offrire il `CAtlMap` oggetto.

```
void Rehash(UINT nBins = 0);
```

### <a name="parameters"></a>Parametri

*nBins*<br/>
Nuovo numero di contenitori da usare nella tabella hash. Visualizzare [CAtlMap:: CAtlMap](#catlmap) per una spiegazione.

### <a name="remarks"></a>Note

Se *nBins* è 0, `CAtlMap` calcola un numero ragionevole in base al numero di elementi nella mappa e l'impostazione di caricamento ottimali. In genere il processo rehashing è automatico, tuttavia, se [CAtlMap::DisableAutoRehash](#disableautorehash) è stato chiamato, questo metodo esegue il ridimensionamento del necessario.

##  <a name="removeall"></a>  CAtlMap::RemoveAll

Chiamare questo metodo per rimuovere tutti gli elementi dal `CAtlMap` oggetto.

```
void RemoveAll() throw();
```

### <a name="remarks"></a>Note

Cancella il `CAtlMap` oggetto, liberando la memoria utilizzata per archiviare gli elementi.

##  <a name="removeatpos"></a>  CAtlMap::RemoveAtPos

Chiamare questo metodo per rimuovere l'elemento in corrispondenza della posizione specificata nel `CAtlMap` oggetto.

```
void RemoveAtPos(POSITION pos) throw();
```

### <a name="parameters"></a>Parametri

*pos*<br/>
Il contatore di posizione, restituito da una chiamata precedente a [CAtlMap:: GetNextAssoc](#getnextassoc) oppure [CAtlMap:: GetStartPosition](#getstartposition).

### <a name="remarks"></a>Note

Rimuove la coppia chiave/valore archiviata nella posizione specificata. Viene liberata la memoria utilizzata per archiviare l'elemento. Fa riferimento alla posizione *pos* diventa non valido e mentre la posizione di tutti gli altri elementi della mappa rimane valida, lo fanno non necessariamente mantenere lo stesso ordine.

##  <a name="removekey"></a>  CAtlMap::RemoveKey

Chiamare questo metodo per rimuovere un elemento di `CAtlMap` oggetto, viene assegnato la chiave.

```
bool RemoveKey(KINARGTYPE key) throw();
```

### <a name="parameters"></a>Parametri

*key*<br/>
La chiave corrispondente alla coppia di elementi di cui si desidera rimuovere.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la chiave è stato trovato e rimosso, FALSE in caso di errore.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CAtlMap:: CAtlMap](#catlmap).

##  <a name="setat"></a>  CAtlMap::SetAt

Chiamare questo metodo per inserire una coppia di elementi nella mappa.

```
POSITION SetAt(
    KINARGTYPE key,
    VINARGTYPE value);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Il valore della chiave da aggiungere per il `CAtlMap` oggetto.

*value*<br/>
Il valore da aggiungere al `CAtlMap` oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce la posizione della coppia chiave/valore elemento all'interno di `CAtlMap` oggetto.

### <a name="remarks"></a>Note

`SetAt` sostituisce un elemento esistente se viene trovata una chiave corrispondente. Se la chiave non viene trovata, viene creata una nuova coppia chiave/valore.

##  <a name="setoptimalload"></a>  CAtlMap::SetOptimalLoad

Chiamare questo metodo per impostare il carico ottima del `CAtlMap` oggetto.

```
void SetOptimalLoad(
    float fOptimalLoad,
    float fLoThreshold,
    float fHiThreshold,
    bool bRehashNow = false);
```

### <a name="parameters"></a>Parametri

*fOptimalLoad*<br/>
Il rapporto tra carico ottimale.

*fLoThreshold*<br/>
La soglia inferiore per il rapporto tra carico.

*fHiThreshold*<br/>
La soglia superiore per il rapporto tra carico.

*bRehashNow*<br/>
Flag che indica se la tabella hash deve essere ricalcolata.

### <a name="remarks"></a>Note

Questo metodo consente di ridefinire il valore di caricamento ottimali per il `CAtlMap` oggetto. Visualizzare [CAtlMap:: CAtlMap](#catlmap) per una descrizione dei diversi parametri. Se *bRehashNow* è true e il numero di elementi non è compreso i valori minimi e massimo, la tabella hash viene ricalcolata.

##  <a name="setvalueat"></a>  CAtlMap::SetValueAt

Chiamare questo metodo per modificare il valore archiviato nella posizione specificata nel `CAtlMap` oggetto.

```
void SetValueAt(
    POSITION pos,
    VINARGTYPE value);
```

### <a name="parameters"></a>Parametri

*pos*<br/>
Il contatore di posizione, restituito da una chiamata precedente a [CAtlMap:: GetNextAssoc](#getnextassoc) oppure [CAtlMap:: GetStartPosition](#getstartposition).

*value*<br/>
Il valore da aggiungere al `CAtlMap` oggetto.

### <a name="remarks"></a>Note

Modifica l'elemento di valore archiviato nella posizione specificata nel `CAtlMap` oggetto.

##  <a name="vinargtype"></a>  CAtlMap::VINARGTYPE

Tipo utilizzato quando un valore viene passato come argomento di input.

```
typedef VTraits::INARGTYPE VINARGTYPE;
```

##  <a name="voutargtype"></a>  CAtlMap::VOUTARGTYPE

Tipo utilizzato quando un valore viene passato come argomento di output.

```
typedef VTraits::OUTARGTYPE VOUTARGTYPE;
```

##  <a name="m_key"></a>  CAtlMap::CPair::m_key

Membro dati archiviare l'elemento principale.

```
const K m_key;
```

### <a name="parameters"></a>Parametri

*K*<br/>
Il tipo di elemento key.

##  <a name="m_value"></a>  CAtlMap::CPair::m_value

Membro dati archiviare l'elemento valore.

```
V  m_value;
```

### <a name="parameters"></a>Parametri

*V*<br/>
Il tipo di elemento di valore.

## <a name="see-also"></a>Vedere anche

[Esempio di testo scorrevole](../../overview/visual-cpp-samples.md)<br/>
[Esempio UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
