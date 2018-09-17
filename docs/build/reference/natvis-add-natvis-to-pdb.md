---
title: -NATVIS (aggiunge Natvis a PDB) | Microsoft Docs
ms.date: 08/10/2017
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /natvis
- VC.Project.VCLinkerTool.ImportLIbrary
dev_langs:
- C++
helpviewer_keywords:
- NATVIS linker option
- /NATVIS linker option
- -NATVIS linker option
- Add Natvis file to PDB
ms.assetid: 8747fc0c-701a-4796-bb4d-818ab4465cca
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2c1a20fef785c0267eb630bf044c8cb9609605e2
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45708123"
---
# <a name="natvis-add-natvis-to-pdb"></a>/NATVIS (aggiunge Natvis a PDB)

> / NATVIS:*nomefile*

## <a name="parameters"></a>Parametri

*filename*<br/>
Un file Natvis da aggiungere al file PDB. Incorpora le visualizzazioni del debugger nel file Natvis nel file PDB.

## <a name="remarks"></a>Note

L'opzione /NATVIS incorpora le visualizzazioni debugger definite nel file Natvis *filename* nel file PDB generato dal collegamento. In questo modo il debugger visualizzare le visualizzazioni indipendentemente dal file con estensione natvis. È possibile usare più opzioni /NATVIS per incorporare più di un file Natvis nel file PDB generato.

LINK Ignora /NATVIS quando un file PDB non viene creato tramite un [/debug](../../build/reference/debug-generate-debug-info.md) opzione. Per informazioni sulla creazione e l'utilizzo di file natvis, vedere [creare viste personalizzate di oggetti nativi nel debugger di Visual Studio](/visualstudio/debugger/create-custom-views-of-native-objects).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Selezionare il **riga di comando** pagina delle proprietà di **Linker** cartella.

1. Aggiungere l'opzione /NATVIS il **opzioni aggiuntive** casella di testo.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Questa opzione non ha un equivalente a livello di codice.

## <a name="see-also"></a>Vedere anche

[Creare viste personalizzate di oggetti nativi nel debugger di Visual Studio](/visualstudio/debugger/create-custom-views-of-native-objects)<br/>
[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)