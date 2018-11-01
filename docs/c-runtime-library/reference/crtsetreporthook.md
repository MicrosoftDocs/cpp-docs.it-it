---
title: _CrtSetReportHook
ms.date: 11/04/2016
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
helpviewer_keywords:
- CrtSetReportHook function
- _CrtSetReportHook function
ms.assetid: 1ae7c64f-8c84-4797-9574-b59f00f7a509
ms.openlocfilehash: 7dcb916ea920751618ffa6a4afbcde8df5e35cba
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50478338"
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

**CrtSetReportHook** consente a un'applicazione di usare la propria reporting funzione nella libreria di debug del runtime di C la creazione del report. Di conseguenza, ogni volta che viene chiamato [_CrtDbgReport](crtdbgreport-crtdbgreportw.md) per generare un report di debug, la funzione per la creazione di report viene chiamata prima. Questa funzionalità consente a un'applicazione eseguire operazioni come il filtraggio di rapporti di debug in modo che possa concentrarsi su tipi specifici di allocazioni o inviare un report a destinazioni non disponibili tramite **CrtDbgReport**. Quando [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **CrtSetReportHook** vengono rimosse durante la pre-elaborazione.

Per una versione più affidabile della **CrtSetReportHook**, vedere [_CrtSetReportHook2](crtsetreporthook2-crtsetreporthookw2.md).

Il **CrtSetReportHook** funzione installa la nuova creazione di report specificato nella funzione definita dal client *reportHook* e restituisce l'hook precedente definito dal client. L'esempio seguente illustra come un hook di report definito dal client debba avere un prototipo:

```C
int YourReportHook( int reportType, char *message, int *returnValue );
```

in cui *reportType* è il tipo di report di debug (**CRT_WARN**, **CRT_ERROR**, oppure **CRT_ASSERT**), *messaggio* è il messaggio utente di debug completamente assemblato per essere contenuti nel report, e **returnValue** è il valore specificato da definita dal client reporting che deve essere restituito dalla funzione **_ CrtDbgReport**. Per una descrizione completa dei tipi di report disponibili, vedere la funzione [_CrtSetReportMode](crtsetreportmode.md).

Se la funzione di creazione di report definita dal client gestisce completamente il messaggio di debug in modo che sia necessario alcun report ulteriore, la funzione deve restituire **TRUE**. Quando la funzione restituisce **FALSE**, **CrtDbgReport** viene chiamato per generare il report di debug usando le impostazioni correnti per il tipo di report, modalità e file. Inoltre, specificando il **CrtDbgReport** nel valore restituito **returnValue**, l'applicazione può anche controllare se si verifica un'interruzione di debug. Per una descrizione completa di come viene configurato e generato il report di debug, vedere **CrtSetReportMode**, [crtsetreportfile](crtsetreportfile.md), e **CrtDbgReport**.

Per informazioni sull'uso di altre funzioni di runtime capaci di eseguire l'hook e sulla scrittura delle funzioni di hook definite dal client, vedere [Writing Your Own Debug Hook Functions](/visualstudio/debugger/debug-hook-function-writing) (Scrittura di funzioni hook di debug).

> [!NOTE]
> Se l'applicazione viene compilata con **/clr** e creazione di report viene chiamata la funzione dopo che è stato chiuso l'applicazione principale, CLR genererà un'eccezione se la funzione di creazione di report chiama le funzioni CRT.

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
