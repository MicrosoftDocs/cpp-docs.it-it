---
title: _lock | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: _lock
apilocation:
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr100.dll
- msvcr90.dll
- msvcr80.dll
- msvcr110.dll
- msvcrt.dll
- msvcr120_clr0400.dll
apitype: DLLExport
f1_keywords:
- lock
- _lock
dev_langs: C++
helpviewer_keywords:
- lock function
- _lock function
ms.assetid: 29f77c37-30de-4b3d-91b6-030216e645a6
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 851c4a72a4313867f06985e2c77a7035c6a5e9ae
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="lock"></a>_lock
Acquisisce un blocco multithread.  
  
> [!IMPORTANT]
>  Questa funzione è obsoleta. A partire da Visual Studio 2015 non è disponibile in CRT.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __cdecl _lock  
   int locknum  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `locknum`  
 L'identificatore del blocco da acquisire.  
  
## <a name="remarks"></a>Note  
 Se il blocco è già stato acquisito, questo metodo acquisisce comunque il blocco e causa un errore interno di runtime C (CRT). Se il metodo non può acquisire un blocco, termina con un errore irreversibile e imposta il codice di errore su `_RT_LOCK`.  
  
## <a name="requirements"></a>Requisiti  
 **Origine:** mlock.c  
  
## <a name="see-also"></a>Vedere anche  
 [Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)  (Riferimento alfabetico alle funzioni)  
 [_unlock](../c-runtime-library/unlock.md)