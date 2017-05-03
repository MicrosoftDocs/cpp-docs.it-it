---
title: "MapView::HasKey (metodo) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::MapView::HasKey"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MapView::HasKey (metodo)"
ms.assetid: c1a24f63-e6fd-4cfd-90ce-b89352b98324
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# MapView::HasKey (metodo)
Determina se l'oggetto MapView corrente contiene la chiave specificata.  
  
## Sintassi  
  
```  
  
bool HasKey(  
   K key  
);  
```  
  
#### Parametri  
 `key`  
 Chiave usata per individuare l'elemento MapView. Il tipo di `key` è typename *K*.  
  
## Valore restituito  
 `true` se la chiave viene trovata; in caso contrario, `false`.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::MapView](../cppcx/platform-collections-mapview-class.md)