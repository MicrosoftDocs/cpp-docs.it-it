---
title: "VectorView::IndexOf (metodo) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorView::IndexOf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorView::IndexOf (metodo)"
ms.assetid: 848117ec-ad4a-4a0b-9c1e-9076e5188869
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorView::IndexOf (metodo)
Cerca l'elemento specificato nell'oggetto VectorView corrente e, se lo trova, restituisce l'indice dell'elemento.  
  
## Sintassi  
  
```  
  
virtual bool IndexOf(  
   T value,  
   unsigned int* index  
);  
```  
  
#### Parametri  
 `value`  
 Elemento da cercare.  
  
 `index`  
 Indice in base zero dell'elemento se è stato trovato `value` del parametro; in caso contrario, 0.  
  
 Il parametro `index` è 0 se l'elemento è il primo elemento dell'oggetto VectorView o se l'elemento non è stato trovato. Se il valore restituito è `true`, l'elemento è stato trovato ed è il primo elemento; in caso contrario, l'elemento non è stato trovato.  
  
## Valore restituito  
 `true` se l'elemento specificato è stato trovato; in caso contrario, `false`.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [VectorView Class](http://msdn.microsoft.com/it-it/79697692-ae58-40e0-958f-cf1be6347994)