---
title: raise | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
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
ms.assetid: a3ccd3ad-f68f-4a7b-a005-c3ebfb217e8b
caps.latest.revision: 14
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 9cfcedc524b94d0aa6c381416c445cf62f9cf2fb
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="raise"></a>raise
Invia un segnale al programma in esecuzione.  
  
> [!NOTE]
>  Non utilizzare questo metodo per interrompere un'applicazione [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)], eccetto che negli scenari di test o di debug. Le modalità dell'interfaccia utente o a livello di codice per chiudere un'app [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] non sono consentite in base a quanto indicato nella sezione 3.6 dei [Requisiti di certificazione delle app di Windows 8](http://go.microsoft.com/fwlink/?LinkId=262889). Per altre informazioni, vedere [Ciclo di vita delle applicazioni (app di Windows Store)](http://go.microsoft.com/fwlink/?LinkId=262853).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      int raise(  
int sig   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *sig*  
 Segnale da inviare.  
  
## <a name="return-value"></a>Valore restituito  
 In caso di esito positivo, **raise** restituisce 0. In caso contrario, viene restituito un valore diverso da zero.  
  
## <a name="remarks"></a>Note  
 La funzione **raise** invia *sig* al programma in esecuzione. Se una chiamata precedente a **signal** ha installata una funzione di gestione del segnale per *sig*, **raise** esegue tale funzione. Se non è stata installata alcuna funzione di gestione, viene eseguita l'azione predefinita associata al valore di segnale *sig*, come indicato di seguito.  
  
|Segnale|Significato|Default|  
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
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [signal](../../c-runtime-library/reference/signal.md)
