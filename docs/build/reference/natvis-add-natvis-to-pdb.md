---
title: /NATVIS (aggiunge Natvis a PDB)
ms.date: 08/10/2017
f1_keywords:
- /natvis
- VC.Project.VCLinkerTool.ImportLIbrary
helpviewer_keywords:
- NATVIS linker option
- /NATVIS linker option
- -NATVIS linker option
- Add Natvis file to PDB
ms.assetid: 8747fc0c-701a-4796-bb4d-818ab4465cca
ms.openlocfilehash: e758a49b41a17d805b752947cd1944087c8ff852
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57809236"
---
# <a name="natvis-add-natvis-to-pdb"></a>/NATVIS (aggiunge Natvis a PDB)

> /NATVIS:*filename*

## <a name="parameters"></a>Parametri

*filename*<br/>
Un file Natvis da aggiungere al file PDB. Incorpora le visualizzazioni del debugger nel file Natvis nel file PDB.

## <a name="remarks"></a>Note

L'opzione /NATVIS incorpora le visualizzazioni debugger definite nel file Natvis *filename* nel file PDB generato dal collegamento. In questo modo il debugger visualizzare le visualizzazioni indipendentemente dal file con estensione natvis. È possibile usare più opzioni /NATVIS per incorporare più di un file Natvis nel file PDB generato.

LINK Ignora /NATVIS quando un file PDB non viene creato tramite un [/debug](debug-generate-debug-info.md) opzione. Per informazioni sulla creazione e l'utilizzo di file natvis, vedere [creare viste personalizzate di oggetti nativi nel debugger di Visual Studio](/visualstudio/debugger/create-custom-views-of-native-objects).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **riga di comando** pagina delle proprietà di **Linker** cartella.

1. Aggiungere l'opzione /NATVIS il **opzioni aggiuntive** casella di testo.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Questa opzione non ha un equivalente a livello di codice.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
