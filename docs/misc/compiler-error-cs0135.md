---
title: "Errore del compilatore CS0135 | Microsoft Docs"
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
  - "CS0135"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0135"
ms.assetid: 1bda402c-e8bd-4117-93d9-f4968d9e8303
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0135
'declaration1' è in conflitto con la dichiarazione 'declaration2'  
  
 Il compilatore non consente di nascondere i nomi, comportando generalmente errori di logica nel codice.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0135:  
  
```  
// CS0135.cs  
public class MyClass2  
{  
   public static int i = 0;  
  
   public static void Main()  
   {  
      {  
         int i = 4;  
         i++;  
      }  
      i = 0;   // CS0135  
   }  
}  
```  
  
 Dalla sezione 7.5.2.1 dell'argomento [Specifiche del linguaggio C\#](../Topic/C%23%20Language%20Specification.md):  
  
 Per ogni occorrenza di un determinato identificatore come nome semplice in un'espressione o un dichiaratore, nello spazio di dichiarazione di variabile locale \(sezione 3.3\) che contiene tale occorrenza, tutte le altre occorrenze dello stesso identificatore come nome semplice in un'espressione o dichiaratore devono fare riferimento alla stessa entità. Questa regola assicura che il significato di un nome corrisponda sempre all'interno di un dato blocco, blocco switch, istruzione for\-, foreach\- o using\- o una funzione anonima.