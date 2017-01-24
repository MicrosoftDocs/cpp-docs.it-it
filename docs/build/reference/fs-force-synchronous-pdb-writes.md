---
title: "/FS (Forza scritture PDB sincrone) | Microsoft Docs"
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
  - "/FS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-FS (opzione del compilatore) [C++]"
  - "/FS (opzione del compilatore) [C++]"
ms.assetid: b2caaffe-f6e1-4963-b068-648f06b105e0
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /FS (Forza scritture PDB sincrone)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Forza le scritture nel file del database del programma \(PDB\), creato da [\/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) o [\/ZI](../../build/reference/z7-zi-zi-debug-information-format.md), per la serializzazione tramite MSPDBSRV.EXE.  
  
## Sintassi  
  
```  
/FS  
```  
  
## Note  
 Per impostazione predefinita, quando è specificato **\/Zi** o **\/ZI**, il compilatore non consente ai file PDB di scrivere informazioni sul tipo e informazioni simboliche di debug.  Ciò può ridurre notevolmente il tempo richiesto il compilatore per generare informazioni sui tipi quando il numero di tipi è di grandi dimensioni.  Se un altro processo blocca temporaneamente il file PDB, ad esempio un programma antivirus, le scritture da parte del compilatore possono fallire e può verificarsi un errore irreversibile.  Questo problema può verificarsi anche quando più copie di cl.exe accedono allo stesso file PDB, ad esempio se la soluzione è costituita da progetti indipendenti che utilizzano le stesse directory intermedie o directory di output e sono abilitate le compilazioni parallele.  L'opzione del compilatore **\/FS** impedisce al compilatore di bloccare il file PDB e forza le scritture a passare attraverso MSPDBSRV.EXE, il quale serializza l'accesso.  Ciò rende le compilazioni significativamente più lunghe e non impedisce a tutti gli errori che possono verificarsi quando più istanze di cl.exe accedono al file PDB contemporaneamente.  Si consiglia di modificare la soluzione in modo che i progetti indipendenti scrivano in posizioni intermedie e output separati, o in modo da rendere uno dei progetti dipendente dagli altri al fine di forzare compilazioni del progetto serializzate.  
  
 L'opzione [\/MP](../../build/reference/mp-build-with-multiple-processes.md) abilita **\/FS** per impostazione predefinita.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **C\/C\+\+**.  
  
3.  Selezionare la pagina delle proprietà **Riga di comando**.  
  
4.  Modificare la proprietà **Opzioni aggiuntive** per includere `/FS`, quindi scegliere **OK**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)