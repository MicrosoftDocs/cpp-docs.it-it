---
title: "Errore del compilatore CS1928 | Microsoft Docs"
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
  - "CS1928"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1928"
ms.assetid: bcc9dbef-ded5-4ddd-8c03-a9837cb6d165
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1928
'Type' non contiene una definizione per 'method' e il miglior overload 'method' del metodo di estensione contiene alcuni argomenti non validi.  
  
 Questo errore viene generato quando il compilatore non trova un membro di classe con il nome del metodo chiamato. Riesce a trovare un metodo di estensione con lo stesso nome, ma non con una firma che corrisponde ai tipi passati con la chiamata al metodo.  
  
### Per correggere l'errore  
  
1.  Passare tipi che corrispondano a un metodo di estensione o un metodo di classe esistente.  
  
## Esempio  
 Il codice seguente genera l'errore CS1928:  
  
```  
// cs1928.cs class Test { static void Main() { Test t = new Test(); t.M("hi"); // CS1928 } } static class Ext { public static void M(this Test t, int i) { } }  
```  
  
 Questo errore è spesso accompagnato da CS1503: Argomento 'n': non è possibile convertire da 'typeA' a 'typeB'.  
  
## Vedere anche  
 [Metodi di estensione](../Topic/Extension%20Methods%20\(C%23%20Programming%20Guide\).md)