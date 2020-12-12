---
description: Altre informazioni su:/NOENTRY (nessun punto di ingresso)
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
ms.openlocfilehash: c3d1f725a4e185a052d443010894ff2dc2261675
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97196685"
---
# <a name="noentry-no-entry-point"></a>/NOENTRY (nessun punto di ingresso)

```
/NOENTRY
```

## <a name="remarks"></a>Commenti

L'opzione /NOENTRY è obbligatoria per la creazione di una DLL di sole risorse che non contiene codice eseguibile. Per ulteriori informazioni, vedere la pagina relativa alla [creazione di una DLL Resource-Only](../creating-a-resource-only-dll.md).

Usare questa opzione per impedire che in LINK venga collegato un riferimento a `_main` nella DLL.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la cartella **linker** .

1. Selezionare la pagina delle proprietà **Avanzate**.

1. Modificare la proprietà **nessun punto di ingresso** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ResourceOnlyDLL%2A>.

## <a name="see-also"></a>Vedi anche

[Creazione di una DLL di Resource-Only](../creating-a-resource-only-dll.md)<br/>
[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
