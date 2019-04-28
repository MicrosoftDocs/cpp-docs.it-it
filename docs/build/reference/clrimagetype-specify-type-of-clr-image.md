---
title: /CLRIMAGETYPE (Specifica il tipo di immagine CLR)
ms.date: 11/04/2016
f1_keywords:
- /CLRIMAGETYPE
- VC.Project.VCLinkerTool.CLRImageType
helpviewer_keywords:
- /CLRIMAGETYPE linker option
- -CLRIMAGETYPE linker option
ms.assetid: 04c60ee6-9dd7-4391-bc03-6926ad0fa116
ms.openlocfilehash: b2a6df0f778ba079bffefeeacdad22cb398a529a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62272481"
---
# <a name="clrimagetype-specify-type-of-clr-image"></a>/CLRIMAGETYPE (Specifica il tipo di immagine CLR)

Impostare il tipo di immagine CLR nell'immagine collegata.

## <a name="syntax"></a>Sintassi

> **/CLRIMAGETYPE:**{**IJW**|**PURE**|**SAFE**|**SAFE32BITPREFERRED**}

## <a name="remarks"></a>Note

Il linker accetta gli oggetti nativi e anche gli oggetti MSIL compilati utilizzando [/clr](clr-common-language-runtime-compilation.md). Il **/clr: pure** e **/CLR: safe** opzioni del compilatore deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017. Quando si passano oggetti misti nella stessa compilazione, il livello di verificabilità del file di output risultante corrisponde, per impostazione predefinita, a quello più basso dei moduli di input. Ad esempio, se si passa un'immagine nativa e un'immagine a modalità mista (compilati usando **/clr**), l'immagine risulta sarà un'immagine a modalità mista.

È possibile usare **/CLRIMAGETYPE** per specificare un livello inferiore di verificabilità, in questo caso è necessario.

Per altre informazioni su come determinare il tipo di immagine CLR di un file, vedere [/CLRHEADER](clrheader.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Espandere il nodo **Proprietà di configurazione**.

1. Espandere la **Linker** nodo.

1. Selezionare il **avanzate** pagina delle proprietà.

1. Modificare il **tipo di immagine CLR** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.CLRImageType%2A>.

## <a name="see-also"></a>Vedere anche

- [Informazioni di riferimento sul linker MSVC](linking.md)
- [Opzioni del linker MSVC](linker-options.md)
