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
ms.openlocfilehash: 1b966c1f7af556a85aadcafaa8ed43da5b3f75df
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57422156"
---
# <a name="nologo-suppress-startup-banner-linker"></a>/NOLOGO (Non visualizza il messaggio di avvio) (Linker)

```
/NOLOGO
```

## <a name="remarks"></a>Note

L'opzione /NOLOGO evita la visualizzazione del numero di messaggi e la versione del copyright.

Questa opzione impedisce anche l'eco dei file di comando. Per informazioni dettagliate, vedere [file di comando LINK](../../build/reference/link-command-files.md).

Per impostazione predefinita, queste informazioni vengono inviate dal linker per la finestra di Output. Nella riga di comando, viene inviato all'output standard e può essere reindirizzato a un file.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Questa opzione deve essere utilizzata solo dalla riga di comando.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Questa opzione del linker non può essere modificata a livello di codice.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)
