---
title: "Inferenza dell&#39;argomento di tipo non riuscita per il parametro di tipo &#39;&lt;nomeparametrotipo&gt;&#39; di &#39;&lt;firmaroutinegenerica&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc32051"
  - "bc32051"
helpviewer_keywords: 
  - "BC32051"
ms.assetid: a9c2a0ce-e225-4549-bfd8-d42df5d16bfd
caps.latest.revision: 12
caps.handback.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Inferenza dell&#39;argomento di tipo non riuscita per il parametro di tipo &#39;&lt;nomeparametrotipo&gt;&#39; di &#39;&lt;firmaroutinegenerica&gt;&#39;
Inferenza dell'argomento di tipo non riuscita per il parametro di tipo '\<nomeparametrotipo\>' di '\<firmaroutinegenerica\>'. Non è stato possibile dedurre l'argomento di tipo dall'argomento passato al parametro '\<nomeparametrotipo\>'.  
  
 Viene chiamata una routine generica senza fornire argomenti di tipo e il compilatore non riesce a dedurre il tipo da passare a uno dei parametri.  
  
 Di norma, quando si chiama una routine generica, si fornisce un argomento di tipo per ogni parametro di tipo definito dalla routine generica. Se non si specifica alcun argomento di tipo, il compilatore prova a dedurre i tipi da passare ai parametri di tipo. Se il contesto della chiamata fornisce informazioni sui tipi di dati contraddittorie per un parametro di tipo, l'inferenza del tipo ha esito negativo.  
  
 Il codice seguente può generare questo errore.  
  
```  
Public Sub doSomething(Of t)(ByVal arg1 As t(), ByVal arg2 As t) End Sub Call doSomething(6, 42)  
```  
  
 Nell'esempio descritto in precedenza, il compilatore deduce il tipo `Integer` per `t` in base a un valore di 42 passato a `arg2`. L'inferenza tuttavia richiederà che `arg1` sia di tipo `Integer()`, vale a dire una matrice di `Integer` e che il valore 6 passato a `arg1` non corrisponda a quel tipo.  
  
 **ID errore:** BC32051  
  
### Per correggere l'errore  
  
-   Fornire gli argomenti di tipo alla routine generica in modo che il compilatore non sia costretto a dedurli.  
  
-   Fornire gli argomenti di tipo alla procedura generica in modo tale che il compilatore non sia costretto a dedurli.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)