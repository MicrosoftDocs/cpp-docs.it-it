---
title: "Metodo UnorderedMapView::Lookup | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::UnorderedMapView::Lookup"
ms.assetid: 22f61824-ba8c-4b8c-9077-7577c41a6742
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo UnorderedMapView::Lookup
Recupera il valore di tipo V associato alla chiave specificata di tipo K.  
  
## Sintassi  
  
```cpp  
V Lookup(  
   K key  
);  
```  
  
#### Parametri  
 `key`  
 Chiave usata per individuare un elemento in UnorderedMapView. Il tipo di `key` è typename *K*.  
  
## Valore restituito  
 Valore abbinato a `key`. Il tipo del valore restituito è typename *V*.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::UnorderedMapView](../cppcx/platform-collections-unorderedmapview-class.md)