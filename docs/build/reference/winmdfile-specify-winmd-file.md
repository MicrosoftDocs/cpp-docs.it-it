---
title: /WINMDFILE (specificare il file winmd)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.GenerateWindowsMetadataFile
ms.assetid: 062b41b3-14d6-432c-a361-fdb66e918931
ms.openlocfilehash: 5d24d1d1aad8442f549dcb1aa4bd6414070c282c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62316483"
---
# <a name="winmdfile-specify-winmd-file"></a>/WINMDFILE (specificare il file winmd)

Specifica il nome di file per il file di output di metadati di Windows Runtime (winmd) generato dal [/WINMD](winmd-generate-windows-metadata.md) l'opzione del linker.

```
/WINMDFILE:filename
```

## <a name="remarks"></a>Note

Utilizzare il valore specificato in `filename` per eseguire l'override del nome file predefinito con estensione winmd (`binaryname`.winmd). Si noti che non si aggiunge ". winmd" a `filename`.  Se più valori sono elencati nella **/WINMDFILE** riga di comando, l'ultimo metodo ha la precedenza.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **Linker** cartella.

1. Selezionare il **metadati Windows** pagina delle proprietà.

1. Nel **File di metadati Windows** immettere il percorso del file.

## <a name="see-also"></a>Vedere anche

[/WINMD (genera metadati di Windows)](winmd-generate-windows-metadata.md)<br/>
[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
