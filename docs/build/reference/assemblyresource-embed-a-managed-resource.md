---
description: Altre informazioni su:/ASSEMBLYRESOURCE (incorpora una risorsa gestita)
title: /ASSEMBLYRESOURCE (Incorpora una risorsa gestita)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.EmbedManagedResourceFile
- /ASSEMBLYRESOURCE
helpviewer_keywords:
- ASSEMBLYRESOURCE linker option
- assemblies [C++]
- -ASSEMBLYRESOURCE linker option
- assemblies [C++], linking resource files
- /ASSEMBLYRESOURCE linker option
ms.assetid: 0ce6e1fb-921b-4b1b-a59c-d35388d789f2
ms.openlocfilehash: 3f79cc177df72bb83288a0a229fdf47adb0e7fc0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97182918"
---
# <a name="assemblyresource-embed-a-managed-resource"></a>/ASSEMBLYRESOURCE (Incorpora una risorsa gestita)

```
/ASSEMBLYRESOURCE:filename[,[name][,PRIVATE]]
```

## <a name="parameters"></a>Parametri

*filename*<br/>
Risorsa gestita da incorporare nell'assembly.

*nome*<br/>
facoltativo. Nome logico della risorsa. nome usato per caricare la risorsa. L'impostazione predefinita corrisponde al nome del file.

Facoltativamente, è possibile specificare se il file deve essere privato nel manifesto dell'assembly. Per impostazione predefinita, il *nome* è pubblico nell'assembly.

## <a name="remarks"></a>Commenti

Usare l'opzione/ASSEMBLYRESOURCE per incorporare una risorsa in un assembly.

Le risorse sono pubbliche nell'assembly quando vengono create con il linker. Il linker non consente di rinominare la risorsa nell'assembly.

Se *filename* è un file di risorse .NET Framework (con estensione resources) creato, ad esempio dal [Generatore di file di risorse (Resgen.exe)](/dotnet/framework/tools/resgen-exe-resource-file-generator) o dall'ambiente di sviluppo, è possibile accedervi con i membri dello spazio dei nomi **System. resources** . per altre informazioni, vedere [System. resources. ResourceManager](/dotnet/api/system.resources.resourcemanager) . Per tutte le altre risorse, usare i metodi **GetManifestResource** \* della classe **System. Reflection. assembly** per accedere alla risorsa in fase di esecuzione.

Altre opzioni del linker che influiscono sulla generazione degli assembly sono:

- [/ASSEMBLYDEBUG](assemblydebug-add-debuggableattribute.md)

- [/ASSEMBLYLINKRESOURCE](assemblylinkresource-link-to-dotnet-framework-resource.md)

- [/ASSEMBLYMODULE](assemblymodule-add-a-msil-module-to-the-assembly.md)

- [/DELAYSIGN](delaysign-partially-sign-an-assembly.md)

- [/KEYFILE](keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)

- [/KEYCONTAINER](keycontainer-specify-a-key-container-to-sign-an-assembly.md)

- [/NOASSEMBLY](noassembly-create-a-msil-module.md)

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **input** .

1. Modificare la proprietà **Incorpora file di risorse gestite** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EmbedManagedResourceFile%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
