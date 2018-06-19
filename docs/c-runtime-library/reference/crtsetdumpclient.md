---
title: _CrtSetDumpClient | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- _CrtSetDumpClient function
- CrtSetDumpClient function
ms.assetid: f3dd06d0-c331-4a12-b68d-25378d112033
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8d5fecc90b4b7259f1440a0a0d86277c769c4e16
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32397223"
---
# <a name="crtsetdumpclient"></a>_CrtSetDumpClient

Installa una funzione definita dall'applicazione per eseguire il dump **CLIENT_BLOCK** digitare blocchi di memoria (solo versione debug).

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

Il **CrtSetDumpClient** funzione consente all'applicazione di associare la relativa funzione di dump oggetti archiviati in **CLIENT_BLOCK** blocchi di memoria in fase di esecuzione C di eseguire il debug processo del dump di memoria. Di conseguenza, ogni volta che un debug funzione del dump, ad esempio [CrtMemDumpAllObjectsSince](crtmemdumpallobjectssince.md) oppure [CrtDumpMemoryLeaks](crtdumpmemoryleaks.md) dump di un **CLIENT_BLOCK** blocco di memoria, l'applicazione viene chiamata anche la funzione di dump. **CrtSetDumpClient** viene fornita un'applicazione con un metodo semplice per il rilevamento di perdite di memoria e la convalida o il contenuto dei dati memorizzati in reporting **CLIENT_BLOCK** blocchi. Quando si [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **CrtSetDumpClient** vengono rimosse durante la pre-elaborazione.

Il **CrtSetDumpClient** funzione consente di installare la nuova funzione di dump definita dall'applicazione specificata *dumpClient* e restituisce la funzione di dump definita in precedenza. Segue un esempio di funzione di dump di blocco client:

```C
void DumpClientFunction( void *userPortion, size_t blockSize );
```

Il *userPortion* l'argomento è un puntatore all'inizio della parte di dati utente del blocco di memoria e *blockSize* specifica le dimensioni della memoria allocata blocco in byte. La funzione di dump di blocco client deve restituire **void**. Il puntatore alla funzione di dump client passata al **CrtSetDumpClient** è di tipo **CRT_DUMP_CLIENT**, come definito in CRTDBG. h:

```C
typedef void (__cdecl *_CRT_DUMP_CLIENT)( void *, size_t );
```

Per ulteriori informazioni sulle funzioni che operano sui **CLIENT_BLOCK** blocchi di memoria del tipo, vedere [funzioni Hook di blocchi Client](/visualstudio/debugger/client-block-hook-functions). La funzione [_CrtReportBlockType](crtreportblocktype.md) può essere usata per restituire informazioni sui tipi e i sottotipi di blocco.

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
