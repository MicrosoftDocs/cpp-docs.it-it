---
title: -TLBOUT (nome. Al File TLB) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.TypeLibraryFile
- /tlbout
dev_langs:
- C++
helpviewer_keywords:
- tlb files, renaming
- TLBOUT linker option
- /TLBOUT linker option
- .tlb files, renaming
- -TLBOUT linker option
ms.assetid: 0df6d078-2e48-46c9-a1a5-02674d85dce8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1c44028f834d2b3200b970fdc613d0bf4d4efd29
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45702858"
---
# <a name="tlbout-name-tlb-file"></a>/TLBOUT (Assegna un nome al file TLB)

```
/TLBOUT:[path\]filename
```

## <a name="arguments"></a>Argomenti

*path*<br/>
Specifica un percorso assoluto o relativo per in cui deve essere creato il file con estensione tlb.

*filename*<br/>
Specifica il nome del file con estensione tlb creato dal compilatore MIDL. Non presuppone alcuna estensione di file; specificare *filename*tlb se si desidera che l'estensione tlb.

## <a name="remarks"></a>Note

L'opzione /TLBOUT specifica il nome e l'estensione del file con estensione tlb.

Il compilatore MIDL viene chiamato dal linker di Visual C++ quando si collegano i progetti con la [modulo](../../windows/module-cpp.md) attributo.

Se non viene specificata l'opzione /TLBOUT, il file con estensione tlb otterrà il nome dalla [/IDLOUT](../../build/reference/idlout-name-midl-output-files.md) *filename*. Se /IDLOUT non viene specificato, verrà chiamato il file con estensione tlb vc70.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **IDL incorporato** pagina delle proprietà.

1. Modificare il **libreria dei tipi** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TypeLibraryFile%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)<br/>
[/IGNOREIDL (non elabora gli attributi in MIDL)](../../build/reference/ignoreidl-don-t-process-attributes-into-midl.md)
[/MIDL (Specifica opzioni della riga di comando MIDL)](../../build/reference/midl-specify-midl-command-line-options.md)
[la creazione di un programma con attributi](../../windows/building-an-attributed-program.md)