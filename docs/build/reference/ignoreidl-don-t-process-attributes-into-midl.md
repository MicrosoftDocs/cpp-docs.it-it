---
description: Altre informazioni su:/IGNOREIDL (Don&#39;t elabora gli attributi in MIDL)
title: /IGNOREIDL (Don&#39;t elabora gli attributi in MIDL)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.IgnoreEmbeddedIDL
- /ignoreidl
helpviewer_keywords:
- IGNOREIDL linker option
- -IGNOREIDL linker option
- /IGNOREIDL linker option
ms.assetid: 29514098-6a1c-4317-af2f-1dc268972780
ms.openlocfilehash: c68b3ec2f9bd5607ef523667bcddc68b22d3c34c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97199818"
---
# <a name="ignoreidl-don39t-process-attributes-into-midl"></a>/IGNOREIDL (Don&#39;t elabora gli attributi in MIDL)

```
/IGNOREIDL
```

## <a name="remarks"></a>Commenti

L'opzione/IGNOREIDL specifica che [gli eventuali attributi IDL](../../windows/attributes/idl-attributes.md) presenti nel codice sorgente non devono essere elaborati in un file con estensione IDL.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **IDL incorporato** .

1. Modificare la proprietà **IDL incorporato di ignore** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreEmbeddedIDL%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)<br/>
[/IDLOUT (assegnare un nome ai file di output MIDL)](idlout-name-midl-output-files.md)<br/>
[/TLBOUT (nome. File TLB)](tlbout-name-dot-tlb-file.md)<br/>
[/MIDL (specifica le opzioni della riga di comando MIDL)](midl-specify-midl-command-line-options.md)<br/>
[Compilazione di un programma con attributi](../../windows/attributes/cpp-attributes-com-net.md)
