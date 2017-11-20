---
title: _CrtCheckMemory | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: _CrtCheckMemory
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
- CrtCheckMemory
- _CrtCheckMemory
dev_langs: C++
helpviewer_keywords:
- _CrtCheckMemory function
- CrtCheckMemory function
ms.assetid: 457cc72e-60fd-4177-ab5c-6ae26a420765
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 0094c43b7bbe60da1a89d201d40577422b7a889a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="crtcheckmemory"></a>_CrtCheckMemory
Conferma l'integrità dei blocchi di memoria allocati nell'heap di debug (solo per versione di debug).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
int _CrtCheckMemory( void );  
```  
  
## <a name="return-value"></a>Valore restituito  
 Se l'operazione riesce, `_CrtCheckMemory` restituisce TRUE; in caso contrario, la funzione restituisce FALSE.  
  
## <a name="remarks"></a>Note  
 La funzione `_CrtCheckMemory` convalida la memoria allocata dal gestore dell'heap di debug verificando l'heap di base sottostante e controllando ciascun blocco di memoria. Se si rileva un'incoerenza di memoria o un errore nell'heap di base sottostante, nelle informazioni sull'intestazione di debug o nei buffer di sovrascrittura, `_CrtCheckMemory` genera un report di debug con informazioni che descrivono la condizione di errore. Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtCheckMemory` vengono rimosse durante la pre-elaborazione.  
  
 Il comportamento di `_CrtCheckMemory` può essere controllato definendo i campi di bit del flag [_crtDbgFlag](../../c-runtime-library/crtdbgflag.md) tramite la funzione [_CrtSetDbgFlag](../../c-runtime-library/reference/crtsetdbgflag.md). L'attivazione del campo di bit **_CRTDBG_CHECK_ALWAYS_DF** ha come risultato una chiamata a `_CrtCheckMemory` ogni volta che viene richiesta un'operazione di allocazione della memoria. Sebbene questo metodo rallenti l'esecuzione, è utile per individuare gli errori rapidamente. La disattivazione del campo di bit **_CRTDBG_ALLOC_MEM_DF** fa in modo che `_CrtCheckMemory` non verifichi l'heap e restituisca **TRUE** immediatamente.  
  
 Dato che la funzione restituisce **TRUE** o **FALSE**, può essere passata a una delle macro [_ASSERT](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) per creare un semplice meccanismo di gestione degli errori di debug. L'esempio seguente genera un errore di asserzione se il danneggiamento viene rilevato nell'heap:  
  
```  
_ASSERTE( _CrtCheckMemory( ) );  
```  
  
 Per informazioni su come usare `_CrtCheckMemory` con altre funzioni di debug, vedere [Heap State Reporting Functions](/visualstudio/debugger/crt-debug-heap-details) (Funzioni per la creazione di report sullo stato dell'heap). Per una panoramica sulla gestione della memoria e l'heap per il debug, vedere [Informazioni dettagliate sull'heap di debug CRT](/visualstudio/debugger/crt-debug-heap-details).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_CrtCheckMemory`|\<crtdbg.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
 Per un esempio su come usare `_CrtCheckMemory`, vedere [crt_dbg1](http://msdn.microsoft.com/en-us/17b4b20c-e849-48f5-8eb5-dca6509cbaf9).  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [_crtDbgFlag](../../c-runtime-library/crtdbgflag.md)   
 [_CrtSetDbgFlag](../../c-runtime-library/reference/crtsetdbgflag.md)