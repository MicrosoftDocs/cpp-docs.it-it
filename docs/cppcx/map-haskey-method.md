---
title: "Map::HasKey (metodo) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Map::HasKey"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Map::HasKey (metodo)"
ms.assetid: ba7864af-056a-4b7b-843d-08c45b7f7394
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Map::HasKey (metodo)
Determina se l'oggetto Map corrente contiene la chiave specificata.  
  
## Sintassi  
  
```  
  
bool HasKey(  
   K key  
);  
```  
  
#### Parametri  
 `key`  
 Chiave usata per individuare l'elemento Map. Il tipo di `key` è typename *K*.  
  
## Valore restituito  
 `true` se la chiave viene trovata; in caso contrario, `false`.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::Map](../cppcx/platform-collections-map-class.md)