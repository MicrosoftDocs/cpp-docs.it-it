---
title: _set_abort_behavior | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _set_abort_behavior
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
- _set_abort_behavior
- set_abort_behavior
dev_langs:
- C++
helpviewer_keywords:
- aborting programs
- _set_abort_behavior function
- set_abort_behavior function
ms.assetid: 43918766-e4ba-4b1f-80e8-1a4a910cd452
caps.latest.revision: 26
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 16d1bf59dfd4b3ef5f037aed9c0f6febfdf1a2e8
ms.openlocfilehash: edf31ccddfb9ab2eaa6de226ff4ec7eb09869438
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="setabortbehavior"></a>_set_abort_behavior
Specifica l'azione da eseguire quando un programma viene terminato in modo anomalo.  
  
> [!NOTE]
>  Non usare la funzione `abort` per interrompere un'app [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)], tranne che negli scenari di test o di debug. I metodi di chiusura di un'app [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] a livello di codice o interfaccia utente non sono consentiti in base ai [requisiti di certificazione delle app di Windows 8](http://go.microsoft.com/fwlink/?LinkId=262889). Per altre informazioni, vedere [Ciclo di vita dell'app](http://go.microsoft.com/fwlink/?LinkId=262853).  
  
## <a name="syntax"></a>Sintassi  
  
```  
unsigned int _set_abort_behavior(  
   unsigned int flags,  
   unsigned int mask  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `flags`  
 Nuovo valore dei flag `abort`.  
  
 [in] `mask`  
 Maschera per i bit dei flag `abort` da impostare.  
  
## <a name="return-value"></a>Valore restituito  
 Valore precedente dei flag.  
  
## <a name="remarks"></a>Note  
 Esistono due flag `abort`: `_WRITE_ABORT_MSG` e `_CALL_REPORTFAULT`. `_WRITE_ABORT_MSG` determina se viene stampato un messaggio di testo utile quando un programma viene terminato in modo anomalo. Il messaggio indica che l'applicazione ha chiamato la funzione `abort`. Il comportamento predefinito prevede la stampa del messaggio. `_CALL_REPORTFAULT`, se impostato, specifica che viene generato e segnalato un dump di arresto anomalo di Dr. Watson in seguito alla chiamata di `abort`. Per impostazione predefinita, la segnalazione di dump di arresto anomalo del sistema è abilitata per le compilazioni non di debug.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_set_abort_behavior`|\<stdlib.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```C  
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
  
```Output  
Suppressing the abort message. If successful, this message will be the only output.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [abort](../../c-runtime-library/reference/abort.md)
