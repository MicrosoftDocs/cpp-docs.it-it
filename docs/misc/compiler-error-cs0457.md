---
title: "Errore del compilatore CS0457 | Microsoft Docs"
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
  - "CS0457"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0457"
ms.assetid: 5d5cf762-c817-4468-9455-59e966b8c140
caps.latest.revision: 14
caps.handback.revision: 14
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0457
Le conversioni 'Conversion method name 1' e 'Conversion method name 2' definite dall'utente durante la conversione da 'type name 1' a 'type name 2' sono ambigue  
  
 Il compilatore non è in grado di effettuare una scelta tra i due metodi di conversione applicabili.  
  
 Di seguito è riportato uno scenario che può determinare questo errore:  
  
-   Si vuole convertire la classe A in classe B, dove A e B non sono correlate.  
  
-   A deriva da A0 ed è disponibile un metodo per la conversione da A0 a B.  
  
-   B contiene una sottoclasse B1 ed è disponibile un metodo per la conversione da A a B1.  
  
 Il compilatore considererà i due metodi di conversione equivalenti, perché la prima e la seconda conversione forniscono rispettivamente il tipo di destinazione e il tipo di origine ottimali. Poiché il compilatore non è in grado di effettuare una scelta, verrà generato questo errore. Per risolverlo, scrivere un nuovo metodo esplicito per convertire A in B.  
  
 Un altro scenario che provoca questo errore è caratterizzato dalla presenza di due metodi per la conversione da A a B. Per correggere l'errore, specificare la conversione da usare tramite un cast esplicito.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0457.  
  
```  
// CS0457.cs using System; public class A { } public class G0 {  } public class G1<R> : G0 {  } public class H0 { public static implicit operator G0(H0 h) { return new G0(); } } public class H1<R> : H0 { public static implicit operator G1<R>(H1<R> h) { return new G1<R>(); } } public class Test { public static void F0(G0 g) {  } public static void Main() { H1<A> h1a = new H1<A>(); F0(h1a);   // CS0457 } }  
```