---
title: CL richiama il Linker | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: cl
dev_langs: C++
helpviewer_keywords:
- compiling source code [C++], without linking
- invoking linker from the compiler
- LINK tool [C++], invoking from CL compiler
- cl.exe compiler [C++], compiling without linking
- cl.exe compiler [C++], controlling linker
ms.assetid: eae47ef7-09eb-40c9-b318-7c714cd452fc
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 32a3bdd1e227b894ca5a32ddfaa8c46a478a19f7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cl-invokes-the-linker"></a>CL richiama il linker
CL richiama automaticamente il linker dopo la compilazione a meno che non viene utilizzata l'opzione/c. CL passa al linker i nomi dei file con estensione obj creati durante la compilazione e i nomi di tutti i file specificati nella riga di comando. Il linker utilizza le opzioni elencate nella variabile di ambiente LINK. È possibile utilizzare l'opzione /link per specificare le opzioni del linker nella riga di comando di CL. Opzioni che seguono l'opzione /link prevalgono su quelle nella variabile di ambiente LINK. Le opzioni nella tabella seguente disattivare il collegamento.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|/c|La compilazione senza collegamento|  
|/ /P, /EP E,|Pre-elaborazione senza la compilazione o il collegamento|  
|/Zg|Genera i prototipi di funzione|  
|/Zs|Controllare la sintassi|  
  
 Per ulteriori informazioni sul collegamento, vedere [opzioni del Linker](../../build/reference/linker-options.md).  
  
## <a name="example"></a>Esempio  
 Si supponga che si compila il file di origine C tre: Main. c, MOD1 e MOD2. Ogni file include una chiamata a una funzione definita in un file diverso:  
  
-   Main. c chiama la funzione `func1` MOD1 e la funzione `func2` in MOD2.  
  
-   MOD1. c chiama le funzioni della libreria standard `printf_s` e `scanf_s`.  
  
-   MOD2 chiama le funzioni di grafica denominate `myline` e `mycircle`, che sono definite in una libreria denominata MYGRAPH.  
  
 Per compilare il programma, la compilazione con la riga di comando seguente:  
  
```  
CL MAIN.c MOD1.C MOD2.C MYGRAPH.lib  
```  
  
 Innanzitutto, CL compila i file di origine C e crea i file oggetto Main. obj, MOD1 e MOD2. Il compilatore inserisce il nome della libreria standard in ogni file con estensione obj. Per ulteriori informazioni, vedere [utilizzo della libreria Run-Time](../../build/reference/md-mt-ld-use-run-time-library.md).  
  
 CL i nomi dei file con estensione obj, insieme al nome MYGRAPH, vengono passati al linker. Il linker risolve i riferimenti esterni nel modo seguente:  
  
1.  In Main. obj, il riferimento a `func1` viene risolto utilizzando la definizione in MOD1; il riferimento a `func2` viene risolto utilizzando la definizione in MOD2.  
  
2.  In MOD1, i riferimenti a `printf_s` e `scanf_s` vengono risolti utilizzando le definizioni nella libreria che il linker trova denominata all'interno di MOD1.  
  
3.  In MOD2, i riferimenti a `myline` e `mycircle` vengono risolti utilizzando le definizioni in MYGRAPH.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)