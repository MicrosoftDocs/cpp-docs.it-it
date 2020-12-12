---
description: Altre informazioni su:/NOASSEMBLY (crea un modulo MSIL)
title: /NOASSEMBLY (Crea un modulo MSIL)
ms.date: 11/04/2016
f1_keywords:
- /NOASSEMBLY
- VC.Project.VCLinkerTool.TurnOffAssemblyGeneration
helpviewer_keywords:
- assemblies [C++]
- -NOASSEMBLY linker option
- /NOASSEMBLY linker option
- NOASSEMBLY linker option
- assemblies [C++], not creating an assembly
ms.assetid: 3cea4e70-f451-4395-a626-1930b1b127fe
ms.openlocfilehash: 5eb63abf4d38b97f96a9f08ebb629bda1a89482d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97196724"
---
# <a name="noassembly-create-a-msil-module"></a>/NOASSEMBLY (Crea un modulo MSIL)

```
/NOASSEMBLY
```

## <a name="remarks"></a>Commenti

L'opzione/NOASSEMBLY indica al linker di creare un'immagine per il file di output corrente senza un assembly .NET Framework. Un file di output MSIL senza un manifesto dell'assembly viene chiamato modulo.

Per impostazione predefinita, viene creato un assembly. È anche possibile usare l'opzione del compilatore [/LN (create MSIL Module)](ln-create-msil-module.md) per creare un modulo.

Altre opzioni del linker che influiscono sulla generazione degli assembly sono:

- [/ASSEMBLYDEBUG](assemblydebug-add-debuggableattribute.md)

- [/ASSEMBLYLINKRESOURCE](assemblylinkresource-link-to-dotnet-framework-resource.md)

- [/ASSEMBLYMODULE](assemblymodule-add-a-msil-module-to-the-assembly.md)

- [/ASSEMBLYRESOURCE](assemblyresource-embed-a-managed-resource.md)

- [/DELAYSIGN](delaysign-partially-sign-an-assembly.md)

- [/KEYFILE](keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)

- [/KEYCONTAINER](keycontainer-specify-a-key-container-to-sign-an-assembly.md)

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **Avanzate** .

1. Modificare la proprietà **Disattiva generazione assembly** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TurnOffAssemblyGeneration%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
