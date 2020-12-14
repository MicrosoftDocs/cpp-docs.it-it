---
description: Altre informazioni su:/WINMDDELAYSIGN (firma parzialmente un winmd)
title: /WINMDDELAYSIGN (firmare parzialmente un winmd)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.WINMDDelaySign
ms.assetid: 445cd602-62cb-400a-8e3a-4beb6572724d
ms.openlocfilehash: 801b172f52a9beb9d09617644b3096e460359724
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97259058"
---
# <a name="winmddelaysign-partially-sign-a-winmd"></a>/WINMDDELAYSIGN (firmare parzialmente un winmd)

Abilita la firma parziale di un file di metadati Runtime di Windows (con estensione winmd) inserendo la chiave pubblica nel file.

```
/WINMDDELAYSIGN[:NO]
```

## <a name="remarks"></a>Commenti

È simile all'opzione del linker [/delaysign](delaysign-partially-sign-an-assembly.md) applicata al file winmd. Usare **/WINMDDELAYSIGN** se si vuole inserire solo la chiave pubblica nel file. winmd. Per impostazione predefinita, il linker agisce come se **/WINMDDELAYSIGN: No** fosse specificato; ovvero non firma il file winmd.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la cartella **linker** .

1. Selezionare la pagina delle proprietà **metadati di Windows** .

1. Nella casella di riepilogo a discesa **firma ritardata metadati Windows** selezionare l'opzione desiderata.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
