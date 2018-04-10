---
title: Classe CAtlMap | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CAtlMap class
ms.assetid: 5e2fe028-8e6d-4686-93df-1433d2080ec3
caps.latest.revision: 21
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9166e8f7804a3138d3e891fbe15b54cb0e270811
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="catlmap-class"></a>Classe CAtlMap
Questa classe fornisce metodi per la creazione e gestione di un oggetto mappa.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <typename K,
          typename V, 
          class KTraits = CElementTraits<K>, 
          class VTraits = CElementTraits<V>>
class CAtlMap
```  
  
#### <a name="parameters"></a>Parametri  
 `K`  
 Il tipo di elemento key.  
  
 V  
 Il tipo di elemento di valore.  
  
 `KTraits`  
 Il codice utilizzato per copiare o spostare gli elementi principali. Vedere [CElementTraits classe](../../atl/reference/celementtraits-class.md) per altri dettagli.  
  
 `VTraits`  
 Il codice utilizzato per copiare o spostare gli elementi di valore.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlMap::KINARGTYPE](#kinargtype)|Tipo utilizzato per una chiave viene passata come argomento di input|  
|[CAtlMap::KOUTARGTYPE](#koutargtype)|Tipo utilizzato per una chiave viene restituita come argomento di output.|  
|[CAtlMap::VINARGTYPE](#vinargtype)|Tipo utilizzato quando un valore viene passato come argomento di input.|  
|[CAtlMap::VOUTARGTYPE](#voutargtype)|Tipo utilizzato quando un valore viene passato come argomento di output.|  
  
### <a name="public-classes"></a>Classi pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Classe CAtlMap::CPair](#cpair_class)|Una classe che contiene gli elementi chiave / valore.|  

  
### <a name="cpair-data-members"></a>Membri dati CPair  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CPair::m_key](#m_key)|Il membro dati archiviare l'elemento principale.|  
|[CPair::m_value](#m_value)|Il membro dati archiviare l'elemento valore.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlMap:: CAtlMap](#catlmap)|Costruttore.|  
|[CAtlMap:: ~ CAtlMap](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlMap::AssertValid](#assertvalid)|Chiamare questo metodo per un'ASSERZIONE se il `CAtlMap` non è valido.|  
|[CAtlMap::DisableAutoRehash](#disableautorehash)|Chiamare questo metodo per disabilitare generando un nuovo hash automatica del `CAtlMap` oggetto.|  
|[CAtlMap::EnableAutoRehash](#enableautorehash)|Chiamare questo metodo per abilitare generando un nuovo hash automatica del `CAtlMap` oggetto.|  
|[CAtlMap::GetAt](#getat)|Chiamare questo metodo per restituire l'elemento in una posizione specificata nella mappa.|  
|[CAtlMap::GetCount](#getcount)|Chiamare questo metodo per recuperare il numero di elementi nella mappa.|  
|[CAtlMap::GetHashTableSize](#gethashtablesize)|Chiamare questo metodo per determinare il numero di bin nella tabella di hash della mappa.|  
|[CAtlMap::GetKeyAt](#getkeyat)|Chiamare questo metodo per recuperare la chiave archiviata in corrispondenza della posizione specificata nel `CAtlMap` oggetto.|  
|[CAtlMap::GetNext](#getnext)|Chiamare questo metodo per ottenere un puntatore all'elemento successivo archiviata nella coppia di `CAtlMap` oggetto.|  
|[CAtlMap:: GetNextAssoc](#getnextassoc)|Ottiene l'elemento successivo per eseguire l'iterazione.|  
|[CAtlMap::GetNextKey](#getnextkey)|Chiamare questo metodo per recuperare la chiave dal successiva il `CAtlMap` oggetto.|  
|[CAtlMap::GetNextValue](#getnextvalue)|Chiamare questo metodo per ottenere il successivo valore di `CAtlMap` oggetto.|  
|[CAtlMap:: GetStartPosition](#getstartposition)|Chiamare questo metodo per avviare un'iterazione di mappa.|  
|[CAtlMap::GetValueAt](#getvalueat)|Chiamare questo metodo per recuperare il valore archiviato in una posizione specificata di `CAtlMap` oggetto.|  
|[CAtlMap::InitHashTable](#inithashtable)|Chiamare questo metodo per inizializzare la tabella hash.|  
|[CAtlMap::IsEmpty](#isempty)|Chiamare questo metodo per verificare la presenza di un oggetto mappa vuota.|  
|[CAtlMap::Lookup](#lookup)|Chiamare questo metodo per cercare di chiavi o valori di `CAtlMap` oggetto.|  
|[CAtlMap::Rehash](#rehash)|Chiamare questo metodo per rehash il `CAtlMap` oggetto.|  
|[CAtlMap::RemoveAll](#removeall)|Chiamare questo metodo per rimuovere tutti gli elementi dal `CAtlMap` oggetto.|  
|[CAtlMap::RemoveAtPos](#removeatpos)|Chiamare questo metodo per rimuovere l'elemento in corrispondenza della posizione specificata nel `CAtlMap` oggetto.|  
|[CAtlMap::RemoveKey](#removekey)|Chiamare questo metodo per rimuovere un elemento di `CAtlMap` oggetto, dato la chiave.|  
|[CAtlMap::SetAt](#setat)|Chiamare questo metodo per inserire una coppia di elementi nella mappa.|  
|[CAtlMap::SetOptimalLoad](#setoptimalload)|Chiamare questo metodo per impostare il carico di ottimale di `CAtlMap` oggetto.|  
|[CAtlMap::SetValueAt](#setvalueat)|Chiamare questo metodo per modificare il valore archiviato in una posizione specificata di `CAtlMap` oggetto.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlMap::operator\[\]](catlmap-class.md#operator_at)|Sostituisce o aggiunge un nuovo elemento per il `CAtlMap`.|  

  
## <a name="remarks"></a>Note  
 `CAtlMap`fornisce supporto per una matrice di mapping di un tipo specificato, la gestione di una matrice non ordinata di elementi chiave e i relativi valori associati. Gli elementi (costituito da una chiave e valore) vengono archiviati usando un algoritmo di hash, consentendo una grande quantità di dati archiviati e recuperati in modo efficiente.  
  
 Il `KTraits` e `VTraits` i parametri sono traits (classi) che contiene codice aggiuntivo necessario per copiare o spostare elementi.  
  
 Un'alternativa al `CAtlMap` è offerto di [CRBMap](../../atl/reference/crbmap-class.md) classe. `CRBMap`inoltre archivia coppie chiave/valore, ma presenta le caratteristiche di prestazioni diverse. Il tempo impiegato per inserire un elemento, cercare una chiave o eliminare una chiave da un `CRBMap` oggetto è di ordine *log(n)*, dove  *n*  è il numero di elementi. Per `CAtlMap`, tutte le operazioni richiedono in genere un tempo costante, anche se potrebbero essere peggiori scenari immaginabili dell'ordine  *n* . Pertanto, in un caso tipico, `CAtlMap` è più veloce.  
  
 Altra differenza tra `CRBMap` e `CAtlMap` diventa evidente quando si scorrono gli elementi stored. In un `CRBMap`, gli elementi vengono visitati con un ordinamento. In un `CAtlMap`, gli elementi non sono ordinati e non è possibile dedurre alcun ordine.  
  
 Quando un numero ridotto di elementi desidera essere archiviati, è consigliabile utilizzare il [CSimpleMap](../../atl/reference/csimplemap-class.md) classe.  
  
 Per ulteriori informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="assertvalid"></a>CAtlMap::AssertValid  
 Chiamare questo metodo per un'ASSERZIONE se il `CAtlMap` oggetto non è valido.  
  
```
void AssertValid() const;
```  
  
### <a name="remarks"></a>Note  
 Nelle build di debug, questo metodo genererà un'ASSERZIONE se il `CAtlMap` oggetto non è valido.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CAtlMap:: CAtlMap](#catlmap).  
  
##  <a name="catlmap"></a>CAtlMap:: CAtlMap  
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
 `nBins`  
 Il numero di bin che fornisce i puntatori agli elementi stored. Vedere la sezione Osservazioni più avanti in questo argomento per una spiegazione di bin.  
  
 `fOptimalLoad`  
 Il rapporto tra carico ottimale.  
  
 `fLoThreshold`  
 La soglia inferiore per il rapporto tra carico.  
  
 `fHiThreshold`  
 Soglia superiore per il rapporto tra carico.  
  
 `nBlockSize`  
 La dimensione del blocco.  
  
### <a name="remarks"></a>Note  
 `CAtlMap`fa riferimento a tutti i relativi elementi stored creando innanzitutto un indice utilizzando un algoritmo di hash per la chiave. L'indice fa riferimento a un "bin" che contiene un puntatore agli elementi stored. Se la collocazione è già in uso, viene creato un elenco collegato per accedere agli elementi successivi. Attraversamento di un elenco è più lento dell'accesso direttamente l'elemento corretto e pertanto è necessario bilanciare i requisiti di archiviazione rispetto alle prestazioni della struttura della mappa. I parametri predefiniti sono state scelte per assegnare buoni risultati nella maggior parte dei casi.  
  
 Il rapporto carico è il rapporto tra il numero di bin per il numero di elementi archiviati nell'oggetto map. Quando viene ricalcolata la struttura della mappa, la *fOptimalLoad* valore del parametro da utilizzare per calcolare il numero di bin necessari. Questo valore può essere modificato tramite il [CAtlMap::SetOptimalLoad](#setoptimalload) metodo.  
  
 Il `fLoThreshold` parametro è il valore più basso che può raggiungere il rapporto tra carico prima `CAtlMap` verrà Ricalcola le dimensioni ottimali della mappa.  
  
 Il `fHiThreshold` parametro è il valore massimo che il rapporto tra carico può raggiungere prima che il `CAtlMap` oggetto verrà Ricalcola le dimensioni ottimali della mappa.  
  
 Questo processo di ricalcolo (noto come generando un nuovo hash) è abilitato per impostazione predefinita. Se si desidera disabilitare questo processo, ad esempio quando si immette una grande quantità di dati in una sola volta, chiamata di [CAtlMap::DisableAutoRehash](#disableautorehash) metodo. Riattivare con il [CAtlMap::EnableAutoRehash](#enableautorehash) metodo.  
  
 Il `nBlockSize` parametro è una misura della quantità di memoria allocata quando è necessario un nuovo elemento. Blocchi di dimensioni maggiori di ridurre ulteriormente le chiamate alle routine di allocazione di memoria, ma usano più risorse.  
  
 Prima di qualsiasi tipo di dati può essere archiviati, è necessario inizializzare la tabella hash con una chiamata a [CAtlMap::InitHashTable](#inithashtable).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#72](../../atl/codesnippet/cpp/catlmap-class_1.cpp)]  
  
##  <a name="dtor"></a>CAtlMap:: ~ CAtlMap  
 Distruttore.  
  
```
~CAtlMap() throw();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate.  
  
