---
title: "Errore del compilatore CS0447 | Microsoft Docs"
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
  - "CS0447"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0447"
ms.assetid: a25486c5-e9bf-4528-8533-c1aaab22ace0
caps.latest.revision: 13
caps.handback.revision: 13
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0447
Gli attributi non possono essere utilizzati su argomenti di tipo, solo su parametri di tipo  
  
 Questo errore si verifica quando si applica un attributo a un argomento di tipo presente in un'istruzione di chiamata. È possibile applicare un attributo a un parametro di tipo in un'istruzione di dichiarazione di classe o metodo simile alla seguente:  
  
```  
class C<[some attribute] T> {…}  
```  
  
 La riga di codice seguente genera questo errore. Si presuppone che la classe `C`, definita nella riga di codice precedente, sia un metodo statico denominato `MyStaticMethod`.  
  
```  
C<[some attribute] T>.MyStaticMethod();  
```  
  
## Esempio  
 Il codice seguente genera l'errore CS0447.  
  
```  
// CS0447.cs using System; namespace Test41 { public interface I<A> { void Meth<B>(); } public class B : I<int> { void I<[Test] int>.Meth<X>() { }  // CS0447 } }  
```