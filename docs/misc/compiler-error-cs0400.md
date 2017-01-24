---
title: "Errore del compilatore CS0400 | Microsoft Docs"
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
  - "CS0400"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0400"
ms.assetid: 58f91f3b-30f4-433b-9a13-0cff258a2630
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0400
Impossibile trovare il nome del tipo o dello spazio dei nomi 'identifier' nello spazio dei nomi globale. Probabilmente manca un riferimento a un assembly.  
  
 Nello spazio dei nomi globale non è stato possibile trovare l'identificatore il cui ambito è specificato dall'operatore di ambito globale \(`::`\). Potrebbe essere stato omesso un riferimento all'assembly contenente l'identificatore oppure quest'ultimo potrebbe essere stato dichiarato in una classe o in uno spazio dei nomi diverso dallo spazio dei nomi globale. Questo errore può venire visualizzato anche se l'identificatore non è stato dichiarato o digitato correttamente.  
  
 Per prevenire questo errore, trovare la dichiarazione dell'identificatore, verificarne la corretta digitazione e, se la dichiarazione è inclusa in un assembly separato, accertarsi di disporre del riferimento all'assembly appropriato. Se l'identificatore è dichiarato all'interno di un altro tipo o spazio dei nomi, usare il nome completo dell'identificatore dopo l'operatore "::". L'esempio seguente genera l'errore CS0400:  
  
```  
// CS0400.cs class C { public static void Main() { // CS0400 - D could not be found // in the global namespace. global::D d = new global::D(); } }  
```