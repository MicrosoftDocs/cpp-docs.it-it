---
title: "Array::get (metodo) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/Platform::Array::get"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Array::get (metodo)"
ms.assetid: 3bbcd829-35e7-4912-99ba-6ab9de407287
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Array::get (metodo)
Recupera un riferimento all'elemento di matrice in corrispondenza della posizione di indice specificata.  
  
## Sintassi  
  
```  
  
T& get(  
unsigned int index  
)  const;  
```  
  
#### Parametri  
 `index`  
 Indice in base zero che identifica un elemento della matrice. L'indice minimo è 0 e l'indice massimo è il valore specificato dal parametro `size` in [Costruttore di matrici](../cppcx/array-constructors.md).  
  
## Valore restituito  
 Elemento di matrice specificato dal parametro `index`.  
  
## Requisiti  
 **Intestazione:** vccorlib.h  
  
 **Spazio dei nomi:** Platform  
  
## Vedere anche  
 [Platform::Array \(classe\)](../cppcx/platform-array-class.md)