---
title: "Errore del compilatore CS0546 | Microsoft Docs"
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
  - "CS0546"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0546"
ms.assetid: d259c86f-ee29-4e2d-b381-6ba7252af87e
caps.latest.revision: 13
caps.handback.revision: 13
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0546
'accessor': non è possibile eseguire l'override perché 'property' non ha di una funzione di accesso set di cui eseguire l'override  
  
 Il tentativo di eseguire l'override di un metodo della funzione di accesso a una proprietà non è riuscito perché non è possibile eseguire l'override della funzione di accesso. Questo errore si verifica nei seguenti casi:  
  
-   la proprietà della classe base non è dichiarata come [virtuale](../Topic/virtual%20\(C%23%20Reference\).md).  
  
-   la proprietà della classe base non dichiara la funzione di accesso [get](../Topic/get%20\(C%23%20Reference\).md) o [set](../Topic/set%20\(C%23%20Reference\).md) di cui si sta provando a eseguire l'override.  
  
 Se non si vuole eseguire l'override della proprietà della classe base, è possibile usare la parola chiave [new](../Topic/new%20\(C%23%20Reference\).md) prima della proprietà nella classe derivata.  
  
 Per altre informazioni, vedere [Utilizzo delle proprietà](../Topic/Using%20Properties%20\(C%23%20Programming%20Guide\).md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS0546 perché la classe base non dichiara una funzione di accesso set per la proprietà.  
  
```  
// CS0546.cs // compile with: /target:library public class a { public virtual int i { get { return 0; } } public virtual int i2 { get { return 0; } set {} } } public class b : a { public override int i { set {}   // CS0546 error no set } public override int i2 { set {}   // OK } }  
```  
  
## Vedere anche  
 [Proprietà](../Topic/Properties%20\(C%23%20Programming%20Guide\).md)