---
title: /Tc, /Tp, /TC, /TP (Specifica il tipo di file di origine)
ms.date: 01/11/2018
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
ms.openlocfilehash: c93da6d2498d46e4b7bf3ad37dde852bb6bc82a1
ms.sourcegitcommit: effb516760c0f956c6308eeded48851accc96b92
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70927635"
---
# <a name="tc-tp-tc-tp-specify-source-file-type"></a>/Tc, /Tp, /TC, /TP (Specifica il tipo di file di origine)

L'opzione **/TC** specifica che il relativo argomento filename è un file di origine c, anche se non dispone di un'estensione. C. L'opzione **/TP** specifica che il relativo argomento filename è C++ un file di origine, anche se non ha un'estensione cpp o cxx. Uno spazio tra l'opzione e il nome file è facoltativo. Ogni opzione specifica un file; per specificare file aggiuntivi, ripetere l'opzione.

**/TC** e **/TP** sono varianti globali di **/TC** e **/TP**. Specificano al compilatore di considerare tutti i file denominati nella riga di comando come file diorigine C ( C++ /TC) o file di origine ( **/TP**), indipendentemente dalla posizione nella riga di comando in relazione all'opzione. È possibile eseguire l'override di queste opzioni globali in un singolo file per mezzo di **/TC** o **/TP**.

## <a name="syntax"></a>Sintassi

> **/Tc** _filename_
>  **/Tp** _filename_
>  **/TC**
>  **/TP**

## <a name="arguments"></a>Argomenti

*filename*<br/>
Un file C C++ o di origine.

## <a name="remarks"></a>Note

Per impostazione predefinita, **CL** presuppone che i file con estensione c siano file di origine c e che i file con estensione cpp o cxx siano C++ file di origine.

Quando si specifica l'opzione **TC** o **TC** , viene ignorata qualsiasi specifica dell'opzione [/Zc: wchar_t (tipo nativo wchar_t)](zc-wchar-t-wchar-t-is-native-type.md) .

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina proprietà di **configurazione** >  > **C/C++** **Avanzate** .

1. Modificare la proprietà **Compila come** . Scegliere **OK** o **applica** per applicare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CompileAs%2A>.

## <a name="examples"></a>Esempi

Questa riga di comando CL specifica che MAIN. c, TEST. prg e COLLATE. PRG sono tutti file di origine C. CL non è in grado di riconoscere PRINT. prg.

> PRINCIPALE CL. C/TcTEST.PRG/TcCOLLATE.PRG PRINT. PRG

Questa riga di comando CL specifica che TEST1. c, TEST2. cxx, TEST3. huh e TEST4. o sono compilati come C++ file e test5. z viene compilato come file c.

> UN CL TEST1. C TEST2. TEST3 CXX. EH TEST4. O/TC TEST5. /TP Z

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
