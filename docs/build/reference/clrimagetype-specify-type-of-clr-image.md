---
title: /CLRIMAGETYPE (specifica il tipo di immagine CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /CLRIMAGETYPE
- VC.Project.VCLinkerTool.CLRImageType
dev_langs:
- C++
helpviewer_keywords:
- /CLRIMAGETYPE linker option
- -CLRIMAGETYPE linker option
ms.assetid: 04c60ee6-9dd7-4391-bc03-6926ad0fa116
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b5efb2e73e854591be7134753cec21a708fff3e5
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34705010"
---
# <a name="clrimagetype-specify-type-of-clr-image"></a>/CLRIMAGETYPE (Specifica il tipo di immagine CLR)

Impostare il tipo di immagine CLR nell'immagine collegata.

## <a name="syntax"></a>Sintassi

> **/CLRIMAGETYPE:**{**IJW**|**PURE**|**PROVVISORIA**|**SAFE32BITPREFERRED**}

## <a name="remarks"></a>Note

Il linker accetta gli oggetti nativi e anche gli oggetti MSIL compilati utilizzando [/clr](../../build/reference/clr-common-language-runtime-compilation.md). Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono state deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017. Quando si passano oggetti misti nella stessa compilazione, il livello di verificabilità del file di output risultante corrisponde, per impostazione predefinita, a quello più basso dei moduli di input. Ad esempio, se si passa un'immagine nativa e un'immagine a modalità mista (compilati usando **/clr**), l'immagine risulta sarà un'immagine a modalità mista.

È possibile utilizzare **/CLRIMAGETYPE** per specificare un livello inferiore di verificabilità più basso, se è che occorre.

Per altre informazioni su come determinare il tipo di immagine CLR di un file, vedere [/CLRHEADER](../../build/reference/clrheader.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Espandere il **le proprietà di configurazione** nodo.

1. Espandere il **Linker** nodo.

1. Selezionare il **avanzate** pagina delle proprietà.

1. Modificare il **tipo di immagine CLR** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.CLRImageType%2A>.

## <a name="see-also"></a>Vedere anche

- [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)
- [Opzioni del linker](../../build/reference/linker-options.md)
