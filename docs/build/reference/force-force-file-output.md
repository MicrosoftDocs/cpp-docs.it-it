---
title: -FORCE (forza l'Output del File) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.ForceLink
- /force
dev_langs:
- C++
helpviewer_keywords:
- FORCE linker option
- file output in linker
- /FORCE linker option
- -FORCE linker option
ms.assetid: b1e9a218-a5eb-4e60-a4a4-65b4be15e5da
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 95a746a37183f26585fd013327a964b922589221
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45699765"
---
# <a name="force-force-file-output"></a>/FORCE (Forza l'output del file)

```
/FORCE:[MULTIPLE|UNRESOLVED]
```

## <a name="remarks"></a>Note

L'opzione /FORCE indica al linker di creare un file valido .exe o DLL anche se un simbolo viene fatto riferimento ma non definito o è definito più volte.

L'opzione /FORCE può assumere un argomento facoltativo:

- Usare /Force: multiple per creare un file di output LINK trovi più definizioni per un simbolo o meno.

- Usare /FORCE: UNRESOLVED per creare un file di output LINK trovi un simbolo non definito o meno. / FORZARE: non risolti viene ignorata se il simbolo del punto di ingresso non è stato risolto.

/Force senza argomenti implica entrambi più e non risolto.

Creata un file con questa opzione potrebbe non essere eseguita come previsto. Quando viene specificata l'opzione /FORCE, il linker non collegherà in modo incrementale.

Se un modulo viene compilato con **/clr**, **/Force** non creerà un'immagine.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione nel **opzioni aggiuntive** casella.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)