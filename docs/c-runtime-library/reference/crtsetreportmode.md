---
title: _CrtSetReportMode | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: _CrtSetReportMode
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
- _CrtSetReportMode
- CrtSetReportMode
dev_langs: C++
helpviewer_keywords:
- _CrtSetReportMode function
- CrtSetReportMode function
ms.assetid: 3ecc6a12-afdd-4242-b046-8187ff6d4b36
caps.latest.revision: "15"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 75d71ae4df727df1dd82ff88a793dc4e9c462b76
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="crtsetreportmode"></a>_CrtSetReportMode
Specifica la destinazione o le destinazioni per un tipo determinato di report generati da `_CrtDbgReport` e le macro che chiamano [_CrtDbgReport, _CrtDbgReportW](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md), ad esempio [le macro _ASSERT, _ASSERTE, _ASSERT_EXPR](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md), [le macro _ASSERT, _ASSERTE, _ASSERT_EXPR](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md), [le macro _RPT, _RPTF, _RPTW, _RPTFW](../../c-runtime-library/reference/rpt-rptf-rptw-rptfw-macros.md) e [le macro _RPT, _RPTF, _RPTW, _RPTFW](../../c-runtime-library/reference/rpt-rptf-rptw-rptfw-macros.md) (solo versione di debug).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _CrtSetReportMode(   
   int reportType,  
   int reportMode   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `reportType`  
 Tipo di segnalazione: `_CRT_WARN`, `_CRT_ERROR` e `_CRT_ASSERT`.  
  
 `reportMode`  
 Nuova modalità di report o modalità per `reportType`.  
  
## <a name="return-value"></a>Valore restituito  
 Al termine, `_CrtSetReportMode` restituisce la precedente o le precedenti modalità di report per il tipo di report specificato in `reportType`. Se viene passato un valore non valido, ad esempio `reportType`, o viene specificata una modalità non valida per `reportMode`, `_CrtSetReportMode` richiama il gestore di parametri non validi come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta `errno` su`EINVAL` e restituisce -1. Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).  
  
## <a name="remarks"></a>Note  
 `_CrtSetReportMode` specifica la destinazione di output per `_CrtDbgReport`. Poiché le macro `_ASSERT`, `_ASSERTE`, `_RPT`, e `_RPTF` chiamano `_CrtDbgReport`, `_CrtSetReportMode` specifica la destinazione dell'output di testo determinato con queste macro.  
  
 Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtSetReportMode` vengono rimosse durante la pre-elaborazione.  
  
 Se non si chiama `_CrtSetReportMode` per definire la destinazione di output dei messaggi, i valori predefiniti seguenti sono validi:  
  
-   Le asserzioni non riuscite e gli errori di asserzione vengono indirizzati a una finestra di messaggio di debug.  
  
-   Gli avvisi da applicazioni di Windows vengono inviati alla finestra di output del debugger.  
  
-   Gli avvisi da applicazioni della console non vengono visualizzati.  
  
 La tabella seguente elenca i tipi di report definiti in Crtdbg.h.  
  
|Tipo di report|Descrizione|  
|-----------------|-----------------|  
|`_CRT_WARN`|Avvisi, messaggi e informazioni che non richiedono attenzione immediata.|  
|`_CRT_ERROR`|Errori e problemi irreversibili che richiedono attenzione immediata.|  
|`_CRT_ASSERT`|Asserzioni non riuscite (espressioni dichiarate che restituiscono `FALSE`).|  
  
 La funzione `_CrtSetReportMode` assegna la nuova modalità di report specificata in `reportMode` al tipo di report specificato in `reportType` e restituisce la modalità report definita in precedenza per `reportType`. La tabella seguente elenca le scelte disponibili per `reportMode` e il comportamento risultante di `_CrtDbgReport`. Queste opzioni sono definite flag di bit in Crtdbg.h.  
  
|Modalità rapporto|Comportamento _CrtDbgReport|  
|-----------------|-----------------------------|  
|`_CRTDBG_MODE_DEBUG`|Scrive il messaggio alla finestra di output del debugger.|  
|`_CRTDBG_MODE_FILE`|Scrive il messaggio a un handle di file specificato dall'utente. Deve essere chiamato [_CrtSetReportFile](../../c-runtime-library/reference/crtsetreportfile.md) per definire il file o il flusso da usare come destinazione.|  
|`_CRTDBG_MODE_WNDW`|Crea una finestra di messaggio per visualizzare il messaggio con i pulsanti `Abort`, `Retry`, e `Ignore`.|  
|`_CRTDBG_REPORT_MODE`|Restituisce `reportMode` per il `reportType` specificato:<br /><br /> 1   `_CRTDBG_MODE_FILE`<br /><br /> 2   `_CRTDBG_MODE_DEBUG`<br /><br /> 4   `_CRTDBG_MODE_WNDW`|  
  
 Ogni tipo di report può essere riportato tramite uno, due o tre modalità oppure senza modalità. Pertanto, è possibile avere più di una destinazione definita per un tipo di report singolo. Ad esempio, il frammento di codice seguente causa errori di asserzione da essere inviati a una finestra di messaggio di debug e a `stderr`:  
  
```  
_CrtSetReportMode( _CRT_ASSERT, _CRTDBG_MODE_FILE | _CRTDBG_MODE_WNDW );  
_CrtSetReportFile( _CRT_ASSERT, _CRTDBG_FILE_STDERR );  
```  
  
 Le modalità di creazione di report per ogni tipo di report possono anche essere controllate separatamente. Ad esempio, è possibile specificare che un `reportType` di `_CRT_WARN` venga inviato a una stringa di debug di output, mentre `_CRT_ASSERT` venga visualizzato tramite una finestra di messaggio di debug e inviato a `stderr`, come illustrato in precedenza.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|---------------------|---------------------|  
|`_CrtSetReportMode`|\<crtdbg.h>|\<errno.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
 **Librerie:** solo le versioni di debug delle [funzionalità della libreria CRT](../../c-runtime-library/crt-library-features.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)