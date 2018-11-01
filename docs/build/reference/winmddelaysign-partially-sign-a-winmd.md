---
title: /WINMDDELAYSIGN (firmare parzialmente un winmd)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.WINMDDelaySign
ms.assetid: 445cd602-62cb-400a-8e3a-4beb6572724d
ms.openlocfilehash: 367dbe0e638e3748f259f22c1e3536bbd7398272
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50605998"
---
# <a name="winmddelaysign-partially-sign-a-winmd"></a>/WINMDDELAYSIGN (firmare parzialmente un winmd)

Abilita la firma parziale di un file di metadati Runtime di Windows (con estensione winmd) inserendo la chiave pubblica nel file.

```
/WINMDDELAYSIGN[:NO]
```

## <a name="remarks"></a>Note

È simile al [/DELAYSIGN](../../build/reference/delaysign-partially-sign-an-assembly.md) opzione del linker che viene applicato al file con estensione winmd. Uso **/WINMDDELAYSIGN** se si desidera inserire solo la chiave pubblica nel file con estensione winmd. Per impostazione predefinita, il linker agisce come se **/winmddelaysign: No** sono stati specificati; vale a dire, ovvero non firma il file winmd.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **Linker** cartella.

1. Selezionare il **metadati Windows** pagina delle proprietà.

1. Nel **firma ritardata metadati Windows** elenco a discesa, selezionare l'opzione desiderata.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)