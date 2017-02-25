---
title: "_set_SSE2_enable | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_set_SSE2_enable"
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
  - "api-ms-win-crt-math-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_set_SSE2_enable"
  - "set_SSE2_enable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_set_SSE2_enable (funzione)"
  - "istruzioni di Streaming SIMD Extensions 2"
  - "set_SSE2_enable (funzione)"
ms.assetid: 55db895d-fc1e-475a-9110-b781a9bb51c5
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# _set_SSE2_enable
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Abilita o disabilita l'utilizzo di istruzioni [Streaming SIMD Extensions 2](http://msdn.microsoft.com/it-it/f98440eb-73a9-4f96-b203-ac41bb6701ea) \(SSE2\) nelle routine matematiche CRT. \(Questa funzione non è disponibile nelle architetture x64 perché SSE2 è abilitato per impostazione predefinita\).  
  
## Sintassi  
  
```  
int _set_SSE2_enable(  
   int flag  
);  
```  
  
#### Parametri  
 `flag`  
 1 per abilitare l'implementazione SSE2; 0 per disabilitare l'implementazione SSE2.  Per impostazione predefinita, l'implementazione SSE2 è abilitata su processori che lo supportano.  
  
## Valore restituito  
 Diverso da zero se l'implementazione SSE2 è abilitata; zero se l'implementazione SSE2 è disabilitata.  
  
## Note  
 Le funzioni seguenti dispongono dell'implementazione SSE2 che può essere abilitata tramite `_set_SSE2_enable`:  
  
-   [atan](../../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)  
  
-   [ceil](../../c-runtime-library/reference/ceil-ceilf-ceill.md)  
  
-   [exp](../../c-runtime-library/reference/exp-expf.md)  
  
-   [floor](../../c-runtime-library/reference/floor-floorf-floorl.md)  
  
-   [log](../../c-runtime-library/reference/log-logf-log10-log10f.md)  
  
-   [log10](../../c-runtime-library/reference/log-logf-log10-log10f.md)  
  
-   [modf](../../c-runtime-library/reference/modf-modff-modfl.md)  
  
-   [pow](../../c-runtime-library/reference/pow-powf-powl.md)  
  
 Le implementazioni SSE2 di queste funzioni potrebbero fornire risposte leggermente diverse dalle implementazioni predefinite, poiché i valori intermedi SSE2 sono quantità a virgola mobile a 64 bit, ma i valori intermedi di un'implementazione predefinita sono quantità a virgola mobile ad 80 bit.  
  
> [!NOTE]
>  Se si utilizza l'opzione del compilatore [\/Oi \(Genera funzioni intrinseche\)](../../build/reference/oi-generate-intrinsic-functions.md) per compilare il progetto, può sembrare che `_set_SSE2_enable` non abbia effetto.  L'opzione del compilatore `/Oi` fornisce al compilatore l'autorità per utilizzare le funzioni intrinseche per sostituire le chiamate CRT; questo comportamento esegue sovrascrive l'effetto di `_set_SSE2_enable`.  Se si desidera garantire che `/Oi` non esegua l'override di `_set_SSE2_enable`, utilizzare `/Oi-` per compilare il progetto.  Ciò potrebbe essere consigliabile quando si utilizzano altre opzioni del compilatore che implicano `/Oi`.  
  
 L'implementazione SSE2 viene utilizzata solo se tutte le eccezioni sono mascherate.  Utilizzare [\_control87, \_controlfp](../../c-runtime-library/reference/control87-controlfp-control87-2.md) per mascherare le eccezioni.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_set_SSE2_enable`|\<math.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_set_SSE2_enable.c  
// processor: x86  
#include <math.h>  
#include <stdio.h>  
  
int main()  
{  
   int i = _set_SSE2_enable(1);  
  
   if (i)  
      printf("SSE2 enabled.\n");  
   else  
      printf("SSE2 not enabled; processor does not support SSE2.\n");  
}  
```  
  
 **Output**  
  
 `SSE2 enabled.`  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Funzionalità libreria CRT](../../c-runtime-library/crt-library-features.md)