---
title: "VCPROFILE_ALLOC_SCALE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VCPROFILE_ALLOC_SCALE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VCPROFILE_ALLOC_SCALE (variabile di ambiente)"
ms.assetid: 5cb5ce27-f9b8-489b-b46c-d6e9bcab2d34
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 4
---
# VCPROFILE_ALLOC_SCALE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Modifica la quantità di memoria allocata per contenere i dati del profilo.  
  
## Sintassi  
  
```  
VCPROFILE_ALLOC_SCALE=scale_value  
```  
  
#### Parametri  
 `scale_value`  
 Valore di scala per la quantità di memoria che si desidera allocare per l'esecuzione degli scenari di test.  Il valore predefinito è 1.  
  
## Note  
 In rari casi, la quantità di memoria non sarà sufficiente per il supporto della raccolta dei dati profilo durante l'esecuzione degli scenari di test,  ma potrà essere aumentata con `VCPROFILE_ALLOC_SCALE`.  
  
 Se durante un'esecuzione di test viene visualizzato un messaggio di errore per segnalare che la memoria non è sufficiente, assegnare un valore sempre più grande a `VCPROFILE_ALLOC_SCALE`, finché l'esecuzione non viene completata senza errori di memoria insufficiente.  
  
## Esempio  
  
```  
set VCPROFILE_ALLOC_SCALE=2  
```  
  
## Vedere anche  
 [Variabili d'ambiente per le ottimizzazioni GPO](../../build/reference/environment-variables-for-profile-guided-optimizations.md)