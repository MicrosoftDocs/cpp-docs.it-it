---
title: "_CrtDbgReport, _CrtDbgReportW | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_CrtDbgReport"
  - "_CrtDbgReportW"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
apitype: "DLLExport"
f1_keywords: 
  - "CrtDbgReport"
  - "CrtDbgReportW"
  - "_CrtDbgReportW"
  - "_CrtDbgReport"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "report di debug"
  - "_CrtDbgReport (funzione)"
  - "CrtDbgReport (funzione)"
  - "CrtDbgReportW (funzione)"
  - "_CrtDbgReportW (funzione)"
ms.assetid: 6e581fb6-f7fb-4716-9432-f0145d639ecc
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 18
---
# _CrtDbgReport, _CrtDbgReportW
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

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
 Per tutte le destinazioni del rapporto, `_CrtDbgReport` e `_CrtDbgReportW` restituiscono –1 se si verifica un errore e 0 se non si verificano errori. Tuttavia, quando la destinazione del rapporto è una finestra di messaggio di debug e l'utente fa clic il **ripetere** pulsante, queste funzioni restituiscono 1. Se l'utente sceglie il **Abort** pulsante nella finestra di messaggio di Debug, queste funzioni immediatamente interrotta e non restituiscono un valore.  
  
 Il [rpt, rptf](../../c-runtime-library/reference/rpt-rptf-rptw-rptfw-macros.md) chiamata di macro di debug `_CrtDbgReport` per il debug di generare rapporti. Le versioni a caratteri wide di queste macro, nonché [Assert &#91; E &#93;](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md), `_RPTW``n` e `_RPTFW``n`, utilizzare `_CrtDbgReportW` per il debug di generare rapporti. Quando `_CrtDbgReport` o `_CrtDbgReportW` restituiscono 1, queste macro avviano il debugger JIT (just-in-time), purché il debug sia abilitato.  
  
## <a name="remarks"></a>Note  
 `_CrtDbgReport` e `_CrtDbgReportW` possono inviare il rapporto di debug a tre destinazioni diverse: un file di rapporto di debug, un monitor di debug (ovvero il debugger [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)]) o a una finestra di messaggio di debug. Due funzioni di configurazione, [CrtSetReportMode](../../c-runtime-library/reference/crtsetreportmode.md) e [crtsetreportfile](../../c-runtime-library/reference/crtsetreportfile.md), vengono utilizzati per specificare la destinazione o le destinazioni per ogni tipo di report. Queste funzioni consentono alle destinazioni per la creazione dei rapporti per ogni tipo di rapporto di essere controllate separatamente. È ad esempio possibile specificare che un `reportType` di `_CRT_WARN` possa essere inviato solo al monitor di debug, mentre un `reportType` di `_CRT_ASSERT` sia inviato a una finestra di messaggio di debug e a un file di rapporto definito dall'utente.  
  
 `_CrtDbgReportW` è la versione a caratteri wide di `_CrtDbgReport`. Tutti gli output e i parametri di stringa sono espressi in stringhe a caratteri wide, per il resto è identico alla versione a un byte.  
  
 `_CrtDbgReport` e `_CrtDbgReportW` creano il messaggio utente per il rapporto di debug tramite la sostituzione degli argomenti `argument`[`n`] nella stringa `format`, usando le stesse regole definite dalle funzioni `printf` o `wprintf`. Queste funzioni generano quindi il rapporto di debug e determinano la destinazione o le destinazioni in base alle modalità rapporto correnti e al file definito per `reportType`. Quando il rapporto viene inviato a una finestra di messaggio di debug, `filename`, `lineNumber` e `moduleName` sono inclusi nelle informazioni visualizzate nella finestra.  
  
 Nella tabella seguente sono illustrate le scelte disponibili per le modalità rapporto e il file e il comportamento risultante di `_CrtDbgReport` e `_CrtDbgReportW`. Queste opzioni sono definite come flag di bit in \<crtdbg.h>.  
  
