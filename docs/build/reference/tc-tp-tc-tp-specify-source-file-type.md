---
description: Altre informazioni su:/TC,/TP,/TC,/TP (specifica il tipo di file di origine)
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
ms.openlocfilehash: 23aed145c8dd9ac36f26bcebe2ea2aab1c39e586
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97230029"
---
# <a name="tc-tp-tc-tp-specify-source-file-type"></a>/Tc, /Tp, /TC, /TP (Specifica il tipo di file di origine)

L'opzione **/TC** specifica che il relativo argomento filename è un file di origine c, anche se non dispone di un'estensione. C. L'opzione **/TP** specifica che il relativo argomento filename è un file di origine C++, anche se non ha un'estensione cpp o cxx. Uno spazio tra l'opzione e il nome file è facoltativo. Ogni opzione specifica un file; per specificare file aggiuntivi, ripetere l'opzione.

**/TC** e **/TP** sono varianti globali di **/TC** e **/TP**. Specificano al compilatore di considerare tutti i file denominati nella riga di comando come file di origine C (**/TC**) o file di origine C++ (**/TP**), indipendentemente dalla posizione nella riga di comando in relazione all'opzione. È possibile eseguire l'override di queste opzioni globali in un singolo file per mezzo di **/TC** o **/TP**.

## <a name="syntax"></a>Sintassi

>  _Nome file_ /TC\
>  _Nome file_ /TP\
> **/TC**\
> **/TP**

### <a name="arguments"></a>Argomenti

*filename*<br/>
Un file di origine C o C++.

## <a name="remarks"></a>Commenti

Per impostazione predefinita, **CL** presuppone che i file con estensione c siano file di origine c e che i file con estensione cpp o cxx siano file di origine C++.

Quando si specifica l'opzione **TC** o **TC** , qualsiasi specifica dell'opzione [/Zc: wchar_t (wchar_t è di tipo nativo)](zc-wchar-t-wchar-t-is-native-type.md) viene ignorata.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà avanzate della finestra di **dialogo proprietà di configurazione**  >  **C/C++**  >   .

1. Modificare la proprietà **Compila come** . Scegliere **OK** o **applica** per applicare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CompileAs%2A>.

## <a name="examples"></a>Esempio

Questa riga di comando CL specifica che MAIN. c, TEST. prg e COLLATE. PRG sono tutti file di origine C. CL non è in grado di riconoscere PRINT. prg.

> PRINCIPALE CL. C/TcTEST.PRG/TcCOLLATE.PRG PRINT. PRG

Questa riga di comando CL specifica che TEST1. c, TEST2. cxx, TEST3. huh e TEST4. o sono compilati come file C++ e TEST5. z viene compilato come file C.

> UN CL TEST1. C TEST2. TEST3 CXX. EH TEST4. O/TC TEST5. /TP Z

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
