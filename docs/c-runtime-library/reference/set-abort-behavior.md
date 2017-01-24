---
title: "_set_abort_behavior | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_set_abort_behavior"
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
  - "api-ms-win-crt-runtime-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_set_abort_behavior"
  - "set_abort_behavior"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_set_abort_behavior (funzione)"
  - "interruzione di programmi"
  - "set_abort_behavior (funzione)"
ms.assetid: 43918766-e4ba-4b1f-80e8-1a4a910cd452
caps.latest.revision: 26
caps.handback.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _set_abort_behavior
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica l'azione da intraprendere quando un programma viene terminato in modo anomalo.  
  
> [!NOTE]
>  Non utilizzare la funzione `abort` per interrompere un'applicazione [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)], eccetto che negli scenari di test o di debug.  Le modalità dell'interfaccia utente o a livello di codice per chiudere un'app di [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] non sono consentite come descritto in [Requisiti di certificazione delle app di Windows 8](http://go.microsoft.com/fwlink/?LinkId=262889).  Per ulteriori informazioni, vedere [Ciclo di vita delle applicazioni \(app di Windows Store\)](http://go.microsoft.com/fwlink/?LinkId=262853).  
  
## Sintassi  
  
```  
unsigned int _set_abort_behavior(  
   unsigned int flags,  
   unsigned int mask  
);  
```  
  
#### Parametri  
 \[in\] `flags`  
 Nuovo valore dei flag `abort`.  
  
 \[in\] `mask`  
 Maschera per i flag di bit `abort` da impostare.  
  
## Valore restituito  
 Valore precedente dei flag.  
  
## Note  
 Sono presenti due flag `abort`: `_WRITE_ABORT_MSG` e `_CALL_REPORTFAULT`.  `_WRITE_ABORT_MSG` determina se un messaggio di testo utile viene stampato quando un programma viene arrestato in modo anomalo.  Il messaggio indica che l'applicazione ha chiamato la funzione `abort`.  Il comportamento predefinito prevede la stampa del messaggio.  `_CALL_REPORTFAULT`, se impostato, specifica che un dettaglio arresto anomalo del sistema Watson viene generato e visualizzato quando viene chiamato `abort`.  Per impostazione predefinita, la segnalazione dei dump di arresto anomalo del sistema è abilitata nelle compilazioni non di debug.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_set_abort_behavior`|\<stdlib.h\>|  
  
 Per ulteriori informazioni di compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```c  
// crt_set_abort_behavior.c  
// compile with: /TC  
#include <stdlib.h>  
  
int main()  
{  
   printf("Suppressing the abort message. If successful, this message"  
          " will be the only output.\n");  
   // Suppress the abort message  
   _set_abort_behavior( 0, _WRITE_ABORT_MSG);  
   abort();  
}  
```  
  
  **Eliminazione del messaggio di interruzione.  Se l'operazione riesce, il messaggio sarà l'unico output.**    
## Vedere anche  
 [abort](../../c-runtime-library/reference/abort.md)