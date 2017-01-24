---
title: "embedded_idl | Microsoft Docs"
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
  - "embedded_idl"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "embedded_idl (attributo)"
ms.assetid: f1c1c2e8-3872-4172-8795-8d1288a20452
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# embedded_idl
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica C\+\+**  
  
 Specifica che la libreria dei tipi è scritta nel file con estensione tlh con il codice generato dall'attributo mantenuto.  
  
## Sintassi  
  
```  
embedded_idl[("param")]  
```  
  
#### Parametri  
 `param`  
 Può essere uno dei due valori:  
  
-   emitidl: le informazioni sui tipi importate dalla libreria dei tipi saranno presenti nel file IDL generato per il progetto con attributi.  Questa è l'impostazione predefinita e avrà effetto se non si specifica un parametro su `embedded_idl`.  
  
-   no\_emitidl: le informazioni sui tipi importate dalla libreria dei tipi non saranno presenti nel file IDL generato per il progetto con attributi.  
  
## Esempio  
  
```  
// import_embedded_idl.cpp  
// compile with: /LD  
#include <windows.h>  
[module(name="MyLib2")];  
#import "\school\bin\importlib.tlb" embedded_idl("no_emitidl")  
```  
  
## Note  
 **Fine sezione specifica C\+\+**  
  
## Vedere anche  
 [Attributi \#import](../preprocessor/hash-import-attributes-cpp.md)   
 [Direttiva \#import](../preprocessor/hash-import-directive-cpp.md)