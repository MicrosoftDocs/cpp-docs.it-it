---
title: "Convalida dei parametri | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "parametri, convalida"
ms.assetid: 019dd5f0-dc61-4d2e-b4e9-b66409ddf1f2
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Convalida dei parametri
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La maggior parte delle funzioni CRT con sicurezza avanzata e molte delle funzioni preesistenti convalidano i relativi parametri.  Ciò potrebbe includere il controllo di puntatori NULL, controllare quali interi rientrano in un intervallo valido, o controllare che i valori di enumerazione siano validi.  Quando un parametro non valido viene trovato, il gestore di parametro non valido viene eseguito.  
  
## Routine del gestore di parametro non valido  
 Il comportamento del Runtime C quando un parametro non valido viene trovato consiste nel chiamare il gestore di parametro non valido assegnato.  Il parametro non valido predefinito invoca la creazione rapporti di arresto anomalo Watson, che provoca l'arresto anomalo dell'applicazione e viene chiesto all'utente se desidera inviare il dump di arresto anomalo a Microsoft per l'analisi.  In modalità di debug, un parametro non valido risulta inoltre come un'asserzione non riuscita.  
  
 Questo comportamento può essere modificato tramite la funzione [set\_invalid\_parameter\_handler, \_set\_thread\_local\_invalid\_parameter\_handler](../c-runtime-library/reference/set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md) per impostare il gestore di parametri non validi alla propria funzione.  Se la funzione specificata non chiude l'applicazione, il controllo viene restituito alla funzione che ha ricevuto i parametri non validi e queste funzioni in genere cesseranno l'esecuzione, restituiscono un codice di errore e impostano `errno` su un codice di errore.  In molti casi, il valore `errno` e il valore restituito sono entrambi `EINVAL`, per indicare un parametro non valido.  In alcuni casi, un codice di errore più specifico viene restituito, come `EBADF` per un puntatore a file non valido passato come parametro.  Per ulteriori informazioni su errno, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Vedere anche  
 [Funzionalità di sicurezza in CRT](../c-runtime-library/security-features-in-the-crt.md)   
 [Funzionalità libreria CRT](../c-runtime-library/crt-library-features.md)