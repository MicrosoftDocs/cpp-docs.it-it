---
title: "Metodo UnorderedMap::GetView | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::UnorderedMap::GetView"
ms.assetid: 41a12802-3f42-461c-a6fc-a35fc34517f2
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo UnorderedMap::GetView
Restituisce una visualizzazione di sola lettura dell'elemento UnorderedMap corrente; ovvero [Classe Platform::Collections::UnorderedMapView](../cppcx/platform-collections-unorderedmapview-class.md) che implementa l'interfaccia [Windows::Foundation::Collections::IMapView::IMapView](http://msdn.microsoft.com/library/windows/apps/br226037.aspx).  
  
## Sintassi  
  
```scr  
  
Windows::Foundation::Collections::IMapView<K, V>^   
   GetView();  
```  
  
## Valore restituito  
 Oggetto `UnorderedMapView`.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Raccolte](../cppcx/collections-c-cx.md)   
 [Classe Platform::Collections::UnorderedMap](../cppcx/platform-collections-unorderedmap-class.md)   
 [Classe Platform::Collections::UnorderedMapView](../cppcx/platform-collections-unorderedmapview-class.md)