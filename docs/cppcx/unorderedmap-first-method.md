---
title: "Metodo UnorderedMap::First | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::UnorderedMap::First"
ms.assetid: 915e771a-cec1-4905-8ecb-76501f63c143
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo UnorderedMap::First
Restituisce un iteratore che specifica il primo elemento [Windows::Foundation::Collections::IKeyValuePair\<K,V\>](http://msdn.microsoft.com/library/windows/apps/br226031.aspx) nella mappa non ordinata.  
  
## Sintassi  
  
```cpp  
  
virtual Windows::Foundation::Collections::IIterator<  
Windows::Foundation::Collections::IKeyValuePair<K, V>^>^ First();  
```  
  
## Valore restituito  
 Iteratore che specifica il primo elemento nella mappa.  
  
## Note  
 Un modo pratico per contenere l'iteratore restituito da First\(\) consiste nell'assegnare il valore restituito a una variabile dichiarata con la parola chiave di deduzione del tipo [auto](../Topic/auto%20\(C++\).md). Ad esempio `auto x = myUnorderedMap->First();`.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::UnorderedMap](../cppcx/platform-collections-unorderedmap-class.md)   
 [Raccolte](../cppcx/collections-c-cx.md)