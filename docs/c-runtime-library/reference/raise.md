---
title: raise | Microsoft Docs
ms.custom: 
ms.date: 1/02/2018
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- raise
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
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- Raise
dev_langs:
- C++
helpviewer_keywords:
- signals, sending to executing programs
- raise function
- signals
- programs [C++], sending signals to executing programs
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5a116bfab72222bcf3ee3357c77759960f838cb9
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="raise"></a>raise

Invia un segnale al programma in esecuzione.

> [!NOTE]
> Non utilizzare questo metodo per arrestare un'app Store di Microsoft, ad eccezione di testing o scenari di debug. Modalità a livello di codice o dell'interfaccia utente per chiudere un'app di Store non sono consentiti in base al [criteri di Microsoft Store](http://go.microsoft.com/fwlink/?LinkId=865936). Per ulteriori informazioni, vedere [ciclo di vita app UWP](http://go.microsoft.com/fwlink/p/?LinkId=865934).

## <a name="syntax"></a>Sintassi

```C
int raise(
   int sig
);
```

### <a name="parameters"></a>Parametri

*sig*  
Segnale da inviare.

## <a name="return-value"></a>Valore restituito

In caso di esito positivo, **raise** restituisce 0. In caso contrario, viene restituito un valore diverso da zero.

## <a name="remarks"></a>Note

La funzione **raise** invia *sig* al programma in esecuzione. Se una chiamata precedente a **signal** ha installata una funzione di gestione del segnale per *sig*, **raise** esegue tale funzione. Se non è stata installata alcuna funzione di gestione, viene eseguita l'azione predefinita associata al valore di segnale *sig*, come indicato di seguito.

|Segnale|Significato|Impostazione predefinita|
|------------|-------------|-------------|
|`SIGABRT`|Terminazione anomala|Termina il programma chiamante con codice di uscita 3|
|`SIGFPE`|Errore di virgola mobile|Termina il programma chiamante|
|`SIGILL`|Istruzione non valida|Termina il programma chiamante|
|`SIGINT`|Interrupt CTRL+C|Termina il programma chiamante|
|`SIGSEGV`|Accesso all'archiviazione non valido|Termina il programma chiamante|
|`SIGTERM`|Richiesta di terminazione inviata al programma|Ignora il segnale|

Se l'argomento non è un segnale valido come sopra specificato, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se la condizione non viene gestita, la funzione imposta `errno` su `EINVAL` e restituisce un valore diverso da zero.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**raise**|\<signal.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)  
[abort](../../c-runtime-library/reference/abort.md)  
[signal](../../c-runtime-library/reference/signal.md)  
