---
title: /MACHINE (Specifica la piattaforma di destinazione)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.TargetMachine
- /machine
helpviewer_keywords:
- mapfiles, creating linker
- target platform
- -MACHINE linker option
- /MACHINE linker option
- MACHINE linker option
ms.assetid: 8d41bf4b-7e53-4ab9-9085-d852b08d31c2
ms.openlocfilehash: 713cff8a787b6eb97ad5d9bea32b6fd77fa64f17
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57426576"
---
# <a name="machine-specify-target-platform"></a>/MACHINE (Specifica la piattaforma di destinazione)

```
/MACHINE:{ARM|EBC|X64|X86}
```

## <a name="remarks"></a>Note

L'opzione /MACHINE specifica la piattaforma di destinazione per il programma.

In genere non è necessario specificare l'opzione /MACHINE. COLLEGAMENTO deduce il tipo di computer dai file con estensione obj. In alcuni casi, tuttavia, non è possibile determinare collegamento il tipo di computer e i problemi di un [degli strumenti del linker LNK1113 errore](../../error-messages/tool-errors/linker-tools-error-lnk1113.md). Se si verifica questo errore, specificare questa opzione.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **avanzate** pagina delle proprietà.

1. Modificare il **inviala** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TargetMachine%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)
