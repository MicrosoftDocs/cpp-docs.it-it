---
title: Funzioni &lt;map&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 7cb3d1a5-7add-4726-a73f-61927eafd466
caps.latest.revision: 6
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 85c900f2263ae1c1089478badc85388e3b5e8548
ms.openlocfilehash: d322b318ac4206c5bc27b81299190d129548ef9f
ms.lasthandoff: 02/24/2017

---
# <a name="ltmapgt-functions"></a>Funzioni &lt;map&gt;
|||  
|-|-|  
|[swap (map)](#swap)|[swap (multimap)](#swap_multimap)|  
  
##  <a name="a-nameswapmultimapa--swap--map"></a><a name="swap_multimap"></a>  swap  (map)
 Scambia gli elementi di due oggetti map.  
  
```  
template <class key, class T, class _Pr, class _Alloc>  
void swap(
    map<Key, Traits, Compare, Alloctor>& left,  
    map<Key, Traits, Compare, Alloctor>& right);
```  
  
### <a name="parameters"></a>Parametri  
 ` right`  
 Oggetto map che fornisce gli elementi da scambiare o i cui elementi devono essere scambiati con quelli dell'oggetto map ` left`.  
  
 ` left`  
 Oggetto map i cui elementi devono essere scambiati con quelli dell'oggetto map ` right`.  
  
### <a name="remarks"></a>Note  
 La funzione modello è un algoritmo specializzato sulla classe contenitore map per l'esecuzione della funzione membro ` left.`[swap](../standard-library/map-class.md#map__swap)*( right*). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello, **template** \< **class T**> **void swap**( **T&**, **T&**), nella classe algoritmo viene eseguita in base ad assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio di codice relativo alla funzione membro [map::swap](../standard-library/map-class.md#map__swap) per indicazioni su come usare la versione modello di `swap`.  
  
##  <a name="a-nameswapa--swap--multimap"></a><a name="swap"></a>  swap  (multimap)
 Scambia gli elementi di due oggetti multimap.  
  
```  
template <class key, class T, class _Pr, class _Alloc>  
void swap(
    multimap<Key, Traits, Compare, Alloctor>& left,  
    multimap<Key, Traits, Compare, Alloctor>& right);
```  
  
### <a name="parameters"></a>Parametri  
 ` right`  
 Oggetto multimap che fornisce gli elementi da scambiare o i cui elementi devono essere scambiati con quelli dell'oggetto multimap ` left`.  
  
 ` left`  
 Oggetto multimap i cui elementi devono essere scambiati con quelli dell'oggetto multimap ` right`.  
  
### <a name="remarks"></a>Note  
 La funzione modello è un algoritmo specializzato sulla classe contenitore multimap per l'esecuzione della funzione membro ` left.`[swap](../standard-library/multimap-class.md#multimap__swap) ( ` right`). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello, **template** \< **class T**> **void swap**( **T&**, **T&**), nella classe algoritmo viene eseguita in base ad assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio di codice relativo alla funzione membro [multimap::swap](../standard-library/multimap-class.md#multimap__swap) per indicazioni su come usare la versione modello di `swap`.  
  
## <a name="see-also"></a>Vedere anche  
 [\<map>](../standard-library/map.md)

