---
title: /LARGEADDRESSAWARE (Gestione di indirizzi di grandi dimensioni)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.LargeAddressAware
- /largeaddressaware
helpviewer_keywords:
- LARGEADDRESSAWARE linker option
- -LARGEADDRESSAWARE linker option
- /LARGEADDRESSAWARE linker option
ms.assetid: a29756c8-e893-47a9-9750-1f0d25359385
ms.openlocfilehash: 81a560ebf083e2f93d9bb514fc401186291d7f41
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57808118"
---
# <a name="largeaddressaware-handle-large-addresses"></a>/LARGEADDRESSAWARE (Gestione di indirizzi di grandi dimensioni)

```
/LARGEADDRESSAWARE[:NO]
```

## <a name="remarks"></a>Note

L'opzione /LARGEADDRESSAWARE indica al linker che l'applicazione può gestire indirizzi superiori a 2 gigabyte. Nei compilatori a 64 bit, questa opzione è abilitata per impostazione predefinita. Nei compilatori a 32 bit, /LARGEADDRESSAWARE: No è abilitato se /LARGEADDRESSAWARE in caso contrario, non viene specificato nella riga del linker.

Se un'applicazione è stata collegata a /LARGEADDRESSAWARE, DUMPBIN [/HEADERS](headers.md) verranno visualizzate le informazioni in tal senso.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **sistema** pagina delle proprietà.

1. Modificare il **Abilita indirizzi grandi** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.LargeAddressAware%2A>.

## <a name="see-also"></a>Vedere anche

[Riferimento del linker MSVC](linking.md)<br/>
[Opzioni del Linker MSVC](linker-options.md)
