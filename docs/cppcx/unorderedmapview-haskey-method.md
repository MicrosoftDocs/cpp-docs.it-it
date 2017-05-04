---
title: "Metodo UnorderedMapView::HasKey | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::UnorderedMapView::HasKey"
ms.assetid: 4704da18-8606-4df7-be51-d125b2e4aee0
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo UnorderedMapView::HasKey
Determina se l'oggetto UnorderedMap corrente contiene la chiave specificata.  
  
## Sintassi  
  
```cpp  
  
bool HasKey(  
   K key  
);  
```  
  
#### Parametri  
 `key`  
 Chiave usata per individuare l'elemento. Il tipo di `key` è typename *K*.  
  
## Valore restituito  
 `true` se la chiave viene trovata; in caso contrario, `false`.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::UnorderedMap](../cppcx/platform-collections-unorderedmap-class.md)   
 [Raccolte](../cppcx/collections-c-cx.md)   
 [Windows::Foundation::Collections::IKeyValuePair\<K,V\>](http://msdn.microsoft.com/library/windows/apps/br226031.aspx)