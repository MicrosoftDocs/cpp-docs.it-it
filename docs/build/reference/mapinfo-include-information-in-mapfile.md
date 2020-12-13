---
description: Scopri di più su:/MAPINFO (include informazioni in file map)
title: /MAPINFO (Include informazioni in file MAP)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.MapLines
- VC.Project.VCLinkerTool.MapInfoFixups
- VC.Project.VCLinkerTool.MapExports
- /mapinfo
helpviewer_keywords:
- /MAPINFO linker option
- MAPINFO linker option
- -MAPINFO linker option
ms.assetid: 533d2bce-f9b7-4fea-ae1c-0b4864c9d10b
ms.openlocfilehash: 5cf785182bd91923c3398d542d7e60d9afdb4a4e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97137904"
---
# <a name="mapinfo-include-information-in-mapfile"></a>/MAPINFO (Include informazioni in file MAP)

```
/MAPINFO:EXPORTS
```

## <a name="remarks"></a>Commenti

L'opzione/MAPINFO indica al linker di includere le informazioni specificate in un file map, che viene creato se si specifica l'opzione [/Map](map-generate-mapfile.md) .  Esporta indica al linker di includere le funzioni esportate.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **debug** .

1. Modificare le proprietà delle **esportazioni della mappa** :

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MapExports%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
