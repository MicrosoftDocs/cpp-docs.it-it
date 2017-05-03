---
title: "Metodo Vector::ReplaceAll | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Vector::ReplaceAll"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Vector::ReplaceAll"
ms.assetid: dec905f9-80fc-4aa0-ad04-bbab10feb0b2
caps.latest.revision: 2
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo Vector::ReplaceAll
Elimina gli elementi nell'oggetto Vector corrente, quindi li inserisce dalla matrice specificata.  
  
## Sintassi  
  
```  
  
virtual void ReplaceAll(  
   const ::Platform::Array<T>^ arr  
);  
```  
  
#### Parametri  
 `arr`  
 Matrice di oggetti il cui tipo è definito dall'oggetto typename *T*.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md)