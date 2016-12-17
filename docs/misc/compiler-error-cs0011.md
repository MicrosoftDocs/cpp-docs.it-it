---
title: "Errore del compilatore CS0011 | Microsoft Docs"
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
  - "CS0011"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0011"
ms.assetid: 892553d7-a516-4631-84cd-94db5722c90d
caps.latest.revision: 18
caps.handback.revision: 18
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0011
Impossibile risolvere la classe base o l'interfaccia 'class' nell'assembly 'assembly' a cui fa riferimento il tipo 'type'  
  
 Una classe importata da un file con **\/reference** deriva da una classe o implementa un'interfaccia che non è stata trovata. Questo errore può venire visualizzato se una DLL obbligatoria non è inclusa anche nella compilazione con **\/reference**.  
  
 Per altre informazioni, vedere [Add Reference Dialog Box](http://msdn.microsoft.com/it-it/2feb0fe2-0805-4cc9-8cba-b0315849dfb7) e [\/reference \(Import Metadata\)](../Topic/-reference%20\(C%23%20Compiler%20Options\).md).  
  
## Esempio  
  
```  
// CS0011_1.cs // compile with: /target:library public class Outer { public class B { } }  
```  
  
## Esempio  
 Nel secondo file si crea una DLL che definisce una classe `C` derivante dalla classe `B` creata nell'esempio precedente.  
  
```  
// CS0011_2.cs // compile with: /target:library /reference:CS0011_1.dll // post-build command: del /f CS0011_1.dll public class C : Outer.B {}  
```  
  
## Esempio  
 Nel terzo file viene sostituita la DLL creata nel primo passaggio e si omette la definizione della classe `B` interna.  
  
```  
// CS0011_3.cs // compile with: /target:library /out:cs0011_1.dll public class Outer {}  
```  
  
## Esempio  
 Nel quarto file si crea infine un riferimento alla classe `C` definita nel secondo esempio. Quest'ultima deriva dalla classe `B`, che non è più disponibile.  
  
 L'esempio seguente genera l'errore CS0011.  
  
```  
// CS0011_4.cs // compile with: /reference:CS0011_1.dll /reference:CS0011_2.dll // CS0011 expected class M { public static void Main() { C c = new C(); } }  
```  
  
## Vedere anche  
 [Add Reference Dialog Box](http://msdn.microsoft.com/it-it/2feb0fe2-0805-4cc9-8cba-b0315849dfb7)   
 [\/reference \(Import Metadata\)](../Topic/-reference%20\(C%23%20Compiler%20Options\).md)