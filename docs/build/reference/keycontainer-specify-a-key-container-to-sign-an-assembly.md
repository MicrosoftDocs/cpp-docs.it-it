---
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
ms.openlocfilehash: 3467350602d0e5b4fbb7df5f92238e18e39532bb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50616567"
---
# <a name="keycontainer-specify-a-key-container-to-sign-an-assembly"></a>/KEYCONTAINER (Specifica un contenitore di chiavi per firmare un assembly)

```
/KEYCONTAINER:name
```

## <a name="arguments"></a>Argomenti

*name*<br/>
Contenitore che contiene la chiave. Racchiudere la stringa tra virgolette doppie ("") se contiene uno spazio.

## <a name="remarks"></a>Note

Il linker crea un assembly firmato inserendo una chiave pubblica nel manifesto dell'assembly e firmando l'assembly finale con la chiave privata. Per generare un file di chiave, digitare [sn -k](/dotnet/framework/tools/sn-exe-strong-name-tool) *filename* nella riga di comando. **sn -i** installa la coppia di chiavi in un contenitore.

Se esegue la compilazione con [/LN](../../build/reference/ln-create-msil-module.md), il nome del file di chiave verrà mantenuto nel modulo e incorporato nell'assembly che viene creato quando si compila un assembly che include un riferimento esplicito per il modulo, tramite [#using](../../preprocessor/hash-using-directive-cpp.md), o durante il collegamento con [/ASSEMBLYMODULE](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md).

È anche possibile passare le informazioni di crittografia per il compilatore con [/KEYFILE](../../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md). Uso [/DELAYSIGN](../../build/reference/delaysign-partially-sign-an-assembly.md) se si desidera che un assembly con firma parziale. Visualizzare [assembly con nome sicuro (firma degli Assembly) (C + + CLI)](../../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md) per altre informazioni su come firmare un assembly.

Altre opzioni del linker che influiscono sulla generazione dell'assembly sono:

- [/ASSEMBLYDEBUG](../../build/reference/assemblydebug-add-debuggableattribute.md)

- [/ASSEMBLYLINKRESOURCE](../../build/reference/assemblylinkresource-link-to-dotnet-framework-resource.md)

- [/ASSEMBLYMODULE](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md)

- [/ASSEMBLYRESOURCE](../../build/reference/assemblyresource-embed-a-managed-resource.md)

- [/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md)

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione nel **opzioni aggiuntive** casella.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)