##  <a name="cpair_class"></a>Classe CAtlMap::CPair  
 Una classe che contiene gli elementi chiave / valore.  
  
```
class CPair : public __POSITION
```  
  
### <a name="remarks"></a>Note  
 Questa classe viene utilizzata dai metodi [CAtlMap::GetNext](#getnext) e [CAtlMap::Lookup](#lookup) per accedere agli elementi di chiave e il valore archiviati nella struttura di mapping.  
  
##  <a name="disableautorehash"></a>CAtlMap::DisableAutoRehash  
 Chiamare questo metodo per disabilitare generando un nuovo hash automatica del `CAtlMap` oggetto.  
  
```
void DisableAutoRehash() throw();
```  
  
### <a name="remarks"></a>Note  
 Quando generando un nuovo hash automatico è abilitato (ovvero per impostazione predefinita), il numero di bin nella tabella hash viene ricalcolato automaticamente se il valore di carico (il rapporto tra il numero di bin per il numero di elementi memorizzati nella matrice) supera i valori massimi o minimi specificata al momento che della creazione della mappa.  
  
 `DisableAutoRehash`è particolarmente utile quando un numero elevato di elementi verrà aggiunto alla mappa in una sola volta. Anziché attivare il processo rehashing ogni volta che vengono superati i limiti, risulta più efficace per chiamare `DisableAutoRehash`, aggiungere gli elementi e infine chiamare [CAtlMap::EnableAutoRehash](#enableautorehash).  
  
##  <a name="enableautorehash"></a>CAtlMap::EnableAutoRehash  
 Chiamare questo metodo per abilitare generando un nuovo hash automatica del `CAtlMap` oggetto.  
  
```
void EnableAutoRehash() throw();
```  
  
### <a name="remarks"></a>Note  
 Quando generando un nuovo hash automatico è abilitato (ovvero per impostazione predefinita), il numero di bin nella tabella hash viene ricalcolato automaticamente se il valore di carico (il rapporto tra il numero di bin per il numero di elementi memorizzati nella matrice) supera i valori massimi o minimi specificato al momento che della creazione della mappa.  
  
 **EnableAutoRefresh** vengono spesso usati dopo una chiamata a [CAtlMap::DisableAutoRehash](#disableautorehash).  
  
##  <a name="getat"></a>CAtlMap::GetAt  
 Chiamare questo metodo per restituire l'elemento in una posizione specificata nella mappa.  
  
```
void GetAt(
    POSITION pos,
    KOUTARGTYPE key,
    VOUTARGTYPE value) const;

CPair* GetAt(POSITION& pos) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Il contatore di posizione, restituito da una precedente chiamata a [CAtlMap:: GetNextAssoc](#getnextassoc) o [CAtlMap:: GetStartPosition](#getstartposition).  
  
 `key`  
 Parametro di modello che specifica il tipo di chiave della mappa.  
  
 *valore*  
 Parametro di modello che specifica il tipo del valore della mappa.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore a una coppia di elementi chiave/valore archiviati nella mappa corrente.  
  
### <a name="remarks"></a>Note  
 Nelle build di debug è si verifica un errore di asserzione se `pos` è uguale a NULL.  
  
##  <a name="getcount"></a>CAtlMap::GetCount  
 Chiamare questo metodo per recuperare il numero di elementi nella mappa.  
  
```
size_t GetCount() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di elementi nell'oggetto map. Un singolo elemento è una coppia chiave/valore.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CAtlMap:: CAtlMap](#catlmap).  
  
##  <a name="gethashtablesize"></a>CAtlMap::GetHashTableSize  
 Chiamare questo metodo per determinare il numero di bin nella tabella di hash della mappa.  
  
```
UINT GetHashTableSize() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di bin nella tabella hash. Vedere [CAtlMap:: CAtlMap](#catlmap) per una spiegazione.  
  
##  <a name="getkeyat"></a>CAtlMap::GetKeyAt  
 Chiamare questo metodo per recuperare la chiave archiviata in corrispondenza della posizione specificata nel `CAtlMap` oggetto.  
  
```
const K& GetKeyAt(POSITION pos) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Il contatore di posizione, restituito da una precedente chiamata a [CAtlMap:: GetNextAssoc](#getnextassoc) o [CAtlMap:: GetStartPosition](#getstartposition).  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento per la chiave archiviata in corrispondenza della posizione specificata nel `CAtlMap` oggetto.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CAtlMap:: CAtlMap](#catlmap).  
  
##  <a name="getnext"></a>CAtlMap::GetNext  
 Chiamare questo metodo per ottenere un puntatore all'elemento successivo archiviata nella coppia di `CAtlMap` oggetto.  
  
```
CPair* GetNext(POSITION& pos) throw();
const CPair* GetNext(POSITION& pos) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Il contatore di posizione, restituito da una precedente chiamata a [CAtlMap:: GetNextAssoc](#getnextassoc) o [CAtlMap:: GetStartPosition](#getstartposition).  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore alla successiva coppia di elementi chiave/valore archiviati nella mappa. Il `pos` posizione contatore viene aggiornato dopo ogni chiamata. Se l'elemento recuperato è l'ultimo nella mappa `pos` è impostato su NULL.  
  
##  <a name="getnextassoc"></a>CAtlMap:: GetNextAssoc  
 Ottiene l'elemento successivo per eseguire l'iterazione.  
  
```
void GetNextAssoc(
    POSITION& pos,
    KOUTARGTYPE key,
    VOUTARGTYPE value) const;
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Il contatore di posizione, restituito da una precedente chiamata a [CAtlMap:: GetNextAssoc](#getnextassoc) o [CAtlMap:: GetStartPosition](#getstartposition).  
  
 `key`  
 Parametro di modello che specifica il tipo di chiave della mappa.  
  
 *valore*  
 Parametro di modello che specifica il tipo del valore della mappa.  
  
### <a name="remarks"></a>Note  
 Il `pos` posizione contatore viene aggiornato dopo ogni chiamata. Se l'elemento recuperato è l'ultimo nella mappa `pos` è impostato su NULL.  
  
##  <a name="getnextkey"></a>CAtlMap::GetNextKey  
 Chiamare questo metodo per recuperare la chiave dal successiva il `CAtlMap` oggetto.  
  
```
const K& GetNextKey(POSITION& pos) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Il contatore di posizione, restituito da una precedente chiamata a [CAtlMap:: GetNextAssoc](#getnextassoc) o [CAtlMap:: GetStartPosition](#getstartposition).  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento alla chiave del successivo nella mappa.  
  
### <a name="remarks"></a>Note  
 Aggiorna il contatore di posizione corrente, `pos`. Se non sono presenti ulteriori voci nella mappa, il contatore di posizione è impostato su NULL.  
  
##  <a name="getnextvalue"></a>CAtlMap::GetNextValue  
 Chiamare questo metodo per ottenere il successivo valore di `CAtlMap` oggetto.  
  
```
V& GetNextValue(POSITION& pos) throw();
const V& GetNextValue(POSITION& pos) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Il contatore di posizione, restituito da una precedente chiamata a [CAtlMap:: GetNextAssoc](#getnextassoc) o [CAtlMap:: GetStartPosition](#getstartposition).  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento al valore successivo nella mappa.  
  
### <a name="remarks"></a>Note  
 Aggiorna il contatore di posizione corrente, `pos`. Se non sono presenti ulteriori voci nella mappa, il contatore di posizione è impostato su NULL.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CAtlMap:: CAtlMap](#catlmap).  
  
##  <a name="getstartposition"></a>CAtlMap:: GetStartPosition  
 Chiamare questo metodo per avviare un'iterazione di mappa.  
  
```
POSITION GetStartPosition() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce che la posizione iniziale, o NULL viene restituito se la mappa è vuota.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per avviare un'iterazione mappa restituendo un **posizione** valore che può essere passato al `GetNextAssoc` metodo.  
  
> [!NOTE]
>  La sequenza di iterazione non è stimabile  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CAtlMap:: CAtlMap](#catlmap).  
  
##  <a name="getvalueat"></a>CAtlMap::GetValueAt  
 Chiamare questo metodo per recuperare il valore archiviato in una posizione specificata di `CAtlMap` oggetto.  
  
```
V& GetValueAt(POSITION pos) throw();
const V& GetValueAt(POSITION pos) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Il contatore di posizione, restituito da una precedente chiamata a [CAtlMap:: GetNextAssoc](#getnextassoc) o [CAtlMap:: GetStartPosition](#getstartposition).  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento al valore archiviato nella posizione specificata all'interno di `CAtlMap` oggetto.  
  
##  <a name="inithashtable"></a>CAtlMap::InitHashTable  
 Chiamare questo metodo per inizializzare la tabella hash.  
  
```
bool InitHashTable(
    UINT nBins,
    bool bAllocNow = true);
```  
  
### <a name="parameters"></a>Parametri  
 `nBins`  
 Il numero di bin utilizzato dalla tabella hash. Vedere [CAtlMap:: CAtlMap](#catlmap) per una spiegazione.  
  
 `bAllocNow`  
 Un'indicazione del flag quando la memoria deve essere allocata.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** durante l'inizializzazione ha esito positivo, **false** in caso di errore.  
  
### <a name="remarks"></a>Note  
 `InitHashTable`deve essere chiamato prima che tutti gli elementi vengono archiviati nella tabella hash.  Se questo metodo non viene chiamato in modo esplicito, verrà chiamato automaticamente la prima volta che viene aggiunto un elemento utilizzando il numero specificato per il **CAtlMap** costruttore.  In caso contrario, la mappa verrà inizializzata utilizzando il nuovo numero di bin specificato per il `nBins` parametro.  
  
 Se il `bAllocNow` parametro è false, la memoria necessaria per la tabella hash non verrà allocata fino a quando è prima necessario. Questo può essere utile se è incerto se verrà utilizzata la mappa.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CAtlMap:: CAtlMap](#catlmap).  
  
##  <a name="isempty"></a>CAtlMap::IsEmpty  
 Chiamare questo metodo per verificare la presenza di un oggetto mappa vuota.  
  
```
bool IsEmpty() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se la mappa è vuota, **false** in caso contrario.  
  
##  <a name="kinargtype"></a>CAtlMap::KINARGTYPE  
 Tipo utilizzato per una chiave viene passata come argomento di input.  
  
```
typedef KTraits::INARGTYPE KINARGTYPE;
```  
  
##  <a name="koutargtype"></a>CAtlMap::KOUTARGTYPE  
 Tipo utilizzato per una chiave viene restituita come argomento di output.  
  
```
typedef KTraits::OUTARGTYPE KOUTARGTYPE;
```  
  
##  <a name="lookup"></a>CAtlMap::Lookup  
 Chiamare questo metodo per cercare di chiavi o valori di `CAtlMap` oggetto.  
  
```
bool Lookup(KINARGTYPE key, VOUTARGTYPE value) const;
const CPair* Lookup(KINARGTYPE key) const throw();
CPair* Lookup(KINARGTYPE key) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `key`  
 Specifica la chiave che identifica l'elemento da ricercare.  
  
 *valore*  
 Variabile che riceve il valore cercato.  
  
### <a name="return-value"></a>Valore restituito  
 Il primo form del metodo restituisce true se la chiave viene trovata, in caso contrario false. Le forme seconda e terza restituiscono un puntatore a un [CPair](#cpair_class) utilizzabili come posizione per le chiamate a [CAtlMap::GetNext](#getnext) e così via.  
  
### <a name="remarks"></a>Note  
 `Lookup`utilizza un algoritmo hash per trovare rapidamente l'elemento della mappa contenente una chiave che corrisponde esattamente al parametro di chiave specificato.  
  
##  <a name="operator_at"></a>CAtlMap::operator\[\]  
 Sostituisce o aggiunge un nuovo elemento per il `CAtlMap`.  
  
```
V& operator[](kinargtype key) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `key`  
 La chiave dell'elemento da aggiungere o sostituire.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento al valore associato alla chiave specificata.  
  
### <a name="example"></a>Esempio  
 Se la chiave esiste già, l'elemento viene sostituito. Se la chiave non esiste, viene aggiunto un nuovo elemento. Per vedere l'esempio [CAtlMap:: CAtlMap](#catlmap).  
  
##  <a name="rehash"></a>CAtlMap::Rehash  
 Chiamare questo metodo per rehash il `CAtlMap` oggetto.  
  
```
void Rehash(UINT nBins = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `nBins`  
 Il nuovo numero di bin da utilizzare nella tabella hash. Vedere [CAtlMap:: CAtlMap](#catlmap) per una spiegazione.  
  
### <a name="remarks"></a>Note  
 Se `nBins` è 0, `CAtlMap` calcola un numero ragionevole in base al numero di elementi nella mappa e l'impostazione di carico ottimale. In genere il processo rehashing è automatico, ma se [CAtlMap::DisableAutoRehash](#disableautorehash) è stato chiamato, questo metodo è possibile eseguire il ridimensionamento del necessario.  
  
##  <a name="removeall"></a>CAtlMap::RemoveAll  
 Chiamare questo metodo per rimuovere tutti gli elementi dal `CAtlMap` oggetto.  
  
```
void RemoveAll() throw();
```  
  
### <a name="remarks"></a>Note  
 Cancella il `CAtlMap` oggetto, liberando la memoria utilizzata per memorizzare gli elementi.  
  
##  <a name="removeatpos"></a>CAtlMap::RemoveAtPos  
 Chiamare questo metodo per rimuovere l'elemento in corrispondenza della posizione specificata nel `CAtlMap` oggetto.  
  
```
void RemoveAtPos(POSITION pos) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Il contatore di posizione, restituito da una precedente chiamata a [CAtlMap:: GetNextAssoc](#getnextassoc) o [CAtlMap:: GetStartPosition](#getstartposition).  
  
### <a name="remarks"></a>Note  
 Rimuove la coppia chiave/valore archiviata in corrispondenza della posizione specificata. Viene liberata la memoria utilizzata per archiviare l'elemento. La posizione a cui fa riferimento `pos` diventa non valido e la posizione di tutti gli altri elementi della mappa mentre valida, non necessariamente vengono mantenere lo stesso ordine.  
  
##  <a name="removekey"></a>CAtlMap::RemoveKey  
 Chiamare questo metodo per rimuovere un elemento di `CAtlMap` oggetto, dato la chiave.  
  
```
bool RemoveKey(KINARGTYPE key) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `key`  
 La chiave corrispondente coppia di elementi di cui si desidera rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se la chiave viene trovata e rimossa, **false** in caso di errore.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CAtlMap:: CAtlMap](#catlmap).  
  
##  <a name="setat"></a>CAtlMap::SetAt  
 Chiamare questo metodo per inserire una coppia di elementi nella mappa.  
  
```
POSITION SetAt(
    KINARGTYPE key,
    VINARGTYPE value);
```  
  
### <a name="parameters"></a>Parametri  
 `key`  
 Il valore da aggiungere alla chiave di `CAtlMap` oggetto.  
  
 *valore*  
 Il valore da aggiungere per il `CAtlMap` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la posizione della coppia chiave/valore elemento all'interno di `CAtlMap` oggetto.  
  
### <a name="remarks"></a>Note  
 `SetAt`sostituisce un elemento esistente se viene trovata una chiave corrispondente. Se la chiave non viene trovata, viene creata una nuova coppia chiave/valore.  
  
##  <a name="setoptimalload"></a>CAtlMap::SetOptimalLoad  
 Chiamare questo metodo per impostare il carico di ottimale di `CAtlMap` oggetto.  
  
```
void SetOptimalLoad(
    float fOptimalLoad,
    float fLoThreshold,
    float fHiThreshold,
    bool bRehashNow = false);
```  
  
### <a name="parameters"></a>Parametri  
 `fOptimalLoad`  
 Il rapporto tra carico ottimale.  
  
 `fLoThreshold`  
 La soglia inferiore per il rapporto tra carico.  
  
 `fHiThreshold`  
 Soglia superiore per il rapporto tra carico.  
  
 `bRehashNow`  
 Flag che indica se la tabella hash deve essere ricalcolata.  
  
### <a name="remarks"></a>Note  
 Questo metodo consente di ridefinire il valore di carico ottimale per il `CAtlMap` oggetto. Vedere [CAtlMap:: CAtlMap](#catlmap) per una descrizione dei vari parametri. Se `bRehashNow` è true e il numero di elementi non è compreso i valori minimo e massimi, la tabella hash viene ricalcolata.  
  
##  <a name="setvalueat"></a>CAtlMap::SetValueAt  
 Chiamare questo metodo per modificare il valore archiviato in una posizione specificata di `CAtlMap` oggetto.  
  
```
void SetValueAt(
    POSITION pos,
    VINARGTYPE value);
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Il contatore di posizione, restituito da una precedente chiamata a [CAtlMap:: GetNextAssoc](#getnextassoc) o [CAtlMap:: GetStartPosition](#getstartposition).  
  
 *valore*  
 Il valore da aggiungere per il `CAtlMap` oggetto.  
  
### <a name="remarks"></a>Note  
 Modifica elemento di valore archiviato in corrispondenza della posizione specificata nel `CAtlMap` oggetto.  
  
##  <a name="vinargtype"></a>CAtlMap::VINARGTYPE  
 Tipo utilizzato quando un valore viene passato come argomento di input.  
  
```
typedef VTraits::INARGTYPE VINARGTYPE;
```  
  
##  <a name="voutargtype"></a>CAtlMap::VOUTARGTYPE  
 Tipo utilizzato quando un valore viene passato come argomento di output.  
  
```
typedef VTraits::OUTARGTYPE VOUTARGTYPE;
```  
  
##  <a name="m_key"></a>CAtlMap::CPair::m_key  
 Il membro dati archiviare l'elemento principale.  
  
```
const K m_key;
```    
  
### <a name="parameters"></a>Parametri  
 `K`  
 Il tipo di elemento key.  
  
##  <a name="m_value"></a>CAtlMap::CPair::m_value  
 Il membro dati archiviare l'elemento valore.  
  
```
V  m_value;
```    
  
### <a name="parameters"></a>Parametri  
 *V*  
 Il tipo di elemento di valore.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio di testo scorrevole](../../visual-cpp-samples.md)   
 [Esempio UpdatePV](../../visual-cpp-samples.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
