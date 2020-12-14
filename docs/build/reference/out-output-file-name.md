---
description: Altre informazioni su:/OUT (nome file di output)
title: /OUT (nome file di output)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.OutputFile
- /out
helpviewer_keywords:
- output files, name linker option
- -OUT linker option
- OUT linker option
- /OUT C++ linker option
- linker [C++], output files
ms.assetid: 976210a4-e51f-4cfb-af5e-c16344455834
ms.openlocfilehash: 1773b4b2dd340bc105495c1b05211c018548976f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97226402"
---
# <a name="out-output-file-name"></a>/OUT (nome file di output)

```
/OUT:filename
```

## <a name="arguments"></a>Argomenti

*filename*<br/>
Nome specificato dall'utente per il file di output. Sostituisce il nome predefinito.

## <a name="remarks"></a>Commenti

L'opzione/OUT sostituisce il nome e il percorso predefiniti del programma creato dal linker.

Per impostazione predefinita, il linker forma il nome del file usando il nome di base del primo file obj specificato e l'estensione appropriata (exe o dll).

Questa opzione consente di specificare il nome di base predefinito per un file con estensione file map o una libreria di importazione. Per informazioni dettagliate, vedere [generare file map](map-generate-mapfile.md) (/Map) e [/IMPLIB](implib-name-import-library.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **generale** .

1. Modificare la proprietà **file di output** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.OutputFile%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
