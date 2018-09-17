---
title: -WINMDKEYCONTAINER (specifica il contenitore di chiavi) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.WINMDKEYCONTAINER
dev_langs:
- C++
ms.assetid: c2fc44dc-7cb5-42b9-897f-1b124928f2f7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8d48a0966b974b1a264b4d2b539f5861ce0dfd57
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45716826"
---
# <a name="winmdkeycontainer-specify-key-container"></a>/WINMDKEYCONTAINER (specificare il contenitore di chiavi)

Specifica un contenitore di chiavi per la firma di un file di metadati Windows (con estensione winmd).

```
/WINMDKEYCONTAINER:name
```

## <a name="remarks"></a>Note

È simile al [/KEYCONTAINER](../../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md) opzione del linker che viene applicato a un file (con estensione winmd).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **Linker** cartella.

1. Selezionare il **metadati Windows** pagina delle proprietà.

1. Nel **contenitore di chiavi di metadati Windows** casella, immettere il percorso.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)