---
title: "Avviso del compilatore (livello 1) CS1570 | Microsoft Docs"
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
  - "CS1570"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1570"
ms.assetid: a121d5c4-8b90-4cda-af5b-6ba8f23b2b1e
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS1570
Il commento XML in 'construct' presenta un formato XML errato \- 'reason'  
  
 Quando si usa [\/doc](../Topic/-doc%20\(C%23%20Compiler%20Options\).md), i commenti nel codice sorgente devono avere il formato XML. Gli errori relativi al markup XML generano l'avviso CS1570. Ad esempio:  
  
-   Se si passa una stringa a un **cref**, ad esempio in un tag [\<eccezione\>,](../Topic/%3Cexception%3E%20\(C%23%20Programming%20Guide\).md) è necessario che tale stringa sia racchiusa tra virgolette doppie.  
  
-   Se si usa un tag, ad esempio [\<vedereanche\>](../Topic/%3Cseealso%3E%20\(C%23%20Programming%20Guide\).md), che non prevede alcun tag di chiusura, è necessario specificare una barra prima della parentesi angolare di chiusura.  
  
-   Per usare i simboli maggiore di o minore di nel testo della descrizione, è necessario indicarli con **&gt;** o **&lt;**.  
  
-   L'attributo del percorso o del file in un tag [\<includi\>](../Topic/%3Cinclude%3E%20\(C%23%20Programming%20Guide\).md) è assente o ha un formato non corretto.  
  
 L'esempio seguente genera l'errore CS1570:  
  
```  
// CS1570.cs // compile with: /W:1 namespace ns { // the following line generates CS1570 /// <summary> returns true if < 5 </summary> // try this instead // /// <summary> returns true if <5 </summary> public class MyClass { public static void Main () { } } }  
```