---
title: /Zp (Allineamento membri struct)
ms.date: 04/04/2019
f1_keywords:
- /zp
- VC.Project.VCCLCompilerTool.StructMemberAlignment
- VC.Project.VCCLWCECompilerTool.StructMemberAlignment
helpviewer_keywords:
- Struct Member Alignment compiler option
- Zp compiler option
- /Zp compiler option [C++]
- -Zp compiler option [C++]
ms.assetid: 5242f656-ed9b-48a3-bc73-cfcf3ed2520f
ms.openlocfilehash: c78e670303bde68299725e18c6f588f5e410a971
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87234302"
---
# <a name="zp-struct-member-alignment"></a>/Zp (Allineamento membri struct)

Controlla il modo in cui i membri di una struttura vengono compressi in memoria e specifica la stessa compressione per tutte le strutture in un modulo.

## <a name="syntax"></a>Sintassi

> **`/Zp`**[**`1`**|**`2`**|**`4`**|**`8`**|**`16`**]

## <a name="remarks"></a>Osservazioni

L' **`/ZpN`** opzione indica al compilatore dove archiviare ogni membro della struttura. Il compilatore archivia i membri dopo il primo in un limite minore della dimensione del tipo di membro o di un limite di *N*byte.

I valori di compressione disponibili sono descritti nella tabella seguente:

|Argomento/ZP|Effetto|
|-|-|
|1|Comprime le strutture nei limiti di 1 byte. Uguale a **`/Zp`** .|
|2|Comprime le strutture nei limiti di 2 byte.|
|4|Comprime le strutture nei limiti di 4 byte.|
|8|Comprime le strutture nei limiti di 8 byte (impostazione predefinita per x86, ARM e ARM64).|
|16| Comprime le strutture nei limiti di 16 byte (impostazione predefinita per x64).|

Non usare questa opzione a meno che non siano previsti requisiti di allineamento specifici.

> [!WARNING]
> Le intestazioni C++ nel set di Windows SDK e presuppongono la **`/Zp8`** compressione interna. È possibile che si verifichi un danneggiamento della memoria se l' **`/Zp`** impostazione viene modificata all'interno delle intestazioni Windows SDK. Le intestazioni non sono interessate dalle **`/Zp`** opzioni impostate nella riga di comando.

È anche possibile usare [`pack`](../../preprocessor/pack.md) per controllare la compressione della struttura. Per ulteriori informazioni sull'allineamento, vedere:

- [`align`](../../cpp/align-cpp.md)

- [`alignof`Operatore](../../cpp/alignof-operator.md)

- [`__unaligned`](../../cpp/unaligned.md)

- [`/ALIGN`(Allineamento sezione)](align-section-alignment.md)

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione**delle  >  proprietà di generazione del codice**C/C++**  >  **Code Generation** .

1. Modificare la proprietà **Allineamento membri struct** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.StructMemberAlignment%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md) \
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
