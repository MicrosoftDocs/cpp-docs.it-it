---
title: Classe CRBMap | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL.CRBMap
- CRBMap
- ATL::CRBMap
dev_langs:
- C++
helpviewer_keywords:
- CRBMap class
ms.assetid: 658e94dc-e835-4356-aed1-1513e1f66969
caps.latest.revision: 18
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 7b1cd9e54a18746e26929e9768a990bbe0ba6553
ms.lasthandoff: 02/24/2017

---
# <a name="crbmap-class"></a>Classe CRBMap
Questa classe rappresenta una struttura di mapping, utilizzando una struttura binaria in rosso a nero.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <typename K,
          typename V, 
          class KTraits = CElementTraits<K>, 
          class VTraits = CElementTraits<V>> 
class CRBMap : public CRBTree<K, V, KTraits, VTraits>
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
|[CRBMap::CRBMap](#crbmap)|Costruttore.|  
|[CRBMap:: ~ CRBMap](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRBMap::Lookup](#lookup)|Chiamare questo metodo per la ricerca di chiavi o valori di `CRBMap` oggetto.|  
|[CRBMap::RemoveKey](#removekey)|Chiamare questo metodo per rimuovere un elemento di `CRBMap` oggetto, dato la chiave.|  
|[CRBMap::SetAt](#setat)|Chiamare questo metodo per inserire una coppia di elementi nella mappa.|  
  
## <a name="remarks"></a>Note  
 `CRBMap`fornisce supporto per una matrice di mapping di un determinato tipo, la gestione di una matrice ordinata di elementi chiave e i relativi valori associati. Ogni chiave può avere un solo valore associato. Elementi (costituito da una chiave e valore) vengono archiviati in un albero binario struttura utilizzando il [CRBMap::SetAt](#setat) metodo. È possibile rimuovere gli elementi utilizzando il [CRBMap::RemoveKey](#removekey) metodo, che elimina l'elemento con il valore di chiave specificato.  
  
 Attraversamento dell'albero è reso possibile con i metodi, ad esempio [CRBTree](../../atl/reference/crbtree-class.md#getheadposition), [CRBTree::GetNext](../../atl/reference/crbtree-class.md#getnext), e [CRBTree::GetNextValue](../../atl/reference/crbtree-class.md#getnextvalue).  
  
 Il `KTraits` e `VTraits` i parametri sono traits (classi) che contengono il codice necessario per copiare o spostare elementi supplementare.  
  
 `CRBMap`deriva da [CRBTree](../../atl/reference/crbtree-class.md), che implementa un struttura ad albero binaria utilizzando l'algoritmo Red-Black. [CRBMultiMap](../../atl/reference/crbmultimap-class.md) è una variante che consente più valori per ogni chiave. Troppo deriva da `CRBTree`e pertanto condivide molte funzionalità con `CRBMap`.  
  
 Un'alternativa a entrambi `CRBMap` e `CRBMultiMap` è offerto di [CAtlMap](../../atl/reference/catlmap-class.md) (classe). Solo un piccolo numero di elementi deve essere archiviato, provare a usare il [CSimpleMap](../../atl/reference/csimplemap-class.md) classe.  
  
 Per una descrizione più completa di varie classi di raccolta e la funzionalità e le caratteristiche di prestazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CRBTree](../../atl/reference/crbtree-class.md)  
  
 `CRBMap`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="a-namecrbmapa--crbmapcrbmap"></a><a name="crbmap"></a>CRBMap::CRBMap  
 Costruttore.  
  
```
explicit CRBMap(size_t nBlockSize = 10) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nBlockSize`  
 La dimensione del blocco.  
  
### <a name="remarks"></a>Note  
 Il `nBlockSize` parametro è una misura della quantità di memoria allocata quando è necessario un nuovo elemento. Dimensioni blocco ridurre le chiamate alle routine di allocazione della memoria, ma utilizzano più risorse. Il valore predefinito verrà allocare spazio per 10 elementi alla volta.  
  
 Vedere la documentazione per la classe base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni su altri metodi disponibili.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#81; NVC_ATL_Utilities](../../atl/codesnippet/cpp/crbmap-class_1.cpp)]  
  
##  <a name="a-namedtora--crbmapcrbmap"></a><a name="dtor"></a>CRBMap:: ~ CRBMap  
 Distruttore.  
  
```
~CRBMap() throw();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate.  
  
 Vedere la documentazione per la classe base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni su altri metodi disponibili.  
  
##  <a name="a-namelookupa--crbmaplookup"></a><a name="lookup"></a>CRBMap::Lookup  
 Chiamare questo metodo per la ricerca di chiavi o valori di `CRBMap` oggetto.  
  
```
bool Lookup(KINARGTYPE key, VOUTARGTYPE value) const throw(...);
const CPair* Lookup(KINARGTYPE key) const throw();
CPair* Lookup(KINARGTYPE key) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `key`  
 Specifica la chiave che identifica l'elemento cercato.  
  
 *value*  
 Variabile che riceve il valore cercato.  
  
### <a name="return-value"></a>Valore restituito  
 Il primo form del metodo restituisce true se la chiave viene trovata, in caso contrario false. Le forme seconda e terza restituiscono un puntatore a un [CPair](crbtree-class.md#cpair_class).  
  
### <a name="remarks"></a>Note  
 Vedere la documentazione per la classe base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni su altri metodi disponibili.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#82;](../../atl/codesnippet/cpp/crbmap-class_2.cpp)]  
  
##  <a name="a-nameremovekeya--crbmapremovekey"></a><a name="removekey"></a>CRBMap::RemoveKey  
 Chiamare questo metodo per rimuovere un elemento di `CRBMap` oggetto, dato la chiave.  
  
```
bool RemoveKey(KINARGTYPE key) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `key`  
 La chiave corrispondente alla coppia di elementi di cui si desidera rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se la chiave è stato trovato e rimosso, false in caso di errore.  
  
### <a name="remarks"></a>Note  
 Vedere la documentazione per la classe base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni su altri metodi disponibili.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&83;](../../atl/codesnippet/cpp/crbmap-class_3.cpp)]  
  
##  <a name="a-namesetata--crbmapsetat"></a><a name="setat"></a>CRBMap::SetAt  
 Chiamare questo metodo per inserire una coppia di elementi nella mappa.  
  
```
POSITION SetAt(
    KINARGTYPE key,
    VINARGTYPE value) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `key`  
 Il valore della chiave per aggiungere il `CRBMap` oggetto.  
  
 *value*  
 Il valore da aggiungere per il `CRBMap` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la posizione della coppia chiave/valore elemento all'interno di `CRBMap` oggetto.  
  
### <a name="remarks"></a>Note  
 `SetAt`sostituisce un elemento esistente se viene trovata una chiave corrispondente. Se la chiave non viene trovata, viene creata una nuova coppia chiave/valore.  
  
 Vedere la documentazione per la classe base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni su altri metodi disponibili.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#84; NVC_ATL_Utilities](../../atl/codesnippet/cpp/crbmap-class_4.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CRBTree](../../atl/reference/crbtree-class.md)   
 [Classe CAtlMap](../../atl/reference/catlmap-class.md)   
 [Classe CRBMultiMap](../../atl/reference/crbmultimap-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

