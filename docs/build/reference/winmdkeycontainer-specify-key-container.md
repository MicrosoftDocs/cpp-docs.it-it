---
description: Altre informazioni su:/WINMDKEYCONTAINER (specifica il contenitore di chiavi)
title: /WINMDKEYCONTAINER (specificare il contenitore di chiavi)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.WINMDKEYCONTAINER
ms.assetid: c2fc44dc-7cb5-42b9-897f-1b124928f2f7
ms.openlocfilehash: 94b203c56b7724c2b2569ba22039da38c4501985
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97258993"
---
# <a name="winmdkeycontainer-specify-key-container"></a>/WINMDKEYCONTAINER (specificare il contenitore di chiavi)

Specifica un contenitore di chiavi per la firma di un file di metadati Windows (con estensione winmd).

```
/WINMDKEYCONTAINER:name
```

## <a name="remarks"></a>Commenti

È simile all'opzione del linker [/keycontainer](keycontainer-specify-a-key-container-to-sign-an-assembly.md) applicata a un file (con estensione winmd).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la cartella **linker** .

1. Selezionare la pagina delle proprietà **metadati di Windows** .

1. Nella casella **contenitore di chiavi di metadati Windows** immettere il percorso.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
