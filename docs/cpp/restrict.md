---
title: "restrict | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "restrict"
  - "restrict_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__declspec (parola chiave) [C++], restrict"
  - "restrict __declspec (parola chiave)"
ms.assetid: f39cf632-68d8-4362-a497-2d4c15693689
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# restrict
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Applicato a una dichiarazione di funzione o a una definizione che restituisce un tipo di puntatore e indica al compilatore che la funzione restituisce un oggetto per cui non verrà utilizzato un alias con altri puntatori.  
  
## Sintassi  
  
```  
__declspec(restrict) return_type f();  
```  
  
## Note  
 Il compilatore propagherà `__declspec(restrict)`.  Ad esempio, la funzione `malloc` CRT è decorata con `__declspec(restrict)`, pertanto anche i puntatori inizializzati in posizioni di memoria con `malloc` sono previsti senza alias.  
  
 Il compilatore non controlla che per il puntatore non venga effettivamente utilizzato un alias.  È responsabilità dello sviluppatore specificare che il programma non utilizzi un alias per un puntatore contrassegnato con il modificatore `restrict __declspec`.  
  
 Per una semantica simile nelle variabili, vedere [\_\_restrict](../cpp/extension-restrict.md).  
  
## Esempio  
 Vedere [noalias](../cpp/noalias.md) per un esempio che utilizza `restrict`.  
  
 Per informazioni sulla parola chiave restrict che è parte di C\+\+ AMP, vedere [restrict \(C\+\+ AMP\)](../cpp/restrict-cpp-amp.md).  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [\_\_declspec](../cpp/declspec.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)