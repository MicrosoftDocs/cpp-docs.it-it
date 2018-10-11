---
title: -DELAY (impostazioni di importazione di caricamento ritardato) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /delay
- VC.Project.VCLinkerTool.DelayNoBind
- VC.Project.VCLinkerTool.SupportUnloadOfDelayLoadedDLL
- VC.Project.VCLinkerTool.DelayUnload
dev_langs:
- C++
helpviewer_keywords:
- delayed loading of DLLs, /DELAY option
- DELAY linker option
- /DELAY linker option
- -DELAY linker option
ms.assetid: 9334b332-cc58-4dae-b10f-a4c75972d50c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 086fab7d1d50f96ab05c38f2e6d524d7ff344e02
ms.sourcegitcommit: 3a141cf07b5411d5f1fdf6cf67c4ce928cf389c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/11/2018
ms.locfileid: "49081916"
---
# <a name="delay-delay-load-import-settings"></a>/DELAY (Impostazioni dell'importazione a caricamento ritardato)

```
/DELAY:UNLOAD
/DELAY:NOBIND
```

## <a name="remarks"></a>Note

L'opzione /DELAY controlla [caricamento ritardato](../../build/reference/linker-support-for-delay-loaded-dlls.md) di DLL:

- Il qualificatore UNLOAD indica alla funzione dell'helper di caricamento ritardato di supportare lo scaricamento esplicito della DLL. Viene ripristinato il formato originale della tabella di indirizzi di importazione. Ciò rende non validi i puntatori alla tabella e ne provoca la riscrittura.

   Se non si seleziona UNLOAD, qualsiasi chiamata a [FUnloadDelayLoadedDLL](../../build/reference/explicitly-unloading-a-delay-loaded-dll.md) avrà esito negativo.

- Il qualificatore NOBIND indica al linker di non includere una tabella di indirizzi di importazione nell'immagine finale. L'impostazione predefinita prevede la creazione della tabella di indirizzi di importazione associabile per DLL di caricamento ritardato. L'immagine risultante non può essere associata in modo statico. È possibile che le immagini con tabelle di indirizzi di importazione associabili siano associate in modo statico prima dell'esecuzione. Visualizzare [/Bind](../../build/reference/bind.md).

   Se la DLL è associata, la funzione dell'helper proverà a usare le informazioni associate invece di chiamare [GetProcAddress](/windows/desktop/api/libloaderapi/nf-libloaderapi-getprocaddress) su ciascuna delle importazioni a cui viene fatto riferimento. Se il timestamp o l'indirizzo preferito non corrisponde ai valori presenti nel file DLL caricato, la funzione dell'helper presupporrà che la tabella di indirizzi di importazione sia obsoleta e procederà come se la tabella di indirizzi di importazione non esistesse.

   NOBIND provoca la creazione di immagini di programma di dimensioni superiori, ma può velocizzare il tempo di caricamento del file DLL. Se non si prevede di associare il file DLL, NOBIND impedirà la generazione della tabella di indirizzi di importazione associata.

Per specificare le DLL di cui ritardare il caricamento, usare il [/DELAYLOAD fa](../../build/reference/delayload-delay-load-import.md) opzione.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Espandere **le proprietà di configurazione**, **Linker**, quindi selezionare **avanzate**.

1. Modificare il **DLL a caricamento ritardato** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.DelayLoadDLLs%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)