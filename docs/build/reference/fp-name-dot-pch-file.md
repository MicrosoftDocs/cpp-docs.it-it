---
title: -Fp (nome. File PCH) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCCLCompilerTool.PrecompiledHeaderFile
- /fp
- VC.Project.VCCLWCECompilerTool.PrecompiledHeaderFile
dev_langs:
- C++
helpviewer_keywords:
- Fp compiler option [C++]
- -Fp compiler option [C++]
- naming precompiler header files
- PCH files, naming
- names [C++], PCH
- .pch files, naming
- precompiled header files, naming
- /Fp compiler option [C++]
ms.assetid: 0fcd9cbd-e09f-44d3-9715-b41efb5d0be2
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 77ba54705ec4037f1c98a2ae1832dddcc551956e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fp-name-pch-file"></a>/Fp (Specifica file pch)
Fornisce un nome di percorso per un'intestazione precompilata anziché il nome di percorso predefinito.  
  
## <a name="syntax"></a>Sintassi  
  
> **/Fp**_pathname_  
  
## <a name="remarks"></a>Note  
 Utilizzare questa opzione con [/Yc (Crea precompilata File di intestazione)](../../build/reference/yc-create-precompiled-header-file.md) o [/Yu (utilizza il File intestazione precompilata)](../../build/reference/yu-use-precompiled-header-file.md) per fornire un nome di percorso per un'intestazione precompilata anziché il nome di percorso predefinito. È inoltre possibile utilizzare **/Fp** con **/Yc** per specificare l'utilizzo di un file di intestazione precompilata che differiscono di **/Yc***filename* argomento e dal nome di base del file di origine.  
  
 Se non si specifica un'estensione come parte del nome del percorso, viene utilizzata un'estensione di PCH. Se si specifica una directory senza un nome di file, il nome file predefinito è VC*x*0.pch, in cui *x* è il numero di versione principale di Visual C++ in uso.  
  
 È inoltre possibile utilizzare il **/Fp** con **/Yu**.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic su di **intestazioni precompilate** pagina delle proprietà.  
  
4.  Modificare il **File di intestazione precompilata** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.PrecompiledHeaderFile%2A>.  
  
## <a name="example"></a>Esempio  
 Se si desidera creare un file di intestazione precompilata per una versione di debug del programma e si esegue la compilazione di file di intestazione e il codice sorgente, è possibile specificare un comando, ad esempio:  
  
```  
CL /DDEBUG /Zi /Yc /FpDPROG.PCH PROG.CPP  
```  
  
## <a name="example"></a>Esempio  
 Il comando seguente consente di specificare l'utilizzo di un file di intestazione precompilata denominato MYPCH. Il compilatore presuppone che il codice sorgente in PROG.cpp sia stato precompilato tramite MyApp. h e che il codice precompilato si trovi nella MYPCH. Utilizza il contenuto di MYPCH e il resto del PROG.cpp per creare un file con estensione obj. L'output di questo esempio è un file denominato PROG.exe.  
  
```  
CL /YuMYAPP.H /FpMYPCH.PCH PROG.CPP  
```  
  
## <a name="see-also"></a>Vedere anche  
 [File di output (/ F) opzioni](../../build/reference/output-file-f-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Specifica del nome del percorso](../../build/reference/specifying-the-pathname.md)