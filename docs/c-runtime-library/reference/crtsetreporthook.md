---
title: "_CrtSetReportHook | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_CrtSetReportHook"
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
  - "_CrtSetReportHook"
  - "CrtSetReportHook"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "CrtSetReportHook (funzione)"
  - "_CrtSetReportHook (funzione)"
ms.assetid: 1ae7c64f-8c84-4797-9574-b59f00f7a509
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _CrtSetReportHook
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Installa una funzione di segnalazione definita dal client agganciandola al processo di creazione di report di debug della fase di runtime del linguaggio C \(solo versione di debug\).  
  
## Sintassi  
  
```  
_CRT_REPORT_HOOK _CrtSetReportHook(   
   _CRT_REPORT_HOOK reportHook   
);  
```  
  
#### Parametri  
 `reportHook`  
 Nuova funzione di segnalazione definita dal client per associarsi al processo di creazione di report di debug della fase di runtime del linguaggio C.  
  
## Valore restituito  
 Restituisce la funzione di segnalazione precedente definita dal client.  
  
## Note  
 `_CrtSetReportHook` consente ad un'applicazione di utilizzare la propria funzione di segnalazione nel processo di debug della libreria di runtime del linguaggio C.  Pertanto, ogni volta che [\_CrtDbgReport](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md) viene chiamato per generare un report di debug, viene chiamata per prima la funzione di segnalazione dell'applicazione.  Questa funzionalità consente a un'applicazione di eseguire operazioni quali report di debug di filtro in modo da concentrarsi su tipi specifici di allocazione o inviare un rapporto in destinazioni non disponibili tramite `_CrtDbgReport`.  Quando [\_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtSetReportHook` vengono rimosse durante la pre\-elaborazione.  
  
 Per una versione più avanzata di `_CrtSetReportHook`, vedere [\_CrtSetReportHook2](../../c-runtime-library/reference/crtsetreporthook2-crtsetreporthookw2.md).  
  
 La funzione `_CrtSetReportHook` installa la nuova funzione di segnalazione definita dal client specificata in `reportHook` e restituisce l'hook precedente definito dal client.  Nell'esempio seguente viene illustrato come dovrebbe essere il prototipo di un report di hook definito dal client:  
  
```  
int YourReportHook( int reportType, char *message, int *returnValue );  
```  
  
 dove `reportType` è il tipo di report di debug \(`_CRT_WARN`, `_CRT_ERROR`, o `_CRT_ASSERT`\), `message` è il messaggio utente di debug completamente assemblato da includere nel report e `returnValue` è il valore specificato dalla funzione di segnalazione definita dal client che deve essere restituito da `_CrtDbgReport`.  Per una descrizione completa dei tipi di report disponibili, vedere la funzione [\_CrtSetReportMode](../../c-runtime-library/reference/crtsetreportmode.md).  
  
 Se la funzione di segnalazione definita dal client gestisce completamente il messaggio di debug in modo che non sia necessario alcun report ulteriore, la funzione deve restituire `TRUE`.  Quando la funzione restituisce `FALSE`, `_CrtDbgReport` viene richiamato per generare un report di debug utilizzando le impostazioni correnti per il tipo, modalità e file di report.  Inoltre, specificando il valore restituito da `_CrtDbgReport` in `returnValue`, l'applicazione può controllare anche quando si verifica un'interruzione di debug.  Per una descrizione completa su come è configurato e generato il report di debug, vedere `_CrtSetReportMode`, [\_CrtSetReportFile](../../c-runtime-library/reference/crtsetreportfile.md)e `_CrtDbgReport`.  
  
 Per ulteriori informazioni sull'utilizzo di altre funzioni di runtime hook e per la scrittura delle funzioni hook definite dal client, consultare [Scrittura di funzioni hook di debug](../Topic/Debug%20Hook%20Function%20Writing.md).  
  
> [!NOTE]
>  Se l'applicazione viene compilata con `/clr` e la funzione di segnalazione viene chiamata dopo che l'applicazione ha terminato l'esecuzione del main, CLR genererà un'eccezione se la funzione di segnalazione richiama una qualsiasi funzione CRT.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_CrtSetReportHook`|\<crtdbg.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Solo versioni di debug di [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [\_CrtGetReportHook](../../c-runtime-library/reference/crtgetreporthook.md)