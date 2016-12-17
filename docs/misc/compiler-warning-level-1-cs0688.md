---
title: "Avviso del compilatore (livello 1) CS0688 | Microsoft Docs"
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
  - "CS0688"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0688"
ms.assetid: 8ce5af36-663e-46e8-87e9-bb32555796ae
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS0688
'method1' è associato a una richiesta di collegamento, ma esegue l'override di 'method2' o lo implementa. Tale elemento non è associato ad alcuna richiesta di collegamento. È possibile un problema di sicurezza.  
  
 La richiesta di collegamento associata al metodo della classe derivata può essere facilmente ignorata chiamando il metodo della classe base. Per risolvere il problema di sicurezza, è necessario che la richiesta di collegamento sia usata anche dal metodo della classe base. Per altre informazioni, vedere [Demand e LinkDemand](http://msdn.microsoft.com/it-it/1ab877f2-70f4-4e0d-8116-943999dfe8f5).  
  
## Esempio  
 L'esempio seguente genera l'errore CS0688. Per risolvere l'errore senza modificare la classe base, rimuovere l'attributo di sicurezza dal metodo che esegue l'override. Questa operazione non risolverà il problema di sicurezza.  
  
```  
// CS0688.cs // compile with: /W:1 using System; using System.Security.Permissions; class Base { //Uncomment the following line to close the security hole //[FileIOPermission(SecurityAction.LinkDemand, All=@"C:\\")] public virtual void DoScaryFileStuff() { } } class Derived: Base { [FileIOPermission(SecurityAction.LinkDemand, All=@"C:\\")] // CS0688 public override void DoScaryFileStuff() { } static void Main() { } }  
```