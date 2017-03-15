---
title: "rename (#import) | Microsoft Docs"
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
  - "Rename"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "rename (attributo)"
ms.assetid: 5c5c6153-1087-4b7b-87fb-fc59b90b9975
caps.latest.revision: 4
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# rename (#import)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica C\+\+**  
  
 Risolve i problemi di conflitto di nomi.  
  
## Sintassi  
  
```  
rename("OldName","NewName")  
```  
  
#### Parametri  
 `OldName`  
 Nome precedente nella libreria di tipi.  
  
 `NewName`  
 Nome da utilizzare al posto del nome precedente.  
  
## Note  
 Se si specifica questo attributo, il compilatore sostituisce tutte le occorrenze di *OldName* presenti in una libreria di tipi con il *NewName* fornito dall'utente nei file di intestazione risultanti.  
  
 Questo attributo può essere utilizzato quando un nome nella libreria di tipi coincide con una definizione macro nei file di intestazione del sistema.  Se questa situazione non viene risolta, verranno generati diversi errori di sintassi, come [Errore del compilatore C2059](../error-messages/compiler-errors-1/compiler-error-c2059.md) e [Errore del compilatore C2061](../error-messages/compiler-errors-1/compiler-error-c2061.md).  
  
> [!NOTE]
>  La sostituzione riguarda un nome utilizzato nella libreria di tipi, non un nome utilizzato nel file di intestazione risultante.  
  
 Ad esempio, si supponga che una proprietà denominata `MyParent` esiste in una libreria di tipi e che una macro `GetMyParent` è definita in un file di intestazione e viene utilizzata prima di `#import`.  Poiché `GetMyParent` è il nome predefinito di una funzione wrapper della proprietà di gestione degli errori **get**, si verificherà un conflitto.  Per ovviare al problema, utilizzare il seguente attributo nell'istruzione `#import` :  
  
```  
rename("MyParent","MyParentX")  
```  
  
 il quale rinomina il nome `MyParent` nella libreria di tipi.  Il tentativo di rinominare il nome del wrapper `GetMyParent` non riuscirà:  
  
```  
rename("GetMyParent","GetMyParentX")  
```  
  
 Questo perché il nome `GetMyParent` ricorre solo nel file di intestazione della libreria di tipi risultante.  
  
 **Fine sezione specifica C\+\+**  
  
## Vedere anche  
 [Attributi \#import](../preprocessor/hash-import-attributes-cpp.md)   
 [Direttiva \#import](../preprocessor/hash-import-directive-cpp.md)