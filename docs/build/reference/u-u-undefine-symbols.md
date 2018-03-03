---
title: -U, -u (Rimuove simboli) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCCLCompilerTool.UndefinePreprocessorDefinitions
- VC.Project.VCCLWCECompilerTool.UndefinePreprocessorDefinitions
- VC.Project.VCCLCompilerTool.UndefineAllPreprocessorDefinitions
- /u
- VC.Project.VCCLWCECompilerTool.UndefineAllPreprocessorDefinitions
dev_langs:
- C++
helpviewer_keywords:
- -U compiler option [C++]
- Undefine Symbols compiler option
- /U compiler option [C++]
- U compiler option [C++]
ms.assetid: 7bc0474f-6d1f-419b-807d-0d8816763b2a
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 18fdaf0c2cb980f1ed19fdfc0577769a9985cf85
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="u-u-undefine-symbols"></a>/U, /u (Annulla la definizione dei simboli)
Il **/u** l'opzione del compilatore di non definisce il simbolo del preprocessore specificato. Il **/u** l'opzione del compilatore definizioni dei simboli Microsoft specifici definiti dal compilatore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/U[ ]symbol  
/u  
```  
  
## <a name="arguments"></a>Argomenti  
 `symbol`  
 Il simbolo del preprocessore per rimuovere la definizione.  
  
## <a name="remarks"></a>Note  
 Né il **/u** o **/u** opzione possibile rimuovere la definizione di un simbolo creato utilizzando il **#define** direttiva.  
  
 Il **/u** opzione possibile rimuovere la definizione di un simbolo definito in precedenza tramite il **/D** opzione.  
  
 Per impostazione predefinita, il compilatore definisce i simboli specifici Microsoft seguenti.  
  
|Simbolo|Funzione|  
|------------|--------------|  
|CHAR_UNSIGNED|Tipo char predefinito è senza segno. Definita quando il [/J](../../build/reference/j-default-char-type-is-unsigned.md) opzione specificata.|  
|CPPRTTI|Definito per il codice compilato con la [/GR](../../build/reference/gr-enable-run-time-type-information.md) opzione.|  
|CPPUNWIND|Definito per il codice compilato con la [/EHsc](../../build/reference/eh-exception-handling-model.md) opzione.|  
|DLL|Definita quando il [/MD](../../build/reference/md-mt-ld-use-run-time-library.md) opzione specificata.|  
|M_IX86|Per impostazione predefinita, definita a 600 x86 a destinazioni.|  
|MSC_VER|Per altre informazioni, vedere [Predefined Macros](../../preprocessor/predefined-macros.md).|  
|WIN32|Definito per le applicazioni WIN32. Sempre definita.|  
|_MT|Definita quando il [/MD o /MT](../../build/reference/md-mt-ld-use-run-time-library.md) opzione specificata.|  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic su di **avanzate** pagina delle proprietà.  
  
4.  Modificare il **Rimuovi definizioni preprocessore** o **Rimuovi tutte le definizioni di preprocessore** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UndefineAllPreprocessorDefinitions%2A> o <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UndefinePreprocessorDefinitions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [/J (char predefinito è di tipo unsigned)](../../build/reference/j-default-char-type-is-unsigned.md)   
 [/GR (Attiva informazioni di Run-Time Type)](../../build/reference/gr-enable-run-time-type-information.md)   
 [/EH (modello di gestione delle eccezioni)](../../build/reference/eh-exception-handling-model.md)   
 [/MD, /MT, /LD (utilizzo della libreria Run-Time)](../../build/reference/md-mt-ld-use-run-time-library.md)