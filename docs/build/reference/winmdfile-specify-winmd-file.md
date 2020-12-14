---
description: Altre informazioni su:/WINMDFILE (specifica il file winmd)
title: /WINMDFILE (specificare il file winmd)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.GenerateWindowsMetadataFile
ms.assetid: 062b41b3-14d6-432c-a361-fdb66e918931
ms.openlocfilehash: fd10768c494bbedfbe650e0f0e3e72e8a062cdc1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97259019"
---
# <a name="winmdfile-specify-winmd-file"></a>/WINMDFILE (specificare il file winmd)

Specifica il nome file per il file di output dei metadati Windows Runtime (WinMD) generato dall'opzione del linker [/WinMD](winmd-generate-windows-metadata.md) .

```
/WINMDFILE:filename
```

## <a name="remarks"></a>Commenti

Utilizzare il valore specificato in `filename` per eseguire l'override del nome file predefinito con estensione winmd (`binaryname`.winmd). Si noti che non si aggiunge ". winmd" a `filename` .  Se nella riga di comando di **/WINMDFILE** sono elencati più valori, l'ultimo avrà la precedenza.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la cartella **linker** .

1. Selezionare la pagina delle proprietà **metadati di Windows** .

1. Nella casella **file di metadati Windows** immettere il percorso del file.

## <a name="see-also"></a>Vedi anche

[/WINMD (genera metadati di Windows)](winmd-generate-windows-metadata.md)<br/>
[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
