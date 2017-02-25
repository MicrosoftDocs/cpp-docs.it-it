---
title: "setlocale | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "setlocale_CPP"
  - "vc-pragma.setlocale"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pragma, setlocale"
  - "setlocale (pragma)"
ms.assetid: e60b43d9-fbdf-4c4e-ac85-805523a13b86
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# setlocale
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce le impostazioni locali \(paese\/area e la lingua\) da utilizzare quando si traducono le costanti a caratteri "wide" e valori letterali stringa.  
  
## Sintassi  
  
```  
  
#pragma setlocale( "[locale-string]" )  
```  
  
## Note  
 Poiché l'algoritmo per la conversione dei caratteri multibyte in caratteri "wide" può variare dalle impostazioni locali o la compilazione può aver luogo in impostazioni locali diverse da dove un file eseguibile verrà eseguito, questo pragma consente di specificare le impostazioni locali di destinazione in fase di compilazione.  In questo modo si garantisce che le stringhe di caratteri "wide" saranno memorizzate nel formato corretto.  
  
 *locale\-string* predefinito è "".  
  
 Le impostazioni locali "C" eseguono il mapping di ogni carattere nella stringa al relativo valore come un `wchar_t` \(unsigned short\).  Altri valori validi per `setlocale` sono quelle voci disponibili nell'elenco [Stringhe di linguaggio](../c-runtime-library/language-strings.md).  Ad esempio, generare:  
  
```  
#pragma setlocale("dutch")  
```  
  
 La possibilità di generare una stringa di linguaggio dipende dal supporto di ID lingua e dalla tabella codici nel computer.  
  
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)