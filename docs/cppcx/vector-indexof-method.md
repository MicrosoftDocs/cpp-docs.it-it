---
title: "Vector::IndexOf (metodo) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Vector::IndexOf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Vector::IndexOf (metodo)"
ms.assetid: 4a965992-3858-4e3f-992a-b94c0580b2f7
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Vector::IndexOf (metodo)
Cerca l'elemento specificato nell'oggetto Vector corrente e, se lo trova, restituisce l'indice dell'elemento.  
  
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
  
 Il parametro `index` è 0 se l'elemento è il primo elemento dell'oggetto Vector o se l'elemento non è stato trovato. Se il valore restituito è `true`, l'elemento è stato trovato ed è il primo elemento; in caso contrario, l'elemento non è stato trovato.  
  
## Valore restituito  
 `true` se l'elemento specificato è stato trovato; in caso contrario, `false`.  
  
## Note  
 IndexOf usa std::find\_if per trovare l'elemento. I tipi di elemento personalizzati dovrebbero quindi essere in rapporto di overload con l'operatore \=\= e \!\= in modo da abilitare i confronti di eguaglianza necessari per find\_if.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md)