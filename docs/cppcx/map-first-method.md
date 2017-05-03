---
title: "Map::First (metodo) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Map::First"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Map::First (metodo)"
ms.assetid: bb1a4458-ecc3-43b0-b808-1693f853ad82
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Map::First (metodo)
Restituisce un iteratore che specifica il primo elemento nella mappa o `nullptr` se la mappa è vuota.  
  
## Sintassi  
  
```  
  
virtual Windows::Foundation::Collections::IIterator<  
Windows::Foundation::Collections::IKeyValuePair<K, V>^>^ First();  
```  
  
## Valore restituito  
 Iteratore che specifica il primo elemento nella mappa.  
  
## Note  
 Un modo pratico per contenere l'iteratore restituito da First\(\) consiste nell'assegnare il valore restituito a una variabile dichiarata con la parola chiave di deduzione del tipo [auto](../Topic/auto%20\(C++\).md). Ad esempio `auto x = myMap->First();`.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::Map](../cppcx/platform-collections-map-class.md)   
 [Raccolte \(C\+\+\/CX\)](../cppcx/collections-c-cx.md)