---
description: Altre informazioni su:/bigobj (aumenta il numero di sezioni in. File obj)
title: /bigobj (Aumenta il numero di sezioni nel file obj)
ms.date: 03/26/2019
f1_keywords:
- /bigobj
helpviewer_keywords:
- -bigobj compiler option [C++]
- /bigobj compiler option [C++]
- bigobj compiler option [C++]
ms.assetid: ba94d602-4015-4a8d-86ec-49241ab74c12
ms.openlocfilehash: 4e820211ec46ad2a2d125552f95fb8a82c6f57ba
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97182697"
---
# <a name="bigobj-increase-number-of-sections-in-obj-file"></a>/bigobj (Aumenta il numero di sezioni nel file obj)

**/bigobj** aumenta il numero di sezioni che un file oggetto può contenere.

## <a name="syntax"></a>Sintassi

> **/bigobj**

## <a name="remarks"></a>Commenti

Per impostazione predefinita, un file oggetto può avere fino a 65.279 sezioni indirizzabili (quasi 2 ^ 16). Questo limite si applica indipendentemente dalla piattaforma di destinazione specificata. **/bigobj** aumenta la capacità dell'indirizzo a 4.294.967.296 (2 ^ 32).

La maggior parte dei moduli non genera mai un file obj che contiene più di 65.279 sezioni. Tuttavia, il codice generato dal computer o il codice che usa in modo intensivo le librerie di modelli possono richiedere file con estensione obj che possono avere più sezioni. **/bigobj** è abilitato per impostazione predefinita nei progetti piattaforma UWP (Universal Windows Platform) (UWP) perché il codice XAML generato dal computer include un numero elevato di intestazioni. Se si disabilita questa opzione in un progetto di app UWP, il codice potrebbe generare l'errore del compilatore C1128.

Per informazioni sul formato di file dell'oggetto PE-COFF, vedere [formato PE](/windows/win32/debug/pe-format) nella documentazione di Windows.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione** proprietà della riga di comando di  >  **c/C++**  >   .

1. Immettere l'opzione del compilatore **/bigobj** nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
