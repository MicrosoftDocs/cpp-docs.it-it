---
title: /WINMDKEYCONTAINER (specificare il contenitore di chiavi)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.WINMDKEYCONTAINER
ms.assetid: c2fc44dc-7cb5-42b9-897f-1b124928f2f7
ms.openlocfilehash: 0b6cb42fc391d94634ae90e5a4cc17e69a14ff09
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57813071"
---
# <a name="winmdkeycontainer-specify-key-container"></a>/WINMDKEYCONTAINER (specificare il contenitore di chiavi)

Specifica un contenitore di chiavi per la firma di un file di metadati Windows (con estensione winmd).

```
/WINMDKEYCONTAINER:name
```

## <a name="remarks"></a>Note

È simile al [/KEYCONTAINER](keycontainer-specify-a-key-container-to-sign-an-assembly.md) opzione del linker che viene applicato a un file (con estensione winmd).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **Linker** cartella.

1. Selezionare il **metadati Windows** pagina delle proprietà.

1. Nel **contenitore di chiavi di metadati Windows** casella, immettere il percorso.

## <a name="see-also"></a>Vedere anche

[Riferimento del linker MSVC](linking.md)<br/>
[Opzioni del Linker MSVC](linker-options.md)
