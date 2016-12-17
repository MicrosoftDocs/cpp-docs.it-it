---
title: "Errore del compilatore CS0313 | Microsoft Docs"
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
  - "CS0313"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0313"
ms.assetid: a0b0f2fb-e742-4df8-98bd-3bc068f0c71c
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0313
Non è possibile usare il tipo 'type1' come parametro di tipo 'parameter name' nel metodo o nel tipo generico 'type2'. Il tipo nullable 'type1' non soddisfa il vincolo di 'type2'. I tipi nullable non soddisfano i vincoli di interfaccia.  
  
 Un tipo nullable non è equivalente al corrispondente non nullable. Nell'esempio seguente `ImplStruct` soddisfa il vincolo `BaseInterface` ma `ImplStruct?` non lo soddisfa perché `Nullable<ImplStruct>` non implementa `BaseInterface`.  
  
### Per correggere l'errore  
  
1.  Se si usa il codice di esempio seguente, una soluzione è specificare un oggetto `ImplStruct` comune come primo argomento di tipo nella chiamata a `TestMethod`. Quindi modificare `TestMethod` per creare una versione nullable di `Implstruct` nell'istruzione return:  
  
    ```  
    return new Nullable<T>(t);  
    ```  
  
## Esempio  
 Il codice seguente genera l'errore CS0313:  
  
```  
// cs0313.cs public interface BaseInterface { } public struct ImplStruct : BaseInterface { } public class TestClass { public T? TestMethod<T, U>(T t) where T : struct, U { return t; } } public class NullableTest { public static void Run() { TestClass tc = new TestClass(); tc.TestMethod<ImplStruct?, BaseInterface>(new ImplStruct?()); // CS0313 } public static void Main() { } }  
```  
  
## Vedere anche  
 [Tipi nullable](../Topic/Nullable%20Types%20\(C%23%20Programming%20Guide\).md)