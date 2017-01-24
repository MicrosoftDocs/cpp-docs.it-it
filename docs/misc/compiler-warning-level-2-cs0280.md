---
title: "Avviso del compilatore (livello 2) CS0280 | Microsoft Docs"
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
  - "CS0280"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0280"
ms.assetid: 9b453478-92aa-4fd2-9b87-780fd138603a
caps.latest.revision: 13
caps.handback.revision: 13
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 2) CS0280
'type' non implementa il modello 'pattern name'. La firma di 'method name' è errata.  
  
 Due istruzioni nel linguaggio C\#, **foreach** e **using**, si basano rispettivamente su modelli predefiniti, "collection" e "resource". Questo avviso si verifica quando il compilatore non riesce ad associare una di queste istruzioni al relativo modello a causa di una firma non corretta di un metodo. Ad esempio, il modello "collection" richiede che vi sia un metodo denominato <xref:System.Collections.IEnumerator.MoveNext%2A> che non accetta parametri e restituisce un `boolean`. Il codice può contenere un metodo <xref:System.Collections.IEnumerator.MoveNext%2A> che presenta un parametro o restituisce un oggetto.  
  
 Il modello "resource" e `using` fornisce un altro esempio. Il modello "resource" richiede il metodo <xref:System.IDisposable.Dispose%2A>; se si definisce una proprietà con lo stesso nome, verrà visualizzato questo avviso.  
  
 Per risolvere questo avviso, assicurarsi che le firme del metodo nel tipo corrispondano alle firme dei metodi corrispondenti nel modello e assicurarsi di non avere alcuna proprietà con lo stesso nome di un metodo necessario per il modello.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0280.  
  
```  
// CS0280.cs using System; using System.Collections; public class ValidBase: IEnumerable { IEnumerator IEnumerable.GetEnumerator() { yield return 0; } internal IEnumerator GetEnumerator() { yield return 0; } } class Derived : ValidBase { // field, not method new public int GetEnumerator; } public class Test { public static void Main() { foreach (int i in new Derived()) {}   // CS0280 } }  
```