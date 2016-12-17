---
title: "_setmbcp | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_setmbcp"
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
  - "api-ms-win-crt-locale-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_setmbcp"
  - "setmbcp"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_setmbcp (funzione)"
  - "tabelle codici multibyte"
  - "setmbcp (funzione)"
ms.assetid: cfde53b5-0b73-4684-81b1-a8d3aafc85de
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _setmbcp
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta una nuova tabella di codici multibyte.  
  
## Sintassi  
  
```  
int _setmbcp(  
   int codepage   
);  
```  
  
#### Parametri  
 `codepage`  
 Nuova impostazione della tabella di codici per le routine multibyte indipendenti dalle impostazioni locali.  
  
## Valore restituito  
 Restituisce 0 se la tabella dei codici è impostata in modo corretto.  Se un valore non valido della tabella codici viene fornito per `codepage`, restituisce \-1 e la tabella codici resta invariata.  Imposta `errno` a `EINVAL` se si verifica un errore di allocazione della memoria.  
  
## Note  
 La funzione `_setmbcp` specifica una nuova tabella codici multibyte.  Per impostazione predefinita, il sistema runtime imposta automaticamente la tabella codici multibyte alla tabella codici ANSI del sistema predefinito.  L'impostazione della tabella codici multibyte influisce su tutte le routine multibyte che non sono dipendenti dalle impostazioni locali.  Tuttavia, è possibile indicare a `_setmbcp` di utilizzare la tabella codici definita per le impostazioni locali correnti \(vedere l'elenco seguente delle costanti manifesto e i risultati dei comportamenti registrati\).  Per un elenco delle routine multibyte dipendenti dalla tabella codici delle impostazioni locali anziché dalla tabella codici multibyte, vedere [Interpretazione delle sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md).  
  
 La tabella codici multibyte influisce sull'elaborazione di caratteri multibyte dalle seguenti routine di libreria di runtime:  
  
||||  
|-|-|-|  
|[funzioni \_exec](../../c-runtime-library/exec-wexec-functions.md)|[\_mktemp](../../c-runtime-library/reference/mktemp-wmktemp.md)|[\_stat](../../c-runtime-library/reference/stat-functions.md)|  
|[\_fullpath](../../c-runtime-library/reference/fullpath-wfullpath.md)|[funzioni \_spawn](../../c-runtime-library/spawn-wspawn-functions.md)|[\_tempnam](../../c-runtime-library/reference/tempnam-wtempnam-tmpnam-wtmpnam.md)|  
|[\_makepath](../../c-runtime-library/reference/makepath-wmakepath.md)|[\_splitpath](../../c-runtime-library/reference/splitpath-wsplitpath.md)|[tmpnam](../../c-runtime-library/reference/tempnam-wtempnam-tmpnam-wtmpnam.md)|  
  
 Inoltre, tutte le routine di libreria di runtime che ricevono il carattere multibyte `argv` o argomenti del programma di `envp` e i parametri \(ad esempio i gruppi di `_spawn` e di `_exec` \) elaborano tali stringhe in base alla tabella codici multibyte.  Di conseguenza, queste routine sono interessate da una chiamata a `_setmbcp` che modifica la tabella codici multibyte.  
  
 L'argomento `codepage` può essere impostato su uno dei valori che seguono:  
  
-   `_MB_CP_ANSI` Utilizzare la tabella codici ANSI ottenuta dal sistema operativo all'avvio del programma.  
  
-   `_MB_CP_LOCALE` Utilizzare la tabella codici corrente delle impostazioni locali ottenuta da una chiamata precedente a [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  
  
-   `_MB_CP_OEM` Utilizzare la tabella codici OEM ottenuta dal sistema operativo all'avvio del programma.  
  
-   `_MB_CP_SBCS` Utilizzare la tabella codici a byte singolo.  Quando la tabella codici è impostata su `_MB_CP_SBCS`, una routine come [\_ismbblead](../../c-runtime-library/reference/ismbblead-ismbblead-l.md) restituisce sempre false.  
  
-   Qualsiasi altro valore valido della tabella codici, indipendentemente dal valore è di tipo ANSI, OEM, o un'altra tabella codici supportata dal sistema operativo \(eccetto UTF\-7 e la codifica UTF\-8, che non sono supportate\).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_setmbcp`|\<mbctype.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Vedere anche  
 [\_getmbcp](../../c-runtime-library/reference/getmbcp.md)   
 [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)