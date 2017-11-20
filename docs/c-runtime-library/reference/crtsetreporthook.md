---
title: _CrtSetReportHook | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: _CrtSetReportHook
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
- _CrtSetReportHook
- CrtSetReportHook
dev_langs: C++
helpviewer_keywords:
- CrtSetReportHook function
- _CrtSetReportHook function
ms.assetid: 1ae7c64f-8c84-4797-9574-b59f00f7a509
caps.latest.revision: "13"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 7742b9f26c2eaffada242b7a0322fd0d2a426c0a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="crtsetreporthook"></a>_CrtSetReportHook
Installa la funzione per la creazione di report definita dal client per eseguire l'hook nel processo di creazione di report sul debug del runtime di C (solo versione di debug).  
  
## <a name="syntax"></a>Sintassi  
  
```  
_CRT_REPORT_HOOK _CrtSetReportHook(   
   _CRT_REPORT_HOOK reportHook   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `reportHook`  
 Nuova funzione per la creazione di report definita dal client per eseguire l'hook nel processo di creazione di report sul debug del runtime di C.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce la funzione per la creazione di report precedente definita dal client.  
  
## <a name="remarks"></a>Note  
 `_CrtSetReportHook` consente a un'applicazione di usare la propria funzione per la creazione di report nel processo di creazione di report sulla libreria di debug del runtime di C. Di conseguenza, ogni volta che viene chiamato [_CrtDbgReport](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md) per generare un report di debug, la funzione per la creazione di report viene chiamata prima. Questa funzionalità abilita un'applicazione a eseguire operazioni, ad esempio il filtraggio di report di debug, in modo che possa usare solo i tipi specifici di allocazioni o inviare un report a destinazioni non disponibili tramite `_CrtDbgReport`. Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtSetReportHook` vengono rimosse durante la pre-elaborazione.  
  
 Per una versione più affidabile di `_CrtSetReportHook`, vedere [_CrtSetReportHook2](../../c-runtime-library/reference/crtsetreporthook2-crtsetreporthookw2.md).  
  
 La funzione `_CrtSetReportHook` installa la nuova funzione per la creazione di report definita dal client specificata in `reportHook` e restituisce l'hook precedente definito dal client. L'esempio seguente illustra come un hook di report definito dal client debba avere un prototipo:  
  
```  
int YourReportHook( int reportType, char *message, int *returnValue );  
```  
  
 dove `reportType` è il tipo di report di debug (`_CRT_WARN`, `_CRT_ERROR`, o `_CRT_ASSERT`), `message` è il messaggio utente di debug completamente assemblato per essere incluso nel report e `returnValue` è il valore specificato dalla funzione per la creazione di report definita dal client che deve essere restituito dalla funzione `_CrtDbgReport`. Per una descrizione completa dei tipi di report disponibili, vedere la funzione [_CrtSetReportMode](../../c-runtime-library/reference/crtsetreportmode.md).  
  
 Se la funzione per la creazione di report definita dal client gestisce completamente il messaggio di debug in modo che non sia necessario alcun report aggiuntivo, la funzione deve restituire `TRUE`. Quando la funzione restituisce `FALSE`, viene chiamato `_CrtDbgReport` per generare il report di debug usando le impostazioni correnti per tipo di report, modalità e file. In aggiunta, specificando il valore restituito `_CrtDbgReport` in `returnValue`, l'applicazione può anche controllare se si verifica un'interruzione di debug. Per una descrizione completa della modalità di configurazione e generazione del report di debug, vedere `_CrtSetReportMode`, [_CrtSetReportFile](../../c-runtime-library/reference/crtsetreportfile.md) e `_CrtDbgReport`.  
  
 Per informazioni sull'uso di altre funzioni di runtime capaci di eseguire l'hook e sulla scrittura delle funzioni di hook definite dal client, vedere [Writing Your Own Debug Hook Functions](/visualstudio/debugger/debug-hook-function-writing) (Scrittura di funzioni hook di debug).  
  
> [!NOTE]
>  Se l'applicazione viene compilata con `/clr` e la funzione per la creazione di report viene chiamata dopo che l'applicazione è uscita, CLR genererà un'eccezione se la funzione per la creazione di report chiama le funzioni CRT.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_CrtSetReportHook`|\<crtdbg.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [_CrtGetReportHook](../../c-runtime-library/reference/crtgetreporthook.md)