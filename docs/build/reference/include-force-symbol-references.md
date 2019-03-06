---
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
ms.openlocfilehash: 389bd16829c2466b02cb879c8bc8d43c9efa6fb4
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57421220"
---
# <a name="include-force-symbol-references"></a>/INCLUDE (Forza riferimenti al simbolo)

```
/INCLUDE:symbol
```

## <a name="parameters"></a>Parametri

*symbol*<br/>
Specifica un simbolo deve essere aggiunta alla tabella dei simboli.

## <a name="remarks"></a>Note

L'opzione /INCLUDE indica al linker di aggiungere un simbolo specificato alla tabella dei simboli.

Per specificare più simboli, digitare una virgola (,), un punto e virgola (;) o uno spazio tra i nomi dei simboli. Nella riga di comando, specificare un'opzione /INCLUDE:`symbol` una volta per ogni simbolo.

Il linker risolve `symbol` aggiungendo l'oggetto che contiene la definizione del simbolo nel programma. Questa funzionalità è utile per includere un oggetto libreria in caso contrario non sarebbe essere collegato al programma.

Specifica di un simbolo con questa opzione esegue l'override del simbolo per la rimozione [/OPT: ref](../../build/reference/opt-optimizations.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **Input** pagina delle proprietà.

1. Modificare il **forza riferimenti al simbolo** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ForceSymbolReferences%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)
