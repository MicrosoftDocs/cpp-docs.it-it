---
title: "Metodo UnorderedMapView::First | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::UnorderedMapView::First"
ms.assetid: 385f2a46-90ee-412b-817b-b5a0f2f57022
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo UnorderedMapView::First
Restituisce un iteratore che specifica il primo elemento [Windows::Foundation::Collections::IKeyValuePair\<K,V\>](http://msdn.microsoft.com/library/windows/apps/br226031.aspx) nella mappa non ordinata.  
  
## Sintassi  
  
```cpp  
  
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
 [Classe Platform::Collections::UnorderedMapView](../cppcx/platform-collections-unorderedmapview-class.md)