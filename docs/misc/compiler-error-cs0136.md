---
title: "Errore del compilatore CS0136 | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0136"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0136"
ms.assetid: 379a1a7d-c52c-4f2b-9e77-c1107d26faf4
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0136
Una variabile locale denominata 'var' non può essere dichiarata in quest'ambito perché darebbe un significato diverso a 'var', che è già usato in un ambito 'parent or current\/child' per identificare qualcos'altro  
  
 Una dichiarazione di variabile nasconde un'altra dichiarazione che altrimenti sarebbe nell'ambito. Rinominare la variabile che viene dichiarata nella riga che ha generato l'errore CS0136.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0136:  
  
```  
// CS0136.cs  
namespace MyNamespace  
{  
   public class MyClass  
   {  
      public static void Main()  
      {  
         int i = 0;  
         {  
            char i = 'a';   // CS0136, hides int i  
         }  
         i++;  
      }  
   }  
}  
```  
  
 Dalla sezione 7.5.2.1 dell'argomento [Specifiche del linguaggio C\#](../Topic/C%23%20Language%20Specification.md):  
  
 Per ogni occorrenza di un determinato identificatore come nome semplice in un'espressione o un dichiaratore, nello spazio di dichiarazione di variabile locale \(sezione 3.3\) che contiene tale occorrenza, tutte le altre occorrenze dello stesso identificatore come nome semplice in un'espressione o dichiaratore devono fare riferimento alla stessa entità. Questa regola assicura che il significato di un nome corrisponda sempre all'interno di un dato blocco, blocco switch, istruzione for\-, foreach\- o using\- o una funzione anonima.