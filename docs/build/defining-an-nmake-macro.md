---
title: "Definizione di una macro di NMAKE | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "definizione di macro NMAKE"
  - "macro, NMAKE"
  - "NMAKE (macro), definizione"
ms.assetid: 45aae451-9d33-4a3d-8799-2e0cae17070d
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Definizione di una macro di NMAKE
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
macroname=string  
```  
  
## Note  
 *macroname* è una combinazione di lettere, cifre e caratteri di sottolineatura \(\_\) non superiore a 1024 caratteri, con distinzione tra maiuscole e minuscole.  Può contenere una macro richiamata e,  se è costituito interamente da tale macro, essa non potrà essere null o non definita.  
  
 `string` può essere qualsiasi sequenza di zero o più caratteri.  Una stringa null non contiene caratteri oppure contiene soltanto spazi o tabulazioni.  `string` può contenere la chiamata di una macro.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
 [Caratteri speciali nelle macro](../build/special-characters-in-macros.md)  
  
 [Macro null e non definite](../build/null-and-undefined-macros.md)  
  
 [Definizione delle macro](../build/where-to-define-macros.md)  
  
 [Precedenza nelle definizioni delle macro](../build/precedence-in-macro-definitions.md)  
  
## Vedere anche  
 [Macro e NMAKE](../build/macros-and-nmake.md)