---
title: /AI (Specifica le directory di metadati)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLCompilerTool.AdditionalUsingDirectories
- VC.Project.VCNMakeTool.AssemblySearchPath
- /AI
- VC.Project.VCCLWCECompilerTool.AdditionalUsingDirectories
helpviewer_keywords:
- /AI compiler option [C++]
- AI compiler option [C++]
- -AI compiler option [C++]
ms.assetid: fb9c1846-504c-4a3b-bb39-c8696de32f6f
ms.openlocfilehash: 3633cfe34a4f9c627f84cf401cb559f02f8c8229
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62273222"
---
# <a name="ai-specify-metadata-directories"></a>/AI (Specifica le directory di metadati)

Specifica una directory in cui il compilatore effettuerà la ricerca per risolvere i riferimenti di file passati alla direttiva `#using`.

## <a name="syntax"></a>Sintassi

> **/AI**_directory_

## <a name="arguments"></a>Argomenti

*directory*<br/>
Directory o percorso in cui il compilatore effettua la ricerca.

## <a name="remarks"></a>Note

Una sola directory può essere passata a un **/AI** chiamata. Specificare una **/AI** opzione per ogni percorso in cui il compilatore effettuerà la ricerca. Ad esempio, per aggiungere C:\Project\Meta e C:\Common\Meta al percorso di ricerca del compilatore per `#using` direttive, aggiungere `/AI"C:\Project\Meta" /AI"C:\Common\Meta"` alla riga di comando del compilatore o aggiungere ogni directory per il **aggiuntive #using directory** proprietà in Visual Studio.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **generale** pagina delle proprietà.

1. Modificare il **aggiuntive #using directory** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalUsingDirectories%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[Direttiva #using](../../preprocessor/hash-using-directive-cpp.md)
