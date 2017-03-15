---
title: _endthread, _endthreadex | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _endthread
- _endthreadex
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
- _endthread
- endthreadex
- _endthreadex
- endthread
dev_langs:
- C++
helpviewer_keywords:
- _endthread function
- endthread function
- terminating threads
- endthreadex function
- _endthreadex function
- threading [C++], terminating threads
ms.assetid: 18a91f2f-659e-40b4-b266-ec12dcf2abf5
caps.latest.revision: 21
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: e1e2211a34a7cc146d1ce3b791927ffc206edaef
ms.lasthandoff: 02/24/2017

---
# <a name="endthread-endthreadex"></a>_endthread, _endthreadex
Termina un thread. `_endthread` termina un thread creato da `_beginthread` e  `_endthreadex` termina un thread creato da`_beginthreadex`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void _endthread( void );  
void _endthreadex(   
   unsigned retval   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `retval`  
 Codice di uscita del thread  
  
## <a name="remarks"></a>Note  
 È possibile chiamare `_endthread` o `_endthreadex` in modo esplicito per terminare un thread. Tuttavia, `_endthread` o `_endthreadex` viene chiamato automaticamente quando il thread viene restituito dalla routine passata come parametro a `_beginthread` o `_beginthreadex`. La terminazione di un thread con una chiamata a `endthread` o a `_endthreadex` consente di assicurare il ripristino corretto delle risorse allocate per il thread.  
  
> [!NOTE]
>  Per un file eseguibile collegato a Libcmt.lib, non chiamare l'API [ExitThread](http://msdn.microsoft.com/library/windows/desktop/ms682659.aspx) di Win32 per non impedire al sistema di runtime di recuperare le risorse allocate. `_endthread` e `_endthreadex` recuperano le risorse del thread allocate, quindi chiamano `ExitThread`.  
  
 `_endthread` chiude automaticamente l'handle del thread. Questo comportamento è diverso dall'API `ExitThread` Win32. Pertanto, quando si usano `_beginthread` e `_endthread`, non chiudere in modo esplicito l'handle del thread chiamando l'API [CloseHandle](http://msdn.microsoft.com/library/windows/desktop/ms724211.aspx) Win32.  
  
 Come l'API `ExitThread` Win32, `_endthreadex` non chiude l'handle del thread. Pertanto, quando si usano `_beginthreadex` e `_endthreadex`, è necessario chiudere l'handle del thread chiamando l'API `CloseHandle` Win32.  
  
> [!NOTE]
>  `_endthread` e `_endthreadex` determinano la mancata chiamata dei distruttori C++ in sospeso nel thread.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`_endthread`|\<process.h>|  
|`_endthreadex`|\<process.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="libraries"></a>Librerie  
 Solo versioni multithread delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per [_beginthread](../../c-runtime-library/reference/beginthread-beginthreadex.md).  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f) (Esempi di platform invoke).  
  
## <a name="see-also"></a>Vedere anche  
 [Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)  (Controllo processo e ambiente)  
 [_beginthread, _beginthreadex](../../c-runtime-library/reference/beginthread-beginthreadex.md)
