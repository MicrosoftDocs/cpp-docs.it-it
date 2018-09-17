---
title: -DEF (specifica File di definizione moduli) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.ModuleDefinitionFile
- /def
dev_langs:
- C++
helpviewer_keywords:
- module definition files, specifying
- DEF linker option
- -DEF linker option
- module definition files
- /DEF linker option
ms.assetid: 6497fa68-65f0-48ca-8f66-b87166fc631a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0ec7458f5b81dd2b9d5aac49959b935f49377081
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45720402"
---
# <a name="def-specify-module-definition-file"></a>/DEF (Specifica il file di definizione moduli)

```
/DEF:filename
```

## <a name="arguments"></a>Argomenti

*filename*<br/>
Il nome di un file di definizione moduli (def) deve essere passato al linker.

## <a name="remarks"></a>Note

L'opzione /DEF passa un file di definizione moduli (def) al linker. Al collegamento, è possibile specificare solo un file def. Per informazioni dettagliate sui file. def, vedere [file di definizione moduli](../../build/reference/module-definition-dot-def-files.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **Input** pagina delle proprietà.

1. Modificare il **File di definizione moduli** proprietà.

Per specificare un file con estensione def da all'interno dell'ambiente di sviluppo, è necessario aggiungerlo al progetto insieme agli altri file e quindi specificare il file per l'opzione /DEF.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ModuleDefinitionFile%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)