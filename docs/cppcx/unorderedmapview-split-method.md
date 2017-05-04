---
title: "Metodo UnorderedMapView::Split | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::UnorderedMapView::Split"
ms.assetid: b759d254-40c9-40f1-9838-106ffb2c5626
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo UnorderedMapView::Split
Divide l'oggetto UnorderedMapView corrente in due oggetti UnorderedMapView. Questo metodo non è operativo.  
  
## Sintassi  
  
```cpp  
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
 Prima parte dell'oggetto UnorderedMapView originale.  
  
 `secondPartition`  
 Seconda parte dell'oggetto UnorderedMapView originale.  
  
## Note  
 Questo metodo non è operativo; non esegue alcuna operazione.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::UnorderedMapView](../cppcx/platform-collections-unorderedmapview-class.md)