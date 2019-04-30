---
title: _CrtSetDumpClient
ms.date: 11/04/2016
apiname:
- _CrtSetDumpClient
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
- _CrtSetDumpClient
- CrtSetDumpClient
helpviewer_keywords:
- _CrtSetDumpClient function
- CrtSetDumpClient function
ms.assetid: f3dd06d0-c331-4a12-b68d-25378d112033
ms.openlocfilehash: 09f319f6298dbec6b229b2923bd86fc9b50314de
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64342988"
---
# <a name="crtsetdumpclient"></a>_CrtSetDumpClient

Installa una funzione definita dall'applicazione per eseguire il dump **CLIENT_BLOCK** digitare blocchi di memoria (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
_CRT_DUMP_CLIENT _CrtSetDumpClient( _CRT_DUMP_CLIENT dumpClient );
```

### <a name="parameters"></a>Parametri

*dumpClient*<br/>
Nuova funzione del dump di memoria definita dal client da associare al processo del dump di memoria di debug del runtime C.

## <a name="return-value"></a>Valore restituito

Restituisce la funzione del dump di blocco definita precedentemente dal client.

## <a name="remarks"></a>Note

Il **CrtSetDumpClient** funzione consente all'applicazione di associare la relativa funzione agli oggetti di dump archiviati in **CLIENT_BLOCK** processo del dump di memoria di debug di blocchi di memoria in run-time di C. Di conseguenza, ogni volta che un debug funzione di dump, ad esempio [CrtMemDumpAllObjectsSince](crtmemdumpallobjectssince.md) oppure [CrtDumpMemoryLeaks](crtdumpmemoryleaks.md) esegue il dump una **CLIENT_BLOCK** blocco di memoria, l'applicazione viene chiamata anche la funzione di dump. **CrtSetDumpClient** fornisce un'applicazione con un metodo semplice per il rilevamento di perdite di memoria e la convalida o il contenuto dei dati archiviati in reporting **CLIENT_BLOCK** blocchi. Quando [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **CrtSetDumpClient** vengono rimosse durante la pre-elaborazione.

Il **CrtSetDumpClient** funzione consente di installare la nuova funzione di dump definita dall'applicazione specificata *dumpClient* e restituisce la funzione di dump precedentemente definita. Segue un esempio di funzione di dump di blocco client:

```C
void DumpClientFunction( void *userPortion, size_t blockSize );
```

Il *userPortion* l'argomento è un puntatore all'inizio della parte di dati utente del blocco di memoria e *blockSize* specifica le dimensioni della memoria allocata bloccare in byte. La funzione di dump di blocco client deve restituire **void**. Il puntatore alla funzione di dump client passata al **CrtSetDumpClient** JE typu **CRT_DUMP_CLIENT**, come definito in CRTDBG. h:

```C
typedef void (__cdecl *_CRT_DUMP_CLIENT)( void *, size_t );
```

Per altre informazioni sulle funzioni che operano sui **CLIENT_BLOCK** blocchi di memoria del tipo, vedere [funzioni Hook del blocco Client](/visualstudio/debugger/client-block-hook-functions). La funzione [_CrtReportBlockType](crtreportblocktype.md) può essere usata per restituire informazioni sui tipi e i sottotipi di blocco.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtSetDumpClient**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[_CrtReportBlockType](crtreportblocktype.md)<br/>
[_CrtGetDumpClient](crtgetdumpclient.md)<br/>
