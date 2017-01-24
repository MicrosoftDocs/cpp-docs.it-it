---
title: "Richiamo di CL da parte del linker | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "cl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "compilatore cl.exe [C++], compilazione senza collegamento"
  - "compilatore cl.exe [C++], controllo del linker"
  - "compilazione di codice sorgente [C++], senza collegamento"
  - "chiamata al linker dal compilatore"
  - "LINK (strumento) [C++], chiamata dal compilatore CL"
ms.assetid: eae47ef7-09eb-40c9-b318-7c714cd452fc
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Richiamo di CL da parte del linker
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

CL richiama automaticamente il linker dopo la compilazione, a meno che non venga utilizzata l'opzione \/c.  CL passa al linker i nomi dei file obj creati durante la compilazione e i nomi di qualsiasi altro file specificato nella riga di comando.  Il linker utilizza le opzioni elencate nella variabile di ambiente LINK.  È possibile utilizzare l'opzione \/link per specificare le opzioni del linker nella riga di comando CL.  Con le opzioni che seguono l'opzione \/link viene eseguito l'override delle opzioni presenti nella variabile di ambiente LINK.  Le opzioni riportate nella tabella che segue consentono di disattivare il collegamento.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|\/c|Compilazione senza collegamento|  
|\/E, \/EP, \/P|Pre\-elaborazione senza compilazione o collegamento|  
|\/Zg|Generazione di prototipi di funzione|  
|\/Zs|Controllo della sintassi|  
  
 Per ulteriori informazioni sul collegamento, vedere [Opzioni del linker](../../build/reference/linker-options.md).  
  
## Esempio  
 Si supponga di compilare tre file di origine C: MAIN.c, MOD1.c e MOD2.c.  Ogni file include una chiamata a una funzione definita in un file differente:  
  
-   MAIN.c chiama la funzione `func1` in MOD1.c e la funzione `func2` in MOD2.c.  
  
-   MOD1.c chiama le funzioni della libreria standard `printf_s` e `scanf_s`.  
  
-   MOD2.c chiama le funzioni di grafica denominate `myline` e `mycircle`, che sono definite in una libreria denominata MYGRAPH.lib.  
  
 Per compilare questo programma, utilizzare la seguente riga di comando:  
  
```  
CL MAIN.c MOD1.C MOD2.C MYGRAPH.lib  
```  
  
 CL compila prima i file di origine C e crea i file oggetto MAIN.obj, MOD1.obj e MOD2.obj.  Il compilatore inserisce il nome della libreria standard in ogni file obj.  Per informazioni più dettagliate, vedere [Utilizzo della libreria di runtime](../../build/reference/md-mt-ld-use-run-time-library.md).  
  
 CL passa i nomi dei file obj, insieme al nome MYGRAPH.lib, al linker.  Il linker risolve i riferimenti esterni nel modo seguente:  
  
1.  In MAIN.obj, il riferimento a `func1` viene risolto utilizzando la definizione in MOD1.obj. Il riferimento a `func2` viene risolto utilizzando la definizione in MOD2.obj.  
  
2.  In MOD1.obj i riferimenti a `printf_s` e `scanf_s` vengono risolti utilizzando le definizioni nella libreria che il linker trova specificate all'interno di MOD1.obj.  
  
3.  In MOD2.obj i riferimenti a `myline` e `mycircle` vengono risolti utilizzando le definizioni in MYGRAPH.lib.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)