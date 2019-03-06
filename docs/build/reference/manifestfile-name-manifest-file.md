---
title: /MANIFESTFILE (Assegna un nome al file manifesto)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.ManifestFile
helpviewer_keywords:
- MANIFESTFILE linker option
- -MANIFESTFILE linker option
- /MANIFESTFILE linker option
ms.assetid: befa5ab2-a9cf-4c9b-969a-e7b4a930f08d
ms.openlocfilehash: b30e0239eaca365e738ae6568f159715673fd139
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57424548"
---
# <a name="manifestfile-name-manifest-file"></a>/MANIFESTFILE (Assegna un nome al file manifesto)

```
/MANIFESTFILE:filename
```

## <a name="remarks"></a>Note

/MANIFESTFILE consente di modificare il nome predefinito del file manifesto.  Il nome predefinito del file manifesto è il nome del file con estensione manifest aggiunto.

/MANIFESTFILE avrà alcun effetto se non si collega anche con [/manifest](../../build/reference/manifest-create-side-by-side-assembly-manifest.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Espandere il nodo **Proprietà di configurazione**.

1. Espandere la **Linker** nodo.

1. Selezionare il **Manifest File** pagina delle proprietà.

1. Modificare il **Manifest File** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ManifestFile%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)
