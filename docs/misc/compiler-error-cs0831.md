---
title: "Errore del compilatore CS0831 | Microsoft Docs"
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
  - "CS0831"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0831"
ms.assetid: f626a77d-3844-4438-954b-b8201e72b1b5
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0831
L'albero delle espressioni non può contenere un accesso di base.  
  
 Per accesso di base si intende effettuare una chiamata che solitamente sarebbe una chiamata di funzione virtuale come chiamata di funzione non virtuale nel metodo della classe base. Ciò non è consentito nell'albero delle espressioni stesso, ma è possibile richiamare un metodo helper nella classe che richiama il metodo della classe base.  
  
### Per correggere l'errore  
  
1.  Se è necessario accedere a un metodo della classe base in questo modo, creare un metodo helper che chiama la classe base e permettere all'albero delle espressioni di chiamare il metodo helper. Questa tecnica è illustrata nel codice seguente.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0831:  
  
```  
// cs0831.cs using System; using System.Linq; using System.Linq.Expressions; public class A { public virtual int BaseMethod() { return 1; } } public class C : A { public override int BaseMethod() { return 2; } public int Test(C c) { Expression<Func<int>> e = () => base.BaseMethod(); // CS0831 // Try the following line instead, // along with the BaseAccessHelper method. // Expression<Func<int>> e2 = () => BaseAccessHelper(); return 1; } // Uncomment to call from e2 expression above. // int BaseAccessHelper() // { //     return base.BaseMethod(); // } }   
```