---
title: /NOLOGO (Non visualizza il messaggio di avvio) (Linker)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.SuppressStartupBanner
- /nologo
helpviewer_keywords:
- suppress startup banner linker option
- -NOLOGO linker option
- /NOLOGO linker option
- copyright message
- version numbers, preventing linker display
- banners, suppressing startup
- NOLOGO linker option
ms.assetid: 3b20dddd-eca6-4545-a331-9f70bf720197
ms.openlocfilehash: 0ef0c6f8e0073e7450daa8d0433ce4d6e82ceab8
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57812499"
---
# <a name="nologo-suppress-startup-banner-linker"></a>/NOLOGO (Non visualizza il messaggio di avvio) (Linker)

```
/NOLOGO
```

## <a name="remarks"></a>Note

L'opzione /NOLOGO evita la visualizzazione del numero di messaggi e la versione del copyright.

Questa opzione impedisce anche l'eco dei file di comando. Per informazioni dettagliate, vedere [file di comando LINK](linking.md).

Per impostazione predefinita, queste informazioni vengono inviate dal linker per la finestra di Output. Nella riga di comando, viene inviato all'output standard e può essere reindirizzato a un file.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Questa opzione deve essere utilizzata solo dalla riga di comando.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Questa opzione del linker non può essere modificata a livello di codice.

## <a name="see-also"></a>Vedere anche

[Riferimento del linker MSVC](linking.md)<br/>
[Opzioni del Linker MSVC](linker-options.md)
