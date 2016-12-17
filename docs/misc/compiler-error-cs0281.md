---
title: "Errore del compilatore CS0281 | Microsoft Docs"
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
  - "CS0281"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0281"
ms.assetid: 3b886510-6e4d-45bc-b885-3ab7f6b6b2c6
caps.latest.revision: 18
caps.handback.revision: 18
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0281
L'accesso Friend è stato concesso a 'AssemblyName1', ma l'assembly di output è denominato 'AssemblyName2'. Provare ad aggiungere un riferimento a 'AssemblyName1' o a modificare il nome dell'assembly di output corrispondente.  
  
 L'accesso Friend è una nuova funzionalità di Common Language Runtime \(CLR\) che consente a un assembly di vedere i tipi non public di un altro assembly. Questo errore si verifica quando nell'assembly che garantisce l'accesso Friend è indicato un nome non corretto per l'assembly a cui è concesso l'accesso. Per altre informazioni, vedere [Assembly friend](../Topic/Friend%20Assemblies%20\(C%23%20and%20Visual%20Basic\).md).  
  
## Esempio  
 La seguente sequenza di esempi di codice genera l'errore CS0281.  
  
 Di seguito sono elencati i file generati e usati per creare gli assembly con nome sicuro:  
  
-   sn \-d CS0281.snk  
  
-   sn \-k CS0281.snk  
  
-   sn \-i CS0281.snk CS0281.snk  
  
-   sn \-pc CS0281.snk key.publickey  
  
-   sn \-tp key.publickey  
  
```  
// CS0281.cs // compile with: /target:library /keyfile:CS0281.snk public class A {}  
```  
  
## Esempio  
  
```  
// CS0281_b.cs // compile with: /target:library /keyfile:CS0281.snk /reference:CS0281.dll [assembly:System.Runtime.CompilerServices.InternalsVisibleTo("CS0281 , PublicKey=00240000048000009400000006020000002400005253413100040000010001004b2d4d56af7c50be2fcbbf97cb880b9e73ad84467a587191fef63aadc118a96cecf9d508cd679c907b6e20f71684300bdc2c0a851019af0c96b29bf8f1339753276041aefd67db46139e6348b3a12f29537b4dc6c2c19829df2c9ed6803f3c63c3b84cfa2728849386aea575c543a5f70fa85793d2946f15f7fe1ccb0c5e8fe0")] class B : A {}  
```  
  
## Esempio  
 L'esempio seguente genera l'errore CS0281.  
  
 Si noti che questo esempio consente di creare un file di output il cui nome è identico a quello del file di output del primo esempio. Per correggere l'errore, non modificare gli attributi dell'assembly per il componente e aggiungere la classe C.  
  
```  
// CS0281_c.cs // compile with: /target:library /out:CS0281.dll /keyfile:CS0281.snk /reference:CS0281_b.dll // CS0281 expected [assembly:System.Reflection.AssemblyVersion("3")] [assembly:System.Reflection.AssemblyCulture("en-us")] class C : B {} public class A {}  
```