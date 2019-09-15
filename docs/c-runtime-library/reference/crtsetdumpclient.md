---
title: _CrtSetDumpClient
ms.date: 11/04/2016
api_name:
- _CrtSetDumpClient
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
- _CrtSetDumpClient
- CrtSetDumpClient
helpviewer_keywords:
- _CrtSetDumpClient function
- CrtSetDumpClient function
ms.assetid: f3dd06d0-c331-4a12-b68d-25378d112033
ms.openlocfilehash: f739f86a8410c66135704d61944d122a38c196a5
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70938565"
---
# <a name="_crtsetdumpclient"></a>_CrtSetDumpClient

Installa una funzione definita dall'applicazione per eseguire il dump dei blocchi di memoria del tipo **_CLIENT_BLOCK** (solo versione di debug).

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

La funzione **_CrtSetDumpClient** consente all'applicazione di associare la propria funzione per eseguire il dump degli oggetti archiviati nei blocchi di memoria **_CLIENT_BLOCK** nel processo di dump della memoria di debug del runtime C. Di conseguenza, ogni volta che una funzione di dump del debug, ad esempio [_CrtMemDumpAllObjectsSince](crtmemdumpallobjectssince.md) o [_CrtDumpMemoryLeaks](crtdumpmemoryleaks.md) , esegue il dump di un blocco di memoria **_CLIENT_BLOCK** , viene chiamata anche la funzione di dump dell'applicazione. **_CrtSetDumpClient** fornisce un'applicazione con un metodo semplice per rilevare le perdite di memoria e convalidare o segnalare il contenuto dei dati archiviati nei blocchi **_CLIENT_BLOCK** . Quando _ [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **_CrtSetDumpClient** vengono rimosse durante la pre-elaborazione.

La funzione **_CrtSetDumpClient** installa la nuova funzione di dump definita dall'applicazione specificata in *dumpClient* e restituisce la funzione di dump definita in precedenza. Segue un esempio di funzione di dump di blocco client:

```C
void DumpClientFunction( void *userPortion, size_t blockSize );
```

L'argomento *userPortion* è un puntatore all'inizio della parte di dati utente del blocco di memoria e *blockSize* specifica le dimensioni in byte del blocco di memoria allocato. La funzione di dump del blocco client deve restituire **void**. Il puntatore alla funzione di dump del client passato a **_CrtSetDumpClient** è di tipo **_CRT_DUMP_CLIENT**, come definito in CRTDBG. h:

```C
typedef void (__cdecl *_CRT_DUMP_CLIENT)( void *, size_t );
```

Per altre informazioni sulle funzioni che operano sui blocchi di memoria di tipo **_CLIENT_BLOCK** , vedere [funzioni hook del blocco client](/visualstudio/debugger/client-block-hook-functions). La funzione [_CrtReportBlockType](crtreportblocktype.md) può essere usata per restituire informazioni sui tipi e i sottotipi di blocco.

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
