---
title: _CrtSetReportHook | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _CrtSetReportHook
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
dev_langs:
- C++
helpviewer_keywords:
- CrtSetReportHook function
- _CrtSetReportHook function
ms.assetid: 1ae7c64f-8c84-4797-9574-b59f00f7a509
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1ef76fe0b7befb99b5bf0e8bb69fa1a1229782de
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32398789"
---
# <a name="crtsetreporthook"></a>_CrtSetReportHook

Installa la funzione per la creazione di report definita dal client per eseguire l'hook nel processo di creazione di report sul debug del runtime di C (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
_CRT_REPORT_HOOK _CrtSetReportHook(
   _CRT_REPORT_HOOK reportHook
);
```

### <a name="parameters"></a>Parametri

*reportHook*<br/>
Nuova funzione per la creazione di report definita dal client per eseguire l'hook nel processo di creazione di report sul debug del runtime di C.

## <a name="return-value"></a>Valore restituito

Restituisce la funzione per la creazione di report precedente definita dal client.

## <a name="remarks"></a>Note

**CrtSetReportHook** consente a un'applicazione utilizzare il proprio reporting funzione nella libreria di debug del runtime C processo di segnalazione. Di conseguenza, ogni volta che viene chiamato [_CrtDbgReport](crtdbgreport-crtdbgreportw.md) per generare un report di debug, la funzione per la creazione di report viene chiamata prima. Questa funzionalità consente a un'applicazione eseguire operazioni quali il filtro report di debug, è possibile concentrarsi su tipi specifici di allocazioni o inviare un report alle destinazioni non sono disponibili tramite **CrtDbgReport**. Quando si [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **CrtSetReportHook** vengono rimosse durante la pre-elaborazione.

Per una versione più affidabile **CrtSetReportHook**, vedere [_CrtSetReportHook2](crtsetreporthook2-crtsetreporthookw2.md).

Il **CrtSetReportHook** funzione consente di installare il nuovo reporting specificata nella funzione definita dal client *reportHook* e restituisce l'hook definita dal client precedente. L'esempio seguente illustra come un hook di report definito dal client debba avere un prototipo:

```C
int YourReportHook( int reportType, char *message, int *returnValue );
```

in cui *reportType* è il tipo di report di debug (**CRT_WARN**, **CRT_ERROR**, oppure **CRT_ASSERT**), *messaggio* è il messaggio di utente di debug completa per essere contenuti nel report, e **returnValue** è il valore specificato da definita dal client reporting che deve essere restituito dalla funzione **_ CrtDbgReport**. Per una descrizione completa dei tipi di report disponibili, vedere la funzione [_CrtSetReportMode](crtsetreportmode.md).

Se la funzione di segnalazione definita dal client gestisce completamente il messaggio di debug in modo che sia necessario alcun report ulteriore, la funzione deve restituire **TRUE**. Quando la funzione restituisce **FALSE**, **CrtDbgReport** viene chiamato per generare il rapporto di debug tramite le impostazioni correnti per il tipo di report, la modalità e file. Inoltre, specificando il **CrtDbgReport** nel valore restituito **returnValue**, l'applicazione può anche controllare se si verifica un'interruzione di debug. Per una descrizione completa della modalità di configurazione e generare il rapporto di debug, vedere **CrtSetReportMode**, [crtsetreportfile](crtsetreportfile.md), e **CrtDbgReport**.

Per informazioni sull'uso di altre funzioni di runtime capaci di eseguire l'hook e sulla scrittura delle funzioni di hook definite dal client, vedere [Writing Your Own Debug Hook Functions](/visualstudio/debugger/debug-hook-function-writing) (Scrittura di funzioni hook di debug).

> [!NOTE]
> Se l'applicazione viene compilata con **/clr** e la funzione di segnalazione viene chiamata dopo che l'applicazione è stato terminato principale, CLR verrà generata un'eccezione se la funzione di segnalazione chiama le funzioni CRT.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtSetReportHook**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[_CrtGetReportHook](crtgetreporthook.md)<br/>
