---
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
ms.openlocfilehash: 65585b856627ad9fda5a8f8bfad6ad81fef0f81c
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57807650"
---
# <a name="delaysign-partially-sign-an-assembly"></a>/DELAYSIGN (Firma parzialmente un assembly)

```
/DELAYSIGN[:NO]
```

## <a name="arguments"></a>Argomenti

**NO**<br/>
Specifica che l'assembly non deve essere parzialmente firmato.

## <a name="remarks"></a>Note

Uso **/DELAYSIGN** se si vuole solo inserire la chiave pubblica nell'assembly. Il valore predefinito è **/delaysign: No**.

Il **/DELAYSIGN** opzione non ha effetto solo se abbinata [/KEYFILE](keyfile-specify-key-or-key-pair-to-sign-an-assembly.md) oppure [/KEYCONTAINER](keycontainer-specify-a-key-container-to-sign-an-assembly.md).

Quando si richiede un assembly con firma completa, il compilatore genera un hash per il file contenente il manifesto (i metadati dell'assembly) e firma tale hash con la chiave privata. La firma digitale risultante viene archiviata nel file contenente il manifesto. Quando un assembly è impostata la firma ritardata, il linker non di calcolo e archiviazione della firma, ma riserva spazio nel file in modo che la firma può essere aggiunto in un secondo momento.

Ad esempio, usando **/DELAYSIGN** consente a un tester di inserire l'assembly nella cache globale. Al termine del test, è possibile firmare completamente l'assembly inserendo la chiave privata nell'assembly.

Vedere [assembly con nome sicuro (firma degli Assembly) (C + + CLI)](../../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md) e [Delay Signing an Assembly](/dotnet/framework/app-domains/delay-sign-assembly) per altre informazioni su come firmare un assembly.

Altre opzioni del linker che influiscono sulla generazione dell'assembly sono:

- [/ASSEMBLYDEBUG](assemblydebug-add-debuggableattribute.md)

- [/ASSEMBLYLINKRESOURCE](assemblylinkresource-link-to-dotnet-framework-resource.md)

- [/ASSEMBLYMODULE](assemblymodule-add-a-msil-module-to-the-assembly.md)

- [/ASSEMBLYRESOURCE](assemblyresource-embed-a-managed-resource.md)

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
