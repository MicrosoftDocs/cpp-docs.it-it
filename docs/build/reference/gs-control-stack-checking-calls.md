---
title: "/Gs (Verifica le chiamate ai controlli di stack) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/GS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/GS (opzione del compilatore) [C++]"
  - "disabilitazione ricerche dello stack"
  - "GS (opzione del compilatore) [C++]"
  - "-GS (opzione del compilatore) [C++]"
  - "chiamate di verifica dello stack"
  - "ricerche dello stack"
  - "stack, ricerche dello stack"
ms.assetid: 40daed7c-f942-4085-b872-01e12b37729e
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 17
---
# /Gs (Verifica le chiamate ai controlli di stack)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Controlla le ricerche dello stack.  
  
## Sintassi  
  
```  
/Gs[size]  
```  
  
## Argomenti  
 `size`  
 Facoltativo. Numero di byte che le variabili locali possono occupare prima che venga avviato un probe dello stack.  Se l'opzione **\/Gs** viene specificata senza un argomento `size`, ha lo stesso effetto di **\/Gs0**.  
  
## Note  
 Un probe dello stack è una sequenza di codice inserito dal compilatore in ogni chiamata di funzione.  Dopo l'avvio, un probe dello stack verifica in modo non invasivo nella memoria la quantità di spazio che sarà necessaria per l'archiviazione delle variabili locali della funzione.  
  
 Se per una funzione sono necessari più di `size` byte di spazio dello stack per le variabili locali, viene avviato il relativo probe dello stack.  Per impostazione predefinita, il compilatore genera del codice che avvia un probe dello stack quando una funzione richiede più di una pagina di spazio dello stack.  Ciò equivale a un'opzione del compilatore **\/Gs4096** per piattaforme x86, [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] e ARM.  Questo valore consente a un'applicazione e al gestore della memoria di Windows di aumentare la quantità di memoria allocata per lo stack del programma dinamicamente e in fase di esecuzione.  
  
> [!NOTE]
>  Il valore predefinito di **\/Gs4096** consente allo stack di programma di applicazioni per Windows di aumentare in modo appropriato in fase di esecuzione.  Non modificare l'impostazione predefinita se non si conoscono con esattezza i motivi dell'eventuale modifica.  
  
 Alcuni programmi, quali i driver di dispositivo virtuali, non necessitano di questo meccanismo di aumento delle dimensioni dello stack.  In questi casi, i probe dello stack non sono necessari. È possibile interrompere la generazione dei probe dello stack da parte del compilatore impostando `size` su un valore maggiore di quanto qualsiasi funzione richiederà per l'archiviazione delle variabili locali.  Non è consentito alcuno spazio tra **\/Gs** e `size`.  
  
 **\/Gs0** attiva i probe dello stack per ogni chiamata di funzione che richiede archiviazione per variabili locali.  Ciò può influire in modo negativo sulle prestazioni.  
  
 È possibile attivare o disattivare i probe dello stack mediante [check\_stack](../../preprocessor/check-stack.md).  L'opzione **\/Gs** e il pragma `check_stack` non hanno effetto sulle routine della libreria C standard, ma solo sulle funzioni compilate.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Selezionare la cartella **C\/C\+\+**.  
  
3.  Selezionare la pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)