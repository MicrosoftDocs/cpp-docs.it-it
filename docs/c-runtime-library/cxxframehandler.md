---
title: "__CxxFrameHandler | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "__CxxFrameHandler"
apilocation: 
  - "msvcr110.dll"
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr100.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr90.dll"
  - "msvcr120.dll"
apitype: "DLLExport"
f1_keywords: 
  - "__CxxFrameHandler"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__CxxFrameHandler"
ms.assetid: b79ac97f-425a-42ae-9b91-8beaef935333
caps.latest.revision: 3
caps.handback.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __CxxFrameHandler
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Funzione CRT interna.  Usata dalla libreria run\-time del linguaggio C \(CRT\) per gestire i frame delle eccezioni strutturate.  
  
## Sintassi  
  
```cpp  
EXCEPTION_DISPOSITION __CxxFrameHandler(       EHExceptionRecord  *pExcept,       EHRegistrationNode *pRN,       void               *pContext,        DispatcherContext  *pDC    )  
```  
  
#### Parametri  
 `pExcept`  
 Record di eccezione passato alle possibili istruzioni `catch`.  
  
 `pRN`  
 Informazioni dinamiche sullo stack frame usato per gestire l'eccezione.  Per altre informazioni, vedere ehdata.h.  
  
 `pContext`  
 Contesto.  \(Non usato nei processori Intel.\)  
  
 `pDC`  
 Altre informazioni sull'ingresso e lo stack frame della funzione.  
  
## Valore restituito  
 Uno dei valori dell'*espressione di filtro* usati dall'[Istruzione try\-except](../cpp/try-except-statement.md).  
  
## Note  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|\_\_CxxFrameHandler|excpt.h, ehdata.h|