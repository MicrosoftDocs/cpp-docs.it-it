---
title: "/favor (ottimizzato per le specifiche di architettura) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/favor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-favor (opzione del compilatore) [C++]"
  - "/favor (opzione del compilatore) [C++]"
ms.assetid: ad264df2-e30f-4d68-8bd0-10d6bee71a2a
caps.latest.revision: 31
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 31
---
# /favor (ottimizzato per le specifiche di architettura)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**\/favor:** `option` genera codice ottimizzato per un'architettura specifica o per le specifiche delle microarchitetture nelle architetture AMD e Intel.  
  
## Sintassi  
  
```  
/favor:{blend | ATOM | AMD64 | INTEL64}  
```  
  
## Note  
 **\/favor:blend**  
 \(x86 e x64\) genera il codice che viene ottimizzato per le specifiche di micro\-architetture nelle architetture AMD ed Intel.  Sebbene l'opzione **\/favor:blend** non offra le migliori prestazioni possibili su un processore specifico, è stata progettata per offrire le migliori prestazioni in una vasta gamma di processori x86 e x64.  Per impostazione predefinita, l'opzione **\/favor:blend** è attiva.  
  
 **\/favor:ATOM**  
 \(x86 e x64\) genera codice ottimizzato per le specifiche del processore Intel Atom e della tecnologia del processore Intel Centrino Atom.  Il codice che viene generato utilizzando **\/favor:ATOM** può anche produrre le istruzioni per i processori Intel SSSE3, SSE3, SSE2 e SSE.  
  
 **\/favor:AMD64**  
 \(solo x64\) ottimizza il codice generato per i processori AMD Opteron e Athlon che supportano estensioni a 64 bit.  Il codice ottimizzato può essere eseguito su tutte le piattaforme compatibili con x64.  Il codice generato utilizzando **\/favor:AMD64** potrebbe compromettere le prestazioni su processori Intel che supportano Intel64.  
  
 **\/favor:INTEL64**  
 \(solo x64\) ottimizza il codice generato per processori Intel che supportano Intel64, garantendo in genere prestazioni migliori per la piattaforma specifica.  Il codice risultante può essere eseguito su qualsiasi piattaforma x64.  Il codice generato con **\/favor:INTEL64** potrebbe compromettere le prestazioni su processori AMD Opteron e Athlon che supportano estensioni a 64 bit.  
  
> [!NOTE]
>  L'architettura Intel64 era nota in precedenza come Extended Memory 64 Technology e l'opzione del compilatore corrispondente era **\/favor:EM64T**.  
  
 Per informazioni sulla programmazione relativa all'architettura [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] vedere [Convenzioni del software x64](../../build/x64-software-conventions.md).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Selezionare la cartella **C\/C\+\+**.  
  
3.  Selezionare la pagina delle proprietà **Riga di comando**.  
  
4.  Immettere l'opzione del compilatore nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)