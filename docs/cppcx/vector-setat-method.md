---
title: "Metodo Vector::SetAt | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Vector::SetAt"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Vector::SetAt"
ms.assetid: ddfb454e-dbfd-4831-b040-674b085d8fb6
caps.latest.revision: 2
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo Vector::SetAt
Assegna il valore specificato all'elemento nell'oggetto Vector corrente che è identificato dall'indice specificato.  
  
## Sintassi  
  
```  
  
virtual void SetAt(  
   unsigned int index,   
   T item  
);  
```  
  
#### Parametri  
 `index`  
 Intero senza segno in base zero che specifica un particolare elemento nell'oggetto Vector.  
  
 `item`  
 Valore da assegnare all'elemento specificato. Il tipo di `item` è definito dall'oggetto typename *T*.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md)