---
title: -WINMD (genera metadati Windows) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.GenerateWindowsMetadata
dev_langs:
- C++
ms.assetid: bcfb4901-411e-4c9e-9f78-23028b6e5fcc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 25b8b34e55fc0814653f4c44be50e545633be373
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45705728"
---
# <a name="winmd-generate-windows-metadata"></a>/WINMD (generare metadati di Windows)

Abilita la generazione di file di metadati di Windows Runtime (con estensione winmd).

```
/WINMD[:{NO|ONLY}]
```

## <a name="remarks"></a>Note

**/ WINMD**<br/>
L'impostazione predefinita per le app della piattaforma Windows universale. Il linker genera sia il file eseguibile binario che il file di metadati con estensione winmd.

**/WINMD:NO**<br/>
Il linker genera solo il file eseguibile binario, ma non un file con estensione winmd.

**/ WINMD: SOLO**<br/>
Il linker genera solo il file con estensione winmd, ma non un file eseguibile binario.

Per impostazione predefinita, il nome file di output avrà il formato `binaryname`.winmd. Per specificare un nome file diverso, usare il [/WINMDFILE](../../build/reference/winmdfile-specify-winmd-file.md) opzione.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **Linker** cartella.

1. Selezionare il **metadati Windows** pagina delle proprietà.

1. Nel **genera metadati Windows** elenco a discesa, selezionare l'opzione desiderata.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)