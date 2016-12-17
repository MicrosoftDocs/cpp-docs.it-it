---
title: "Varargs | Microsoft Docs"
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
ms.assetid: aac0c54b-0a2d-4a22-b1de-ee41381a3eb1
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Varargs
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se i parametri vengono passati tramite varargs, ad esempio tramite argomenti \(...\), vengono applicati essenzialmente i normali metodi di passaggio degli argomenti, inclusa la memorizzazione temporanea \(spilling\) del quinto e dei successivi argomenti.  Spetta nuovamente al chiamato eseguire il dump degli argomenti per i quali è stato recuperato l'indirizzo.  Soltanto per i valori in virgola mobile, sia il registro integer che quello in virgola mobile conterranno il valore float se il chiamato si aspetta il valore nei registri integer.  
  
## Vedere anche  
 [Convenzione di chiamata](../build/calling-convention.md)