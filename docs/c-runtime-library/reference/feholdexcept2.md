---
title: "feholdexcept2 | Microsoft Docs"
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
  - "feholdexcept"
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
  - "feholdexcept"
  - "fenv/feholdexcept"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzione feholdexcept"
ms.assetid: 88e512ae-b5d8-452c-afe9-c824cd3ef1d8
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# feholdexcept
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Salva l'ambiente a virgola mobile corrente nell'oggetto specificato, Cancella i flag di stato a virgola mobile e, se possibile, inserisce l'ambiente a virgola mobile in modalità senza interruzioni.  
  
## Sintassi  
  
```  
int feholdexcept(  
   fenv_t *penv  
);  
  
```  
  
#### Parametri  
 `penv`  
 Puntatore a un `fenv_t` oggetto che contiene una copia dell'ambiente a virgola mobile.  
  
## Valore restituito  
 Restituisce zero se e solo se la funzione è in grado di attivare correttamente la gestione delle eccezioni a virgola mobile senza interruzioni.  
  
## Note  
 Il `feholdexcept` funzione viene utilizzata per archiviare lo stato dell'ambiente punto a virgola mobile corrente nel `fenv_t` oggetto a cui puntava `penv`, e impostare l'ambiente per non interrompere l'esecuzione in corrispondenza di eccezioni a virgola mobile. Questa è nota come modalità senza interruzioni.  Questa modalità continua fino a quando l'ambiente viene ripristinato utilizzando [fesetenv](../Topic/fesetenv2.md) o [feupdateenv](../../c-runtime-library/reference/feupdateenv.md).  
  
 È possibile utilizzare questa funzione all'inizio di una subroutine che è necessario nascondere uno o più eccezioni a virgola mobile dal chiamante. Per segnalare un'eccezione, è possibile eliminare semplicemente le eccezioni non desiderate utilizzando [feclearexcept,](../../c-runtime-library/reference/feclearexcept1.md) e quindi terminare la modalità di interruzione non con una chiamata a `feupdateenv`.  
  
 Per utilizzare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso utilizzando il `#pragma fenv_access(on)` direttiva prima della chiamata. Per altre informazioni, vedere [fenv\_access](../../preprocessor/fenv-access.md).  
  
## Requisiti  
  
|Funzione|Intestazione C|Intestazione C\+\+|  
|--------------|--------------------|------------------------|  
|`feholdexcept`|\<fenv.h\>|\<cfenv\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [feclearexcept](../../c-runtime-library/reference/feclearexcept1.md)   
 [fesetenv](../Topic/fesetenv2.md)   
 [feupdateenv](../../c-runtime-library/reference/feupdateenv.md)