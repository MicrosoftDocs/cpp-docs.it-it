---
title: "/ALLOWISOLATION | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/ALLOWISOLATION"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/ALLOWISOLATION (opzione editbin)"
  - "ALLOWISOLATION (opzione editbin)"
  - "-ALLOWISOLATION (opzione editbin)"
ms.assetid: 91430344-f64f-491a-a5a5-7ea3b21cbe68
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /ALLOWISOLATION
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica il comportamento per la ricerca del manifesto.  
  
## Sintassi  
  
```  
  
/ALLOWISOLATION[:NO]  
```  
  
## Note  
 **\/ALLOWISOLATION** fa eseguire al sistema operativo ricerche e caricamenti del manifesto.  
  
 Il valore predefinito è **\/ALLOWISOLATION**.  
  
 **\/ALLOWISOLATION:NO** indica che gli eseguibili vengono caricati come se non esistesse alcun manifesto e fa sì che [Riferimenti a EDITBIN](../../build/reference/editbin-reference.md) imposti il bit nel `IMAGE_DLLCHARACTERISTICS_NO_ISOLATION` nel campo `DllCharacteristics` dell'intestazione facoltativa.  
  
 Se per un eseguibile è disabilitato l'isolamento, il caricatore di Windows non tenterà di individuare un manifest di applicazione per i processi creati più di recente.  Il nuovo processo non dispone di un contesto di attivazione predefinito, anche se esiste un manifesto nell'eseguibile stesso o se è presente un manifesto con il nome *nome\-eseguibile*.exe.manifest.  
  
## Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)   
 [\/ALLOWISOLATION \(Ricerca di manifesti\)](../../build/reference/allowisolation-manifest-lookup.md)   
 [Riferimento a file manifesto](http://msdn.microsoft.com/library/aa375632.aspx)