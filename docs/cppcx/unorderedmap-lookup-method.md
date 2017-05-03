---
title: "Metodo UnorderedMap::Lookup | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::UnorderedMap::Lookup"
ms.assetid: 6f9bb393-3791-423d-bfee-925e0531e1a5
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo UnorderedMap::Lookup
Recupera il valore di tipo V associato alla chiave specificata di tipo K.  
  
## Sintassi  
  
```scr  
V Lookup(  
   K key  
);  
```  
  
#### Parametri  
 `key`  
 Chiave usata per individuare un elemento in UnorderedMap. Il tipo di `key` è typename *K*.  
  
## Valore restituito  
 Valore abbinato a `key`. Il tipo del valore restituito è typename *V*.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Raccolte](../cppcx/collections-c-cx.md)   
 [Classe Platform::Collections::UnorderedMap](../cppcx/platform-collections-unorderedmap-class.md)