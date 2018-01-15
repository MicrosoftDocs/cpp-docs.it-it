---
title: /NXCOMPAT (compatibile con protezione esecuzione programmi) | Documenti Microsoft
ms.custom: 
ms.date: 12/29/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /NXCOMPAT
dev_langs: C++
helpviewer_keywords:
- /NXCOMPAT linker option
- -NXCOMPAT linker option
- NXCOMPAT linker option
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4669c24c3e15fc82f4ba81c83b8892ed18c24a5e
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="nxcompat-compatible-with-data-execution-prevention"></a>/NXCOMPAT (compatibile con Protezione esecuzione programmi)

Indica che un file eseguibile è compatibile con la funzionalità Protezione esecuzione programmi di Windows.

## <a name="syntax"></a>Sintassi

> **/NXCOMPAT**[**: NO**]

## <a name="remarks"></a>Note

Per impostazione predefinita, **/NXCOMPAT** si trova in.

**/NXCOMPAT: No** può essere utilizzato per specificare in modo esplicito un eseguibile non è compatibile con protezione esecuzione programmi.

Per ulteriori informazioni sulla protezione esecuzione programmi, vedere i seguenti articoli:

- [Una descrizione dettagliata della funzionalità (Protezione esecuzione programmi)](http://go.microsoft.com/fwlink/p/?linkid=157771)

- [Protezione esecuzione programmi](http://go.microsoft.com/fwlink/p/?linkid=157770)

- [Protezione esecuzione programmi (Windows incorporato)](http://go.microsoft.com/fwlink/p/?linkid=157768)

### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Scegliere il **le proprietà di configurazione** > **Linker** > **riga di comando** pagina delle proprietà.

1. Immettere l'opzione di **opzioni aggiuntive** casella. Scegliere **OK** o **applica** per applicare la modifica.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)  
[Opzioni del linker](../../build/reference/linker-options.md)  
