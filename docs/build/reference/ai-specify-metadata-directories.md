---
title: -AI (specifica le directory di metadati) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCCLCompilerTool.AdditionalUsingDirectories
- VC.Project.VCNMakeTool.AssemblySearchPath
- /AI
- VC.Project.VCCLWCECompilerTool.AdditionalUsingDirectories
dev_langs:
- C++
helpviewer_keywords:
- /AI compiler option [C++]
- AI compiler option [C++]
- -AI compiler option [C++]
ms.assetid: fb9c1846-504c-4a3b-bb39-c8696de32f6f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6f932e186630d1bc6c846c78af99f98262861068
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44110669"
---
# <a name="ai-specify-metadata-directories"></a>/AI (Specifica le directory di metadati)

Specifica una directory in cui il compilatore effettuerà la ricerca per risolvere i riferimenti di file passati alla direttiva `#using`.

## <a name="syntax"></a>Sintassi

> **/AI**_directory_

## <a name="arguments"></a>Argomenti

*Directory*<br/>
Directory o percorso in cui il compilatore effettua la ricerca.

## <a name="remarks"></a>Note
Una sola directory può essere passata a un **/AI** chiamata. Specificare una **/AI** opzione per ogni percorso in cui il compilatore effettuerà la ricerca. Ad esempio, per aggiungere C:\Project\Meta e C:\Common\Meta al percorso di ricerca del compilatore per `#using` direttive, aggiungere `/AI"C:\Project\Meta" /AI"C:\Common\Meta"` alla riga di comando del compilatore o aggiungere ogni directory per il **aggiuntive #using directory** proprietà in Visual Studio.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

2. Selezionare il **le proprietà di configurazione** > **C/C++** > **generale** pagina delle proprietà.

3. Modificare il **aggiuntive #using directory** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalUsingDirectories%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)   
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
[Direttiva #using](../../preprocessor/hash-using-directive-cpp.md)