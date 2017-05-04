---
title: "VectorView::GetMany (metodo) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorView::GetMany"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorView::GetMany (metodo)"
ms.assetid: 67d9348f-66fe-417e-9e25-5de0a3cd306c
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorView::GetMany (metodo)
Recupera una sequenza di elementi dall'oggetto VectorView corrente, a partire dall'indice specificato.  
  
## Sintassi  
  
```  
  
virtual unsigned int GetMany(  
   unsigned int startIndex,   
   ::Platform::WriteOnlyArray<T>^ dest  
);  
```  
  
#### Parametri  
 `startIndex`  
 Indice a base zero dell'inizio degli elementi da recuperare.  
  
 `dest`  
 Al termine dell'operazione, una matrice di elementi che inizia con l'elemento specificato da `startIndex` e termina con l'ultimo elemento in VectorView.  
  
## Valore restituito  
 Numero di elementi recuperati.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [VectorView Class](http://msdn.microsoft.com/it-it/79697692-ae58-40e0-958f-cf1be6347994)