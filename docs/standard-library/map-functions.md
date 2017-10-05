---
title: Funzioni &lt;map&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- map/std::swap (map)
- map/std::swap (multimap)
ms.assetid: 7cb3d1a5-7add-4726-a73f-61927eafd466
caps.latest.revision: 6
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: 7972ff0d03f0c7b2378f87c311db633dff2a5d13
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="ltmapgt-functions"></a>Funzioni &lt;map&gt;
|||  
|-|-|  
|[swap (map)](#swap)|[swap (multimap)](#swap_multimap)|  
  
##  <a name="swap_multimap"></a>  swap  (map)
 Scambia gli elementi di due oggetti map.  
  
```  
template <class key, class T, class _Pr, class _Alloc>  
void swap(
    map<Key, Traits, Compare, Alloctor>& left,  
    map<Key, Traits, Compare, Alloctor>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `right`  
 Oggetto map che fornisce gli elementi da scambiare o i cui elementi devono essere scambiati con quelli dell'oggetto map `left`.  
  
 `left`  
 Oggetto map i cui elementi devono essere scambiati con quelli dell'oggetto map `right`.  
  
### <a name="remarks"></a>Note  
 La funzione di modello è un algoritmo specializzato sulla mappa della classe contenitore per eseguire la funzione membro `left`.[ scambio](../standard-library/map-class.md#swap)( `right`). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello, **template** \< **class T**> **void swap**( **T&**, **T&**), nella classe algoritmo viene eseguita in base ad assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio di codice relativo alla funzione membro [map::swap](../standard-library/map-class.md#swap) per indicazioni su come usare la versione modello di `swap`.  
  
##  <a name="swap"></a>  swap  (multimap)
 Scambia gli elementi di due oggetti multimap.  
  
```  
template <class key, class T, class _Pr, class _Alloc>  
void swap(
    multimap<Key, Traits, Compare, Alloctor>& left,  
    multimap<Key, Traits, Compare, Alloctor>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `right`  
 Oggetto multimap che fornisce gli elementi da scambiare o i cui elementi devono essere scambiati con quelli dell'oggetto multimap `left`.  
  
 `left`  
 Oggetto multimap i cui elementi devono essere scambiati con quelli dell'oggetto multimap `right`.  
  
### <a name="remarks"></a>Note  
 La funzione di modello è un algoritmo specializzato sulla mappa della classe contenitore da eseguire nel multimap classe contenitore per eseguire la funzione membro `left`.[ scambio](../standard-library/multimap-class.md#swap) ( `right`). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello, **template** \< **class T**> **void swap**( **T&**, **T&**), nella classe algoritmo viene eseguita in base ad assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio di codice relativo alla funzione membro [multimap::swap](../standard-library/multimap-class.md#swap) per indicazioni su come usare la versione modello di `swap`.  
  
## <a name="see-also"></a>Vedere anche  
 [\<map>](../standard-library/map.md)

