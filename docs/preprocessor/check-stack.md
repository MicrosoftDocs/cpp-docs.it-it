---
title: "check_stack | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-pragma.check_stack"
  - "check_stack_CPP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "check_stack (pragma)"
  - "pragma, check_stack"
  - "pragma, tabella di utilizzo di check_stack"
ms.assetid: f18e20cc-9abb-48b7-ad62-8d384875b996
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# check_stack
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Indica al compilatore di disabilitare le ricerche dello stack se **off** \(o **–**\) viene specificato oppure di abilitare le ricerche dello stack se **on** \(o **\+**\) viene specificato.  
  
## Sintassi  
  
```  
  
      #pragma check_stack([ {on | off}] )  
#pragma check_stack{+ | –}  
```  
  
## Note  
 Se non viene fornito alcun argomento, le ricerche dello stack sono considerate in base all'impostazione predefinita.  Il pragma viene applicato alla prima funzione definita dopo che è stato rilevato il pragma.  Le ricerche dello stack non sono né una parte delle macro né delle funzioni generate inline.  
  
 Se non si fornisce un argomento per il pragma **check\_stack**, il controllo dello stack viene ripristinato al comportamento specificato nella riga di comando.  Per ulteriori informazioni, vedere [Riferimenti al compilatore](../build/reference/compiler-options.md).  L'interazione di **\#pragma check\_stack** e dell'opzione [\/Gs](../build/reference/gs-control-stack-checking-calls.md) viene riepilogata nella tabella seguente.  
  
### Utilizzo del pragma check\_stack  
  
|Sintassi|Compilato con<br /><br /> l'opzione \/Gs?|Azione|  
|--------------|---------------------------------------|------------|  
|**\#pragma check\_stack\(\)** o<br /><br /> **\#pragma check\_stack**|Sì|Disabilita lo stack che controlla se sono presenti funzioni che seguono|  
|**\#pragma check\_stack\(\)** o<br /><br /> **\#pragma check\_stack**|No|Abilita lo stack che controlla se sono presenti funzioni che seguono|  
|**\#pragma check\_stack\(on\)**<br /><br /> o **\#pragma check\_stack \+**|Sì o No|Abilita lo stack che controlla se sono presenti funzioni che seguono|  
|**\#pragma check\_stack\(off\)**<br /><br /> o **\#pragma check\_stack –**|Sì o No|Disabilita lo stack che controlla se sono presenti funzioni che seguono|  
  
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)