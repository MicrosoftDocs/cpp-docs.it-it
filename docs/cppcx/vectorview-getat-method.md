---
title: "VectorView::GetAt (metodo) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorView::GetAt"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorView::GetAt (metodo)"
ms.assetid: 01c5feda-2a97-4429-ae15-4aced96ce332
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorView::GetAt (metodo)
Recupera l'elemento dell'oggetto VectorView corrente indicato dall'indice specificato.  
  
## Sintassi  
  
```  
  
T GetAt(  
   UInt32 index  
);  
```  
  
#### Parametri  
 `index`  
 Intero senza segno in base zero che specifica un particolare elemento nell'oggetto VectorView.  
  
## Valore restituito  
 Elemento specificato dal parametro `index`. Il tipo di elemento è specificato dal parametro di modello VectorView *T*.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [VectorView Class](http://msdn.microsoft.com/it-it/79697692-ae58-40e0-958f-cf1be6347994)