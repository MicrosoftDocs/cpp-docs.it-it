---
title: "/QIfist (Elimina _ftol) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/qifist"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "QIfist (opzione del compilatore) [C++]"
  - "-QIfist (opzione del compilatore) [C++]"
  - "/QIfist (opzione del compilatore) [C++]"
ms.assetid: 1afd32a5-f658-4b66-85f4-e0ce4cb955bd
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 17
---
# /QIfist (Elimina _ftol)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Disattiva la chiamata della funzione helper `_ftol` quando è necessario eseguire una conversione da un tipo a virgola mobile a un tipo integrale.  
  
## Sintassi  
  
```  
/QIfist  
```  
  
## Note  
  
> [!NOTE]
>  **\/QIfist** è disponibile solo nel compilatore per piattaforme x86, non nei compilatori per piattaforma [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] o ARM.  
  
 Oltre a eseguire la conversione da un tipo a virgola mobile a un tipo integrale, la funzione `_ftol` garantisce che la modalità di arrotondamento dell'unità a virgola mobile \(FPU, floating\-point unit\) sia per difetto \(troncamento\), impostando i bit 10 e 11 della parola di controllo.  In questo modo la conversione da un tipo a virgola mobile a un tipo integrale si verifica come viene descritto dallo standard C ANSI in quanto la parte decimale del numero viene ignorata.  Quando si utilizza **\/QIfist**, tale garanzia non è più valida.  La modalità di arrotondamento può essere una delle quattro riportate di seguito, come viene descritto nei manuali di riferimento Intel:  
  
-   Arrotondamento al numero più vicino \(numero dispari se equidistante\)  
  
-   Arrotondamento verso l'infinito negativo  
  
-   Arrotondamento verso l'infinito positivo  
  
-   Arrotondamento per difetto  
  
 Per modificare la modalità di arrotondamento dell'unità a virgola mobile, è possibile utilizzare la funzione di runtime C [\_control87, \_controlfp, \_\_control87\_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md).  La modalità predefinita della FPU è "Arrotondamento all'intero più vicino". L'utilizzo di **\/QIfist** può migliorare le prestazioni dell'applicazione, ma non è esente da rischi.  Prima di utilizzare il codice compilato con **\/QIfist** in ambienti di produzione, è necessario testarne accuratamente le parti sensibili alle modalità di arrotondamento.  
  
 [\/arch \(x86\)](../../build/reference/arch-x86.md) e **\/QIfist** non possono essere utilizzate sullo stesso modulo.  
  
> [!NOTE]
>  L'opzione **\/QIfist** non è attiva per impostazione predefinita perché i bit di arrotondamento influiscono anche sulla virgola mobile nell'arrotondamento della virgola mobile, eseguito dopo ogni calcolo. Pertanto, quando si impostano i flag relativi all'arrotondamento per difetto, in stile C, è possibile che le operazioni in virgola mobile siano diverse.  L'opzione **\/QIfist** non deve essere utilizzata se il codice dipende dalla modalità di troncamento prevista per la parte frazionaria del numero a virgola mobile.  In caso di dubbio, non utilizzare **\/QIfist**.  
  
 L'oggetto **\/QIfist** è deprecato.  La velocità di conversione da valori a virgola mobile a valori integrali del compilatore è significativamente aumentata.  Per ulteriori informazioni, vedere [Deprecated Compiler Options in Visual C\+\+ 2005](http://msdn.microsoft.com/it-it/aa59fce3-50b8-4f66-9aeb-ce09a7a84cce).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni \/Q \(Operazioni di basso livello\)](../../build/reference/q-options-low-level-operations.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)