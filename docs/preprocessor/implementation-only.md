---
title: "implementation_only | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "implementation_only"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "implementation_only (attributo)"
ms.assetid: d8cabc86-4425-45a0-9587-d57536980088
caps.latest.revision: 4
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# implementation_only
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica C\+\+**  
  
 Elimina la generazione del file di intestazione con estensione tlh \(file di intestazione primario\).  
  
## Sintassi  
  
```  
implementation_only  
```  
  
## Note  
 Questo file contiene tutte le dichiarazioni utilizzate per esporre il contenuto della libreria dei tipi.  Il file di intestazione con estensione .tli, con le implementazioni delle funzioni membro wrapper, verrà generato e incluso nella compilazione.  
  
 Quando questo attributo viene specificato, il contenuto dell'intestazione con estensione .tli si trova nello stesso spazio dei nomi di quello utilizzato in genere nell'intestazione .tlh.  Inoltre, le funzioni membro non vengono dichiarate come inline.  
  
 L'attributo `implementation_only` deve essere utilizzato insieme all'attributo [no\_implementation](../preprocessor/no-implementation.md) come un modo per mantenere le implementazioni fuori dal file di intestazione precompilato \(PCH\).  Un'istruzione `#import` con l'attributo `no_implementation` si trova nell'area di origine utilizzata per creare il PCH.  Il PCH risultante viene utilizzato da una serie di file di origine.  Un'istruzione `#import` con l'attributo `implementation_only` viene quindi utilizzata all'esterno dell'area PCH.  È necessario utilizzare questa istruzione una sola volta in uno dei file di origine.  In questo modo verranno generate tutte le funzioni membro wrapper necessarie senza ricompilazione aggiuntiva per ogni file di origine.  
  
> [!NOTE]
>  L'attributo `implementation_only` in un'istruzione `#import` deve essere utilizzato insieme a un'altra istruzione `#import`, della stessa libreria dei tipi, con l'attributo `no_implementation`.  In caso contrario, verranno generati errori del compilatore.  Questo perché le definizioni di classe wrapper generate dall'istruzione `#import` con l'attributo `no_implementation` sono necessarie per compilare le implementazioni generate dall'attributo `implementation_only`.  
  
 **Fine sezione specifica C\+\+**  
  
## Vedere anche  
 [Attributi \#import](../preprocessor/hash-import-attributes-cpp.md)   
 [Direttiva \#import](../preprocessor/hash-import-directive-cpp.md)