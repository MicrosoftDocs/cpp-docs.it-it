---
title: "Platform::Array (classe) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/Platform::Array"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::Array (classe)"
ms.assetid: 7815ab40-88c5-42b0-83b8-081cef0cda31
caps.latest.revision: 9
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 9
---
# Platform::Array (classe)
Rappresenta una matrice unidimensionale modificabile che può essere ricevuta e passata tramite l'interfaccia ABI \(Application Binary Interface\).  
  
## Sintassi  
  
```cpp  
  
template <typename T>  
    private ref class Array<TArg,1> :   
         public WriteOnlyArray<TArg, 1>,  
         public IBoxArray<TArg>  
  
```  
  
## Membri  
 Platform::Array eredita tutti i metodi da [Platform::WriteOnlyArray \(classe\)](../cppcx/platform-writeonlyarray-class.md) e implementa la proprietà `Value` di [Interfaccia Platform::IBoxArray](../cppcx/platform-iboxarray-interface.md)\).  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttori Array](../cppcx/array-constructors.md)|Inizializza una matrice modificabile unidimensionale di tipi specificati dal parametro di modello della classe, *T*.|  
  
### Metodi  
 Vedere [Platform::WriteOnlyArray \(classe\)](../cppcx/platform-writeonlyarray-class.md).  
  
### Proprietà  
  
|||  
|-|-|  
|[Array::Value \(proprietà\)](../cppcx/array-value-property.md)|Recupera un handle alla matrice corrente.|  
  
## Note  
 La classe Array è sealed e non può essere ereditata.  
  
 Il sistema di tipi Windows Runtime non supporta il concetto di matrici di matrici, pertanto non puoi passare un IVector\<Platform::Array\<T\>\> come valore restituito o parametro di metodo. Per passare una matrice di matrici o una sequenza di sequenze attraverso l'interfaccia applicativa binaria \(ABI\), usa `IVector<IVector<T>^>`.  
  
 Per ulteriori informazioni sui casi e sui modi in cui occorre usare Platform::Array, vedi [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).  
  
 Il sistema di tipi Windows Runtime non supporta il concetto di matrici di matrici, pertanto non puoi passare un IVector\<Platform::Array\<T\>\> come valore restituito o parametro di metodo. Per passare una matrice di matrici o una sequenza di sequenze attraverso l'interfaccia applicativa binaria \(ABI\), usa `IVector<IVector<T>^>`.  
  
 Questa classe è definita nel file di intestazione vccorlib.h, che è incluso automaticamente dal compilatore. È visibile in Intellisense ma non nel Visualizzatore oggetti perché non è un tipo pubblico definito in platform.winmd.  
  
## Requisiti  
 Opzione del compilatore: **\/ZW**  
  
## Vedere anche  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)   
 [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md)