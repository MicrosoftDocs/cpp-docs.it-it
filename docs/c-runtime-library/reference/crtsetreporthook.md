---
title: _CrtSetReportHook
ms.date: 11/04/2016
api_name:
- _CrtSetReportHook
api_location:
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _CrtSetReportHook
- CrtSetReportHook
helpviewer_keywords:
- CrtSetReportHook function
- _CrtSetReportHook function
ms.assetid: 1ae7c64f-8c84-4797-9574-b59f00f7a509
ms.openlocfilehash: 77c1e499c66a76027e872783e256754ef72e465d
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70938519"
---
# <a name="_crtsetreporthook"></a>_CrtSetReportHook

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

**_CrtSetReportHook** consente a un'applicazione di usare la propria funzione di Reporting nel processo di creazione di report della libreria di debug del runtime C. Di conseguenza, ogni volta che viene chiamato [_CrtDbgReport](crtdbgreport-crtdbgreportw.md) per generare un report di debug, la funzione per la creazione di report viene chiamata prima. Questa funzionalità consente a un'applicazione di eseguire operazioni quali filtrare i report di debug, in modo che sia possibile concentrarsi su tipi specifici di allocazione o inviare un report a destinazioni non disponibili tramite **_CrtDbgReport**. Quando _ [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **_CrtSetReportHook** vengono rimosse durante la pre-elaborazione.

Per una versione più affidabile di **_CrtSetReportHook**, vedere [_CrtSetReportHook2](crtsetreporthook2-crtsetreporthookw2.md).

La funzione **_CrtSetReportHook** installa la nuova funzione per la creazione di report definita dal client specificata in *reportHook* e restituisce il precedente Hook definito dal client. L'esempio seguente illustra come un hook di report definito dal client debba avere un prototipo:

```C
int YourReportHook( int reportType, char *message, int *returnValue );
```

dove *reportType* è il tipo di report di debug ( **_CRT_WARN**, **_CRT_ERROR**o **_CRT_ASSERT**), *Message* è il messaggio utente di debug completamente assemblato da contenere nel report e **returnValue** è il valore specificato dalla funzione di creazione di report definita dal client che deve essere restituita da **_CrtDbgReport**. Per una descrizione completa dei tipi di report disponibili, vedere la funzione [_CrtSetReportMode](crtsetreportmode.md).

Se la funzione per la creazione di report definita dal client gestisce completamente il messaggio di debug in modo che non siano necessarie altre operazioni di creazione di report, la funzione deve restituire **true**. Quando la funzione restituisce **false**, viene chiamato **_CrtDbgReport** per generare il report di debug utilizzando le impostazioni correnti per il tipo di report, la modalità e il file. Inoltre, specificando il valore restituito **_CrtDbgReport** in **returnValue**, l'applicazione può anche controllare se si verifica un'operazione di debug. Per una descrizione completa della modalità di configurazione e generazione del report di debug, vedere **_CrtSetReportMode**, [_CrtSetReportFile](crtsetreportfile.md)e **_CrtDbgReport**.

Per informazioni sull'uso di altre funzioni di runtime capaci di eseguire l'hook e sulla scrittura delle funzioni di hook definite dal client, vedere [Writing Your Own Debug Hook Functions](/visualstudio/debugger/debug-hook-function-writing) (Scrittura di funzioni hook di debug).

> [!NOTE]
> Se l'applicazione viene compilata con **/CLR** e la funzione di creazione report viene chiamata dopo che l'applicazione è stata chiusa, il CLR genererà un'eccezione se la funzione di creazione report chiama qualsiasi funzione CRT.

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
