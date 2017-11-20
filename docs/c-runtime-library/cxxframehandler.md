---
title: __CxxFrameHandler | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: __CxxFrameHandler
apilocation:
- msvcr110.dll
- msvcrt.dll
- msvcr80.dll
- msvcr100.dll
- msvcr110_clr0400.dll
- msvcr90.dll
- msvcr120.dll
apitype: DLLExport
f1_keywords: __CxxFrameHandler
dev_langs: C++
helpviewer_keywords: __CxxFrameHandler
ms.assetid: b79ac97f-425a-42ae-9b91-8beaef935333
caps.latest.revision: "3"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 75f900560f226557bc160bdf74df4467b0c7aa32
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cxxframehandler"></a>__CxxFrameHandler
Funzione CRT interna. Usata dalla libreria run-time del linguaggio C (CRT) per gestire i frame delle eccezioni strutturate.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
EXCEPTION_DISPOSITION __CxxFrameHandler(  
      EHExceptionRecord  *pExcept,  
      EHRegistrationNode *pRN,  
      void               *pContext,   
      DispatcherContext  *pDC  
   )  
```  
  
#### <a name="parameters"></a>Parametri  
 `pExcept`  
 Record di eccezione passato alle possibili istruzioni `catch`.  
  
 `pRN`  
 Informazioni dinamiche sullo stack frame usato per gestire l'eccezione. Per altre informazioni, vedere ehdata.h.  
  
 `pContext`  
 Contesto. (Non usato nei processori Intel.)  
  
 `pDC`  
 Altre informazioni sull'ingresso e lo stack frame della funzione.  
  
## <a name="return-value"></a>Valore restituito  
 Uno dei valori dell'*espressione di filtro* usati dall'[istruzione try-except](../cpp/try-except-statement.md).  
  
## <a name="remarks"></a>Note  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|__CxxFrameHandler|excpt.h, ehdata.h|