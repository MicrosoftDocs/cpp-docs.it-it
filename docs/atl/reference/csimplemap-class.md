---
title: Classe CSimpleMap | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSimpleMap
- ATLSIMPCOLL/ATL::CSimpleMap
- ATLSIMPCOLL/ATL::CSimpleMap::_ArrayElementType
- ATLSIMPCOLL/ATL::CSimpleMap::_ArrayKeyType
- ATLSIMPCOLL/ATL::CSimpleMap::CSimpleMap
- ATLSIMPCOLL/ATL::CSimpleMap::Add
- ATLSIMPCOLL/ATL::CSimpleMap::FindKey
- ATLSIMPCOLL/ATL::CSimpleMap::FindVal
- ATLSIMPCOLL/ATL::CSimpleMap::GetKeyAt
- ATLSIMPCOLL/ATL::CSimpleMap::GetSize
- ATLSIMPCOLL/ATL::CSimpleMap::GetValueAt
- ATLSIMPCOLL/ATL::CSimpleMap::Lookup
- ATLSIMPCOLL/ATL::CSimpleMap::Remove
- ATLSIMPCOLL/ATL::CSimpleMap::RemoveAll
- ATLSIMPCOLL/ATL::CSimpleMap::RemoveAt
- ATLSIMPCOLL/ATL::CSimpleMap::ReverseLookup
- ATLSIMPCOLL/ATL::CSimpleMap::SetAt
- ATLSIMPCOLL/ATL::CSimpleMap::SetAtIndex
dev_langs: C++
helpviewer_keywords: CSimpleMap class
ms.assetid: 61b06eb4-ae73-44b0-a305-0afb5a33e8b1
caps.latest.revision: "21"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 998001954d24d100fefb18e3a1849654204f0876
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="csimplemap-class"></a>Classe CSimpleMap
Questa classe fornisce supporto per una matrice di mapping semplice.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class TKey, class TVal, class TEqual = CSimpleMapEqualHelper<TKey, TVal>>  
class CSimpleMap
```  
  
#### <a name="parameters"></a>Parametri  
 `TKey`  
 Il tipo di elemento key.  
  
 `TVal`  
 Il tipo di elemento di valore.  
  
 `TEqual`  
 Un oggetto di tratto, che definisce il test di uguaglianza per gli elementi di tipo `T`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleMap::_ArrayElementType](#_arrayelementtype)|TypeDef per il tipo di valore.|  
|[CSimpleMap::_ArrayKeyType](#_arraykeytype)|TypeDef per il tipo di chiave.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleMap::CSimpleMap](#csimplemap)|Costruttore.|  
|[CSimpleMap:: ~ CSimpleMap](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleMap::Add](#add)|Aggiunge una chiave e il valore associato alla matrice map.|  
|[CSimpleMap::FindKey](#findkey)|Consente di trovare una chiave specifica.|  
|[CSimpleMap::FindVal](#findval)|Consente di trovare un valore specifico.|  
|[CSimpleMap::GetKeyAt](#getkeyat)|Recupera la chiave specificata.|  
|[CSimpleMap::GetSize](#getsize)|Restituisce il numero di voci nella matrice di mapping.|  
|[CSimpleMap::GetValueAt](#getvalueat)|Recupera il valore specificato.|  
|[CSimpleMap::Lookup](#lookup)|Restituisce il valore associato alla chiave specificata.|  
|[CSimpleMap::Remove](#remove)|Rimuove una chiave e il valore corrispondente.|  
|[CSimpleMap::RemoveAll](#removeall)|Rimuove tutte le chiavi e valori.|  
|[CSimpleMap::RemoveAt](#removeat)|Rimuove una chiave specifica e il valore corrispondente.|  
|[CSimpleMap::ReverseLookup](#reverselookup)|Restituisce la chiave associata al valore specificato.|  
|[CSimpleMap::SetAt](#setat)|Imposta il valore associato alla chiave specificata.|  
|[CSimpleMap::SetAtIndex](#setatindex)|Imposta la coppia chiave / valore.|  
  
## <a name="remarks"></a>Note  
 `CSimpleMap`fornisce il supporto per una matrice di mapping semplice di un tipo specificato `T`, la gestione di una matrice non ordinata di elementi chiave e i relativi valori associati.  
  
 Il parametro `TEqual` consente di definire una funzione di uguaglianza per due elementi di tipo `T`. Creando una classe simile a [CSimpleMapEqualHelper](../../atl/reference/csimplemapequalhelper-class.md), è possibile modificare il comportamento del test di uguaglianza per qualsiasi matrice specificata. Ad esempio, quando si lavora con una matrice di puntatori, può risultare utile definire l'uguaglianza come a seconda dei valori che di puntatori di riferimento. L'implementazione predefinita utilizza **operator==()**.  
  
 Entrambi `CSimpleMap` e [CSimpleArray](../../atl/reference/csimplearray-class.md) forniti per la compatibilità con ATL precedente rilascia e vengono fornite implementazioni di raccolta più efficiente e completa da [CAtlArray](../../atl/reference/catlarray-class.md) e [ CAtlMap](../../atl/reference/catlmap-class.md).  
  
 A differenza di altre raccolte di mappe in ATL e MFC, questa classe viene implementata con una semplice matrice e ricerche di ricerca richiedono una ricerca lineare. `CAtlMap`deve essere utilizzata quando la matrice contiene un numero elevato di elementi.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlsimpcoll. h  
  
## <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#91](../../atl/codesnippet/cpp/csimplemap-class_1.cpp)]  
  
##  <a name="add"></a>CSimpleMap::Add  
 Aggiunge una chiave e il valore associato alla matrice map.  
  
```
BOOL Add(const TKey& key, const TVal& val);
```  
  
### <a name="parameters"></a>Parametri  
 `key`  
 Chiave.  
  
 *Val*  
 Il valore associato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se la chiave e valore sono stati aggiunti correttamente, FALSE in caso contrario.  
  
### <a name="remarks"></a>Note  
 Ogni coppia chiave / valore aggiunte cause il mapping della matrice memoria da liberare e riallocare, per garantire che i dati per ogni vengono sempre archiviati in modo contiguo. Ovvero, il secondo elemento chiave direttamente segue sempre il primo elemento chiave in memoria e così via.  
  
##  <a name="_arrayelementtype"></a>CSimpleMap::_ArrayElementType  
 Typedef per il tipo di chiave.  
  
```
typedef TVal _ArrayElementType;
```  
  
##  <a name="_arraykeytype"></a>CSimpleMap::_ArrayKeyType  
 Typedef per il tipo di valore.  
  
```
typedef TKey _ArrayKeyType;
```  
  
##  <a name="csimplemap"></a>CSimpleMap::CSimpleMap  
 Costruttore.  
  
```
CSimpleMap();
```  
  
### <a name="remarks"></a>Note  
 Inizializza i membri di dati.  
  
##  <a name="dtor"></a>CSimpleMap:: ~ CSimpleMap  
 Distruttore.  
  
```
~CSimpleMap();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate.  
  
