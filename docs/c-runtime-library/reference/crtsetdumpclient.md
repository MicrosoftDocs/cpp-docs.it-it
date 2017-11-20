---
title: _CrtSetDumpClient | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: _CrtSetDumpClient
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
dev_langs: C++
helpviewer_keywords:
- _CrtSetDumpClient function
- CrtSetDumpClient function
ms.assetid: f3dd06d0-c331-4a12-b68d-25378d112033
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 689d81d491b58755ca865c92cc79043d105c2be2
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="crtsetdumpclient"></a>_CrtSetDumpClient
Installa una funzione definita dall'applicazione per eseguire il dump dei blocchi di memoria del tipo `_CLIENT_BLOCK` (solo versione di debug).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      _CRT_DUMP_CLIENT _CrtSetDumpClient(   
   _CRT_DUMP_CLIENT dumpClient   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `dumpClient`  
 Nuova funzione del dump di memoria definita dal client da associare al processo del dump di memoria di debug del runtime C.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce la funzione del dump di blocco definita precedentemente dal client.  
  
## <a name="remarks"></a>Note  
 La funzione `_CrtSetDumpClient` consente all'applicazione di associare la relativa funzione per eseguire il dump degli oggetti memorizzati in blocchi di memoria `_CLIENT_BLOCK` nel processo del dump di memoria di debug del runtime C. Pertanto, ogni volta che una funzione di dump di debug, ad esempio [_CrtMemDumpAllObjectsSince](../../c-runtime-library/reference/crtmemdumpallobjectssince.md) o [_CrtDumpMemoryLeaks](../../c-runtime-library/reference/crtdumpmemoryleaks.md), esegue il dump di un blocco di memoria `_CLIENT_BLOCK`, viene chiamata anche la funzione di dump dell'applicazione. `_CrtSetDumpClient` fornisce un'applicazione con un metodo semplice di rilevamento delle perdite di memoria e di convalida o creazione di report del contenuto dei dati memorizzati in blocchi `_CLIENT_BLOCK`. Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtSetDumpClient` vengono rimosse durante la pre-elaborazione.  
  
 La funzione `_CrtSetDumpClient` installa la nuova funzione di dump definita dall'applicazione specificata in `dumpClient` e restituisce la funzione di dump precedentemente definita. Segue un esempio di funzione di dump di blocco client:  
  
```  
void DumpClientFunction( void *userPortion, size_t blockSize );  
```  
  
 L'argomento `userPortion` è un puntatore all'inizio della parte di dati utente del blocco di memoria e `blockSize` specifica le dimensioni del blocco di memoria allocato in byte. La funzione di dump di blocco client deve restituire `void`. Il puntatore alla funzione di dump client passata a `_CrtSetDumpClient` è di tipo `_CRT_DUMP_CLIENT`, come definito in Crtdbg.h:  
  
```  
typedef void (__cdecl *_CRT_DUMP_CLIENT)( void *, size_t );  
```  
  
 Per altre informazioni sulle funzioni che operano sui blocchi di memoria di tipo `_CLIENT_BLOCK`, vedere [Funzioni hook del blocco client](/visualstudio/debugger/client-block-hook-functions). La funzione [_CrtReportBlockType](../../c-runtime-library/reference/crtreportblocktype.md) può essere usata per restituire informazioni sui tipi e i sottotipi di blocco.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_CrtSetDumpClient`|\<crtdbg.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [_CrtReportBlockType](../../c-runtime-library/reference/crtreportblocktype.md)   
 [_CrtGetDumpClient](../../c-runtime-library/reference/crtgetdumpclient.md)