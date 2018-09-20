---
title: -IGNOREIDL (Don&#39;t elabora gli attributi in MIDL) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.IgnoreEmbeddedIDL
- /ignoreidl
dev_langs:
- C++
helpviewer_keywords:
- IGNOREIDL linker option
- -IGNOREIDL linker option
- /IGNOREIDL linker option
ms.assetid: 29514098-6a1c-4317-af2f-1dc268972780
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9c06e06633e6d0a990c72ebb65a4bd999df45a55
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46406672"
---
# <a name="ignoreidl-don39t-process-attributes-into-midl"></a>/IGNOREIDL (Don&#39;t elabora gli attributi in MIDL)

```
/IGNOREIDL
```

## <a name="remarks"></a>Note

L'opzione /IGNOREIDL specifica che eventuali [attributi IDL](../../windows/idl-attributes.md) nell'origine codice non deve essere elaborato in un file IDL.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **IDL incorporato** pagina delle proprietà.

1. Modificare il **Ignora IDL incorporate** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreEmbeddedIDL%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)<br/>
[/IDLOUT (assegna un nome ai file di output MIDL)](../../build/reference/idlout-name-midl-output-files.md)<br/>
[/TLBOUT (denomina un file TLB)](../../build/reference/tlbout-name-dot-tlb-file.md)<br/>
[/MIDL (specifica opzioni della riga di comando MIDL)](../../build/reference/midl-specify-midl-command-line-options.md)<br/>
[Compilazione di un programma con attributi](../../windows/building-an-attributed-program.md)