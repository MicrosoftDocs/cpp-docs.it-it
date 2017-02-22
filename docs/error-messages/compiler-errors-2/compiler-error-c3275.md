---
title: "Errore del compilatore C3275 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3275"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3275"
ms.assetid: 5752680f-7d3e-4c42-ba9c-845e09d32e7a
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C3275
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'enum member': impossibile utilizzare questo simbolo senza qualificatore  
  
 Quando si usa codice gestito e quando due o più enumerazioni contengono un identificatore con lo stesso nome, è necessario qualificare in modo esplicito i riferimenti all'identificatore.  
  
 C3275 è raggiungibile solo usando **\/clr:oldSyntax**.  
  
 L'esempio seguente mostra due situazioni in cui potrebbe essere generato l'errore C3275:  
  
```  
// C3275.cpp // compile with: /clr:oldSyntax #using <mscorlib.dll> __value enum Jewelry { necklace, brooch, pin, ring, earring }; __value enum Phone { busy, ring, disconnect }; int main() { Phone p = ring;   // C3275 // try the following line instead // Phone p = Phone::ring; Console::Out->Write(ring);   // C3275 // try the following line instead // Console::Out->Write(Phone::ring); }  
```