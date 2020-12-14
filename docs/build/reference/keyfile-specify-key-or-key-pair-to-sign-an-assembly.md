---
description: Altre informazioni su:/KEYFILE (specifica la chiave o la coppia di chiavi per firmare un assembly)
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
ms.openlocfilehash: 23c4962ab57688f5d8c1af27fd412d7d36be01a0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97191160"
---
# <a name="keyfile-specify-key-or-key-pair-to-sign-an-assembly"></a>/KEYFILE (Specifica una chiave o una coppia di chiavi per firmare un assembly)

```
/KEYFILE:filename
```

## <a name="arguments"></a>Argomenti

*filename*<br/>
File contenente la chiave. Inserire la stringa tra virgolette doppie ("") se contiene uno spazio.

## <a name="remarks"></a>Commenti

Il linker inserisce la chiave pubblica nel manifesto dell'assembly e quindi firma l'assembly finale con la chiave privata. Per generare un file di chiave, digitare [sn-k](/dotnet/framework/tools/sn-exe-strong-name-tool) *filename* nella riga di comando. Un assembly firmato ha un nome sicuro.

Se si esegue la compilazione con [/LN](ln-create-msil-module.md), il nome del file di chiave viene mantenuto nel modulo e incorporato nell'assembly creato quando si compila un assembly che include un riferimento esplicito al modulo, tramite [#using](../../preprocessor/hash-using-directive-cpp.md)o quando si esegue il collegamento con [/ASSEMBLYMODULE](assemblymodule-add-a-msil-module-to-the-assembly.md).

È anche possibile passare le informazioni di crittografia al linker con [/keycontainer](keycontainer-specify-a-key-container-to-sign-an-assembly.md). Utilizzare [/delaysign](delaysign-partially-sign-an-assembly.md) se si desidera un assembly parzialmente firmato. Per ulteriori informazioni sulla firma di un assembly, vedere [assembly con nome sicuro (firma degli assembly) (C++/CLI)](../../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md) .

Se vengono specificati sia **/keyfile** che **/keycontainer** (dall'opzione della riga di comando o dall'attributo personalizzato), il linker tenterà innanzitutto il contenitore di chiavi. Se l'operazione riesce, l'assembly viene firmato con le informazioni incluse nel contenitore di chiavi. Se il linker non trova il contenitore di chiavi, proverà il file specificato con/KEYFILE. Se l'operazione riesce, l'assembly verrà firmato con le informazioni contenute nel file di chiave e le informazioni sulla chiave verranno installate nel contenitore di chiavi (in modo analogo a sn -i) in modo che nella compilazione successiva il contenitore di chiavi sia valido.

Si noti che un file di chiave può contenere solo la chiave pubblica.

Per ulteriori informazioni sulla firma di un assembly [, vedere Creazione e utilizzo di assembly Strong-Named](/dotnet/framework/app-domains/create-and-use-strong-named-assemblies) .

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
