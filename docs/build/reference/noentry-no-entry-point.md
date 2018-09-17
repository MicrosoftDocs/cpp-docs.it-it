---
title: -NOENTRY (Nessun punto di ingresso) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.ResourceOnlyDLL
- /noentry
dev_langs:
- C++
helpviewer_keywords:
- entry points [C++], linker specifying
- -NOENTRY linker option
- resource-only DLLs [C++], creating
- NOENTRY linker option
- /NOENTRY linker option [C++]
- DLLs [C++], creating
ms.assetid: 0214dd41-35ad-43ab-b892-e636e038621a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bd90cb7824050e9bd0110e75f7120c4f004b8b47
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45713466"
---
# <a name="noentry-no-entry-point"></a>/NOENTRY (nessun punto di ingresso)

```
/NOENTRY
```

## <a name="remarks"></a>Note

L'opzione /NOENTRY è obbligatoria per la creazione di una DLL di sole risorse che non contiene codice eseguibile. Per altre informazioni, vedere [creazione di una DLL Resource-Only](../../build/creating-a-resource-only-dll.md).

Usare questa opzione per impedire che in LINK venga collegato un riferimento a `_main` nella DLL.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Selezionare il **Linker** cartella.

1. Selezionare il **avanzate** pagina delle proprietà.

1. Modificare il **Nessun punto di ingresso** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ResourceOnlyDLL%2A>.

## <a name="see-also"></a>Vedere anche

[Creazione di una DLL di sole risorse](../../build/creating-a-resource-only-dll.md)<br/>
[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)