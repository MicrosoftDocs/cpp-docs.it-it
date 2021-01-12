---
description: Altre informazioni su:/ZP (allineamento membri struct)
title: /Zp (Allineamento membri struct)
ms.date: 01/08/2021
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
ms.openlocfilehash: 8d29c442726aff9503a42378fce6a7b8b09526ed
ms.sourcegitcommit: 14d6ae0d527d05d153e26463d4cd5ada0f43e864
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/11/2021
ms.locfileid: "98104778"
---
# <a name="zp-struct-member-alignment"></a>/Zp (Allineamento membri struct)

Controlla il modo in cui i membri di una struttura vengono compressi in memoria e specifica la stessa compressione per tutte le strutture in un modulo.

## <a name="syntax"></a>Sintassi

> **`/Zp`**[**`1`**|**`2`**|**`4`**|**`8`**|**`16`**]

## <a name="remarks"></a>Osservazioni

L' **`/ZpN`** opzione indica al compilatore dove archiviare ogni membro della struttura. Il compilatore archivia i membri dopo il primo in un limite minore della dimensione del tipo di membro o di un limite di *N* byte.

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
> Le intestazioni C/C++ nel Windows SDK presuppongono la **`/Zp8`** compressione interna. Non modificare l'impostazione predefinita quando si includono le intestazioni Windows SDK, usando **`/Zp`** nella riga di comando o usando `#pragma pack` . In caso contrario, l'applicazione può causare un danneggiamento della memoria in fase di esecuzione.

È anche possibile usare il [ `pack` pragma](../../preprocessor/pack.md) per controllare la compressione della struttura. Per ulteriori informazioni sull'allineamento, vedere:

- [`align`](../../cpp/align-cpp.md)

- [`alignof` Operatore](../../cpp/alignof-operator.md)

- [`__unaligned`](../../cpp/unaligned.md)

- [`/ALIGN` (Allineamento sezione)](align-section-alignment.md)

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione** delle  >  proprietà di generazione del codice **C/C++**  >   .

1. Modificare la proprietà **Allineamento membri struct** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.StructMemberAlignment%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md) \
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
