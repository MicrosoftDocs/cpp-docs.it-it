---
title: "Metodo UnorderedMap::HasKey | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::UnorderedMap::HasKey"
ms.assetid: 7c397cdc-82f6-470a-8a3c-f5ba2cc58ed6
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo UnorderedMap::HasKey
Determina se l'oggetto UnorderedMap corrente contiene la chiave specificata.  
  
## Sintassi  
  
```scr  
  
bool HasKey(  
   K key  
);  
```  
  
#### Parametri  
 `key`  
 Chiave usata per individuare l'elemento UnorderedMap. Il tipo di `key` è typename *K*.  
  
## Valore restituito  
 `true` se la chiave viene trovata; in caso contrario, `false`.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::UnorderedMap](../cppcx/platform-collections-unorderedmap-class.md)   
 [Raccolte](../cppcx/collections-c-cx.md)   
 [Windows::Foundation::Collections::IKeyValuePair\<K,V\>](http://msdn.microsoft.com/library/windows/apps/br226031.aspx)