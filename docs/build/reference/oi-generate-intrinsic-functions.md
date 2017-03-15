---
title: "/Oi (Genera funzioni intrinseche) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.EnableIntrinsicFunctions"
  - "/oi"
  - "VC.Project.VCCLWCECompilerTool.EnableIntrinsicFunctions"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Oi (opzione del compilatore) [C++]"
  - "Genera funzioni intrinseche (opzione del compilatore) [C++]"
  - "funzioni intrinseche, generazione"
  - "Oi (opzione del compilatore) [C++]"
  - "-Oi (opzione del compilatore) [C++]"
ms.assetid: fa4a3bf6-0ed8-481b-91c0-add7636132b4
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# /Oi (Genera funzioni intrinseche)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Sostituisce alcune chiamate di funzione con formati intrinseci o speciali della funzione che consentono di velocizzare l'esecuzione dell'applicazione.  
  
## Sintassi  
  
```  
/Oi[-]  
```  
  
## Note  
 I programmi che utilizzano le funzioni intrinseche sono più veloci in quanto non hanno il sovraccarico delle chiamate di funzione ma è possibile che siano di dimensioni maggiori a causa del codice aggiuntivo creato.  
  
 Per ulteriori informazioni sulle funzioni con formati intrinseci, vedere [intrinsic](../../preprocessor/intrinsic.md).  
  
 **\/Oi** rappresenta soltanto una richiesta di sostituzione di alcune chiamate di funzione con formati intrinseci. Se si ottengono prestazioni migliori, il compilatore può chiamare la funzione anziché sostituire la chiamata di funzione con un formato intrinseco.  
  
 **Sezione specifico x86**  
  
 Le funzioni a virgola mobile intrinseche non eseguono alcun controllo speciale sui valori di input e funzionano in intervalli di input limitati e hanno una gestione delle eccezioni e di condizioni dei limiti diverse dalle routine delle librerie con lo stesso nome.  L'utilizzo di formati intrinseci di tipo true implica la perdita della gestione delle eccezioni IEEE e la perdita delle funzionalità `_matherr` e `errno`. Quest'ultima comporta la perdita della conformità ANSI.  Tuttavia i formati intrinseci possono velocizzare in modo considerevole i programmi che utilizzano molto la virgola mobile e, per molti programmi, i problemi di conformità hanno scarso valore pratico.  
  
 È possibile utilizzare l'opzione del compilatore [Za](../../build/reference/za-ze-disable-language-extensions.md) per eseguire l'override della generazione di opzioni a virgola mobile intrinseche di tipo true.  In tal caso le funzioni vengono generate come routine della libreria che passano gli argomenti direttamente al chip a virgola mobile anziché inserirli nello stack del programma.  
  
 **END x86 Specific**  
  
 È inoltre possibile utilizzare [intrinsic](../../preprocessor/intrinsic.md) per creare funzioni intrinseche o [funzione](../../preprocessor/function-c-cpp.md) per imporre una chiamata di funzione in modo esplicito.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Ottimizzazione**.  
  
4.  Modificare la proprietà **Attiva funzioni intrinseche**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableIntrinsicFunctions%2A>.  
  
## Vedere anche  
 [Opzioni \/O \(Ottimizza codice\)](../../build/reference/o-options-optimize-code.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Intrinseci del compilatore](../../intrinsics/compiler-intrinsics.md)