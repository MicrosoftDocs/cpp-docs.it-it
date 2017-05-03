---
title: "begin (funzione) | Microsoft Docs"
ms.custom: ""
ms.date: "01/22/2017"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Windows::Foundation::Collections::begin"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "begin (funzione)"
ms.assetid: 5a44fb33-e247-49fd-b7a1-4a5b42e9e1e4
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 4
---
# begin (funzione)
Restituisce un iteratore che punta all'inizio di una raccolta a cui si accede dal parametro di interfaccia specificato.  
  
## Sintassi  
  
```  
  
template <typename T>   
    ::Platform::Collections::VectorIterator<T>   
    begin(  
          IVector<T>^ v         );  
  
template <typename T>   
    ::Platform::Collections::VectorViewIterator<T>   
    begin(  
          IVectorView<T>^ v  
         );   
  
template <typename T>   
    ::Platform::Collections::InputIterator<T>   
    begin(  
          IIterable<T>^ i         );  
  
```  
  
#### Parametri  
 `T`  
 Parametro del tipo di modello.  
  
 `v`  
 Raccolta di oggetti Vector\<T\> o VectorView\<T\> a cui è possibile accedere attraverso un'interfaccia IVector\<T\> o IVectorView\<T\>.  
  
 `i`  
 Raccolta di oggetti di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] arbitrari a cui è possibile accedere attraverso un'interfaccia IIterable\<T\>.  
  
## Valore restituito  
 Iteratore che punta all'inizio della raccolta.  
  
## Note  
 Le prime due funzioni di modello restituiscono degli iteratori, la terza funzione restituisce un iteratore di input.  
  
 L'oggetto VectorIterator restituito da begin è un iteratore proxy che archivia elementi di tipo VectorProxy\<T\>. L'oggetto proxy, tuttavia, non è quasi mai visibile al codice utente. Per ulteriori informazioni, vedi [Raccolte \(C\+\+\/CX\)](../cppcx/collections-c-cx.md).  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Windows::Foundation::Collections  
  
## Vedere anche  
 [Spazio dei nomi Windows::Foundation::Collections](../cppcx/windows-foundation-collections-namespace-c-cx.md)