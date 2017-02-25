---
title: "pointers_to_members | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "pointers_to_members_CPP"
  - "vc-pragma.pointers_to_members"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "membri di classi, puntatori"
  - "membri, puntatori"
  - "pointers_to_members (pragma)"
  - "pragma, pointers_to_members"
ms.assetid: 8325428c-c90a-4aed-9e82-cb1dda23f4ca
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# pointers_to_members
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica C\+\+**  
  
 Specifica se un puntatore a un membro di una classe può essere dichiarato prima della definizione di classe associata e viene utilizzato per controllare le dimensioni del puntatore e il codice necessario per interpretare il puntatore.  
  
## Sintassi  
  
```  
  
#pragma pointers_to_members( pointer-declaration, [most-general-representation] )  
```  
  
## Note  
 È possibile inserire un pragma **pointers\_to\_members** nel file di origine come alternativa all'utilizzo delle opzioni del compilatore [\/vmx](../build/reference/vmb-vmg-representation-method.md) o delle [parole chiave di ereditarietà](../cpp/inheritance-keywords.md).  
  
 L'argomento *pointer\-declaration* specifica se è stato dichiarato un puntatore a un membro prima o dopo la definizione di funzione associata.  L'argomento *pointer\-declaration* è uno dei due simboli riportati di seguito:  
  
|Argomento|Commenti|  
|---------------|--------------|  
|**full\_generality**|Genera codice sicuro e talvolta non ottimale.  Utilizzare **full\_generality** se un puntatore a un membro viene dichiarato prima della definizione di classe associata.  Questo argomento utilizza sempre la rappresentazione del puntatore specificata dall'argomento *most\-general\-representation*.  Equivalente a\/vmg.|  
|**best\_case**|Genera codice sicuro e ottimale mediante la rappresentazione basata sul caso migliore \(best\-case\) per tutti i puntatori ai membri.  Richiede di definire una classe prima di dichiarare un puntatore a un membro di tale classe.  L'espressione predefinita è **best\_case**.|  
  
 L'argomento *most\-general\-representation* specifica la più piccola rappresentazione del puntatore che può essere utilizzata in modo sicuro dal compilatore per fare riferimento a qualsiasi puntatore a un membro di una classe in un'unità di conversione.  L'argomento può essere uno dei seguenti:  
  
|Argomento|Commenti|  
|---------------|--------------|  
|**single\_inheritance**|La rappresentazione più generale è un puntatore a una funzione membro a ereditarietà singola.  Genera un errore se il modello di ereditarietà di una definizione di classe per cui viene dichiarato un puntatore a un membro è multiplo o virtuale.|  
|**multiple\_inheritance**|La rappresentazione più generale è un puntatore a una funzione membro a ereditarietà multipla.  Genera un errore se il modello di ereditarietà di una definizione di classe per cui viene dichiarato un puntatore a un membro è virtuale.|  
|**virtual\_inheritance**|La rappresentazione più generale è un puntatore a una funzione membro a ereditarietà virtuale.  Non genera mai un errore.  Si tratta dell'argomento predefinito quando si utilizza **\#pragma pointers\_to\_members\(full\_generality\)**.|  
  
> [!CAUTION]
>  Si consiglia di inserire il pragma `pointers_to_members` solo nel file del codice sorgente desiderato e solo dopo tutte le direttive `#include`.  In questo modo è possibile ridurre il rischio che il pragma abbia effetto su altri file e che vengano inavvertitamente specificate più definizioni per la stessa variabile, funzione o nome di classe.  
  
## Esempio  
  
```  
//   Specify single-inheritance only  
#pragma pointers_to_members( full_generality, single_inheritance )  
```  
  
## Fine sezione specifica C\+\+  
  
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)