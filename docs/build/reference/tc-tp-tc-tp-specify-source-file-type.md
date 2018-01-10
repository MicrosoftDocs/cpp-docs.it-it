---
title: -Tc, - Tp,-TC, - TP (specifica il tipo di File di origine) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCCLWCECompilerTool.CompileAs
- VC.Project.VCCLCompilerTool.CompileAs
- /Tp
- /tc
dev_langs: C++
helpviewer_keywords:
- Tp compiler option [C++]
- /Tc compiler option [C++]
- -Tc compiler option [C++]
- source files, specifying to compiler
- Tc compiler option [C++]
- /Tp compiler option [C++]
- -Tp compiler option [C++]
ms.assetid: 7d9d0a65-338b-427c-8b48-fff30e2f9d2b
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 69ccd08967d386780744fb85476033430127ba3a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tc-tp-tc-tp-specify-source-file-type"></a>/Tc, /Tp, /TC, /TP (Specifica il tipo di file di origine)
Il **/Tc** opzione specifica che `filename` è un file di origine C, anche se non ha un'estensione di file c. Il **/Tp** opzione specifica che `filename` è un file di origine C++, anche se non ha estensione cpp o. cxx. Uno spazio tra l'opzione e `filename` è facoltativo. Ogni opzione specifica un file. Per specificare file aggiuntivi, ripetere l'opzione.  
  
 **/TC** e **/TP** sono varianti globali di **/Tc** e **/Tp**. Indicano al compilatore di considerare tutti i file denominati nella riga di comando come file di origine C (**/TC**) o file di origine C++ (**/TP**), indipendentemente dalla posizione nella riga di comando in relazione l'opzione. Queste opzioni globali possono essere sottoposto a override su un singolo file per mezzo di **/Tc** o **/Tp**.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Tcfilename  
/Tpfilename  
/TC  
/TP  
```  
  
## <a name="arguments"></a>Argomenti  
 `filename`  
 Un file di origine C o C++.  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita, CL presuppone che i file con estensione c sono file di origine C e i file con estensione cpp o cxx sono file di origine C++.  
  
 Quando entrambi i **TC** o **Tc** è specificata l'opzione, qualsiasi specifica del [/Zc: wchar_t (wchar_t è il tipo nativo)](../../build/reference/zc-wchar-t-wchar-t-is-native-type.md) opzione viene ignorata.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic su di **avanzate** pagina delle proprietà.  
  
4.  Modificare il **Compila come** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CompileAs%2A>.  
  
## <a name="examples"></a>Esempi  
 La seguente riga di comando di CL specifica che Main. c, prg e prg sono tutti i file di origine C. CL non riconoscerà prg.  
  
```  
CL MAIN.C /TcTEST.PRG /TcCOLLATE.PRG PRINT.PRG  
```  
  
 La seguente riga di comando di CL specifica che Test1, TEST2.cxx, TEST3.huh e TEST4 vengono compilate come file C++ e TEST5. z viene compilato come file C.  
  
```  
CL TEST1.C TEST2.CXX TEST3.HUH TEST4.O /Tc TEST5.Z /TP  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)