---
description: Altre informazioni su:/MANIFESTFILE (nome file manifesto)
title: /MANIFESTFILE (Assegna un nome al file manifesto)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.ManifestFile
helpviewer_keywords:
- MANIFESTFILE linker option
- -MANIFESTFILE linker option
- /MANIFESTFILE linker option
ms.assetid: befa5ab2-a9cf-4c9b-969a-e7b4a930f08d
ms.openlocfilehash: a0d3a4ba1d17c4aa8c97cb09cc768e614e46c864
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97138021"
---
# <a name="manifestfile-name-manifest-file"></a>/MANIFESTFILE (Assegna un nome al file manifesto)

```
/MANIFESTFILE:filename
```

## <a name="remarks"></a>Commenti

/MANIFESTFILE consente di modificare il nome predefinito del file manifesto.  Il nome predefinito del file manifesto è il nome del file con estensione manifest aggiunto.

/MANIFESTFILE non avrà alcun effetto se non si esegue anche il collegamento a [/manifest](manifest-create-side-by-side-assembly-manifest.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Espandere il nodo **Proprietà di configurazione**.

1. Espandere il nodo **Linker**.

1. Selezionare la pagina delle proprietà **file manifesto** .

1. Modificare la proprietà del **file manifesto** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ManifestFile%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
