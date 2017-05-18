---
title: _CrtMemDumpStatistics | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _CrtMemDumpStatistics
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
- CrtMemDumpStatistics
- _CrtMemDumpStatistics
dev_langs:
- C++
helpviewer_keywords:
- _CrtMemDumpStatistics function
- CrtMemDumpStatistics function
ms.assetid: 27b9d731-3184-4a2d-b9a7-6566ab28a9fe
caps.latest.revision: 15
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
ms.openlocfilehash: 524c875f5cf25eb41d09e0f5dc99c32efcae8661
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="crtmemdumpstatistics"></a>_CrtMemDumpStatistics
Esegue il dump delle informazioni di intestazione di debug per uno stato dell'heap specificato in un form leggibile dall'utente (solo versione di debug).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void _CrtMemDumpStatistics(   
   const _CrtMemState *state   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `state`  
 Puntatore allo stato dell'heap per eseguire il dump.  
  
## <a name="remarks"></a>Note  
 La funzione `_CrtMemDumpStatistics` esegue il dump delle informazioni di intestazione di debug per uno stato dell'heap specificato in un form leggibile dall'utente. Le statistiche di dump possono essere usate dall'applicazione per tenere traccia delle allocazioni e per rilevare problemi di memoria. Lo stato della memoria può contenere uno stato dell'heap specifico o la differenza tra i due stati. Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtMemDumpStatistics` vengono rimosse durante la pre-elaborazione.  
  
 La funzione `state` deve essere un puntatore a una struttura `_CrtMemState` che è stata compilata da [_CrtMemCheckpoint](../../c-runtime-library/reference/crtmemcheckpoint.md) o restituita da [_CrtMemDifference](../../c-runtime-library/reference/crtmemdifference.md) prima di chiamare `_CrtMemDumpStatistics` . Se `state` è `NULL`, verrà richiamato il gestore di parametri non valido, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e non viene eseguita alcuna azione. Per altre informazioni, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 Per altre informazioni sulle funzioni dello stato dell'heap e sulla struttura `_CrtMemState`, vedere [Heap State Reporting Functions](/visualstudio/debugger/crt-debug-heap-details) (Funzioni per la creazione di report sullo stato dell'heap). Per altre informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [Informazioni dettagliate sull'heap di debug CRT](/visualstudio/debugger/crt-debug-heap-details).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazioni facoltative|  
|-------------|---------------------|----------------------|  
|`_CrtMemDumpStatistics`|\<crtdbg.h>|\<errno.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
 **Librerie:** solo le versioni di debug delle [funzionalità della libreria CRT](../../c-runtime-library/crt-library-features.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)
