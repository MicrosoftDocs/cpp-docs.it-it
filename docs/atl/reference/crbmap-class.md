---
title: Classe CRBMap | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CRBMap
- ATLCOLL/ATL::CRBMap
- ATLCOLL/ATL::CRBMap::CRBMap
- ATLCOLL/ATL::CRBMap::Lookup
- ATLCOLL/ATL::CRBMap::RemoveKey
- ATLCOLL/ATL::CRBMap::SetAt
dev_langs:
- C++
helpviewer_keywords:
- CRBMap class
ms.assetid: 658e94dc-e835-4356-aed1-1513e1f66969
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3cfa4d6fff6b46341f01b4d5ce18d9ec418738bf
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="crbmap-class"></a>Classe CRBMap
Questa classe rappresenta una struttura di mapping, utilizzando un albero binario rosso a nero.  
  
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
 Il codice utilizzato per copiare o spostare gli elementi principali. Vedere [CElementTraits classe](../../atl/reference/celementtraits-class.md) per altri dettagli.  
  
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
|[CRBMap::Lookup](#lookup)|Chiamare questo metodo per cercare di chiavi o valori di `CRBMap` oggetto.|  
|[CRBMap::RemoveKey](#removekey)|Chiamare questo metodo per rimuovere un elemento di `CRBMap` oggetto, dato la chiave.|  
|[CRBMap::SetAt](#setat)|Chiamare questo metodo per inserire una coppia di elementi nella mappa.|  
  
## <a name="remarks"></a>Note  
 `CRBMap`fornisce supporto per una matrice di mapping di un tipo specificato, la gestione di una matrice ordinata di elementi chiave e i relativi valori associati. Ogni chiave può avere un solo valore associato. Gli elementi (costituito da una chiave e valore) vengono archiviati in un albero binario struttura utilizzando il [CRBMap::SetAt](#setat) metodo. Gli elementi possono essere rimossi mediante il [CRBMap::RemoveKey](#removekey) metodo, che elimina l'elemento con il valore di chiave specificato.  
  
 Attraversamento dell'albero è reso possibile con i metodi, ad esempio [CRBTree](../../atl/reference/crbtree-class.md#getheadposition), [CRBTree::GetNext](../../atl/reference/crbtree-class.md#getnext), e [CRBTree::GetNextValue](../../atl/reference/crbtree-class.md#getnextvalue).  
  
 Il `KTraits` e `VTraits` i parametri sono traits (classi) che contiene codice aggiuntivo necessario per copiare o spostare elementi.  
  
 `CRBMap`derivato da [CRBTree](../../atl/reference/crbtree-class.md), che implementa un struttura ad albero binaria usando l'algoritmo rosso a nero. [CRBMultiMap](../../atl/reference/crbmultimap-class.md) è una variazione che supporta più valori per ogni chiave. Troppo deriva da `CRBTree`e quindi condivide molte funzionalità con `CRBMap`.  
  
 Un'alternativa a entrambi `CRBMap` e `CRBMultiMap` è offerto di [CAtlMap](../../atl/reference/catlmap-class.md) classe. Quando è necessario solo un piccolo numero di elementi da archiviare, considerare l'utilizzo di [CSimpleMap](../../atl/reference/csimplemap-class.md) classe.  
  
 Per una descrizione più completa di varie classi di raccolta e le relative caratteristiche e le caratteristiche di prestazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CRBTree](../../atl/reference/crbtree-class.md)  
  
 `CRBMap`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="crbmap"></a>CRBMap::CRBMap  
 Costruttore.  
  
```
explicit CRBMap(size_t nBlockSize = 10) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nBlockSize`  
 La dimensione del blocco.  
  
### <a name="remarks"></a>Note  
 Il `nBlockSize` parametro è una misura della quantità di memoria allocata quando è necessario un nuovo elemento. Blocchi di dimensioni maggiori di ridurre ulteriormente le chiamate alle routine di allocazione di memoria, ma usano più risorse. Il valore predefinito verrà allocare spazio per 10 elementi contemporaneamente.  
  
 Vedere la documentazione per la classe base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni su altri metodi disponibili.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#81](../../atl/codesnippet/cpp/crbmap-class_1.cpp)]  
  
##  <a name="dtor"></a>CRBMap:: ~ CRBMap  
 Distruttore.  
  
```
~CRBMap() throw();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate.  
  
 Vedere la documentazione per la classe base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni su altri metodi disponibili.  
  
##  <a name="lookup"></a>CRBMap::Lookup  
 Chiamare questo metodo per cercare di chiavi o valori di `CRBMap` oggetto.  
  
```
bool Lookup(KINARGTYPE key, VOUTARGTYPE value) const throw(...);
const CPair* Lookup(KINARGTYPE key) const throw();
CPair* Lookup(KINARGTYPE key) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `key`  
 Specifica la chiave che identifica l'elemento da ricercare.  
  
 *valore*  
 Variabile che riceve il valore cercato.  
  
### <a name="return-value"></a>Valore restituito  
 Il primo form del metodo restituisce true se la chiave viene trovata, in caso contrario false. Le forme seconda e terza restituiscono un puntatore a un [CPair](crbtree-class.md#cpair_class).  
  
### <a name="remarks"></a>Note  
 Vedere la documentazione per la classe base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni su altri metodi disponibili.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#82](../../atl/codesnippet/cpp/crbmap-class_2.cpp)]  
  
##  <a name="removekey"></a>CRBMap::RemoveKey  
 Chiamare questo metodo per rimuovere un elemento di `CRBMap` oggetto, dato la chiave.  
  
```
bool RemoveKey(KINARGTYPE key) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `key`  
 La chiave corrispondente coppia di elementi di cui si desidera rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se il tasto è stato trovato e rimosso, false in caso di errore.  
  
### <a name="remarks"></a>Note  
 Vedere la documentazione per la classe base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni su altri metodi disponibili.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#83](../../atl/codesnippet/cpp/crbmap-class_3.cpp)]  
  
##  <a name="setat"></a>CRBMap::SetAt  
 Chiamare questo metodo per inserire una coppia di elementi nella mappa.  
  
```
POSITION SetAt(
    KINARGTYPE key,
    VINARGTYPE value) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `key`  
 Il valore da aggiungere alla chiave di `CRBMap` oggetto.  
  
 *valore*  
 Il valore da aggiungere per il `CRBMap` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la posizione della coppia chiave/valore elemento all'interno di `CRBMap` oggetto.  
  
### <a name="remarks"></a>Note  
 `SetAt`sostituisce un elemento esistente se viene trovata una chiave corrispondente. Se la chiave non viene trovata, viene creata una nuova coppia chiave/valore.  
  
 Vedere la documentazione per la classe base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni su altri metodi disponibili.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#84](../../atl/codesnippet/cpp/crbmap-class_4.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CRBTree](../../atl/reference/crbtree-class.md)   
 [Classe CAtlMap](../../atl/reference/catlmap-class.md)   
 [Classe CRBMultiMap](../../atl/reference/crbmultimap-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
