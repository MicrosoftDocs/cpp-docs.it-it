---
title: '-FU (nome forzato #using di File) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCCLCompilerTool.ForcedUsingFiles
- /FU
- VC.Project.VCNMakeTool.ForcedUsingAssemblies
dev_langs:
- C++
helpviewer_keywords:
- -FU compiler option [C++]
- FU compiler option [C++]
- /FU compiler option [C++]
ms.assetid: 698f8603-457f-435a-baff-5ac9243d6ca1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 73edbed02a665d7e66478052c0fee13a227658aa
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45720538"
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

Se si usa C + + + / CLI e fa riferimento a metadati da utilizzare il [assembly Friend](../../dotnet/friend-assemblies-cpp.md) funzionalità, non è possibile usare **/FU**. È necessario fare riferimento ai metadati nel codice utilizzando `#using` insieme all'attributo `[as friend]`. Assembly Friend non sono supportati nelle estensioni del componente C++ di Visual C + + / CX.

Per informazioni su come creare un assembly o un modulo per common language runtime (CLR), vedere [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md). Per informazioni sulla compilazione in C + + c++ /CX, vedere [compilazione di App e librerie](../../cppcx/building-apps-and-libraries-c-cx.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **avanzate** pagina delle proprietà.

1. Modificare il **Imponi #using** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ForcedUsingFiles%2A>.

## <a name="see-also"></a>Vedere anche

[File di output (/ F) le opzioni](../../build/reference/output-file-f-options.md)
[opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)