---
title: /WINMDDELAYSIGN (firmare parzialmente un winmd)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.WINMDDelaySign
ms.assetid: 445cd602-62cb-400a-8e3a-4beb6572724d
ms.openlocfilehash: 5e6eab3fbc40543b634f03da826d3bd3477b9623
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62316600"
---
# <a name="winmddelaysign-partially-sign-a-winmd"></a>/WINMDDELAYSIGN (firmare parzialmente un winmd)

Abilita la firma parziale di un file di metadati Runtime di Windows (con estensione winmd) inserendo la chiave pubblica nel file.

```
/WINMDDELAYSIGN[:NO]
```

## <a name="remarks"></a>Note

È simile al [/DELAYSIGN](delaysign-partially-sign-an-assembly.md) opzione del linker che viene applicato al file con estensione winmd. Uso **/WINMDDELAYSIGN** se si desidera inserire solo la chiave pubblica nel file con estensione winmd. Per impostazione predefinita, il linker agisce come se **/winmddelaysign: No** sono stati specificati; vale a dire, ovvero non firma il file winmd.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **Linker** cartella.

1. Selezionare il **metadati Windows** pagina delle proprietà.

1. Nel **firma ritardata metadati Windows** elenco a discesa, selezionare l'opzione desiderata.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
