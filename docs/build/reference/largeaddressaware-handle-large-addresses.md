---
title: -LARGEADDRESSAWARE (gestione di indirizzi grandi dimensioni) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.LargeAddressAware
- /largeaddressaware
dev_langs:
- C++
helpviewer_keywords:
- LARGEADDRESSAWARE linker option
- -LARGEADDRESSAWARE linker option
- /LARGEADDRESSAWARE linker option
ms.assetid: a29756c8-e893-47a9-9750-1f0d25359385
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0a68b18f912d7e6ca0f0f642c85e8439be0e5b67
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45726329"
---
# <a name="largeaddressaware-handle-large-addresses"></a>/LARGEADDRESSAWARE (Gestione di indirizzi di grandi dimensioni)

```
/LARGEADDRESSAWARE[:NO]
```

## <a name="remarks"></a>Note

L'opzione /LARGEADDRESSAWARE indica al linker che l'applicazione può gestire indirizzi superiori a 2 gigabyte. Nei compilatori a 64 bit, questa opzione è abilitata per impostazione predefinita. Nei compilatori a 32 bit, /LARGEADDRESSAWARE: No è abilitato se /LARGEADDRESSAWARE in caso contrario, non viene specificato nella riga del linker.

Se un'applicazione è stata collegata a /LARGEADDRESSAWARE, DUMPBIN [/HEADERS](../../build/reference/headers.md) verranno visualizzate le informazioni in tal senso.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **sistema** pagina delle proprietà.

1. Modificare il **Abilita indirizzi grandi** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.LargeAddressAware%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)