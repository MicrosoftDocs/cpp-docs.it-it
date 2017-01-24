---
title: "Errore del compilatore CS0844 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0844"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0844"
ms.assetid: ccf74e01-292a-42d0-897c-8add7aee2118
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0844
Non è possibile usare la variabile locale 'name' prima che sia dichiarata. La dichiarazione della variabile locale nasconde il campo 'name'.  
  
 Un identificatore può avere solo uno significato in un blocco specificato. Le variabili locali che hanno lo stesso nome dei campi della classe possono nascondere il campo introducendo un secondo significato per l'identificatore. Il compilatore genera quindi un errore quando si fa riferimento a un campo della classe in un metodo e si dichiara quindi una variabile locale con lo stesso nome.  
  
### Per correggere l'errore  
  
-   Usare `this.num` per fare riferimento al campo della classe.  
  
-   Assegnare alla variabile locale un nome diverso dal campo della classe.  
  
## Esempio  
 Il codice seguente genera l'errore CS0844:  
  
```  
class Test { int num; public void TestMethod() { num = 5; // CS0844 int num = 6;        } public static int Main() { return 1; } }  
```