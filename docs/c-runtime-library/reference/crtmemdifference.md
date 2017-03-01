---
title: _CrtMemDifference | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _CrtMemDifference
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
- _CrtMemDifference
- CrtMemDifference
dev_langs:
- C++
helpviewer_keywords:
- CrtMemDifference function
- _CrtMemDifference function
ms.assetid: 0f327278-b551-482f-958b-76941f796ba4
caps.latest.revision: 16
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
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 2d8cba0ada845e7e75bfe15945700a1385c8bcbb
ms.lasthandoff: 02/24/2017

---
# <a name="crtmemdifference"></a>_CrtMemDifference
Confronta due stati della memoria e restituisce le differenze (solo versione di debug).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _CrtMemDifference(   
   _CrtMemState *stateDiff,  
   const _CrtMemState *oldState,  
   const _CrtMemState *newState   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `stateDiff`  
 Puntatore a una struttura `_CrtMemState` usata per archiviare la differenza tra due stati della memoria (elemento restituito).  
  
 `oldState`  
 Puntatore a uno stato precedente della memoria (struttura`_CrtMemState` ).  
  
 `newState`  
 Puntatore a uno stato successivo della memoria (struttura`_CrtMemState` ).  
  
## <a name="return-value"></a>Valore restituito  
 Se gli stati della memoria sono molto differenti, `_CrtMemDifference` restituisce TRUE. In caso contrario, la funzione restituisce FALSE.  
  
## <a name="remarks"></a>Note  
 La funzione `_CrtMemDifference` confronta `oldState` e `newState` e archivia le differenze in `stateDiff`, che può quindi essere usato dall'applicazione per rilevare perdite di memoria e altri problemi di memoria. Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtMemDifference` vengono rimosse durante la pre-elaborazione.  
  
 `newState` e `oldState` devono essere entrambi puntatori validi a una struttura `_CrtMemState`, definita in Crtdbg.h, che è stata riempita da [_CrtMemCheckpoint](../../c-runtime-library/reference/crtmemcheckpoint.md) prima di chiamare `_CrtMemDifference`. `stateDiff` deve essere un puntatore a un'istanza precedentemente allocata della struttura `_CrtMemState`. Se `stateDiff`, `newState` o `oldState` è `NULL`, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) viene impostato su `EINVAL` e la funzione restituisce FALSE.  
  
 `_CrtMemDifference` confronta i valori del campo `_CrtMemState` dei blocchi in `oldState` con quelli in `newState` e archivia il risultato in `stateDiff`. Quando il numero di tipi di blocco allocati o il numero totale di blocchi allocati per ogni tipo è diverso tra i due stati della memoria, gli stati vengono definiti diversi in modo significativo. La differenza tra la più grande quantità allocata contemporaneamente per i due stati e la differenza tra le allocazioni totali per i due stati vengono archiviate anche in `stateDiff`.  
  
 Per impostazione predefinita, i blocchi di runtime del linguaggio C interni (`_CRT_BLOCK`) non sono inclusi nelle operazioni dello stato della memoria. La funzione [_CrtSetDbgFlag](../../c-runtime-library/reference/crtsetdbgflag.md) può essere usata per attivare il bit `_CRTDBG_CHECK_CRT_DF` di `_crtDbgFlag` per includere questi blocchi nel rilevamento perdite e altre operazioni dello stato della memoria. I blocchi di memoria liberata (`_FREE_BLOCK`) non comportano la restituzione di TRUE da parte di `_CrtMemDifference` .  
  
 Per altre informazioni sulle funzioni dello stato dell'heap e sulla struttura `_CrtMemState`, vedere [Heap State Reporting Functions](/visualstudio/debugger/crt-debug-heap-details) (Funzioni per la creazione di report sullo stato dell'heap). Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [Informazioni dettagliate sull'heap di debug CRT](/visualstudio/debugger/crt-debug-heap-details).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|---------------------|---------------------|  
|`_CrtMemDifference`|\<crtdbg.h>|\<errno.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
 **Librerie:** solo le versioni di debug delle [funzionalità della libreria CRT](../../c-runtime-library/crt-library-features.md).  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f) (Esempi di platform invoke).  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [_crtDbgFlag](../../c-runtime-library/crtdbgflag.md)
