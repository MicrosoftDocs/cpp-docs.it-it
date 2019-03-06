---
title: /TLBOUT (Assegna un nome al file TLB)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.TypeLibraryFile
- /tlbout
helpviewer_keywords:
- tlb files, renaming
- TLBOUT linker option
- /TLBOUT linker option
- .tlb files, renaming
- -TLBOUT linker option
ms.assetid: 0df6d078-2e48-46c9-a1a5-02674d85dce8
ms.openlocfilehash: 3eaf4305c58ca70619e032f80e661b9c768f7813
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57425523"
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
[/IGNOREIDL (non elabora gli attributi in MIDL)](../../build/reference/ignoreidl-don-t-process-attributes-into-midl.md)<br/>
[/MIDL (specifica opzioni della riga di comando MIDL)](../../build/reference/midl-specify-midl-command-line-options.md)<br/>
[Compilazione di un programma con attributi](../../windows/building-an-attributed-program.md)
