---
title: /NXCOMPAT (compatibile con protezione esecuzione programmi) | Microsoft Docs
ms.custom: ''
ms.date: 12/29/2017
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /NXCOMPAT
dev_langs:
- C++
helpviewer_keywords:
- /NXCOMPAT linker option
- -NXCOMPAT linker option
- NXCOMPAT linker option
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9f6e2c3f1c297493b2af72f280ac5eabcb6f17ce
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43690319"
---
# <a name="nxcompat-compatible-with-data-execution-prevention"></a>/NXCOMPAT (compatibile con Protezione esecuzione programmi)

Indica che un file eseguibile è compatibile con la funzionalità Protezione esecuzione programmi Windows.

## <a name="syntax"></a>Sintassi

> **/NXCOMPAT**[**: NO**]

## <a name="remarks"></a>Note

Per impostazione predefinita **/NXCOMPAT** si trova in.

**/NXCOMPAT: No** può essere utilizzato per specificare in modo esplicito un file eseguibile è compatibile con protezione esecuzione programmi.

Per altre informazioni sulla protezione esecuzione programmi, vedere questi articoli:

- [Una descrizione dettagliata della funzionalità di dati esecuzione programmi (DEP)](https://support.microsoft.com/en-us/help/875352/a-detailed-description-of-the-data-execution-prevention-dep-feature-in)

- [Protezione esecuzione programmi](/windows/desktop/Memory/data-execution-prevention)

- [Protezione esecuzione programmi (Windows incorporato)](/previous-versions/windows/embedded/ms913190\(v=winembedded.5\))

### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Scegliere il **le proprietà di configurazione** > **Linker** > **della riga di comando** pagina delle proprietà.

1. Immettere l'opzione nel **opzioni aggiuntive** casella. Scegli **OK** oppure **applica** per applicare la modifica.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)  
[Opzioni del linker](../../build/reference/linker-options.md)  
