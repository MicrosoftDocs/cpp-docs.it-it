---
title: "_endthread, _endthreadex | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_endthread"
  - "_endthreadex"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-runtime-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_endthread"
  - "endthreadex"
  - "_endthreadex"
  - "endthread"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_endthread (funzione)"
  - "endthread (funzione)"
  - "chiusura di thread"
  - "endthreadex (funzione)"
  - "_endthreadex (funzione)"
  - "threading [C++], chiusura di thread"
ms.assetid: 18a91f2f-659e-40b4-b266-ec12dcf2abf5
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 21
---
# _endthread, _endthreadex
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Termina un thread. `_endthread` termina un thread creato da `_beginthread` e `_endthreadex` termina un thread creato da `_beginthreadex`.  
  
## Sintassi  
  
```  
void _endthread( void );  
void _endthreadex(   
   unsigned retval   
);  
```  
  
#### Parametri  
 `retval`  
 Codice di uscita del thread  
  
## Note  
 È possibile chiamare `_endthread` o `_endthreadex` in modo esplicito per terminare un thread. Tuttavia, `_endthread` o `_endthreadex` viene chiamato automaticamente quando il thread viene restituito dalla routine passata come parametro a `_beginthread` o `_beginthreadex`. La terminazione di un thread con una chiamata a `endthread` o a `_endthreadex` consente di assicurare il ripristino corretto delle risorse allocate per il thread.  
  
> [!NOTE]
>  Per un file eseguibile collegato a Libcmt.lib, non chiamare l'API [ExitThread](http://msdn.microsoft.com/library/windows/desktop/ms682659.aspx) di Win32 per non impedire al sistema di runtime di recuperare le risorse allocate.`_endthread` e `_endthreadex` recuperano le risorse del thread allocate, quindi chiamano `ExitThread`.  
  
 `_endthread` chiude automaticamente l'handle del thread. Questo comportamento è diverso dall'API `ExitThread` Win32. Pertanto, quando si usano `_beginthread` e `_endthread`, non chiudere in modo esplicito l'handle del thread chiamando l'API Win32 [CloseHandle](http://msdn.microsoft.com/library/windows/desktop/ms724211.aspx).  
  
 Come l'API `ExitThread` Win32, `_endthreadex` non chiude l'handle del thread. Pertanto, quando si usano `_beginthreadex` e `_endthreadex`, è necessario chiudere l'handle del thread chiamando l'API `CloseHandle` Win32.  
  
> [!NOTE]
>  `_endthread` e `_endthreadex` determinano la mancata chiamata dei distruttori C\+\+ in sospeso nel thread.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`_endthread`|\<process.h\>|  
|`_endthreadex`|\<process.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Librerie  
 Solo versioni multithread delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
 Vedere l'esempio per [\_beginthread](../../c-runtime-library/reference/beginthread-beginthreadex.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [\_beginthread, \_beginthreadex](../../c-runtime-library/reference/beginthread-beginthreadex.md)