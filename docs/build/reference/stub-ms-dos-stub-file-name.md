---
title: -STUB (nome File Stub MS-DOS) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /stub
- VC.Project.VCLinkerTool.DosStub
dev_langs:
- C++
helpviewer_keywords:
- Win32 [C++], attaching MS-DOS stub program
- STUB linker option
- MS-DOS stub file name linker option
- /STUB linker option
- Windows API [C++], attaching MS-DOS stub program
- -STUB linker option
ms.assetid: 65221ffe-4f9a-4a14-ac69-3cfb79b40b5f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0c279d6f33befb4c308afe0c92b7dcca3d45ba66
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45707720"
---
# <a name="stub-ms-dos-stub-file-name"></a>/STUB (nome file stub MS-DOS)

```
/STUB:filename
```

## <a name="arguments"></a>Argomenti

*filename*<br/>
Un'applicazione MS-DOS.

## <a name="remarks"></a>Note

L'opzione /STUB connette un programma stub MS-DOS a un programma Win32.

Se il file viene eseguito in MS-DOS, viene richiamato un programma stub. In genere viene visualizzato un messaggio appropriato. Tuttavia, qualsiasi applicazione MS-DOS valida può essere un programma stub.

Specificare una *filename* per il programma stub dopo i due punti (:) nella riga di comando. I controlli del linker *filename* e genera un messaggio di errore se il file non è un file eseguibile. Il programma deve essere un file .exe. un file. com non è valido per un programma stub.

Se non viene utilizzata questa opzione, il linker collega un programma stub predefinito che rilascia il messaggio seguente:

```
This program cannot be run in MS-DOS mode.
```

Durante la creazione di un driver di dispositivo virtuale *filename* consente all'utente di specificare un nome di file che contiene una struttura IMAGE_DOS_HEADER (definita in WINNT. H) da utilizzare in VXD, anziché l'intestazione predefinita.

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