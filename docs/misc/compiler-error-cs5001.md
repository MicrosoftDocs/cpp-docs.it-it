---
title: "Errore del compilatore CS5001 | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS5001"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS5001"
ms.assetid: e1e26e75-84e0-47c7-be8a-3c4fd0d6f497
caps.latest.revision: 14
caps.handback.revision: 14
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS5001
Il programma 'program' non contiene un metodo statico 'Main' appropriato per un punto di ingresso  
  
 Questo errore si verifica quando nel codice che produce un file eseguibile non viene trovato un metodo statico [Main](../Topic/Main\(\)%20and%20Command-Line%20Arguments%20\(C%23%20Programming%20Guide\).md) con la firma appropriata. Questo errore si verifica anche quando la funzione del punto di ingresso, ovvero `Main`, viene definita con la combinazione di maiuscole e minuscole errata, ad esempio `main` in minuscolo.  
  
-   Il metodo `Main` deve essere dichiarato come statico, deve restituire [void](../Topic/void%20\(C%23%20Reference\).md) o [int](../Topic/int%20\(C%23%20Reference\).md) e deve essere privo di parametri oppure avere un parametro di tipo `string[]`.  
  
## Esempio  
 L'esempio seguente genera l'errore CS5001:  
  
```  
// CS5001.cs // CS5001 expected public class a { // Uncomment the following line to resolve. // static void Main() {} }  
```  
  
## Vedere anche  
 [Main\(\) e argomenti della riga di comando](../Topic/Main\(\)%20and%20Command-Line%20Arguments%20\(C%23%20Programming%20Guide\).md)