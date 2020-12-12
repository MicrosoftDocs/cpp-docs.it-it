---
description: Altre informazioni su:/ASSEMBLYLINKRESOURCE (collegamento alla risorsa .NET Framework)
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
ms.openlocfilehash: 32761cb16e8428d5e3c18330dffb49a50a42903c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97183009"
---
# <a name="assemblylinkresource-link-to-net-framework-resource"></a>/ASSEMBLYLINKRESOURCE (Collegamento a risorse .NET Framework)

```
/ASSEMBLYLINKRESOURCE:filename
```

## <a name="arguments"></a>Argomenti

*filename*<br/>
File di risorse .NET Framework a cui si vuole stabilire un collegamento dall'assembly.

## <a name="remarks"></a>Commenti

L'opzione/ASSEMBLYLINKRESOURCE crea un collegamento a una risorsa .NET Framework nel file di output. il file di risorse non viene inserito nel file di output. [/ASSEMBLYRESOURCE](assemblyresource-embed-a-managed-resource.md) incorpora un file di risorse nel file di output.

Le risorse collegate sono pubbliche nell'assembly quando vengono create con il linker.

/ASSEMBLYLINKRESOURCE richiede che la compilazione includa [/CLR](clr-common-language-runtime-compilation.md). [/LN](ln-create-msil-module.md) o [/NOASSEMBLY](noassembly-create-a-msil-module.md) non è consentito con/ASSEMBLYLINKRESOURCE.

Se *filename* è un file di risorse .NET Framework creato, ad esempio [Resgen.exe](/dotnet/framework/tools/resgen-exe-resource-file-generator) o nell'ambiente di sviluppo, è possibile accedervi con membri nello spazio dei nomi **System. resources** . Per altre informazioni, vedere [System. resources. ResourceManager](/dotnet/api/system.resources.resourcemanager). Per tutte le altre risorse, usare i metodi **GetManifestResource** della \* classe **System. Reflection. assembly** per accedere alla risorsa in fase di esecuzione.

*filename* può essere qualsiasi formato di file. È possibile, ad esempio, creare una parte DLL nativa dell'assembly, in modo che possa essere installata nella global assembly cache e accessibile dal codice gestito nell'assembly.

Altre opzioni del linker che influiscono sulla generazione degli assembly sono:

- [/ASSEMBLYDEBUG](assemblydebug-add-debuggableattribute.md)

- [/ASSEMBLYMODULE](assemblymodule-add-a-msil-module-to-the-assembly.md)

- [/ASSEMBLYRESOURCE](assemblyresource-embed-a-managed-resource.md)

- [/DELAYSIGN](delaysign-partially-sign-an-assembly.md)

- [/KEYCONTAINER](keycontainer-specify-a-key-container-to-sign-an-assembly.md)

- [/KEYFILE](keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)

- [/NOASSEMBLY](noassembly-create-a-msil-module.md)

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
