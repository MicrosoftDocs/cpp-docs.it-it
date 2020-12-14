---
description: Altre informazioni su:/LIBPATH (LIBPATH aggiuntivi)
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
ms.openlocfilehash: 5db7a0f80cb741a65bac5a4dbb7fd79e28b67459
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97191030"
---
# <a name="libpath-additional-libpath"></a>/LIBPATH (Percorso LIB aggiuntivo)

```
/LIBPATH:dir
```

## <a name="parameters"></a>Parametri

*dir*<br/>
Specifica il percorso in cui il linker eseguirà la ricerca prima di cercare il percorso specificato nell'opzione ambiente LIB.

## <a name="remarks"></a>Commenti

Usare l'opzione/LIBPATH per eseguire l'override del percorso della libreria dell'ambiente. Il linker cerca innanzitutto nel percorso specificato da questa opzione e quindi Cerca nel percorso specificato nella variabile di ambiente LIB. È possibile specificare una sola directory per ogni opzione/LIBPATH che si immette. Se si desidera specificare più di una directory, è necessario specificare più opzioni/LIBPATH. Il linker effettuerà quindi la ricerca nelle directory specificate in ordine.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **generale** .

1. Modificare la proprietà **Directory librerie aggiuntive** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalLibraryDirectories%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
