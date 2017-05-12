---
title: "back_inserter (funzione) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Windows::Foundation::Collections::back_inserter"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "back_inserter (funzione)"
ms.assetid: 91476338-5548-44b7-bc7e-2150f4fbe31a
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 4
---
# back_inserter (funzione)
Restituisce un iteratore che viene utilizzato per inserire elementi alla fine della raccolta specificata.  
  
## Sintassi  
  
```  
  
template <  
   typename T  
   >  
   ::Platform::BackInsertIterator<T>   
    back_inserter(  
                  IVector<T>^ v  
                 );  
  
template <  
   typename T  
   >  
   ::Platform::BackInsertIterator<T>   
   back_inserter(  
                IObservableVector<T>^ v  
                );  
```  
  
#### Parametri  
 `T`  
 Parametro del tipo di modello.  
  
 `v`  
 Puntatore a un'interfaccia che fornisce l'accesso alla raccolta sottostante.  
  
## Valore restituito  
 Iteratore.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Windows::Foundation::Collections  
  
## Vedere anche  
 [Spazio dei nomi Windows::Foundation::Collections](../cppcx/windows-foundation-collections-namespace-c-cx.md)