---
title: Classe CRBMultiMap | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CRBMultiMap
- ATLCOLL/ATL::CRBMultiMap
- ATLCOLL/ATL::CRBMultiMap::CRBMultiMap
- ATLCOLL/ATL::CRBMultiMap::FindFirstWithKey
- ATLCOLL/ATL::CRBMultiMap::GetNextValueWithKey
- ATLCOLL/ATL::CRBMultiMap::GetNextWithKey
- ATLCOLL/ATL::CRBMultiMap::Insert
- ATLCOLL/ATL::CRBMultiMap::RemoveKey
dev_langs:
- C++
helpviewer_keywords:
- CRBMultiMap class
ms.assetid: 94d3ec0c-3e30-4ab7-a101-d8da4fb8add3
caps.latest.revision: 19
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: a72ddfbf4944f0de5e979f7046872d594017b9cf
ms.lasthandoff: 02/24/2017

---
# <a name="crbmultimap-class"></a>Classe CRBMultiMap
Questa classe rappresenta una struttura di mapping che consente a che ogni chiave può essere associato a più di un valore, utilizzando una struttura binaria in rosso a nero.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<typename K,
         typename V, 
         class KTraits = CElementTraits<K>, 
         class VTraits = CElementTraits<V>>  
class CRBMultiMap : public CRBTree<K, V, KTraits, VTraits>
```    
  
#### <a name="parameters"></a>Parametri  
 `K`  
 Il tipo di elemento key.  
  
 *V*  
 Il tipo di elemento di valore.  
  
 `KTraits`  
 Il codice utilizzato per copiare o spostare gli elementi chiave. Vedere [CElementTraits classe](../../atl/reference/celementtraits-class.md) per ulteriori dettagli.  
  
 `VTraits`  
 Il codice utilizzato per copiare o spostare gli elementi di valore.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRBMultiMap::CRBMultiMap](#crbmultimap)|Costruttore.|  
|[CRBMultiMap:: ~ CRBMultiMap](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRBMultiMap::FindFirstWithKey](#findfirstwithkey)|Chiamare questo metodo per individuare la posizione del primo elemento con una chiave specificata.|  
|[CRBMultiMap::GetNextValueWithKey](#getnextvaluewithkey)|Chiamare questo metodo per ottenere il valore associato alla chiave specificata e aggiornare il valore della posizione.|  
|[CRBMultiMap::GetNextWithKey](#getnextwithkey)|Chiamare questo metodo per ottenere l'elemento associato alla chiave specificata e aggiornare il valore della posizione.|  
|[CRBMultiMap::Insert](#insert)|Chiamare questo metodo per inserire una coppia di elementi nella mappa.|  
|[CRBMultiMap::RemoveKey](#removekey)|Chiamare questo metodo per rimuovere tutti gli elementi chiave/valore per una determinata chiave.|  
  
## <a name="remarks"></a>Note  
 `CRBMultiMap`fornisce supporto per una matrice di mapping di un determinato tipo, la gestione di una matrice ordinata di elementi chiave e i valori. A differenza di [CRBMap](../../atl/reference/crbmap-class.md) (classe), ogni chiave può essere associato a più di un valore.  
  
 Elementi (costituito da una chiave e valore) vengono archiviati in un albero binario struttura utilizzando il [CRBMultiMap::Insert](#insert) metodo. È possibile rimuovere gli elementi utilizzando il [CRBMultiMap::RemoveKey](#removekey) metodo, che elimina tutti gli elementi che corrispondono al tasto premuto.  
  
 Attraversamento dell'albero è reso possibile con i metodi, ad esempio [CRBTree](../../atl/reference/crbtree-class.md#getheadposition), [CRBTree::GetNext](../../atl/reference/crbtree-class.md#getnext), e [CRBTree::GetNextValue](../../atl/reference/crbtree-class.md#getnextvalue). L'accesso di potenzialmente più valori per ogni chiave è possibile utilizzare il [CRBMultiMap::FindFirstWithKey](#findfirstwithkey), [CRBMultiMap::GetNextValueWithKey](#getnextvaluewithkey), e [CRBMultiMap::GetNextWithKey](#getnextwithkey) metodi. Vedere l'esempio per [CRBMultiMap::CRBMultiMap](#crbmultimap) per un'illustrazione di questa in pratica.  
  
 Il `KTraits` e `VTraits` i parametri sono traits (classi) che contengono il codice necessario per copiare o spostare elementi supplementare.  
  
 `CRBMultiMap`deriva da [CRBTree](../../atl/reference/crbtree-class.md), che implementa un struttura ad albero binaria utilizzando l'algoritmo Red-Black. Un'alternativa al `CRBMultiMap` e `CRBMap` è offerto di [CAtlMap](../../atl/reference/catlmap-class.md) (classe). Solo un piccolo numero di elementi deve essere archiviato, provare a usare il [CSimpleMap](../../atl/reference/csimplemap-class.md) classe.  
  
 Per una descrizione più completa di varie classi di raccolta e la funzionalità e le caratteristiche di prestazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CRBTree](../../atl/reference/crbtree-class.md)  
  
 `CRBMultiMap`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="crbmultimap"></a>CRBMultiMap::CRBMultiMap  
 Costruttore.  
  
```
explicit CRBMultiMap(size_t nBlockSize = 10) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nBlockSize`  
 La dimensione del blocco.  
  
### <a name="remarks"></a>Note  
 Il `nBlockSize` parametro è una misura della quantità di memoria allocata quando è necessario un nuovo elemento. Dimensioni blocco ridurre le chiamate alle routine di allocazione della memoria, ma utilizzano più risorse. Il valore predefinito verrà allocare spazio per 10 elementi alla volta.  
  
 Vedere la documentazione per la classe base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni su altri metodi disponibili.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#85; NVC_ATL_Utilities](../../atl/codesnippet/cpp/crbmultimap-class_1.cpp)]  
  
##  <a name="dtor"></a>CRBMultiMap:: ~ CRBMultiMap  
 Distruttore.  
  
```
~CRBMultiMap() throw();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate.  
  
 Vedere la documentazione per la classe base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni su altri metodi disponibili.  
  
