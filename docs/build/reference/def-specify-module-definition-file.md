---
title: /DEF (Specifica il file di definizione moduli)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.ModuleDefinitionFile
- /def
helpviewer_keywords:
- module definition files, specifying
- DEF linker option
- -DEF linker option
- module definition files
- /DEF linker option
ms.assetid: 6497fa68-65f0-48ca-8f66-b87166fc631a
ms.openlocfilehash: c08412fb50835485e7941b2bb1db088943387b71
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57807442"
---
# <a name="def-specify-module-definition-file"></a>/DEF (Specifica il file di definizione moduli)

```
/DEF:filename
```

## <a name="arguments"></a>Argomenti

*filename*<br/>
Il nome di un file di definizione moduli (def) deve essere passato al linker.

## <a name="remarks"></a>Note

L'opzione /DEF passa un file di definizione moduli (def) al linker. Al collegamento, è possibile specificare solo un file def. Per informazioni dettagliate sui file. def, vedere [file di definizione moduli](module-definition-dot-def-files.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **Input** pagina delle proprietà.

1. Modificare il **File di definizione moduli** proprietà.

Per specificare un file con estensione def da all'interno dell'ambiente di sviluppo, è necessario aggiungerlo al progetto insieme agli altri file e quindi specificare il file per l'opzione /DEF.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ModuleDefinitionFile%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
