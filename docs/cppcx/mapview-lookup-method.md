---
title: "MapView::Lookup (metodo) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::MapView::Lookup"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MapView::Lookup (metodo)"
ms.assetid: 93090ac3-3f1d-4b7e-b80e-164b8c65cd29
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# MapView::Lookup (metodo)
Recupera il valore di tipo V associato alla chiave specificata di tipo K.  
  
## Sintassi  
  
```  
V Lookup(  
   K key  
);  
```  
  
#### Parametri  
 `key`  
 Chiave utilizzata per individuare un elemento in MapView. Il tipo di `key` è typename *K*.  
  
## Valore restituito  
 Valore abbinato a `key`. Il tipo del valore restituito è typename *V*.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::MapView](../cppcx/platform-collections-mapview-class.md)