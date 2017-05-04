---
title: "Costruttori Array | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/Platform::Array::Array"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Array::Array"
ms.assetid: befb8088-3915-4b5c-b7fd-90f79961412d
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Costruttori Array
Inizializza una matrice modificabile unidimensionale di tipi specificati dal parametro di modello della classe, *T*.  
  
## Sintassi  
  
```  
  
Array(unsigned int size);  
Array(T* data, unsigned int size);  
  
```  
  
#### Parametri  
 `T`  
 Parametro di modello della classe.  
  
 `size`  
 Numero di elementi nella matrice.  
  
 `data`  
 Puntatore a una matrice di dati di tipo `T` utilizzato per inizializzare l'oggetto Array.  
  
## Note  
 Per ulteriori informazioni sulla creazione di istanze di Platform::Array, vedi [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).  
  
## Requisiti  
 **Intestazione:** vccorlib.h  
  
 **Spazio dei nomi:** Platform  
  
## Vedere anche  
 [Platform::Array \(classe\)](../cppcx/platform-array-class.md)