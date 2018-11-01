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
ms.openlocfilehash: 12ba2d977ecca4805aa01ade1a6ea8239e07716e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50523032"
---
# <a name="fixed-fixed-base-address"></a>/FIXED (Indirizzo di base fisso)

```
/FIXED[:NO]
```

## <a name="remarks"></a>Note

Comunica al sistema operativo di caricare il programma solo all'indirizzo di base preferito. Se l'indirizzo di base preferito non è disponibile, il sistema operativo non viene caricato il file. Per altre informazioni, vedere [/BASE (indirizzo di base)](../../build/reference/base-base-address.md).

/FIXED:NO è l'impostazione predefinita per una DLL e /FIXED è l'impostazione predefinita per qualsiasi altro tipo di progetto.

Quando viene specificata l'opzione /FIXED, non viene generata una sezione di rilocazione nel programma. In fase di esecuzione, se il sistema operativo non riesce a caricare il programma all'indirizzo specificato, genererà un messaggio di errore e non caricherà il programma.

Specificare l'opzione /FIXED: No per generare una sezione di rilocazione nel programma.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **Linker** cartella.

1. Selezionare il **riga di comando** pagina delle proprietà.

1. Digitare il nome di opzione e l'impostazione nel **opzioni aggiuntive** casella.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)