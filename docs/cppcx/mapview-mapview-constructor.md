---
title: "MapView::MapView (costruttore) | Microsoft Docs"
ms.custom: ""
ms.date: "01/24/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::MapView::MapView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MapView::MapView (costruttore)"
ms.assetid: 67a3250c-b527-47ac-a103-0fd186046d71
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# MapView::MapView (costruttore)
Inizializza una nuova istanza della classe MapView.  
  
## Sintassi  
  
```  
explicit MapView(  
    const C& comp = C()  
    );  
  
explicit MapView(  
    const ::std::map<K, V, C>& m  
    );  
  
explicit MapView(  
    std::map<K, V, C>&& m  
    );  
  
template <typename InIt> MapView(  
    InIt first,  
    InIt last,  
    const C& comp = C()  
    );  
  
MapView(::std::initializer_list<  
    std::pair<const K, V>> il,  
    const C& comp = C()  
    );  
```  
  
#### Parametri  
 `InIt`  
 Typename dell'oggetto MapView corrente.  
  
 `comp`  
 Oggetto funzione che può confrontare due valori di elementi come chiavi di ordinamento per determinare l'ordine relativo in MapView.  
  
 `m`  
 Riferimento o [Elementi Lvalue e Rvalue](../Topic/Lvalues%20and%20Rvalues%20\(Visual%20C++\).md) a un oggetto [Classe map](../standard-library/map-class.md) utilizzato per inizializzare l'oggetto MapView corrente.  
  
 `first`  
 Iteratore di input del primo elemento in un intervallo di elementi utilizzato per inizializzare l'oggetto MapView corrente.  
  
 `last`  
 Iteratore di input del primo elemento dopo un intervallo di elementi utilizzato per inizializzare l'oggetto MapView corrente.  
  
 il  
 [std::initializer\_list\<std::pair\<K,V\>\>](../standard-library/initializer-list-class.md) i cui elementi verranno inseriti in MapView.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::MapView](../cppcx/platform-collections-mapview-class.md)