---
description: Altre informazioni su:/DELAYSIGN (firma parzialmente un assembly)
title: /DELAYSIGN (Firma parzialmente un assembly)
ms.date: 11/04/2016
f1_keywords:
- /delaysign
- VC.Project.VCLinkerTool.DelaySign
helpviewer_keywords:
- /DELAYSIGN linker option
- DELAYSIGN linker option
- -DELAYSIGN linker option
ms.assetid: 15244d30-3ecb-492f-a408-ffe81f38de20
ms.openlocfilehash: 40eeaef958b6a188fd4739fcdc0f5ef5123b220a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97201482"
---
# <a name="delaysign-partially-sign-an-assembly"></a>/DELAYSIGN (Firma parzialmente un assembly)

```
/DELAYSIGN[:NO]
```

## <a name="arguments"></a>Argomenti

**NO**<br/>
Specifica che l'assembly non deve essere firmato parzialmente.

## <a name="remarks"></a>Commenti

Usare **/delaysign** se si vuole solo inserire la chiave pubblica nell'assembly. Il valore predefinito è **/delaysign: No**.

L'opzione **/delaysign** non ha alcun effetto a meno che non venga usata con [/keyfile](keyfile-specify-key-or-key-pair-to-sign-an-assembly.md) o [/keycontainer](keycontainer-specify-a-key-container-to-sign-an-assembly.md).

Quando si richiede un assembly con firma completa, il compilatore genera un hash per il file contenente il manifesto (i metadati dell'assembly) e firma tale hash con la chiave privata. La firma digitale risultante viene archiviata nel file contenente il manifesto. Quando un assembly è con firma ritardata, il linker non calcola e archivia la firma, ma riserva spazio nel file in modo che la firma possa essere aggiunta in un secondo momento.

Ad esempio, l'uso di **/delaysign** consente a un tester di inserire l'assembly nella cache globale. Dopo il test, è possibile firmare completamente l'assembly inserendo la chiave privata nell'assembly.

Per ulteriori informazioni sulla firma di un assembly, vedere [assembly con nome sicuro (firma degli assembly) (C++/CLI)](../../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md) e [ritardo della firma di un assembly](/dotnet/framework/app-domains/delay-sign-assembly) .

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
