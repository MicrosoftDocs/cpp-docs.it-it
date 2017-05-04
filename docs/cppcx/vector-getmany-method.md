---
title: "Vector::GetMany (metodo) | Microsoft Docs"
ms.custom: ""
ms.date: "12/13/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Vector::GetMany"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Vector::GetMany (metodo)"
ms.assetid: e2d5ccf4-101a-47e5-a0d8-56f65a7ff28d
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Vector::GetMany (metodo)
Recupera una sequenza di elementi dall'oggetto Vector corrente, a partire dall'indice specificato e li copia nella matrice allocata dal chiamante.  
  
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
 Matrice di elementi allocata dal chiamante che inizia a partire dall'elemento specificato da `startIndex` e finisce in corrispondenza dell'ultimo elemento in Vector.  
  
## Valore restituito  
 Numero di elementi recuperati.  
  
## Note  
 Questa funzione non deve essere usata direttamente dal codice client. È usata internamente in [to\_vector Function](../cppcx/to-vector-function.md) per abilitare la conversione efficiente di istanze di Platform::Vector in istanze di std::vector.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md)