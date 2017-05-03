---
title: "VectorViewIterator::VectorViewIterator (costruttore) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorViewIterator::VectorViewIterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorViewIterator::VectorViewIterator (costruttore)"
ms.assetid: 30bf643a-4100-4547-b34c-ce16c89f78ed
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorViewIterator::VectorViewIterator (costruttore)
Inizializza una nuova istanza della classe VectorViewIterator.  
  
## Sintassi  
  
```  
  
VectorViewIterator();  
  
explicit VectorViewIterator(  
   Windows::Foundation::Collections::IVectorView<T>^ v  
);  
```  
  
#### Parametri  
 `v`  
 Oggetto IVectorView\<T\>.  
  
## Note  
 Il primo esempio di sintassi è il costruttore predefinito. Il secondo esempio di sintassi è un costruttore esplicito utilizzato per costruire un oggetto VectorViewIterator da un oggetto IVectorView\<T\>.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::VectorViewIterator](../cppcx/platform-collections-vectorviewiterator-class.md)