---
title: /TC, /Tp, /TC, /TP (specifica il tipo di File di origine) | Documenti Microsoft
ms.date: 1/11/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCCLWCECompilerTool.CompileAs
- VC.Project.VCCLCompilerTool.CompileAs
- /Tp
- /tc
dev_langs:
- C++
helpviewer_keywords:
- Tp compiler option [C++]
- /Tc compiler option [C++]
- -Tc compiler option [C++]
- source files, specifying to compiler
- Tc compiler option [C++]
- /Tp compiler option [C++]
- -Tp compiler option [C++]
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9cb612d5c26fd4db51222c480539867d5e506b70
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="tc-tp-tc-tp-specify-source-file-type"></a>/Tc, /Tp, /TC, /TP (Specifica il tipo di file di origine)

Il **/Tc** opzione specifica che il relativo argomento filename è un file di origine C, anche se non ha un'estensione di file c. Il **/Tp** opzione specifica che il relativo argomento filename è un file di origine C++, anche se non ha estensione cpp o. cxx. Uno spazio tra l'opzione e il nome del file è facoltativo. Ogni opzione specifica un file. Per specificare file aggiuntivi, ripetere l'opzione.

**/TC** e **/TP** sono varianti globali di **/Tc** e **/Tp**. Indicano al compilatore di considerare tutti i file denominati nella riga di comando come file di origine C (**/TC**) o file di origine C++ (**/TP**), indipendentemente dalla posizione nella riga di comando in relazione l'opzione. Queste opzioni globali possono essere sottoposto a override su un singolo file per mezzo di **/Tc** o **/Tp**.

## <a name="syntax"></a>Sintassi

> **/TC** _filename_  
> **/TP** _filename_  
> **/TC**  
> **/TP**  

## <a name="arguments"></a>Argomenti

*filename*  
Un file di origine C o C++.

## <a name="remarks"></a>Note

Per impostazione predefinita, **CL** si presuppone che i file con estensione c sono file di origine C e i file con estensione cpp o cxx sono file di origine C++.

Quando entrambi i **TC** o **Tc** è specificata l'opzione, qualsiasi specifica del [/Zc: wchar_t (wchar_t è il tipo nativo)](../../build/reference/zc-wchar-t-wchar-t-is-native-type.md) opzione viene ignorata.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **avanzate** pagina delle proprietà.

1. Modificare il **Compila come** proprietà. Scegliere **OK** o **applica** per applicare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CompileAs%2A>.

## <a name="examples"></a>Esempi

Questa riga di comando di CL specifica che Main. c e prg prg sono tutti i file di origine C. CL non riconoscerà prg.

> CL PRINCIPALE. C /TcTEST.PRG /TcCOLLATE.PRG stampa. COMPONGONO

Questa riga di comando di CL specifica che Test1, TEST2.cxx, TEST3.huh e TEST4 vengono compilate come file C++ e TEST5. z viene compilato come file C.

> CL TEST1. C TEST2. TEST3 CXX. EH TEST4. TEST5 /Tc O. /TP Z

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)  
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)  
