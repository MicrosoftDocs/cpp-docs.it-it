---
title: "Errore del compilatore CS0425 | Microsoft Docs"
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
  - "CS0425"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0425"
ms.assetid: cec0391c-a641-43bc-8557-92b23f6ca685
caps.latest.revision: 13
caps.handback.revision: 13
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0425
I vincoli per il parametro di tipo 'type parameter' del metodo 'method' devono corrispondere ai vincoli per il parametro di tipo 'type parameter' del metodo di interfaccia 'method'. Provare a usare un'implementazione esplicita dell'interfaccia.  
  
 Questo errore si verifica quando un metodo generico di tipo virtual è sottoposto a override in una classe derivata e i vincoli del metodo nella classe derivata non corrispondono ai vincoli del metodo nella classe base. Per correggere l'errore, accertarsi che la clausola `where` sia identica in entrambe le dichiarazioni oppure implementare l'interfaccia in modo esplicito.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0425:  
  
```  
// CS0425.cs class C1 { } class C2 { } interface IBase { void F<ItemType>(ItemType item) where ItemType : C1; } class Derived : IBase { public void F<ItemType>(ItemType item) where ItemType : C2  // CS0425 { } } class CMain { public static void Main() { } }  
```  
  
## Esempio  
 Non è necessario che i vincoli corrispondano letteralmente, purché abbiano lo stesso significato nella raccolta. Il codice di esempio che segue, ad esempio, è corretto:  
  
```  
// CS0425b.cs interface J<Z> { } interface I<S> { void F<T>(S s, T t) where T: J<S>, J<int>; } class C : I<int> { public void F<X>(int s, X x) where X : J<int> { } public static void Main() { } }  
```