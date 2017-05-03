---
title: "Map::Map (costruttore) | Microsoft Docs"
ms.custom: ""
ms.date: "01/24/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Map::Map"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Map::Map (costruttore)"
ms.assetid: 4cd314eb-e3e3-4fa7-8c58-96e48d167246
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Map::Map (costruttore)
Inizializza una nuova istanza della classe Map.  
  
## Sintassi  
  
```  
explicit Map(  
   const C& comp = C()  
);  
explicit Map(  
   const StdMap& m  
);  
explicit Map(  
   StdMap&& m  
);  
template <  
   typename InIt  
>  
Map(  
   InItfirst,  
   InItlast,  
   const C& comp = C()  
);  
```  
  
#### Parametri  
 `InIt`  
 Typename dell'oggetto Map corrente.  
  
 `comp`  
 Tipo che fornisce un oggetto funzione che può confrontare due valori di elementi come chiavi di ordinamento per determinare l'ordine relativo nella mappa.  
  
 `m`  
 Riferimento o [Elementi Lvalue e Rvalue](../Topic/Lvalues%20and%20Rvalues%20\(Visual%20C++\).md) a un oggetto [Classe map](../standard-library/map-class.md) utilizzato per inizializzare l'oggetto Map corrente.  
  
 `first`  
 Iteratore di input del primo elemento in un intervallo di elementi utilizzato per inizializzare l'oggetto Map corrente.  
  
 `last`  
 Iteratore di input del primo elemento dopo un intervallo di elementi utilizzato per inizializzare l'oggetto Map corrente.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::Map](../cppcx/platform-collections-map-class.md)