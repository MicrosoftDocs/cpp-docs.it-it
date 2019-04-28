---
title: /bigobj (Aumenta il numero di sezioni nel file obj)
ms.date: 03/26/2019
f1_keywords:
- /bigobj
helpviewer_keywords:
- -bigobj compiler option [C++]
- /bigobj compiler option [C++]
- bigobj compiler option [C++]
ms.assetid: ba94d602-4015-4a8d-86ec-49241ab74c12
ms.openlocfilehash: 46399dc0c1ff552b4fc963b686ac6aa6df8b6f71
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62272975"
---
# <a name="bigobj-increase-number-of-sections-in-obj-file"></a>/bigobj (Aumenta il numero di sezioni nel file obj)

**/bigobj** aumenta il numero di sezioni che può contenere un file oggetto.

## <a name="syntax"></a>Sintassi

> **/bigobj**

## <a name="remarks"></a>Note

Per impostazione predefinita, un file di oggetti può contenere fino a 65.279 (quasi 2 ^ 16) sezioni indirizzabili. Questo limite si applica indipendentemente dalla destinazione a cui è specificata della piattaforma. **/bigobj** aumenta la capacità fino a 4.294.967.296 (2 ^ 32).

La maggior parte dei moduli mai generano un file con estensione obj che contiene più di 65.279 sezioni. Tuttavia, codice generati dal computer o nel codice che utilizza in modo massiccio di librerie di modelli, può richiedere i file con estensione obj che possono contenere più sezioni. **/bigobj** è abilitato per impostazione predefinita nei progetti di Universal Windows Platform (UWP) perché il codice XAML generati dal computer include un numero elevato di intestazioni. Se si disabilita questa opzione in un progetto di app UWP, il codice può generare l'errore C1128 del compilatore.

Per informazioni sul formato dei file oggetto COFF-PE, vedere [formato PE](/windows/desktop/debug/pe-format) nella documentazione di Windows.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Immettere il **/bigobj** opzione del compilatore nella **opzioni aggiuntive** casella.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
