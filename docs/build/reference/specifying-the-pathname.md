---
title: "Specifica del nome del percorso | Microsoft Docs"
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
  - "compilatore cl.exe, file di output"
  - "nomi [C++], file di output del compilatore"
  - "file di output, specifica di nomi di percorso"
ms.assetid: 7a6595ce-3383-44ae-957a-466bfa29c343
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Specifica del nome del percorso
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ogni opzione del file di output accetta un argomento *pathname* che può specificare un percorso e un nome per il file di output.  L'argomento può includere un nome di unità, una directory e un nome file.  Tra l'opzione e l'argomento non è consentito alcuno spazio.  
  
 Se *pathname* include un nome file senza un'estensione, il compilatore assegna all'output un'estensione predefinita.  Se *pathname* include una directory ma nessun nome file, il compilatore creerà un file con un nome predefinito nella directory specificata.  Il nome predefinito è basato sul nome di base del file di origine e su un'estensione predefinita basata sul tipo del file di output.  Se si elimina *pathname* interamente, il compilatore creerà un file con un nome predefinito in una directory predefinita.  
  
 In alternativa, l'argomento *pathname* può essere un nome di periferica \(AUX, CON, PRN o NUL\) anziché un nome file.  Non utilizzare uno spazio tra l'opzione e il nome della periferica o i due punti come parte del nome della periferica.  
  
|Nome periferica|Descrizione|  
|---------------------|-----------------|  
|AUX|Periferica ausiliaria|  
|CON|Console|  
|PRN|Stampante|  
|NUL|Periferica NULL \(nessun file creato\)|  
  
## Esempio  
 La riga di comando che segue invia un file MAP alla stampante:  
  
```  
CL /FmPRN HELLO.CPP  
```  
  
## Vedere anche  
 [Opzioni del file di output \(\/F\)](../../build/reference/output-file-f-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)