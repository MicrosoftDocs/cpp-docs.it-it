---
title: "/D (definizioni preprocessore) | Microsoft Docs"
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
  - "VC.Project.VCNMakeTool.PreprocessorDefinitions"
  - "VC.Project.VCCLCompilerTool.PreprocessorDefinitions"
  - "/d"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/D (opzione del compilatore) [C++]"
  - "costanti, definizione"
  - "D (opzione del compilatore) [C++]"
  - "-D (opzione del compilatore) [C++]"
  - "macro, compilazione"
  - "simboli di definizione del preprocessore"
ms.assetid: b53fdda7-8da1-474f-8811-ba7cdcc66dba
caps.latest.revision: 22
caps.handback.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /D (definizioni preprocessore)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Definisce un simbolo di pre\-elaborazione per un file di origine.  
  
## Sintassi  
  
```  
/Dname[= | # [{string | number}] ]  
```  
  
## Note  
 È possibile utilizzare questo simbolo con `#if` o `#ifdef` per compilare codice sorgente in modo condizionale.  La definizione del simbolo rimane attiva finché non viene rieseguita nel codice o non viene annullata attraverso la direttiva `#undef`.  
  
 **\/D** ha lo stesso effetto della direttiva `#define` all'inizio di un file di codice sorgente. L'unica eccezione è data dal fatto che **\/D** rimuove le virgolette sulla riga di comando, mentre `#define` le conserva.  
  
 Per impostazione predefinita, il valore associato a un simbolo è 1.  Ad esempio, **\/D**`name` equivale a **\/D**`name`**\=1**.  Nell'esempio alla fine di questo articolo, la definizione di **TEST** risulta essere `1`.  
  
 Se la compilazione viene effettuata utilizzando **\/D**`name`**\=**, al simbolo non sarà associato alcun valore.  Sebbene possa comunque essere utilizzato per la compilazione condizionale di codice, il simbolo non restituisce alcun valore.  Nell'esempio, se si esegue la compilazione utilizzando **\/DTEST\=**, si verifica un errore.  Questo comportamento è analogo all'utilizzo di `#define` con o senza un valore.  
  
 Questo comando definisce il simbolo DEBUG in TEST.c:  
  
 **CL \/DDEBUG  TEST.C**  
  
 Questo comando rimuove tutte le occorrenze della parola chiave `__far` in TEST.c:  
  
 **CL \/D\_\_far\=  TEST.C**  
  
 Non è possibile impostare la variabile di ambiente **CL** su una stringa che contiene il segno di uguale.  Per utilizzare **\/D** con la variabile di ambiente **CL**, è necessario specificare il segno di cancelletto anziché il segno di uguale:  
  
```  
SET CL=/DTEST#0  
```  
  
 Quando si definisce un simbolo di pre\-elaborazione al prompt dei comandi, considerare le regole di analisi del compilatore e quelle della shell.  Ad esempio, per definire un simbolo di pre\-elaborazione segno di percentuale \(%\) nel programma, specificare due caratteri segno di percentuale \(%%\) al prompt dei comandi. Se se ne specifica uno solo, viene generato un errore di analisi.  
  
```  
CL /DTEST=%% TEST.C  
```  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per ulteriori informazioni, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Nel riquadro sinistro selezionare **Proprietà di configurazione**, **C\/C\+\+**, **Preprocessore**.  
  
3.  Nel riquadro destro, nella colonna di destra della proprietà **Definizioni preprocessore**, aprire il menu a discesa e scegliere **Modifica**.  
  
4.  Nella finestra di dialogo **Definizioni preprocessore** aggiungere, modificare o eliminare una o più definizioni \(una per riga\).  Scegliere **OK**  per salvare le modifiche.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.PreprocessorDefinitions%2A>.  
  
## Esempio  
  
```  
// cpp_D_compiler_option.cpp  
// compile with: /DTEST  
#include <stdio.h>  
  
int main( )  
{  
    #ifdef TEST  
        printf_s("TEST defined %d\n", TEST);  
    #else  
        printf_s("TEST not defined\n");  
    #endif  
}  
```  
  
  **TEST definito 1**   
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [\/U, \/u \(Annulla la definizione dei simboli\)](../../build/reference/u-u-undefine-symbols.md)   
 [Direttiva \#undef](../../preprocessor/hash-undef-directive-c-cpp.md)   
 [Direttiva \#define](../../preprocessor/hash-define-directive-c-cpp.md)