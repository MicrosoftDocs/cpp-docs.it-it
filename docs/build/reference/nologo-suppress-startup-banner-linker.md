---
description: Altre informazioni su:/NOLOGO (non visualizzare il banner di avvio) (linker)
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
ms.openlocfilehash: 48edea691e254f0754d29ab5ea4d8055221c4b69
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97196555"
---
# <a name="nologo-suppress-startup-banner-linker"></a>/NOLOGO (Non visualizza il messaggio di avvio) (Linker)

```
/NOLOGO
```

## <a name="remarks"></a>Commenti

L'opzione/NOLOGO impedisce la visualizzazione del messaggio di copyright e del numero di versione.

Questa opzione impedisce inoltre l'eco dei file di comando. Per informazioni dettagliate, vedere [collegare i file di comando](linking.md).

Per impostazione predefinita, queste informazioni vengono inviate dal linker alla finestra output. Nella riga di comando viene inviato all'output standard e può essere reindirizzato a un file.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Questa opzione deve essere usata solo dalla riga di comando.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Non è possibile modificare questa opzione del linker a livello di codice.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
