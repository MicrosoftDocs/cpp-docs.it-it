---
title: "MapView::First (metodo) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::MapView::First"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MapView::First (metodo)"
ms.assetid: 9d7c7328-4f55-4ea6-a375-9d4e73707b56
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# MapView::First (metodo)
Restituisce un iteratore che specifica il primo elemento nella visualizzazione della mappa.  
  
## Sintassi  
  
```  
  
virtual Windows::Foundation::Collections::IIterator<  
Windows::Foundation::Collections::IKeyValuePair<K, V>^>^   
First();  
```  
  
## Valore restituito  
 Iteratore che specifica il primo elemento nella visualizzazione della mappa.  
  
## Note  
 Un modo pratico per contenere l'iteratore restituito da First\(\) consiste nell'assegnare il valore restituito a una variabile dichiarata con la parola chiave di deduzione del tipo [auto](../Topic/auto%20\(C++\).md). Ad esempio `auto x = myMapView->First();`.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::MapView](../cppcx/platform-collections-mapview-class.md)