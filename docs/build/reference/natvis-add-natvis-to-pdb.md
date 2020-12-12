---
description: Altre informazioni su:/NATVIS (Aggiungi natvis al PDB)
title: /NATVIS (Aggiunge Natvis a PDB)
ms.date: 08/10/2017
f1_keywords:
- /natvis
helpviewer_keywords:
- NATVIS linker option
- /NATVIS linker option
- -NATVIS linker option
- Add Natvis file to PDB
ms.assetid: 8747fc0c-701a-4796-bb4d-818ab4465cca
ms.openlocfilehash: 7703915591a59a558c8580dd64b9be22d281d784
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97190523"
---
# <a name="natvis-add-natvis-to-pdb"></a>/NATVIS (Aggiunge Natvis a PDB)

> /NATVIS:*nomefile*

## <a name="parameters"></a>Parametri

*filename*<br/>
File natvis da aggiungere al file PDB. Incorpora le visualizzazioni del debugger nel file natvis nel PDB.

## <a name="remarks"></a>Commenti

L'opzione/NATVIS incorpora le visualizzazioni del debugger definite nel *nome* file del file NATVIS nel file PDB generato da link. Ciò consente al debugger di visualizzare le visualizzazioni indipendentemente dal file con estensione natvis. È possibile usare più opzioni/NATVIS per incorporare più di un file natvis nel file PDB generato.

Il collegamento Ignora/NATVIS quando un file PDB non viene creato usando un'opzione [/debug](debug-generate-debug-info.md) . Per informazioni sulla creazione e l'uso di file con estensione natvis, vedere [creare viste personalizzate di oggetti nativi nel debugger di Visual Studio](/visualstudio/debugger/create-custom-views-of-native-objects).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà **riga di comando** nella cartella **linker** .

1. Aggiungere l'opzione/NATVIS alla casella di testo **Opzioni aggiuntive** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Questa opzione non ha un equivalente a livello di codice.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
