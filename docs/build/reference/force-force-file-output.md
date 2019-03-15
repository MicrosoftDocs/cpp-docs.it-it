---
title: /FORCE (Forza l'output del file)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.ForceLink
- /force
helpviewer_keywords:
- FORCE linker option
- file output in linker
- /FORCE linker option
- -FORCE linker option
ms.assetid: b1e9a218-a5eb-4e60-a4a4-65b4be15e5da
ms.openlocfilehash: af7962a4b3b5805e7e0c4d59752254c8ade17f7b
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57814306"
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

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione nel **opzioni aggiuntive** casella.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