##  <a name="findkey"></a>CSimpleMap::FindKey  
 Consente di trovare una chiave specifica.  
  
```
int FindKey(const TKey& key) const;
```  
  
### <a name="parameters"></a>Parametri  
 `key`  
 Chiave da ricercare.  
  
### <a name="return-value"></a>Valore restituito  
 In caso contrario, restituisce l'indice di chiave se è presente, restituisce -1.  
  
##  <a name="findval"></a>CSimpleMap::FindVal  
 Consente di trovare un valore specifico.  
  
```
int FindVal(const TVal& val) const;
```  
  
### <a name="parameters"></a>Parametri  
 *Val*  
 Il valore da cercare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce che l'indice del valore se viene trovato, in caso contrario restituisce -1.  
  
##  <a name="getkeyat"></a>CSimpleMap::GetKeyAt  
 Recupera la chiave in corrispondenza dell'indice specificato.  
  
```
TKey& GetKeyAt(int nIndex) const;
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice della chiave da restituire.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la chiave a cui fa riferimento `nIndex`.  
  
### <a name="remarks"></a>Note  
 L'indice passato `nIndex` deve essere valido per il valore restituito per essere significativo.  
  
##  <a name="getsize"></a>CSimpleMap::GetSize  
 Restituisce il numero di voci nella matrice di mapping.  
  
```
int GetSize() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di voci (una chiave e il valore è una voce) nella matrice di mapping.  
  
