---
description: Altre informazioni su:/LARGEADDRESSAWARE (gestione di indirizzi di grandi dimensioni)
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
ms.openlocfilehash: 72b2ba20b2ea2b91ecd234497c433bcdd9e9ee42
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97199571"
---
# <a name="largeaddressaware-handle-large-addresses"></a>/LARGEADDRESSAWARE (Gestione di indirizzi di grandi dimensioni)

```
/LARGEADDRESSAWARE[:NO]
```

## <a name="remarks"></a>Commenti

L'opzione/LARGEADDRESSAWARE indica al linker che l'applicazione è in grado di gestire indirizzi superiori a 2 gigabyte. Nei compilatori a 64 bit questa opzione è abilitata per impostazione predefinita. Nei compilatori a 32 bit,/LARGEADDRESSAWARE: NO è abilitato se/LARGEADDRESSAWARE non è specificato diversamente nella riga del linker.

Se un'applicazione è stata collegata a/LARGEADDRESSAWARE, DUMPBIN [/headers](headers.md) visualizzerà le informazioni relative a tale effetto.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **sistema** .

1. Modificare la proprietà **Abilita indirizzi di grandi dimensioni** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.LargeAddressAware%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
