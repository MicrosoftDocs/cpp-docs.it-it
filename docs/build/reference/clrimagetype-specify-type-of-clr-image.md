---
title: /CLRIMAGETYPE (Specifica il tipo di immagine CLR)
ms.date: 05/16/2019
f1_keywords:
- /CLRIMAGETYPE
- VC.Project.VCLinkerTool.CLRImageType
helpviewer_keywords:
- /CLRIMAGETYPE linker option
- -CLRIMAGETYPE linker option
ms.assetid: 04c60ee6-9dd7-4391-bc03-6926ad0fa116
ms.openlocfilehash: ee2e2ce359a4b877551adf9af71e0187b42cfd42
ms.sourcegitcommit: a10c9390413978d36b8096b684d5ed4cf1553bc8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/17/2019
ms.locfileid: "65837487"
---
# <a name="clrimagetype-specify-type-of-clr-image"></a>/CLRIMAGETYPE (Specifica il tipo di immagine CLR)

Impostare il tipo di immagine CLR nell'immagine collegata.

## <a name="syntax"></a>Sintassi

> **/CLRIMAGETYPE:** {**IJW**|**PURE**|**SAFE**|**SAFE32BITPREFERRED**}

## <a name="remarks"></a>Osservazioni

Il linker accetta gli oggetti nativi e anche gli oggetti MSIL compilati usando [/clr](clr-common-language-runtime-compilation.md). Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono state deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017 e versioni successive. Quando si passano oggetti misti nella stessa compilazione, il livello di verificabilità del file di output risultante corrisponde, per impostazione predefinita, a quello più basso dei moduli di input. Ad esempio, se si passa un'immagine nativa e un'immagine a modalità mista, compilata usando **/clr**, l'immagine risultante sarà a modalità mista.

Si può usare **/CLRIMAGETYPE** per specificare un livello di verificabilità più basso, se necessario.

Per altre informazioni su come determinare il tipo di immagine CLR di un file, vedere [/CLRHEADER](clrheader.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](../working-with-project-properties.md).

1. Espandere il nodo **Proprietà di configurazione**.

1. Espandere il nodo **Linker**.

1. Selezionare la pagina delle proprietà **Avanzate**.

1. Modificare la proprietà **Tipo immagine CLR**.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.CLRImageType%2A>.

## <a name="see-also"></a>Vedere anche

- [Informazioni di riferimento sul linker MSVC](linking.md)
- [Opzioni del linker MSVC](linker-options.md)
