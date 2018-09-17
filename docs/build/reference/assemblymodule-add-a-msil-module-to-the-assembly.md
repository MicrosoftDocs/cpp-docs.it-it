---
title: -ASSEMBLYMODULE (aggiunge un modulo MSIL all'Assembly) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /assemblymodule
- VC.Project.VCLinkerTool.AddModuleNamesToAssembly
dev_langs:
- C++
helpviewer_keywords:
- ASSEMBLYMODULE linker option
- assemblies [C++], adding modules to
- assemblies [C++]
- /ASSEMBLYMODULE linker option
- -ASSEMBLYMODULE linker option
ms.assetid: 67357da8-e4b6-49fd-932c-329a5777f143
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8c1b5104a264a3fbeeada080b6c34a6b1c5e23ca
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45703937"
---
# <a name="assemblymodule-add-a-msil-module-to-the-assembly"></a>/ASSEMBLYMODULE (Aggiunge un modulo MSIL all'assembly)

```
/ASSEMBLYMODULE:filename
```

## <a name="arguments"></a>Argomenti

*filename*<br/>
Il modulo da includere in questo assembly.

## <a name="remarks"></a>Note

L'opzione /ASSEMBLYMODULE consente di aggiungere un riferimento del modulo a un assembly. Informazioni sul tipo nel modulo non sarà disponibile per il programma assembly a cui aggiunta il riferimento modulo. Tuttavia, le informazioni sul tipo nel modulo saranno disponibili a qualsiasi programma che fa riferimento all'assembly.

Uso [#using](../../preprocessor/hash-using-directive-cpp.md) per aggiungere un riferimento del modulo a un assembly e rendere disponibili per il programma assembly le informazioni di tipo del modulo.

Prendere ad esempio in considerazione i seguenti scenari:

1. Creare un modulo con [/LN](../../build/reference/ln-create-msil-module.md).

1. Usare /ASSEMBLYMODULE in un progetto diverso per includere il modulo nella compilazione corrente, che creerà un assembly. Questo progetto non verrà fatto riferimento il modulo con `#using`.

1. Qualsiasi progetto che fa riferimento questo assembly ora possibile usare anche tipi definiti nel modulo.

Altre opzioni del linker che influiscono sulla generazione dell'assembly sono:

- [/ASSEMBLYDEBUG](../../build/reference/assemblydebug-add-debuggableattribute.md)

- [/ASSEMBLYLINKRESOURCE](../../build/reference/assemblylinkresource-link-to-dotnet-framework-resource.md)

- [/ASSEMBLYRESOURCE](../../build/reference/assemblyresource-embed-a-managed-resource.md)

- [/DELAYSIGN](../../build/reference/delaysign-partially-sign-an-assembly.md)

- [/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md)

- [/KEYFILE](../../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)

- [/KEYCONTAINER](../../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md)

Il linker di Visual C++ accetta i file con estensione netmodule come input e il file di output generato dal linker sarà un assembly o un file netmodule senza dipendenza di runtime dai file netmodule che sono stati introdotti nel linker.  Per altre informazioni, vedere [File con estensione netmodule come input del linker](../../build/reference/netmodule-files-as-linker-input.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **Input** pagina delle proprietà.

1. Modificare il **Aggiungi modulo all'Assembly** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AddModuleNamesToAssembly%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)