---
description: Altre informazioni su:/MACHINE (specifica la piattaforma di destinazione)
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
ms.openlocfilehash: a1bf87142fb99577672391356a43a2771ea0b09f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97190809"
---
# <a name="machine-specify-target-platform"></a>/MACHINE (Specifica la piattaforma di destinazione)

```
/MACHINE:{ARM|EBC|X64|X86}
```

## <a name="remarks"></a>Commenti

L'opzione/MACHINE Specifica la piattaforma di destinazione per il programma.

In genere non è necessario specificare l'opzione /MACHINE. Il collegamento deduce il tipo di computer dai file obj. Tuttavia, in alcune circostanze, il collegamento non è in grado di determinare il tipo di computer e genera un [errore degli strumenti del linker LNK1113](../../error-messages/tool-errors/linker-tools-error-lnk1113.md). Se si verifica un errore di questo tipo, specificare/MACHINE.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **Avanzate** .

1. Modificare la proprietà **computer di destinazione** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TargetMachine%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
