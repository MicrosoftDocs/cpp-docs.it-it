---
description: Altre informazioni su:/INCLUDE (forza riferimenti al simbolo)
title: /INCLUDE (Forza riferimenti al simbolo)
ms.date: 11/04/2016
f1_keywords:
- /include
- VC.Project.VCLinkerTool.ForceSymbolReferences
helpviewer_keywords:
- INCLUDE linker option
- force symbol references linker option
- symbol references linker force
- /INCLUDE linker option
- symbols, add to symbol table
- -INCLUDE linker option
ms.assetid: 4a039677-360a-480f-bd0b-448e239b449c
ms.openlocfilehash: 4938f5e92f91718f522df103303e6382005d463c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97191303"
---
# <a name="include-force-symbol-references"></a>/INCLUDE (Forza riferimenti al simbolo)

```
/INCLUDE:symbol
```

## <a name="parameters"></a>Parametri

*simbolo*<br/>
Specifica un simbolo da aggiungere alla tabella dei simboli.

## <a name="remarks"></a>Commenti

L'opzione/INCLUDE indica al linker di aggiungere un simbolo specificato alla tabella dei simboli.

Per specificare più simboli, digitare una virgola (,), un punto e virgola (;) o uno spazio tra i nomi dei simboli. Nella riga di comando specificare/INCLUDE: `symbol` once per ogni simbolo.

Il linker viene risolto aggiungendo `symbol` l'oggetto che contiene la definizione del simbolo al programma. Questa funzionalità è utile per includere un oggetto libreria che altrimenti non sarebbe collegato al programma.

Se si specifica un simbolo con questa opzione, la rimozione del simbolo verrà sostituita da [/opt: Ref](opt-optimizations.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **input** .

1. Modificare la proprietà **Force Symbol References** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ForceSymbolReferences%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
