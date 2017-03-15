---
title: "VCPROFILE_PATH | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VCPROFILE_PATH"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VCPROFILE_PATH (variabile di ambiente)"
ms.assetid: 25217aa4-7e86-4eba-854d-10b3c457e4df
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 4
---
# VCPROFILE_PATH
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specificare la directory per la creazione di file pgc.  
  
## Sintassi  
  
```  
VCPROFILE_PATH=path  
```  
  
#### Parametri  
 `path`  
 Percorso di directory in cui i file pgc verranno aggiunti.  
  
## Note  
 Per impostazione predefinita, i file pgc vengono creati nella stessa directory in cui viene profilato il binario.  Se tuttavia il percorso assoluto del binario non esiste, ad esempio perché gli scenari di profilo vengono eseguiti in un computer diverso da quello in cui è stato compilato il binario, è possibile impostare `VCPROFILE_PATH` su un percorso disponibile.  
  
## Esempio  
  
```  
set VCPROFILE_PATH=c:\  
```  
  
## Vedere anche  
 [Variabili d'ambiente per le ottimizzazioni GPO](../../build/reference/environment-variables-for-profile-guided-optimizations.md)