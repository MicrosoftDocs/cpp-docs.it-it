---
title: /WINMDKEYFILE (specificare il file di chiave winmd)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.WINMDKeyFile
ms.assetid: 65d88fdc-fff9-49ea-8cfc-b2f408741734
ms.openlocfilehash: 33481033267d6470db38f0b64e76f5be7b4cbe2f
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57425406"
---
# <a name="winmdkeyfile-specify-winmd-key-file"></a>/WINMDKEYFILE (specificare il file di chiave winmd)

Specifica una chiave o una coppia di chiavi per la firma di un file di metadati di Windows Runtime (con estensione winmd).

```
/WINMDKEYFILE:filename
```

## <a name="remarks"></a>Note

È simile al [/KEYFILE](../../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md) opzione del linker che viene applicato a un file con estensione winmd.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **Linker** cartella.

1. Selezionare il **metadati Windows** pagina delle proprietà.

1. Nel **File di chiave di metadati Windows** immettere il percorso del file.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)
