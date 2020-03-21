---
title: /FORCE (Forza l'output del file)
ms.date: 07/19/2019
f1_keywords:
- VC.Project.VCLinkerTool.ForceLink
- /force
helpviewer_keywords:
- FORCE linker option
- file output in linker
- /FORCE linker option
- -FORCE linker option
ms.assetid: b1e9a218-a5eb-4e60-a4a4-65b4be15e5da
ms.openlocfilehash: d1d85174290faa95e73c63a25f7d80c554e83ace
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80079622"
---
# <a name="force-force-file-output"></a>/FORCE (Forza l'output del file)

```
/FORCE:[MULTIPLE|UNRESOLVED]
```

## <a name="remarks"></a>Osservazioni

L'opzione/FORCE indica al linker di creare un file exe o una DLL valida anche se viene fatto riferimento a un simbolo, ma non è definito o è definito in modo multiplo.

L'opzione/FORCE può assumere un argomento facoltativo:

- Utilizzare/FORCE: MULTIPLE per creare un file di output indipendentemente dal fatto che il collegamento trovi più di una definizione per un simbolo.

- Utilizzare/FORCE: Unresolved per creare un file di output indipendentemente dal fatto che LINK trovi un simbolo non definito. /FORCE: UNRESOLVED viene ignorato se il simbolo del punto di ingresso non è risolto.

/FORCE senza argomenti implica sia il multiplo che non risolto.

Un file creato con questa opzione potrebbe non essere eseguito come previsto. Il linker non verrà collegato in modo incrementale quando si specifica l'opzione/FORCE.

Se un modulo viene compilato con **/CLR**, **/Force** non creerà un'immagine.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Fare clic con il pulsante destro del mouse sul progetto in **Esplora soluzioni** e scegliere **Proprietà**.

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione nella casella **Opzioni aggiuntive** .

Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
