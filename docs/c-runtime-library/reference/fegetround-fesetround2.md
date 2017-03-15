---
title: "fegetround, fesetround2 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "fegetround"
  - "fesetround"
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
  - "fegetround"
  - "fesetround"
  - "fenv/fegetround"
  - "fenv/fesetround"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzione fegetround"
  - "funzione fesetround"
ms.assetid: 596af00b-be2f-4f57-b2f5-460485f9ff0b
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# fegetround, fesetround
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene o imposta la modalità di arrotondamento a virgola mobile corrente.  
  
## Sintassi  
  
```  
int fegetround(void);  
  
int fesetround(  
   int round_mode  
);   
```  
  
#### Parametri  
 `round_mode`  
 La modalità di arrotondamento da impostare, come una delle macro di arrotondamento a virgola mobile. Se il valore non è uguale a una delle macro di arrotondamento a virgola mobile, la modalità di arrotondamento non viene modificata.  
  
## Valore restituito  
 Se riesce, `fegetround` restituisce la modalità di arrotondamento come valori di una delle macro di arrotondamento a virgola mobile. Restituisce un valore negativo se non è possibile determinare la modalità di arrotondamento corrente.  
  
 Se riesce, `fesetround` restituisce 0. In caso contrario, viene restituito un valore diverso da zero.  
  
## Note  
 Le operazioni a virgola mobile possono usare una delle diverse modalità di arrotondamento. Queste modalità controllano la direzione verso cui vengono arrotondati i risultati delle operazioni a virgola mobile durante l'archiviazione. Questi sono i nomi e i comportamenti delle macro di arrotondamento a virgola mobile definite in \<fenv.h\>:  
  
|Macro|Descrizione|  
|-----------|-----------------|  
|FE\_DOWNWARD|Arrotonda verso l'infinito negativo.|  
|FE\_TONEAREST|Arrotonda verso il valore più vicino.|  
|FE\_TOWARDZERO|Arrotonda per difetto.|  
|FE\_UPWARD|Arrotonda verso l'infinito positivo.|  
  
 Il comportamento predefinito di FE\_TONEAREST prevede l'arrotondamento dei risultati a metà strada tra i valori rappresentabili verso il valore più vicino con un bit meno significativo \(0\) pari.  
  
 La modalità di arrotondamento corrente influisce su queste operazioni:  
  
-   Conversioni di stringhe.  
  
-   Risultati degli operatori aritmetici a virgola mobile al di fuori delle espressioni costanti.  
  
-   Funzioni di arrotondamento della libreria, ad esempio `rint` e `nearbyint`.  
  
-   Valori restituiti da funzioni matematiche della libreria standard.  
  
 La modalità di arrotondamento corrente non influisce su queste operazioni:  
  
-   Funzioni della libreria `trunc`, `ceil`, `floor` e `lround`.  
  
-   Conversioni e cast impliciti da virgola mobile a tipo integer, arrotondati sempre per difetto.  
  
-   Risultati degli operatori aritmetici a virgola mobile nelle espressioni costanti, arrotondati sempre al valore più vicino.  
  
 Per usare queste funzioni, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso usando la direttiva `#pragma fenv_access(on)` prima della chiamata. Per altre informazioni, vedere [fenv\_access](../../preprocessor/fenv-access.md).  
  
## Requisiti  
  
|Funzione|Intestazione C|Intestazione C\+\+|  
|--------------|--------------------|------------------------|  
|`fegetround`, `fesetround`|\<fenv.h\>|\<cfenv\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [nearbyint, nearbyintf, nearbyintl](../../c-runtime-library/reference/nearbyint-nearbyintf-nearbyintl1.md)   
 [rint, rintf, rintl](../../c-runtime-library/reference/rint-rintf-rintl.md)   
 [lrint, lrintf, lrintl, llrint, llrintf, llrintl](../../c-runtime-library/reference/lrint-lrintf-lrintl-llrint-llrintf-llrintl.md)