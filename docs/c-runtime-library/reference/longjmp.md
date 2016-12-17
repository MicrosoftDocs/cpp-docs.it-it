---
title: "longjmp | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "longjmp"
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
apitype: "DLLExport"
f1_keywords: 
  - "longjmp"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "longjmp (funzione)"
  - "ripristino dell'ambiente dello stack e delle impostazioni locali di esecuzione"
ms.assetid: 0e13670a-5130-45c1-ad69-6862505b7a2f
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# longjmp
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ripristinare l'ambiente dello stack e le impostazioni locali di esecuzione.  
  
## Sintassi  
  
```  
  
      void longjmp(  
   jmp_buf env,  
   int value   
);  
```  
  
#### Parametri  
 `env`  
 Variabile in cui viene archiviato l'ambiente.  
  
 *corrispondente*  
 Valore da restituire alla chiamata `setjmp`.  
  
## Note  
 La funzione `longjmp` ripristina l'ambiente dello stack e le impostazioni locali di esecuzione precedentemente salvate in `env` da `setjmp`.  `setjmp` e `longjmp` forniscono un modo per eseguire un `goto` non locale; in genere sono utilizzati per passare il controllo di esecuzione alla gestione degli errori o del codice di recupero in una routine precedentemente chiamata senza utilizzare le normali convenzioni di chiamata e ritorno.  
  
 Una chiamata a `setjmp` fa in modo che l'ambiente corrente dello stack venga salvato in `env`.  Una chiamata successiva a `longjmp` ripristina l'ambiente salvato e ritorna il controllo al punto immediatamente successivo alla corrispondente chiamata `setjmp`.  L'esecuzione riprende come se *value* sia stato restituito solo dalla chiamata `setjmp`.  I valori di tutte le variabili \(eccetto le variabili del registro\), che sono accessibili al controllo di ricevimento di routine, contengono i valori che avevano quando `longjmp` è stato chiamato.  I valori delle variabili del registro sono imprevedibili.  Il valore restituito da `setjmp` deve essere diverso da zero.  Se *value* viene passato come 0, il valore 1 viene sostituito nel valore di ritorno attuale.  
  
 Chiamare `longjmp` prima che la funzione chiamata `setjmp` ritorni; in caso contrario i risultati sono imprevedibili.  
  
 Osservare le restrizioni seguenti quando si utilizza `longjmp`:  
  
-   Non dare per certo che i valori delle variabili del registro rimarranno gli stessi.  I valori delle variabili del registro nella routine chiamante `setjmp` non possono essere ripristinati ai valori appropriati dopo l'esecuzione di `longjmp`.  
  
-   Non utilizzare `longjmp` per trasferire il controllo da una routine di gestione degli interrupt a meno che l'interrupt non sia causato da un'eccezione a virgola mobile.  In questo caso, un programma può restituire da un gestore di interrupt attraverso `longjmp` se innanzitutto reinizializza il package math a virgola mobile chiamando `_fpreset`.  
  
     **Nota** Fare attenzione quando si utilizzano `setjmp` e `longjmp` nei programmi C\+\+.  Poiché queste funzioni non supportano la semantica degli oggetti C\+\+, è consigliabile utilizzare il meccanismo di gestione delle eccezioni C\+\+.  
  
 Per ulteriori informazioni, vedere [Utilizzo di setjmp e longjmp](../../cpp/using-setjmp-longjmp.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`longjmp`|\<setjmp.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
 Vedere un esempio per [\_fpreset](../../c-runtime-library/reference/fpreset.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [setjmp](../../c-runtime-library/reference/setjmp.md)