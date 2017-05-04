---
title: "Evento Map::MapChanged | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Map::MapChanged"
ms.assetid: d14b5b93-36ff-47a5-b588-dd1dc6ea4364
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Evento Map::MapChanged
Generato quando un elemento viene inserito o rimosso dalla mappa.  
  
## Sintassi  
  
```cpp  
event Windows::Foundation::Collections::MapChangedEventHandler<K,V>^ MapChanged;  
```  
  
## Valore proprietà\/Valore restituito  
 Oggetto [MapChangedEventHandler\<K,V\>](http://msdn.microsoft.com/library/windows/apps/br206644.aspx) che contiene informazioni sull'oggetto che ha generato l'evento e il tipo di modifica apportata. Vedere anche [IMapChangedEventArgs\<K\>](http://msdn.microsoft.com/library/windows/apps/br226034.aspx) e [CollectionChange Enumeration](http://msdn.microsoft.com/library/windows/apps/windows.foundation.collections.collectionchange.aspx).  
  
## Equivalente .NET Framework  
 App Windows Store che usano il progetto IMap\<K,V\> di C\# o Visual Basic come IDictionary\<K,V\>.  
  
## Requisiti  
 Windows 8.0 o versioni successive  
  
## Vedere anche  
 [Raccolte](../cppcx/collections-c-cx.md)