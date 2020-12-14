---
description: 'Altre informazioni su:/FU (nome file #using forzato)'
title: '/FU (Specifica file #using da utilizzare)'
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLCompilerTool.ForcedUsingFiles
- /FU
- VC.Project.VCNMakeTool.ForcedUsingAssemblies
helpviewer_keywords:
- -FU compiler option [C++]
- FU compiler option [C++]
- /FU compiler option [C++]
ms.assetid: 698f8603-457f-435a-baff-5ac9243d6ca1
ms.openlocfilehash: 458369e7ff1322d2d2fa2fb37e8915c5a39c8446
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97200377"
---
# <a name="fu-name-forced-using-file"></a>/FU (Specifica file #using da utilizzare)

Opzione del compilatore che è possibile utilizzare come alternativa al passaggio di un nome di file a [#using direttiva](../../preprocessor/hash-using-directive-cpp.md) nel codice sorgente.

## <a name="syntax"></a>Sintassi

> **/FU** *file*

## <a name="arguments"></a>Argomenti

*file*<br/>
Specifica il file di metadati a cui fare riferimento in questa compilazione.

## <a name="remarks"></a>Commenti

L'opzione /FU accetta solo un nome file. Per specificare più file, utilizzare /FU con ciascuno di essi.

Se si usa C++/CLI e si fa riferimento a metadati per usare la funzionalità degli [assembly Friend](../../dotnet/friend-assemblies-cpp.md) , non è possibile usare **/fu**. È necessario fare riferimento ai metadati nel codice utilizzando `#using` insieme all'attributo `[as friend]`. Gli assembly Friend non sono supportati nelle estensioni del componente Visual C++ C++/CX.

Per informazioni su come creare un assembly o un modulo per il Common Language Runtime (CLR), vedere [/CLR (compilazione Common Language Runtime)](clr-common-language-runtime-compilation.md). Per informazioni su come compilare in C++/CX, vedere [compilazione di applicazioni e librerie](../../cppcx/building-apps-and-libraries-c-cx.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà avanzate della finestra di **dialogo proprietà di configurazione**  >  **C/C++**  >   .

1. Modificare la proprietà **Force #using** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ForcedUsingFiles%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del file di output (/F)](output-file-f-options.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
