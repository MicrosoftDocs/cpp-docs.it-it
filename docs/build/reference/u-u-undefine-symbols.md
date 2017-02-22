---
title: "/U, /u (Annulla la definizione dei simboli) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.UndefinePreprocessorDefinitions"
  - "VC.Project.VCCLWCECompilerTool.UndefinePreprocessorDefinitions"
  - "VC.Project.VCCLCompilerTool.UndefineAllPreprocessorDefinitions"
  - "/u"
  - "VC.Project.VCCLWCECompilerTool.UndefineAllPreprocessorDefinitions"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/U (opzione del compilatore) [C++]"
  - "U (opzione del compilatore) [C++]"
  - "-U (opzione del compilatore) [C++]"
  - "Annulla definizione dei simboli (opzione del compilatore)"
ms.assetid: 7bc0474f-6d1f-419b-807d-0d8816763b2a
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# /U, /u (Annulla la definizione dei simboli)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'opzione del compilatore **\/U** non definisce il simbolo del preprocessore specificato.  L'opzione del compilatore **\/u** rimuove la definizione dei simboli specifici Microsoft definiti dal compilatore.  
  
## Sintassi  
  
```  
/U[ ]symbol  
/u  
```  
  
## Argomenti  
 `symbol`  
 Simbolo del preprocessore di cui rimuovere la definizione.  
  
## Note  
 L'opzione **\/U** o **\/u** può rimuovere la definizione di un simbolo creato tramite la direttiva **\#define**.  
  
 L'opzione **\/U** può rimuovere la definizione di un simbolo precedentemente definito tramite l'opzione **\/D**.  
  
 Per impostazione predefinita, il compilatore definisce i simboli specifici Microsoft seguenti.  
  
|Simbolo|Funzione|  
|-------------|--------------|  
|\_CHAR\_UNSIGNED|Il tipo char predefinito è senza segno.  Definito se è specificata l'opzione [\/J](../../build/reference/j-default-char-type-is-unsigned.md).|  
|\_CPPRTTI|Definito per il codice compilato con l'opzione [\/GR](../../build/reference/gr-enable-run-time-type-information.md).|  
|\_CPPUNWIND|Definito per il codice compilato con l'opzione [\/EHsc](../../build/reference/eh-exception-handling-model.md).|  
|\_DLL|Definito se è specificata l'opzione [\/MD](../../build/reference/md-mt-ld-use-run-time-library.md).|  
|\_M\_IX86|Per impostazione predefinita, definito su 60 per destinazioni x86.|  
|\_MSC\_VER|Per ulteriori informazioni, vedere [Macro predefinite](../../preprocessor/predefined-macros.md).|  
|\_WIN32|Definito per applicazioni WIN32.  Sempre definita.|  
|\_MT|Definito se è specificata l'opzione [\/MD o \/MT](../../build/reference/md-mt-ld-use-run-time-library.md).|  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Avanzate**.  
  
4.  Modificare le proprietà **Rimuovi definizioni per il preprocessore** o **Rimuovi tutte le definizioni per il processore**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UndefineAllPreprocessorDefinitions%2A> o <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UndefinePreprocessorDefinitions%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [\/J \(Il tipo char predefinito è unsigned\)](../../build/reference/j-default-char-type-is-unsigned.md)   
 [\/GR \(Attiva informazioni sui tipi in fase di esecuzione\)](../../build/reference/gr-enable-run-time-type-information.md)   
 [\/EH \(Modello di gestione delle eccezioni\)](../../build/reference/eh-exception-handling-model.md)   
 [\/MD, \/MT, \/LD \(Utilizza la libreria di runtime\)](../../build/reference/md-mt-ld-use-run-time-library.md)