|Modalità rapporto|File di rapporto|Comportamento di `_CrtDbgReport`, `_CrtDbgReportW`|  
|-----------------|-----------------|------------------------------------------------|  
|`_CRTDBG_MODE_DEBUG`|Non applicabile|Scrive un messaggio mediante Windows [OutputDebugString](http://msdn.microsoft.com/library/windows/desktop/aa363362.aspx) API.|  
|`_CRTDBG_MODE_WNDW`|Non applicabile|Chiama Windows [MessageBox](http://msdn.microsoft.com/library/windows/desktop/ms645505) API per creare la finestra di messaggio per visualizzare il messaggio insieme a **Abort**, **ripetere**, e **Ignora** pulsanti. Se un utente fa clic su **Abort**, `_CrtDbgReport` o `_CrtDbgReport` immediatamente interrotto. Se un utente fa clic su **ripetere**, restituisce 1. Se un utente fa clic su **Ignora**, l'esecuzione continua e `_CrtDbgReport` e `_CrtDbgReportW` restituiscono 0. Si noti che facendo clic su **Ignora** quando una condizione di errore esiste spesso risultati "comportamento indefinito".|  
|`_CRTDBG_MODE_FILE`|`__HFILE`|Scrive il messaggio in fornito dall'utente `HANDLE`, utilizzando le finestre [WriteFile](http://msdn.microsoft.com/library/windows/desktop/aa365747.aspx) API e non verifica la validità dell'handle di file; l'applicazione è responsabile dell'apertura del file di report e passando un handle di file valido.|  
|`_CRTDBG_MODE_FILE`|`_CRTDBG_FILE_STDERR`|Scrive il messaggio in `stderr`.|  
|`_CRTDBG_MODE_FILE`|`_CRTDBG_FILE_STDOUT`|Scrive il messaggio in `stdout`.|  
  
 Il rapporto può essere inviato a una, due o tre destinazioni o a nessuna destinazione. Per ulteriori informazioni su come specificare la modalità di report e il file di report, vedere il [CrtSetReportMode](../../c-runtime-library/reference/crtsetreportmode.md) e [crtsetreportfile](../../c-runtime-library/reference/crtsetreportfile.md) funzioni. Per ulteriori informazioni sull'utilizzo delle macro di debug e funzioni di report, vedere [macro per il Reporting](../Topic/Macros%20for%20Reporting.md).  
  
 Se l'applicazione necessita di maggiore flessibilità rispetto a quelle fornite da `_CrtDbgReport` e `_CrtDbgReportW`, è possibile scrivere una funzione di reporting e agganciarla nel reporting meccanismo con la libreria di run-time C di [CrtSetReportHook](../../c-runtime-library/reference/crtsetreporthook.md) (funzione).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_CrtDbgReport`|\<crtdbg.h>|  
|`_CrtDbgReportW`|\<crtdbg.h>|  
  
 `_CrtDbgReport` e `_CrtDbgReportW` sono estensioni Microsoft. Per altre informazioni, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="libraries"></a>Librerie  
 Le versioni di debug [librerie di runtime C](../../c-runtime-library/crt-library-features.md) solo.  
  
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
  
 Vedere [crt_dbg2](http://msdn.microsoft.com/it-it/21e1346a-6a17-4f57-b275-c76813089167) per un esempio di come modificare la funzione di report.  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
  
-   [System::Diagnostics::debug::Write](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.write.aspx)  
  
-   [System::Diagnostics::debug::WriteLine](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.writeline.aspx)  
  
-   [System::Diagnostics::debug::WriteIf](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.writeif.aspx)  
  
-   [System::Diagnostics::debug::WriteLineIf](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.writelineif.aspx)  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [CrtSetReportMode](../../c-runtime-library/reference/crtsetreportmode.md)   
 [Crtsetreportfile](../../c-runtime-library/reference/crtsetreportfile.md)   
 [printf, printf_l, wprintf, wprintf_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [DEBUG](../../c-runtime-library/debug.md)