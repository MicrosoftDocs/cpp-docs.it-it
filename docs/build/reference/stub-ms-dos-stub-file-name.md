---
description: Altre informazioni su:/STUB (nome file stub MS-DOS)
title: /STUB (nome file stub MS-DOS)
ms.date: 11/04/2016
f1_keywords:
- /stub
- VC.Project.VCLinkerTool.DosStub
helpviewer_keywords:
- Win32 [C++], attaching MS-DOS stub program
- STUB linker option
- MS-DOS stub file name linker option
- /STUB linker option
- Windows API [C++], attaching MS-DOS stub program
- -STUB linker option
ms.assetid: 65221ffe-4f9a-4a14-ac69-3cfb79b40b5f
ms.openlocfilehash: 34f3cd71ce66cb6695a58707fd84de79f7a14b1d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97230302"
---
# <a name="stub-ms-dos-stub-file-name"></a>/STUB (nome file stub MS-DOS)

```
/STUB:filename
```

## <a name="arguments"></a>Argomenti

*filename*<br/>
Un'applicazione MS-DOS.

## <a name="remarks"></a>Commenti

L'opzione/STUB connette un programma stub MS-DOS a un programma Win32.

Viene richiamato un programma stub se il file viene eseguito in MS-DOS. Viene in genere visualizzato un messaggio appropriato. Tuttavia, qualsiasi applicazione MS-DOS valida può essere un programma stub.

Specificare un *nome file* per il programma stub dopo i due punti (:) nella riga di comando. Il linker verifica il *nome* del file e genera un messaggio di errore se il file non è un eseguibile. Il programma deve essere un file con estensione exe; un file con estensione com non è valido per un programma stub.

Se questa opzione non viene usata, il linker collega un programma stub predefinito che rilascia il messaggio seguente:

```
This program cannot be run in MS-DOS mode.
```

Quando si compila un driver di dispositivo virtuale, *filename* consente all'utente di specificare un nome di file che contiene una struttura di IMAGE_DOS_HEADER (definita in Winnt. H) da utilizzare nel VXD anziché nell'intestazione predefinita.

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
