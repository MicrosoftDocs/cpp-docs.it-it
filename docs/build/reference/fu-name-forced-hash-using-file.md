---
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
ms.openlocfilehash: c47a45208ac5b5c7e0000516ed114c008feda7ca
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62292289"
---
# <a name="fu-name-forced-using-file"></a>/FU (Specifica file #using da utilizzare)

Un'opzione del compilatore che è possibile usare come alternativa al passaggio un nome di file per [# direttiva using](../../preprocessor/hash-using-directive-cpp.md) nel codice sorgente.

## <a name="syntax"></a>Sintassi

> **/FU** *file*

## <a name="arguments"></a>Argomenti

*file*<br/>
Specifica il file di metadati a cui fare riferimento in questa compilazione.

## <a name="remarks"></a>Note

L'opzione /FU accetta solo un nome file. Per specificare più file, utilizzare /FU con ciascuno di essi.

Se si usa C++/CLI e sono che fanno riferimento a metadati da utilizzare il [Friend Assemblies](../../dotnet/friend-assemblies-cpp.md) funzionalità, non è possibile utilizzare **/FU**. È necessario fare riferimento ai metadati nel codice utilizzando `#using` insieme all'attributo `[as friend]`. Assembly Friend non sono supportati nell'oggetto visivo C++ estensioni del componente C++/CX.

Per informazioni su come creare un assembly o un modulo per common language runtime (CLR), vedere [/clr (compilazione Common Language Runtime)](clr-common-language-runtime-compilation.md). Per informazioni sulla compilazione C++/CX, vedere [compilazione di App e librerie](../../cppcx/building-apps-and-libraries-c-cx.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **avanzate** pagina delle proprietà.

1. Modificare il **Imponi #using** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ForcedUsingFiles%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del file di output (/F)](output-file-f-options.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
