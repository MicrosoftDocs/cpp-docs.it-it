---
title: "/GR (Attiva informazioni sui tipi in fase di esecuzione) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/gr"
  - "VC.Project.VCCLWCECompilerTool.RuntimeTypeInfo"
  - "VC.Project.VCCLCompilerTool.RuntimeTypeInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Gr (opzione del compilatore) [C++]"
  - "Abilita informazioni sui tipi in fase di esecuzione (opzione del compilatore) [C++]"
  - "Gr (opzione del compilatore) [C++]"
  - "-Gr (opzione del compilatore) [C++]"
  - "RTTI (opzione del compilatore)"
ms.assetid: d1f9f850-dcec-49fd-96ef-e72d01148906
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 18
---
# /GR (Attiva informazioni sui tipi in fase di esecuzione)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Aggiunge codice per il controllo dei tipi degli oggetti in fase di esecuzione.  
  
## Sintassi  
  
```  
/GR[-]  
```  
  
## Note  
 Quando l'opzione **\/GR** è attiva, il compilatore definisce la macro del preprocessore `_CPPRTTI`.  L'opzione **\/GR** è attiva per impostazione predefinita.  **\/GR\-** disattiva le informazioni sui tipi in fase di esecuzione.  
  
 Utilizzare **\/GR** se il compilatore non può risolvere staticamente un tipo di oggetto nel codice.  L'opzione **\/GR** è in genere necessaria quando il codice utilizza [Operatore dynamic\_cast](../../cpp/dynamic-cast-operator.md) o [typeid](../../cpp/typeid-operator.md).  **\/GR**, tuttavia, provoca l'aumento delle dimensioni delle sezioni .rdata dell'immagine.  Se il codice non utilizza **dynamic\_cast** o **typeid**, **\/GR\-** può produrre un'immagine di dimensioni minori.  
  
 Per ulteriori informazioni sul controllo dei tipi in fase di esecuzione, vedere [Informazioni sui tipi di runtime](../../cpp/run-time-type-information.md) in *Riferimenti al linguaggio C\+\+*.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Linguaggio**.  
  
4.  Modificare la proprietà **Attiva informazioni sui tipi in fase di esecuzione**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.RuntimeTypeInfo%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)