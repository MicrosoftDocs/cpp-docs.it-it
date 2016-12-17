---
title: "Errore del compilatore di risorse RC2101 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "RC2101"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC2101"
ms.assetid: 580f9d74-162f-41e9-9438-ddbe3457c359
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore di risorse RC2101
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Direttiva non valida nel file RC pre\-elaborato.  
  
 Il file del compilatore di risorse contiene una direttiva **\#pragma**.  
  
 Utilizzare la direttiva per il preprocessore **\#indef** insieme alla costante RC\_INVOKED che viene definita dal compilatore di risorse quando elabora un file di inclusione.  Inserire la direttiva **\#pragma** all'interno di un blocco di codice che non viene elaborato quando viene definita la costante RC\_INVOKED.  Il codice contenuto nel blocco viene elaborato solo dal compilatore C\/C\+\+ e non dal compilatore di risorse.  Nel codice seguente viene esemplificata questa tecnica:  
  
```  
#ifndef RC_INVOKED  
#pragma pack(2)  // C/C++ only, ignored by Resource Compiler  
#endif  
```  
  
 La direttiva per il preprocessore **\#pragma** non ha alcun significato in un file RC.  La direttiva per il preprocessore **\#include** viene utilizzata frequentemente in un file RC per includere un file di intestazione \(sia file di intestazione personalizzati basati su progetti che file di intestazione standard forniti con i prodotti Microsoft\).  In alcuni di tali file è presente la direttiva **\#pragma**.  Poiché in un file di intestazione possono essere inclusi uno o più file di intestazione, può risultare difficile individuare in file nel quale è presente la direttiva **\#pragma** che causa il problema.  
  
 La tecnica **\#ifndef** RC\_INVOKED consente il controllo dell'inclusione di file di intestazione all'interno di altri file di intestazione basati su progetti.