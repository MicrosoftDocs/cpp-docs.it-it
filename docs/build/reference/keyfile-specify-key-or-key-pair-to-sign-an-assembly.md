---
title: /KEYFILE (Specifica una chiave o una coppia di chiavi per firmare un assembly)
ms.date: 11/04/2016
f1_keywords:
- /keyfile
- VC.Project.VCLinkerTool.KeyFile
helpviewer_keywords:
- /KEYFILE linker option
- -KEYFILE linker option
- KEYFILE linker option
ms.assetid: 9b71f8c0-541c-4fe5-a0c7-9364f42ecb06
ms.openlocfilehash: 6896993f7be8e088242e8a2e3279aa1f6c9a721d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50524956"
---
# <a name="keyfile-specify-key-or-key-pair-to-sign-an-assembly"></a>/KEYFILE (Specifica una chiave o una coppia di chiavi per firmare un assembly)

```
/KEYFILE:filename
```

## <a name="arguments"></a>Argomenti

*filename*<br/>
File che contiene la chiave. Racchiudere la stringa tra virgolette doppie ("") se contiene uno spazio.

## <a name="remarks"></a>Note

Il linker inserisce la chiave pubblica nel manifesto dell'assembly e quindi firma l'assembly finale con la chiave privata. Per generare un file di chiave, digitare [sn -k](/dotnet/framework/tools/sn-exe-strong-name-tool) *filename* nella riga di comando. Un assembly firmato si dice che ha un nome sicuro.

Se esegue la compilazione con [/LN](../../build/reference/ln-create-msil-module.md), il nome del file di chiave verrà mantenuto nel modulo e incorporato nell'assembly che viene creato quando si compila un assembly che include un riferimento esplicito per il modulo, tramite [#using](../../preprocessor/hash-using-directive-cpp.md), o durante il collegamento con [/ASSEMBLYMODULE](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md).

È anche possibile passare le informazioni di crittografia per il linker con [/KEYCONTAINER](../../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md). Uso [/DELAYSIGN](../../build/reference/delaysign-partially-sign-an-assembly.md) se si desidera che un assembly con firma parziale. Visualizzare [assembly con nome sicuro (firma degli Assembly) (C + + CLI)](../../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md) per altre informazioni su come firmare un assembly.

In entrambi casi **/KEYFILE** e **/KEYCONTAINER** vengono specificate (tramite opzione della riga di comando o attributo personalizzato), il linker tenterà prima il contenitore di chiavi. Se l'operazione riesce, l'assembly viene firmato con le informazioni incluse nel contenitore di chiavi. Se il linker non trova il contenitore di chiavi, proverà con /KEYFILE il file specificato. Se l'operazione riesce, l'assembly verrà firmato con le informazioni contenute nel file di chiave e le informazioni sulla chiave verranno installate nel contenitore di chiavi (in modo analogo a sn -i) in modo che nella compilazione successiva il contenitore di chiavi sia valido.

Si noti che un file di chiave può contenere solo la chiave pubblica.

Visualizzare [creazione e assembly con nome sicuro](/dotnet/framework/app-domains/create-and-use-strong-named-assemblies) per altre informazioni su come firmare un assembly.

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