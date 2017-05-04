---
title: "MapView::Split (metodo) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::MapView::Split"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MapView::Split (metodo)"
ms.assetid: b863e223-2282-4d1a-b995-77a690120542
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# MapView::Split (metodo)
Divide l'oggetto MapView corrente in due oggetti MapView. Questo metodo non è operativo.  
  
## Sintassi  
  
```  
void Split(  
   Windows::Foundation::Collections::IMapView<  
                         K,  
                         V>^ * firstPartition,  
   Windows::Foundation::Collections::IMapView<  
                         K,  
                         V>^ * secondPartition  
);  
```  
  
#### Parametri  
 `firstPartition`  
 Prima parte dell'oggetto MapView originale.  
  
 `secondPartition`  
 Seconda parte dell'oggetto MapView originale.  
  
## Note  
 Questo metodo non è operativo; non esegue alcuna operazione.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::MapView](../cppcx/platform-collections-mapview-class.md)