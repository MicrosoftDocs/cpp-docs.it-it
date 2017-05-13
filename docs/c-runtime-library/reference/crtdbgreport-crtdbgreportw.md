---
title: _CrtDbgReport, _CrtDbgReportW | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _CrtDbgReport
- _CrtDbgReportW
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
- CrtDbgReport
- CrtDbgReportW
- _CrtDbgReportW
- _CrtDbgReport
dev_langs:
- C++
helpviewer_keywords:
- debug reporting
- _CrtDbgReport function
- CrtDbgReport function
- CrtDbgReportW function
- _CrtDbgReportW function
ms.assetid: 6e581fb6-f7fb-4716-9432-f0145d639ecc
caps.latest.revision: 18
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
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: f197e4f6341508f05e566f45566f26a18be43bed
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="crtdbgreport-crtdbgreportw"></a>_CrtDbgReport, _CrtDbgReportW
Genera un rapporto con un messaggio di debug e lo invia tre possibili destinazioni (solo versione di debug).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _CrtDbgReport(   
   int reportType,  
   const char *filename,  
   int linenumber,  
   const char *moduleName,  
   const char *format [,  
   argument] ...   
);  
int _CrtDbgReportW(   
   int reportType,  
   const wchar_t *filename,  
   int linenumber,  
   const wchar_t *moduleName,  
   const wchar_t *format [,  
   argument] ...   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `reportType`  
 Tipo di segnalazione: `_CRT_WARN`, `_CRT_ERROR` e `_CRT_ASSERT`.  
  
 `filename`  
 Puntatore al nome del file di origine in cui si è verificata l'asserzione o il rapporto o `NULL`.  
  
 `linenumber`  
 Numero di riga nel file di origine in cui si è verificata l'asserzione o il rapporto o `NULL`.  
  
 `moduleName`  
 Puntatore al nome del modulo (.exe o .dll) in cui si è verificata l'asserzione o il rapporto.  
  
 `format`  
 Puntatore alla stringa di controllo del formato usata per creare il messaggio utente.  
  
 `argument`  
 Argomenti di sostituzione facoltativi usati da `format`.  
  
## <a name="return-value"></a>Valore restituito  
 Per tutte le destinazioni del rapporto, `_CrtDbgReport` e `_CrtDbgReportW` restituisce -1 se si verifica un errore e 0 se non si verificano errori. Tuttavia, quando la destinazione del report è una finestra di messaggio di debug e l'utente fa clic sul pulsante **Riprova**, queste funzioni restituiscono 1. Se l'utente fa clic sul pulsante **Interrompi** nella finestra di messaggio di debug, queste funzioni vengono interrotte immediatamente e non restituiscono nessun valore.  
  
 Le macro di debug [_RPT, _RPTF](../../c-runtime-library/reference/rpt-rptf-rptw-rptfw-macros.md) eseguono una chiamata a `_CrtDbgReport` per generare i relativi report di debug. Le versioni a caratteri wide di queste macro, nonché [_ASSERT&#91;E&#93;](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md), `_RPTW n` e `_RPTFW n` usano `_CrtDbgReportW` per generare i report di debug. Quando `_CrtDbgReport` o `_CrtDbgReportW` restituiscono 1, queste macro avviano il debugger JIT (just-in-time), purché il debug sia abilitato.  
  
## <a name="remarks"></a>Note  
 `_CrtDbgReport` e `_CrtDbgReportW` possono inviare il rapporto di debug a tre destinazioni diverse: un file di rapporto di debug, un monitor di debug (ovvero il debugger [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)]) o a una finestra di messaggio di debug. Vengono usate due funzioni di configurazione, [_CrtSetReportMode](../../c-runtime-library/reference/crtsetreportmode.md) e [_CrtSetReportFile](../../c-runtime-library/reference/crtsetreportfile.md), per specificare la destinazione o le destinazioni per ogni tipo di report. Queste funzioni consentono alle destinazioni per la creazione dei rapporti per ogni tipo di rapporto di essere controllate separatamente. È ad esempio possibile specificare che un `reportType` di `_CRT_WARN` possa essere inviato solo al monitor di debug, mentre un `reportType` di `_CRT_ASSERT` sia inviato a una finestra di messaggio di debug e a un file di rapporto definito dall'utente.  
  
 `_CrtDbgReportW` è la versione a caratteri wide di `_CrtDbgReport`. Tutti gli output e i parametri di stringa sono espressi in stringhe a caratteri wide, per il resto è identico alla versione a un byte.  
  
 `_CrtDbgReport` e `_CrtDbgReportW` creano il messaggio utente per il rapporto di debug tramite la sostituzione degli argomenti `argument`[`n`] nella stringa `format`, usando le stesse regole definite dalle funzioni `printf` o `wprintf`. Queste funzioni generano quindi il rapporto di debug e determinano la destinazione o le destinazioni in base alle modalità rapporto correnti e al file definito per `reportType`. Quando il rapporto viene inviato a una finestra di messaggio di debug, `filename`, `lineNumber` e `moduleName` sono inclusi nelle informazioni visualizzate nella finestra.  
  
 Nella tabella seguente sono illustrate le scelte disponibili per le modalità rapporto e il file e il comportamento risultante di `_CrtDbgReport` e `_CrtDbgReportW`. Queste opzioni sono definite come flag di bit in \<crtdbg.h>.  
  
|Modalità rapporto|File di rapporto|Comportamento di `_CrtDbgReport`, `_CrtDbgReportW`|  
|-----------------|-----------------|------------------------------------------------|  
|`_CRTDBG_MODE_DEBUG`|Non applicabile|Scrive un messaggio tramite l'API [OutputDebugString](http://msdn.microsoft.com/library/windows/desktop/aa363362.aspx) di Windows.|  
|`_CRTDBG_MODE_WNDW`|Non applicabile|Esegue una chiamata all'API[MessageBox](http://msdn.microsoft.com/library/windows/desktop/ms645505) di Windows per creare la finestra in cui visualizzare il messaggio nonché i pulsanti **Interrompi**, **Riprova** e **Ignora**. Se un utente fa clic su **Interrompi**, `_CrtDbgReport` o `_CrtDbgReport` viene immediatamente interrotto. Se un utente fa clic su **Riprova**, viene restituito 1. Se un utente fa clic su **Ignora**, l'esecuzione continua e `_CrtDbgReport` e `_CrtDbgReportW` restituiscono 0. Si noti che quando si fa clic su **Ignora** in presenza di una condizione di errore, spesso si determina un "comportamento indefinito".|  
|`_CRTDBG_MODE_FILE`|`__HFILE`|Scrive un messaggio nell'`HANDLE` specificato dall'utente, usando l'API [WriteFile](http://msdn.microsoft.com/library/windows/desktop/aa365747.aspx) di Windows e non verifica la validità dell'handle di file. L'applicazione è responsabile dell'apertura del file del report e del passaggio di un handle di file valido.|  
|`_CRTDBG_MODE_FILE`|`_CRTDBG_FILE_STDERR`|Scrive il messaggio in `stderr`.|  
|`_CRTDBG_MODE_FILE`|`_CRTDBG_FILE_STDOUT`|Scrive il messaggio in `stdout`.|  
  
 Il rapporto può essere inviato a una, due o tre destinazioni o a nessuna destinazione. Per altre informazioni su come specificare le modalità report e il file del report, vedere le funzioni [_CrtSetReportMode](../../c-runtime-library/reference/crtsetreportmode.md) e [_CrtSetReportFile](../../c-runtime-library/reference/crtsetreportfile.md). Per altre informazioni sull'uso delle macro di debug e delle funzioni per la creazione di report, vedere [Macros for Reporting](/visualstudio/debugger/macros-for-reporting) (Macro per la creazione di report).  
  
 Se l'applicazione richiede maggiore flessibilità di quella offerta da `_CrtDbgReport` e `_CrtDbgReportW`, è possibile scrivere una funzione per la creazione di report personalizzata ed eseguire l'hook al meccanismo di creazione di report della libreria di runtime di usando la funzione [_CrtSetReportHook](../../c-runtime-library/reference/crtsetreporthook.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_CrtDbgReport`|\<crtdbg.h>|  
|`_CrtDbgReportW`|\<crtdbg.h>|  
  
 `_CrtDbgReport` e `_CrtDbgReportW` sono estensioni Microsoft. Per altre informazioni, vedere [Compatibility](../../c-runtime-library/compatibility.md).  
  
## <a name="libraries"></a>Librerie  
 Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_crtdbgreport.c  
#include <crtdbg.h>  
  
int main(int argc, char *argv[]) {  
#ifdef _DEBUG  
   _CrtDbgReport(_CRT_ASSERT, __FILE__, __LINE__, argv[0], NULL);  
#endif  
}  
```  
  
 Per un esempio su come modificare la funzione per la creazione di report, vedere [crt_dbg2](http://msdn.microsoft.com/en-us/21e1346a-6a17-4f57-b275-c76813089167).  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [_CrtSetReportMode](../../c-runtime-library/reference/crtsetreportmode.md)   
 [_CrtSetReportFile](../../c-runtime-library/reference/crtsetreportfile.md)   
 [printf, _printf_l, wprintf, _wprintf_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [_DEBUG](../../c-runtime-library/debug.md)
