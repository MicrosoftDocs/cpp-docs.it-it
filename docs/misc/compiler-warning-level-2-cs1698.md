---
title: "Avviso del compilatore (livello 2) CS1698 | Microsoft Docs"
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
  - "CS1698"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1698"
ms.assetid: 65cac5d0-e045-40f9-911c-1bf50e710b18
caps.latest.revision: 20
caps.handback.revision: 20
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 2) CS1698
Il riferimento circolare 'AssemblyName1' all'assembly non corrisponde al nome dell'assembly di output 'AssemblyName2'. Provare ad aggiungere un riferimento a 'AssemblyName1' o a modificare il nome dell'assembly di output corrispondente.  
  
 L'errore CS1698 si verifica quando un riferimento all'assembly non è corretto. Questa situazione può verificarsi se un assembly di riferimento viene ricompilato. Per risolvere il problema, non sostituire un assembly che a sua volta è una dipendenza di un assembly a cui si fa riferimento.  
  
## Esempio  
  
```  
// CS1698_a.cs // compile with: /target:library /keyfile:mykey.snk [assembly:System.Reflection.AssemblyVersion("2")] public class CS1698_a {}  
```  
  
## Esempio  
  
```  
// CS1698_b.cs // compile with: /target:library /reference:CS1698_a.dll /keyfile:mykey.snk public class CS1698_b : CS1698_a {}  
```  
  
## Esempio  
 L'esempio seguente genera l'errore CS1698.  
  
```  
// CS1698_c.cs // compile with: /target:library /out:cs1698_a.dll /reference:cs1698_b.dll /keyfile:mykey.snk // CS1698 expected [assembly:System.Reflection.AssemblyVersion("3")] public class CS1698_c : CS1698_b {} public class CS1698_a {}  
  
```