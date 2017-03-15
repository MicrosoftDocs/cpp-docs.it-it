---
title: "Controllo dei tipi (CRT) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.types"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tipo (controllo)"
  - "controllo di tipo"
  - "funzioni con argomenti variabili"
ms.assetid: 1ba7590b-d1c0-4636-b6a0-e231395abdad
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Controllo dei tipi (CRT)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il compilatore esegue un controllo di tipo limitato alle funzioni che possono accettare un numero variabile di argomenti, come segue:  
  
|Chiamata di funzione|Argomenti di archiviazione|  
|--------------------------|--------------------------------|  
|`_cprintf_s`, `_cscanf_s`, `printf_s`, `scanf_s`|Primo argomento \(formato stringa\)|  
|`fprintf_s`, `fscanf_s`, `sprintf_s`, `sscanf_s`|Primi due argomenti \(file o buffer e formato stringa\)|  
|`_snprintf_s`|Primi tre argomenti \(file o buffer, contatore e formato stringa\)|  
|`_open`|Primi due argomenti \(percorso e flag `_open` \)|  
|`_sopen_s`|Primi tre argomenti \(percorso, flag `_open` e modalità condivisa\)|  
|`_execl`, `_execle`, `_execlp`, `_execlpe`|Primi due argomenti \(percorso e puntatore al primo argomento\)|  
|`_spawnl`, `_spawnle`, `_spawnlp`, `_spawnlpe`|Primi tre argomenti \(flag di modalità, percorso e puntatore al primo argomento\)|  
  
 Il compilatore esegue lo stesso controllo di tipo limitato alle controparti di queste funzioni con caratteri estesi.  
  
## Vedere anche  
 [Funzionalità libreria CRT](../c-runtime-library/crt-library-features.md)