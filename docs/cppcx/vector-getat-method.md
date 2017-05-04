---
title: "Vector::GetAt (metodo) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Vector::GetAt"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Vector::GetAt (metodo)"
ms.assetid: 3766b399-cef2-4006-9a87-50f717390cac
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Vector::GetAt (metodo)
Recupera l'elemento dell'oggetto Vector corrente identificato dall'indice specificato.  
  
## Sintassi  
  
```  
  
virtual T GetAt(  
   unsigned int index  
);  
```  
  
#### Parametri  
 `index`  
 Intero senza segno in base zero che specifica un particolare elemento nell'oggetto Vector.  
  
## Valore restituito  
 Elemento specificato dal parametro `index`. Il tipo di elemento è definito dall'oggetto typename *T*.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md)