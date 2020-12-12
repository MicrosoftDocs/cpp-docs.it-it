---
description: Altre informazioni su:/ASSEMBLYMODULE (aggiunge un modulo MSIL all'assembly)
title: /ASSEMBLYMODULE (Aggiunge un modulo MSIL all'assembly)
ms.date: 11/04/2016
f1_keywords:
- /assemblymodule
- VC.Project.VCLinkerTool.AddModuleNamesToAssembly
helpviewer_keywords:
- ASSEMBLYMODULE linker option
- assemblies [C++], adding modules to
- assemblies [C++]
- /ASSEMBLYMODULE linker option
- -ASSEMBLYMODULE linker option
ms.assetid: 67357da8-e4b6-49fd-932c-329a5777f143
ms.openlocfilehash: d56895b6bec05efda1104e319e93a040f818e06e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97182944"
---
# <a name="assemblymodule-add-a-msil-module-to-the-assembly"></a>/ASSEMBLYMODULE (Aggiunge un modulo MSIL all'assembly)

```
/ASSEMBLYMODULE:filename
```

## <a name="arguments"></a>Argomenti

*filename*<br/>
Il modulo che si desidera includere nell'assembly.

## <a name="remarks"></a>Commenti

L'opzione/ASSEMBLYMODULE consente di aggiungere un riferimento al modulo a un assembly. Le informazioni sul tipo nel modulo non saranno disponibili per il programma assembly che ha aggiunto il riferimento al modulo. Tuttavia, le informazioni sul tipo nel modulo saranno disponibili per tutti i programmi che fanno riferimento all'assembly.

Usare [#using](../../preprocessor/hash-using-directive-cpp.md) per aggiungere un riferimento al modulo a un assembly e rendere disponibili le informazioni sul tipo del modulo per il programma assembly.

Prendere ad esempio in considerazione i seguenti scenari:

1. Creare un modulo con [/LN](ln-create-msil-module.md).

1. Usare/ASSEMBLYMODULE in un progetto diverso per includere il modulo nella compilazione corrente, in modo da creare un assembly. Questo progetto non fa riferimento al modulo con `#using` .

1. Tutti i progetti che fanno riferimento a questo assembly possono ora usare anche i tipi del modulo.

Altre opzioni del linker che influiscono sulla generazione degli assembly sono:

- [/ASSEMBLYDEBUG](assemblydebug-add-debuggableattribute.md)

- [/ASSEMBLYLINKRESOURCE](assemblylinkresource-link-to-dotnet-framework-resource.md)

- [/ASSEMBLYRESOURCE](assemblyresource-embed-a-managed-resource.md)

- [/DELAYSIGN](delaysign-partially-sign-an-assembly.md)

- [/NOASSEMBLY](noassembly-create-a-msil-module.md)

- [/KEYFILE](keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)

- [/KEYCONTAINER](keycontainer-specify-a-key-container-to-sign-an-assembly.md)

Il linker MSVC accetta i file con estensione netmodule come input e il file di output prodotto dal linker sarà un assembly o un file con estensione netmodule senza dipendenze in fase di esecuzione da nessuno dei file con estensione netmodule che sono stati inseriti nel linker.  Per altre informazioni, vedere [File con estensione netmodule come input del linker](netmodule-files-as-linker-input.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **input** .

1. Modificare la proprietà **Aggiungi modulo a assembly** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AddModuleNamesToAssembly%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
