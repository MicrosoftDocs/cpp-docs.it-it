---
description: Altre informazioni su:/KEYCONTAINER (specifica un contenitore di chiavi per la firma di un assembly)
title: /KEYCONTAINER (Specifica un contenitore di chiavi per firmare un assembly)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.KeyContainer
- /keycontainer
helpviewer_keywords:
- KEYCONTAINER linker option
- /KEYCONTAINER linker option
- -KEYCONTAINER linker option
ms.assetid: 94882d12-b77a-49c7-96d0-18a31aee001e
ms.openlocfilehash: 5f32fdc5400103d4038139fa2dfe9409c9740236
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97199584"
---
# <a name="keycontainer-specify-a-key-container-to-sign-an-assembly"></a>/KEYCONTAINER (Specifica un contenitore di chiavi per firmare un assembly)

```
/KEYCONTAINER:name
```

## <a name="arguments"></a>Argomenti

*nome*<br/>
Contenitore contenente la chiave. Inserire la stringa tra virgolette doppie ("") se contiene uno spazio.

## <a name="remarks"></a>Commenti

Il linker crea un assembly firmato inserendo una chiave pubblica nel manifesto dell'assembly e firmando l'assembly finale con la chiave privata. Per generare un file di chiave, digitare [sn-k](/dotnet/framework/tools/sn-exe-strong-name-tool) *filename* nella riga di comando. **sn-i** installa la coppia di chiavi in un contenitore.

Se si esegue la compilazione con [/LN](ln-create-msil-module.md), il nome del file di chiave viene mantenuto nel modulo e incorporato nell'assembly creato quando si compila un assembly che include un riferimento esplicito al modulo, tramite [#using](../../preprocessor/hash-using-directive-cpp.md)o quando si esegue il collegamento con [/ASSEMBLYMODULE](assemblymodule-add-a-msil-module-to-the-assembly.md).

È anche possibile passare le informazioni di crittografia al compilatore con [/keyfile](keyfile-specify-key-or-key-pair-to-sign-an-assembly.md). Utilizzare [/delaysign](delaysign-partially-sign-an-assembly.md) se si desidera un assembly parzialmente firmato. Per ulteriori informazioni sulla firma di un assembly, vedere [assembly con nome sicuro (firma degli assembly) (C++/CLI)](../../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md) .

Altre opzioni del linker che influiscono sulla generazione degli assembly sono:

- [/ASSEMBLYDEBUG](assemblydebug-add-debuggableattribute.md)

- [/ASSEMBLYLINKRESOURCE](assemblylinkresource-link-to-dotnet-framework-resource.md)

- [/ASSEMBLYMODULE](assemblymodule-add-a-msil-module-to-the-assembly.md)

- [/ASSEMBLYRESOURCE](assemblyresource-embed-a-managed-resource.md)

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
