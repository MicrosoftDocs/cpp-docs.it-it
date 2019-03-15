---
title: /ASSEMBLYLINKRESOURCE (Collegamento a risorse .NET Framework)
ms.date: 11/04/2016
f1_keywords:
- /ASSEMBLYLINKRESOURCE
- VC.Project.VCLinkerTool.AssemblyLinkResource
helpviewer_keywords:
- -ASSEMBLYLINKRESOURCE linker option
- ASSEMBLYLINKRESOURCE linker option
- /ASSEMBLYLINKRESOURCE linker option
ms.assetid: 8b6ad184-1b33-47a4-8513-4803cf915b64
ms.openlocfilehash: fb707a2721ed40ee3ec37d01b2bbcfcc51f05c38
ms.sourcegitcommit: faa42c8a051e746d99dcebe70fd4bbaf3b023ace
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/15/2019
ms.locfileid: "57807806"
---
# <a name="assemblylinkresource-link-to-net-framework-resource"></a>/ASSEMBLYLINKRESOURCE (Collegamento a risorse .NET Framework)

```
/ASSEMBLYLINKRESOURCE:filename
```

## <a name="arguments"></a>Argomenti

*filename*<br/>
File di risorse .NET Framework a cui si vuole stabilire un collegamento dall'assembly.

## <a name="remarks"></a>Note

L'opzione /ASSEMBLYLINKRESOURCE crea un collegamento a una risorsa di .NET Framework nel file di output. il file di risorse non viene inserito nel file di output. [/ASSEMBLYRESOURCE](assemblyresource-embed-a-managed-resource.md) incorpora un file di risorse nel file di output.

Le risorse collegate sono pubbliche nell'assembly quando viene creato con il linker.

/ASSEMBLYLINKRESOURCE richiede che la compilazione includa [/clr](clr-common-language-runtime-compilation.md); [/LN](ln-create-msil-module.md) oppure [/NOASSEMBLY](noassembly-create-a-msil-module.md) non è consentita con /ASSEMBLYLINKRESOURCE.

Se *nomefile* è un file di risorse .NET Framework creato ad esempio, dal [Resgen.exe](/dotnet/framework/tools/resgen-exe-resource-file-generator) oppure nell'ambiente di sviluppo, è possibile accedervi tramite i membri di **System. Resources** dello spazio dei nomi. Per altre informazioni, vedere [System.Resources.ResourceManager](/dotnet/api/system.resources.resourcemanager). Per tutte le altre risorse, usare il **GetManifestResource** \* metodi nel **System** classe per accedere alla risorsa in fase di esecuzione.

*nome del file* può avere qualsiasi formato di file. Ad esempio, è possibile apportare una DLL nativa parte dell'assembly, per cui può essere installato nella Global Assembly Cache e accedervi dal codice gestito nell'assembly.

Altre opzioni del linker che influiscono sulla generazione dell'assembly sono:

- [/ASSEMBLYDEBUG](assemblydebug-add-debuggableattribute.md)

- [/ASSEMBLYMODULE](assemblymodule-add-a-msil-module-to-the-assembly.md)

- [/ASSEMBLYRESOURCE](assemblyresource-embed-a-managed-resource.md)

- [/DELAYSIGN](delaysign-partially-sign-an-assembly.md)

- [/KEYCONTAINER](keycontainer-specify-a-key-container-to-sign-an-assembly.md)

- [/KEYFILE](keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)

- [/NOASSEMBLY](noassembly-create-a-msil-module.md)

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione nel **opzioni aggiuntive** casella.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
