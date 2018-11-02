---
title: /LIBPATH (Percorso LIB aggiuntivo)
ms.date: 11/04/2016
f1_keywords:
- /libpath
- VC.Project.VCLinkerTool.AdditionalLibraryDirectories
helpviewer_keywords:
- LIBPATH linker option
- /LIBPATH linker option
- Additional Libpath linker option
- environment library path override
- -LIBPATH linker option
- library path linker option
ms.assetid: 7240af0b-9a3d-4d53-8169-2a92cd6958ba
ms.openlocfilehash: 40662e77faf03de8e5ef0abf334f4ec7be69c3ad
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50615150"
---
# <a name="libpath-additional-libpath"></a>/LIBPATH (Percorso LIB aggiuntivo)

```
/LIBPATH:dir
```

## <a name="parameters"></a>Parametri

*dir*<br/>
Specifica un percorso che il linker eseguirà la ricerca prima che cerca nel percorso specificato dall'opzione di ambiente LIB.

## <a name="remarks"></a>Note

Usare l'opzione /LIBPATH per eseguire l'override del percorso della libreria di ambiente. Il linker prima la ricerca nel percorso specificato da questa opzione e quindi Cerca nel percorso specificato nella variabile di ambiente LIB. È possibile specificare solo una directory per ogni opzione /LIBPATH che immesso. Se si desidera specificare più di una directory, è necessario specificare più opzioni /LIBPATH. La ricerca verrà eseguita la directory specificata in ordine.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **generale** pagina delle proprietà.

1. Modificare il **Directory librerie aggiuntive** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalLibraryDirectories%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)