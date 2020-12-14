---
description: Altre informazioni su:/DEF (specifica il file di Module-Definition)
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
ms.openlocfilehash: 3b9178004621a55f999f7c2636eaa5b697d2de98
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97201703"
---
# <a name="def-specify-module-definition-file"></a>/DEF (Specifica il file di definizione moduli)

```
/DEF:filename
```

## <a name="arguments"></a>Argomenti

*filename*<br/>
Nome di un file di definizione del modulo (con estensione def) da passare al linker.

## <a name="remarks"></a>Commenti

L'opzione/DEF passa un file di definizione del modulo (. def) al linker. È possibile specificare un solo file con estensione def per il collegamento. Per informazioni dettagliate sui file con estensione def, vedere [file di definizione dei moduli](module-definition-dot-def-files.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **input** .

1. Modificare la proprietà del **file di definizione del modulo** .

Per specificare un file con estensione def dall'interno dell'ambiente di sviluppo, è necessario aggiungerlo al progetto insieme ad altri file e quindi specificare il file per l'opzione/DEF.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ModuleDefinitionFile%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