##  <a name="findfirstwithkey"></a>CRBMultiMap::FindFirstWithKey  
 Chiamare questo metodo per individuare la posizione del primo elemento con una chiave specificata.  
  
```
POSITION FindFirstWithKey(KINARGTYPE key) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `key`  
 Specifica la chiave che identifica l'elemento da trovare.  
  
### <a name="return-value"></a>Valore restituito  
 Se la chiave viene trovata, NULL in caso contrario, restituisce la posizione del primo elemento chiave/valore.  
  
### <a name="remarks"></a>Note  
 Una chiave di `CRBMultiMap` può avere uno o più valori associati. Questo metodo fornirà il valore della posizione del primo valore (che potrà essere infatti, l'unico valore) associato alla chiave particolare. Il valore della posizione restituito è quindi utilizzabile con [CRBMultiMap::GetNextValueWithKey](#getnextvaluewithkey) o [CRBMultiMap::GetNextWithKey](#getnextwithkey) per ottenere il valore e aggiornare la posizione.  
  
 Vedere la documentazione per la classe base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni su altri metodi disponibili.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CRBMultiMap::CRBMultiMap](#crbmultimap).  
  
##  <a name="getnextvaluewithkey"></a>CRBMultiMap::GetNextValueWithKey  
 Chiamare questo metodo per ottenere il valore associato alla chiave specificata e aggiornare il valore della posizione.  
  
```
const V& GetNextValueWithKey(
    POSITION& pos,
    KINARGTYPE key) const throw();
V& GetNextValueWithKey(
    POSITION& pos,
    KINARGTYPE key) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Il valore della posizione, ottenuto con una chiamata a [CRBMultiMap::FindFirstWithKey](#findfirstwithkey) o [CRBMultiMap::GetNextWithKey](#getnextwithkey), o una precedente chiamata a `GetNextValueWithKey`.  
  
 `key`  
 Specifica la chiave che identifica l'elemento da trovare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la coppia di elementi associata alla chiave specificata.  
  
### <a name="remarks"></a>Note  
 Il valore della posizione viene aggiornato per puntare al successivo valore associato alla chiave. Se nessun altro valore esistono, il valore della posizione è impostato su NULL.  
  
 Vedere la documentazione per la classe base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni su altri metodi disponibili.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CRBMultiMap::CRBMultiMap](#crbmultimap).  
  
##  <a name="getnextwithkey"></a>CRBMultiMap::GetNextWithKey  
 Chiamare questo metodo per ottenere l'elemento associato alla chiave specificata e aggiornare il valore della posizione.  
  
```
const CPair* GetNextWithKey(
    POSITION& pos,
    KINARGTYPE key) const throw();
CPair* GetNextWithKey(
    POSITION& pos,
    KINARGTYPE key) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Il valore della posizione, ottenuto con una chiamata a [CRBMultiMap::FindFirstWithKey](#findfirstwithkey) o [CRBMultiMap::GetNextValueWithKey](#getnextvaluewithkey), o una precedente chiamata a `GetNextWithKey`.  
  
 `key`  
 Specifica la chiave che identifica l'elemento da trovare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il successivo [CRBTree::CPair classe](crbtree-class.md#cpair_class) elemento associato alla chiave specificata.  
  
### <a name="remarks"></a>Note  
 Il valore della posizione viene aggiornato per puntare al successivo valore associato alla chiave. Se nessun altro valore esistono, il valore della posizione è impostato su NULL.  
  
 Vedere la documentazione per la classe base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni su altri metodi disponibili.  
  
##  <a name="insert"></a>CRBMultiMap::Insert  
 Chiamare questo metodo per inserire una coppia di elementi nella mappa.  
  
```
POSITION Insert(KINARGTYPE key, VINARGTYPE value) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `key`  
 Il valore della chiave per aggiungere il `CRBMultiMap` oggetto.  
  
 *value*  
 Il valore da aggiungere per il `CRBMultiMap` associato, `key`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la posizione della coppia chiave/valore elemento all'interno di `CRBMultiMap` oggetto.  
  
### <a name="remarks"></a>Note  
 Vedere la documentazione per la classe base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni su altri metodi disponibili.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CRBMultiMap::CRBMultiMap](#crbmultimap).  
  
##  <a name="removekey"></a>CRBMultiMap::RemoveKey  
 Chiamare questo metodo per rimuovere tutti gli elementi chiave/valore per una determinata chiave.  
  
```
size_t RemoveKey(KINARGTYPE key) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `key`  
 Specifica la chiave che identifica gli elementi da eliminare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di valori associati alla chiave specificata.  
  
### <a name="remarks"></a>Note  
 `RemoveKey`Elimina tutti gli elementi chiave/valore con una chiave corrispondente `key`.  
  
 Vedere la documentazione per la classe base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni su altri metodi disponibili.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CRBMultiMap::CRBMultiMap](#crbmultimap).  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CRBTree](../../atl/reference/crbtree-class.md)   
 [Classe CAtlMap](../../atl/reference/catlmap-class.md)   
 [Classe CRBMap](../../atl/reference/crbmap-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

