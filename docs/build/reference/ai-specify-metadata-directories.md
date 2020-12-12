---
description: Altre informazioni su:/AI (specifica directory di metadati)
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
ms.openlocfilehash: e30711b1da2d41204bf56520d56dd5101f3168b2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97179746"
---
# <a name="ai-specify-metadata-directories"></a>/AI (Specifica le directory di metadati)

Specifica una directory in cui il compilatore effettuerà la ricerca per risolvere i riferimenti di file passati alla direttiva `#using`.

## <a name="syntax"></a>Sintassi

> _Directory_ /ai

## <a name="arguments"></a>Argomenti

*Directory*<br/>
Directory o percorso in cui il compilatore effettua la ricerca.

## <a name="remarks"></a>Commenti

È possibile passare una sola directory a una chiamata **/ai** . Specificare un'opzione **/ai** per ogni percorso in cui il compilatore desidera eseguire la ricerca. Ad esempio, per aggiungere C:\Project\Meta e C:\Common\Meta al percorso di ricerca del compilatore per le `#using` direttive, aggiungere `/AI"C:\Project\Meta" /AI"C:\Common\Meta"` alla riga di comando del compilatore o aggiungere ogni directory alla proprietà **#using directory aggiuntive** in Visual Studio.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà generale relativa alle **proprietà di configurazione**  >  **C/C++**  >   .

1. Modificare la proprietà **#using directory aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalUsingDirectories%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[#using (direttiva)](../../preprocessor/hash-using-directive-cpp.md)
