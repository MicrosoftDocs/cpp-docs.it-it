---
title: _CrtMemCheckpoint | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _CrtMemCheckpoint
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
apitype: DLLExport
f1_keywords:
- CrtMemCheckpoint
- _CrtMemCheckpoint
- crtdbg/_CrtMemCheckpoint
dev_langs:
- C++
helpviewer_keywords:
- CrtMemCheckpoint function
- _CrtMemCheckpoint function
ms.assetid: f1bacbaa-5a0c-498a-ac7a-b6131d83dfbc
caps.latest.revision: 18
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 1904bf5c2632b0913db8e5a9fb838a602615cb45
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="crtmemcheckpoint"></a>_CrtMemCheckpoint
Ottiene lo stato corrente dell'heap di debug e lo memorizza in una struttura `_CrtMemState` fornita dall'applicazione (solo versione debug).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void _CrtMemCheckpoint(  
   _CrtMemState *state   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `state`  
 Puntatore alla struttura `_CrtMemState` da riempire con il checkpoint di memoria.  
  
## <a name="remarks"></a>Note  
 La funzione `_CrtMemCheckpoint` crea uno snapshot dello stato corrente dell'heap di debug in qualsiasi momento. Questo snapshot potrà essere usato da altre funzioni dello stato dell'heap come [_CrtMemDifference](../../c-runtime-library/reference/crtmemdifference.md) per aiutare a rilevare perdite di memoria e altri problemi. Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtMemState` vengono rimosse durante la pre-elaborazione.  
  
 L'applicazione deve passare un puntatore a un'istanza precedentemente allocata della struttura `_CrtMemState` , definita in Crtdbg.h, nel parametro `state` . Se `_CrtMemCheckpoint` incontra un errore durante la creazione del checkpoint, la funzione genera un report di debug `_CRT_WARN` che descrive il problema.  
  
 Per altre informazioni sulle funzioni dello stato dell'heap e sulla struttura `_CrtMemState` , vedere [Heap State Reporting Functions](/visualstudio/debugger/crt-debug-heap-details). Per altre informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).  
  
 Se `state` è `NULL`, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) viene impostato su `EINVAL` e viene restituito il risultato della funzione.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_CrtMemCheckpoint`|\<crtdbg.h>, \<errno.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
 **Librerie:** solo versioni di debug di UCRT.  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [_CrtMemDifference](../../c-runtime-library/reference/crtmemdifference.md)
