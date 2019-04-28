---
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
ms.openlocfilehash: 6cc89df76e48ee258a7c6608aab12573ab11729b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62292484"
---
# <a name="fixed-fixed-base-address"></a>/FIXED (Indirizzo di base fisso)

```
/FIXED[:NO]
```

## <a name="remarks"></a>Note

Comunica al sistema operativo di caricare il programma solo all'indirizzo di base preferito. Se l'indirizzo di base preferito non è disponibile, il sistema operativo non viene caricato il file. Per altre informazioni, vedere [/BASE (indirizzo di base)](base-base-address.md).

/FIXED:NO è l'impostazione predefinita per una DLL e /FIXED è l'impostazione predefinita per qualsiasi altro tipo di progetto.

Quando viene specificata l'opzione /FIXED, non viene generata una sezione di rilocazione nel programma. In fase di esecuzione, se il sistema operativo non riesce a caricare il programma all'indirizzo specificato, genererà un messaggio di errore e non caricherà il programma.

Specificare l'opzione /FIXED: No per generare una sezione di rilocazione nel programma.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **Linker** cartella.

1. Selezionare il **riga di comando** pagina delle proprietà.

1. Digitare il nome di opzione e l'impostazione nel **opzioni aggiuntive** casella.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