##  <a name="getvalueat"></a>CSimpleMap::GetValueAt  
 Recupera il valore in corrispondenza dell'indice specifico.  
  
```
TVal& GetValueAt(int nIndex) const;
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 L'indice del valore da restituire.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore a cui fa riferimento `nIndex`.  
  
### <a name="remarks"></a>Note  
 L'indice passato `nIndex` deve essere valido per il valore restituito per essere significativo.  
  
##  <a name="lookup"></a>CSimpleMap::Lookup  
 Restituisce il valore associato alla chiave specificata.  
  
```
TVal Lookup(const TKey& key) const;
```  
  
### <a name="parameters"></a>Parametri  
 `key`  
 Chiave.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore associato. Se nessuna chiave corrispondente è presente, NULL.  
  
##  <a name="remove"></a>CSimpleMap::Remove  
 Rimuove una chiave e il valore corrispondente.  
  
```
BOOL Remove(const TKey& key);
```  
  
### <a name="parameters"></a>Parametri  
 `key`  
 Chiave.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se la chiave e il valore corrispondente, sono stati rimossi correttamente, FALSE in caso contrario.  
  
##  <a name="removeall"></a>CSimpleMap::RemoveAll  
 Rimuove tutte le chiavi e valori.  
  
```
void RemoveAll();
```  
  
### <a name="remarks"></a>Note  
 Rimuove tutte le chiavi e valori dall'oggetto matrice mapping.  
  
##  <a name="removeat"></a>CSimpleMap::RemoveAt  
 Rimuove una chiave e il valore associato in corrispondenza dell'indice specificato.  
  
```
BOOL RemoveAt(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice della chiave e valore associato da rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE in caso di esito positivo, FALSE se l'indice specificato è un indice non valido.  
  
##  <a name="reverselookup"></a>CSimpleMap::ReverseLookup  
 Restituisce la chiave associata al valore specificato.  
  
```
TKey ReverseLookup(const TVal& val) const;
```  
  
### <a name="parameters"></a>Parametri  
 *Val*  
 Valore.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la chiave associata. Se nessuna chiave corrispondente è presente, NULL.  
  
##  <a name="setat"></a>CSimpleMap::SetAt  
 Imposta il valore associato alla chiave specificata.  
  
```
BOOL SetAt(const TKey& key, const TVal& val);
```  
  
### <a name="parameters"></a>Parametri  
 `key`  
 Chiave.  
  
 *Val*  
 Il nuovo valore da assegnare.  
  
### <a name="return-value"></a>Valore restituito  
 Se è stata trovata la chiave e il valore è stato modificato correttamente, FALSE in caso contrario, restituisce TRUE.  
  
##  <a name="setatindex"></a>CSimpleMap::SetAtIndex  
 Imposta la chiave e il valore in corrispondenza dell'indice specificato.  
  
```
BOOL SetAtIndex(  
    int nIndex,
    const TKey& key,
    const TVal& val);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 L'indice, che fa riferimento la chiave e il valore per modificare l'associazione.  
  
 `key`  
 La nuova chiave.  
  
 *Val*  
 Nuovo valore.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se ha esito positivo, FALSE se l'indice non valido.  
  
### <a name="remarks"></a>Note  
 Aggiorna la chiave e valore a cui puntata `nIndex`.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
