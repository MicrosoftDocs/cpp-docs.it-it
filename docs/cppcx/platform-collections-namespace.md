---
title: "Platform::Collections (spazio dei nomi) | Microsoft Docs"
ms.custom: ""
ms.date: "01/25/2017"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::Collections (spazio dei nomi)"
ms.assetid: b5042864-5f22-40b7-b7a5-c0691f65cc47
caps.latest.revision: 9
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 6
---
# Platform::Collections (spazio dei nomi)
Lo spazio dei nomi Platform::Collection contiene le classi `Map`, `MapView`, `Vector` e `VectorView`. Queste classi sono implementazioni concrete delle interfacce corrispondenti definite nello spazio dei nomi [Windows::Foundation::Collections](http://go.microsoft.com/fwlink/p/?LinkId=262645). I tipi di raccolta concreti non sono portabili tramite ABI ad esempio quando un programma JavaScript o C\# chiama il componente C\+\+\), ma sono implicitamente convertibili nei tipi di interfaccia corrispondenti. Ad esempio, se si implementa un metodo pubblico che popola e restituisce una raccolta, usare [Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md) per implementare la raccolta internamente e [Windows::Foundation::Collections::IVector](http://go.microsoft.com/fwlink/p/?LinkId=262410) come tipo restituito. Per altre informazioni, vedere [Raccolte](../cppcx/collections-c-cx.md) e [Creazione di componenti Windows Runtime in C\+\+](http://msdn.microsoft.com/library/5b7251e6-4271-4f13-af80-c1cf5b1489bf).  
  
 Puoi costruire un oggetto Platform::Collections::Vector da un oggetto [std::vector](../Topic/vector%20Class%201.md) e un oggetto [Platform::Collections::Map](../cppcx/platform-collections-map-class.md) da [std::map](../standard-library/map-class.md).  
  
 Inoltre, lo spazio dei nomi Platform::Collection fornisce supporto per gli iteratori di input e di inserimento e gli iteratori `Vector` e `VectorView`.  
  
 Per utilizzare i tipi nello spazio dei nomi Platform::Collection, devi includere \(`#include`\) l'intestazione collection.h.  
  
## Sintassi  
  
```cpp  
  
#include <collection.h>  
using namespace Platform::Collection;  
```  
  
## Membri  
 Questo spazio dei nomi contiene i seguenti membri.  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Classe Platform::Collections::BackInsertIterator](../cppcx/platform-collections-backinsertiterator-class.md)|Rappresenta un iteratore che inserisce un elemento alla fine di una raccolta.|  
|[Classe Platform::Collections::InputIterator](../cppcx/platform-collections-inputiterator-class.md)|Rappresenta un iteratore che inserisce un elemento all'inizio di una raccolta.|  
|[Classe Platform::Collections::Map](../cppcx/platform-collections-map-class.md)|Rappresenta una raccolta modificabile di coppie chiave\-valore alle quali è possibile accedere in base a una chiave. Simile a [std::map](../standard-library/map-class.md).|  
|[Classe Platform::Collections::MapView](../cppcx/platform-collections-mapview-class.md)|Rappresenta una raccolta di sola lettura di coppie chiave\-valore alle quali è possibile accedere in base a una chiave.|  
|[Classe Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md)|Rappresenta una sequenza di elementi modificabile. Simile a [std::vector](../Topic/vector%20Class%201.md).|  
|[Classe Platform::Collections::VectorIterator](../cppcx/platform-collections-vectoriterator-class.md)|Rappresenta un iteratore che attraversa una raccolta `Vector`.|  
|[Classe Platform::Collections::VectorView](../cppcx/platform-collections-vectorview-class.md)|Rappresenta una sequenza di sola lettura di elementi.|  
|[Classe Platform::Collections::VectorViewIterator](../cppcx/platform-collections-vectorviewiterator-class.md)|Rappresenta un iteratore che attraversa una raccolta `VectorView`.|  
  
## Gerarchia di ereditarietà  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)  
  
## Requisiti  
 **Metadati:** platform.winmd  
  
 **Spazio dei nomi:** Platform::Collections  
  
 **Opzione del compilatore:** \/ZW  
  
## Vedere anche  
 [\(NOTINBUILD\) Spazio dei nomi Platform](http://msdn.microsoft.com/it-it/f3ce3eab-028c-4204-ba9f-9ab8af17c8c4)