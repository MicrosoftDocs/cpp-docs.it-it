---
title: "Map::Lookup (metodo) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Map::Lookup"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Map::Lookup (metodo)"
ms.assetid: c56773ae-2df0-4d21-a6ab-9603529547b0
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Map::Lookup (metodo)
Recupera il valore di tipo V associato alla chiave specificata di tipo K, se la chiave esiste.  
  
## Sintassi  
  
```  
V Lookup(  
   K key  
);  
```  
  
#### Parametri  
 `key`  
 Chiave utilizzata per individuare un elemento in Map. Il tipo di `key` è typename *K*.  
  
## Valore restituito  
 Valore abbinato a `key`. Il tipo del valore restituito è typename *V*.  
  
## Note  
 Se la chiave non esiste, verrà generata un'eccezione [Platform::OutOfBoundsException](../cppcx/platform-outofboundsexception-class.md).  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::Map](../cppcx/platform-collections-map-class.md)   
 [Raccolte \(C\+\+\/CX\)](../cppcx/collections-c-cx.md)