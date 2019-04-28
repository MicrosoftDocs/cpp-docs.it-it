---
title: /Tc, /Tp, /TC, /TP (Specifica il tipo di file di origine)
ms.date: 1/11/2018
f1_keywords:
- VC.Project.VCCLWCECompilerTool.CompileAs
- VC.Project.VCCLCompilerTool.CompileAs
- /Tp
- /tc
helpviewer_keywords:
- Tp compiler option [C++]
- /Tc compiler option [C++]
- -Tc compiler option [C++]
- source files, specifying to compiler
- Tc compiler option [C++]
- /Tp compiler option [C++]
- -Tp compiler option [C++]
ms.openlocfilehash: f7ee51c858c9f90440cf0c2b21799ef7473cf6da
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62317445"
---
# <a name="tc-tp-tc-tp-specify-source-file-type"></a>/Tc, /Tp, /TC, /TP (Specifica il tipo di file di origine)

Il **/Tc** opzione specifica che il relativo argomento filename è un file di origine C, anche se non è un'estensione di file. c. Il **/Tp** opzione specifica che il relativo argomento filename è un file di origine C++, anche se non è un'estensione. cxx o cpp. Uno spazio tra l'opzione e il nome del file è facoltativo. Ogni opzione specifica un file. Per specificare i file aggiuntivi, ripetere l'opzione.

**/TC** e **/TP** sono globali varianti del **/Tc** e **/Tp**. Indicano al compilatore di considerare tutti i file denominati nella riga di comando come file di origine C (**/TC**) o file di origine C++ (**/TP**), indipendentemente dalla posizione nella riga di comando in relazione l'opzione. Queste opzioni globale possono essere sottoposto a override su un singolo file mediante il **/Tc** oppure **/Tp**.

## <a name="syntax"></a>Sintassi

> **/Tc** _filename_
>  **/Tp** _filename_
>  **/TC**
>  **/TP**

## <a name="arguments"></a>Argomenti

*filename*<br/>
Un file di origine C o C++.

## <a name="remarks"></a>Note

Per impostazione predefinita **CL** si presuppone che i file con estensione c sono file di origine C e i file con estensione cpp o l'estensione. cxx sono file di origine C++.

Quando entrambi i **TC** o **Tc** opzioni viene specificata, qualsiasi specifica del [/Zc: wchar_t (wchar_t Is tipo nativo)](zc-wchar-t-wchar-t-is-native-type.md) opzione viene ignorata.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **avanzate** pagina delle proprietà.

1. Modificare il **Compila come** proprietà. Scegli **OK** oppure **applica** per applicare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CompileAs%2A>.

## <a name="examples"></a>Esempi

Questa riga di comando di CL specifica che Main. c, prg e prg sono tutti i file di origine C. CL non riconoscerà prg.

> CL MAIN. C /TcTEST.PRG /TcCOLLATE.PRG PRINT. COMPONGONO

Questa riga di comando di CL specifica Test1, TEST2.cxx, TEST3.huh e TEST4 vengono compilate come file di C++ che Test5. z viene compilato come file C.

> CL TEST1. C TEST2. TEST3 CXX. EH TEST4. TEST5 /Tc O. /TP Z

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
