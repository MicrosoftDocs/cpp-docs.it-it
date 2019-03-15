---
title: /NOENTRY (nessun punto di ingresso)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.ResourceOnlyDLL
- /noentry
helpviewer_keywords:
- entry points [C++], linker specifying
- -NOENTRY linker option
- resource-only DLLs [C++], creating
- NOENTRY linker option
- /NOENTRY linker option [C++]
- DLLs [C++], creating
ms.assetid: 0214dd41-35ad-43ab-b892-e636e038621a
ms.openlocfilehash: c750fd94e21eec39a25acf216a452faaa277bf7c
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57811452"
---
# <a name="noentry-no-entry-point"></a>/NOENTRY (nessun punto di ingresso)

```
/NOENTRY
```

## <a name="remarks"></a>Note

L'opzione /NOENTRY è obbligatoria per la creazione di una DLL di sole risorse che non contiene codice eseguibile. Per altre informazioni, vedere [creazione di una DLL Resource-Only](../creating-a-resource-only-dll.md).

Usare questa opzione per impedire che in LINK venga collegato un riferimento a `_main` nella DLL.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **Linker** cartella.

1. Selezionare il **avanzate** pagina delle proprietà.

1. Modificare il **Nessun punto di ingresso** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ResourceOnlyDLL%2A>.

## <a name="see-also"></a>Vedere anche

[Creazione di una DLL di sole risorse](../creating-a-resource-only-dll.md)<br/>
[Riferimento del linker MSVC](linking.md)<br/>
[Opzioni del Linker MSVC](linker-options.md)
