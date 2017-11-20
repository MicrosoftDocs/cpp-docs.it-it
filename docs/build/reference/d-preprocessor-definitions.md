---
title: -D (definizioni preprocessore) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCNMakeTool.PreprocessorDefinitions
- VC.Project.VCCLCompilerTool.PreprocessorDefinitions
- /d
dev_langs: C++
helpviewer_keywords:
- preprocessor definition symbols
- constants, defining
- macros, compiling
- /D compiler option [C++]
- -D compiler option [C++]
- D compiler option [C++]
ms.assetid: b53fdda7-8da1-474f-8811-ba7cdcc66dba
caps.latest.revision: "22"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 30459805268a8b2eac9e94d0aeb1da4cfff28a46
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="d-preprocessor-definitions"></a>/D (definizioni preprocessore)
Definisce un simbolo di pre-elaborazione per un file di origine.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Dname[= | # [{string | number}] ]  
```  
  
## <a name="remarks"></a>Note  
 È possibile utilizzare questo simbolo con `#if` o `#ifdef` per compilare codice sorgente in modo condizionale. La definizione del simbolo rimane attiva finché non viene rieseguita nel codice o non viene annullata attraverso la direttiva `#undef`.  
  
 **/D** ha lo stesso effetto di `#define` direttiva all'inizio di un file del codice sorgente con la differenza che **/D** rimuove le virgolette nella riga di comando e `#define` conservati.  
  
 Per impostazione predefinita, il valore associato a un simbolo è 1. Ad esempio, **/D** `name` equivale a **/D**`name`**= 1**. Nell'esempio alla fine di questo articolo, la definizione di **TEST** risulta essere `1`.  
  
 La compilazione con **/D** `name`  **=**  , non hanno alcun valore associato al simbolo. Sebbene possa comunque essere utilizzato per la compilazione condizionale di codice, il simbolo non restituisce alcun valore. Nell'esempio, se esegue la compilazione con **/DTEST =**, si verifica un errore. Questo comportamento è analogo all'utilizzo di `#define` con o senza un valore.  
  
 Questo comando definisce il simbolo DEBUG in TEST.c:  
  
 **TEST SENZA /DDEBUG CL. C**  
  
 Questo comando rimuove tutte le occorrenze della parola chiave `__far` in TEST.c:  
  
 **CL /D__far = TEST. C**  
  
 Il **CL** variabile di ambiente non può essere impostata su una stringa che contiene il segno di uguale. Per utilizzare **/D** insieme il **CL** ambiente variabile, è necessario specificare il simbolo di cancelletto anziché il segno di uguale:  
  
```  
SET CL=/DTEST#0  
```  
  
 Quando si definisce un simbolo di pre-elaborazione al prompt dei comandi, considerare le regole di analisi del compilatore e quelle della shell. Ad esempio, per definire un simbolo di pre-elaborazione segno di percentuale (%) nel programma, specificare due caratteri segno di percentuale (%%) al prompt dei comandi. Se se ne specifica uno solo, viene generato un errore di analisi.  
  
```  
CL /DTEST=%% TEST.C  
```  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Nel riquadro a sinistra, selezionare **le proprietà di configurazione**, **C/C++**, **preprocessore**.  
  
3.  Nel riquadro di destra, nella colonna destra del **definizioni preprocessore** proprietà, aprire il menu di scelta rapida e scegliere **modifica**.  
  
4.  Nel **definizioni preprocessore** nella finestra di dialogo Aggiungi (uno per riga), modificare o eliminare una o più definizioni. Scegliere **OK** per salvare le modifiche.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.PreprocessorDefinitions%2A>.  
  
## <a name="example"></a>Esempio  
  
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
  
```Output  
TEST defined 1  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [/U, /u (Annulla la definizione dei simboli)](../../build/reference/u-u-undefine-symbols.md)   
 [#undef (direttiva) (C/C++)](../../preprocessor/hash-undef-directive-c-cpp.md)   
 [Direttiva #define (C/C++)](../../preprocessor/hash-define-directive-c-cpp.md)