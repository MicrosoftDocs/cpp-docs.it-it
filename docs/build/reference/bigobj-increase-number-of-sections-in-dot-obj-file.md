---
title: /bigobj (Aumenta il numero di sezioni nel file obj)
ms.date: 11/04/2016
f1_keywords:
- /bigobj
helpviewer_keywords:
- -bigobj compiler option [C++]
- /bigobj compiler option [C++]
- bigobj compiler option [C++]
ms.assetid: ba94d602-4015-4a8d-86ec-49241ab74c12
ms.openlocfilehash: d2deaf7b3e248dd1269d9f04037c9d38651a5b56
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50649709"
---
# <a name="bigobj-increase-number-of-sections-in-obj-file"></a>/bigobj (Aumenta il numero di sezioni nel file obj)

**/bigobj** aumenta il numero di sezioni che può contenere un file oggetto.

## <a name="syntax"></a>Sintassi

```
/bigobj
```

## <a name="remarks"></a>Note

Per impostazione predefinita, un file di oggetti può contenere fino a 65.536 (2 ^ 16) sezioni indirizzabili. Questa situazione si verifica indipendentemente dalla piattaforma di destinazione specificata. **/bigobj** aumenta la capacità fino a 4.294.967.296 (2 ^ 32).

La maggior parte dei moduli non genereranno mai un file con estensione obj che contiene sezioni più di 65.536. Tuttavia, il computer ha generato codice o il codice che utilizza in modo massiccio di librerie di modelli potrebbe richiedere i file con estensione obj che possono contenere più sezioni. **/bigobj** è abilitato per impostazione predefinita nei progetti di Universal Windows Platform (UWP) perché il codice XAML generati dal computer include un numero elevato di intestazioni. Se si disabilita questa opzione in un progetto di app UWP probabile che si verifichi l'errore C1128 del compilatore.

Linker fornita prima di Visual C++ 2005 non è in grado di leggere i file con estensione obj che sono stati realizzati grazie **/bigobj**.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)