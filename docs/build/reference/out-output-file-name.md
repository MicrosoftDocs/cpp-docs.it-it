---
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
ms.openlocfilehash: be5fe929bdcf52be19955a5bc2d7aa093e194f45
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57812421"
---
# <a name="out-output-file-name"></a>/OUT (nome file di output)

```
/OUT:filename
```

## <a name="arguments"></a>Argomenti

*filename*<br/>
Un nome specificato dall'utente per il file di output. Sostituisce il nome predefinito.

## <a name="remarks"></a>Note

L'opzione /OUT sostituisce il nome predefinito e il percorso del programma creato dal linker.

Per impostazione predefinita, il linker costituisce il nome del file usando il nome base del primo file con estensione obj specificato e l'estensione appropriata (.exe o DLL).

Questa opzione il nome di base predefinito per una libreria di importazione o file MAP. Per informazioni dettagliate, vedere [genera file map](map-generate-mapfile.md) (/Map) e [/IMPLIB](implib-name-import-library.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **generale** pagina delle proprietà.

1. Modificare il **File di Output** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.OutputFile%2A>.

## <a name="see-also"></a>Vedere anche

[Riferimento del linker MSVC](linking.md)<br/>
[Opzioni del Linker MSVC](linker-options.md)
