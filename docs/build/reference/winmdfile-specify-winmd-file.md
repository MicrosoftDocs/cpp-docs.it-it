---
title: /WINMDFILE (specificare il file winmd)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.GenerateWindowsMetadataFile
ms.assetid: 062b41b3-14d6-432c-a361-fdb66e918931
ms.openlocfilehash: 74958e51925b9ed6d1382efe76fe587eed73f4e7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50656054"
---
# <a name="winmdfile-specify-winmd-file"></a>/WINMDFILE (specificare il file winmd)

Specifica il nome di file per il file di output di metadati di Windows Runtime (winmd) generato dal [/WINMD](../../build/reference/winmd-generate-windows-metadata.md) l'opzione del linker.

```
/WINMDFILE:filename
```

## <a name="remarks"></a>Note

Utilizzare il valore specificato in `filename` per eseguire l'override del nome file predefinito con estensione winmd (`binaryname`.winmd). Si noti che non si aggiunge ". winmd" a `filename`.  Se più valori sono elencati nella **/WINMDFILE** riga di comando, l'ultimo metodo ha la precedenza.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **Linker** cartella.

1. Selezionare il **metadati Windows** pagina delle proprietà.

1. Nel **File di metadati Windows** immettere il percorso del file.

## <a name="see-also"></a>Vedere anche

[/WINMD (genera metadati di Windows)](../../build/reference/winmd-generate-windows-metadata.md)<br/>
[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)