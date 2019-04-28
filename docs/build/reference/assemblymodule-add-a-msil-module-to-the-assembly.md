---
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
ms.openlocfilehash: 728e8a84ff8d1afac99f99dbb975c7fd9360bcc1
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62273017"
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

1. Creare un modulo con [/LN](ln-create-msil-module.md).

1. Usare /ASSEMBLYMODULE in un progetto diverso per includere il modulo nella compilazione corrente, che creerà un assembly. Questo progetto non verrà fatto riferimento il modulo con `#using`.

1. Qualsiasi progetto che fa riferimento questo assembly ora possibile usare anche tipi definiti nel modulo.

Altre opzioni del linker che influiscono sulla generazione dell'assembly sono:

- [/ASSEMBLYDEBUG](assemblydebug-add-debuggableattribute.md)

- [/ASSEMBLYLINKRESOURCE](assemblylinkresource-link-to-dotnet-framework-resource.md)

- [/ASSEMBLYRESOURCE](assemblyresource-embed-a-managed-resource.md)

- [/DELAYSIGN](delaysign-partially-sign-an-assembly.md)

- [/NOASSEMBLY](noassembly-create-a-msil-module.md)

- [/KEYFILE](keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)

- [/KEYCONTAINER](keycontainer-specify-a-key-container-to-sign-an-assembly.md)

Il linker MSVC accetta file con estensione netmodule come input e il file di output generato dal linker sarà un assembly o file con estensione netmodule con alcuna dipendenza dalla fase di esecuzione in uno qualsiasi dei netmodule che sono stati introdotti nel linker.  Per altre informazioni, vedere [File con estensione netmodule come input del linker](netmodule-files-as-linker-input.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **Input** pagina delle proprietà.

1. Modificare il **Aggiungi modulo all'Assembly** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AddModuleNamesToAssembly%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
