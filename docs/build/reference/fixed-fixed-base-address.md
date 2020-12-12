---
description: Altre informazioni su:/FIXED (indirizzo di base fisso)
title: /FIXED (Indirizzo di base fisso)
ms.date: 11/04/2016
f1_keywords:
- /fixed
- VC.Project.VCLinkerTool.FixedBaseAddress
helpviewer_keywords:
- preferred base address for loading program
- /FIXED linker option
- -FIXED linker option
- FIXED linker option
ms.assetid: 929bba5e-b7d8-40ed-943e-056aa3710fc5
ms.openlocfilehash: 08b781b7fbeaf43d6c7e0e82da7bf8319cf77953
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97192057"
---
# <a name="fixed-fixed-base-address"></a>/FIXED (Indirizzo di base fisso)

```
/FIXED[:NO]
```

## <a name="remarks"></a>Commenti

Comunica al sistema operativo di caricare il programma solo all'indirizzo di base preferito. Se tale indirizzo non è disponibile, il file non verrà caricato. Per altre informazioni, vedere [/BASE (indirizzo di base)](base-base-address.md).

/FIXED:NO è l'impostazione predefinita per una DLL e /FIXED è l'impostazione predefinita per qualsiasi altro tipo di progetto.

Quando è specificata l'opzione /FIXED, non viene generata alcuna sezione di rilocazione nel programma. In fase di esecuzione, se il sistema operativo non riesce a caricare il programma all'indirizzo specificato, genererà un messaggio di errore e non caricherà il programma.

Specificare/FIXED: NO per generare una sezione di rilocazione nel programma.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la cartella **linker** .

1. Selezionare la pagina delle proprietà **riga di comando** .

1. Digitare il nome e l'impostazione dell'opzione nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
