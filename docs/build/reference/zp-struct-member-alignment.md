---
title: /Zp (Allineamento membri struct)
ms.date: 12/17/2018
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
ms.openlocfilehash: d30e61137fc5ff8f6a5501ac7815edafc18f7680
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57807689"
---
# <a name="zp-struct-member-alignment"></a>/Zp (Allineamento membri struct)

Controlla come vengono compressi i membri di una struttura in memoria e consente di specificare la stessa compressione per tutte le strutture in un modulo.

## <a name="syntax"></a>Sintassi

> **/Zp**[**1**|**2**|**4**|**8**|**16**]

## <a name="remarks"></a>Note

Quando si specifica la **/Zp**_n_ opzione, ogni membro di struttura dopo il primo viene archiviato sulla dimensione del tipo di membro o *n*-limiti di byte (in cui *n* è 1, 2, 4, 8 o 16), qualunque sia il minore.

I valori di compressione disponibili sono descritti nella tabella seguente:

|/Zp argomento|Effetto|
|-|-|
|1|Comprime le strutture nei limiti di 1 byte. Uguale allo **/Zp**.|
|2|Comprime le strutture nei limiti di 2 byte.|
|4|Comprime le strutture nei limiti di 4 byte.|
|8|Comprime le strutture nei limiti di 8 byte (impostazione predefinita).|
|16| Comprime le strutture nei limiti di 16 byte.|

È consigliabile usare questa opzione non a meno che non si abbiano requisiti specifici dell'allineamento.

> [!WARNING]
> Si supponga di intestazioni di C++ in Windows SDK **/zp8** di compressione. Memoria potrebbero venire danneggiati se il **/Zp** impostazione viene modificata quando si usano le intestazioni di Windows SDK.

È anche possibile usare [pack](../../preprocessor/pack.md) alla compressione struttura controllo. Per ulteriori informazioni sull'allineamento, vedere:

- [align](../../cpp/align-cpp.md)

- [Operatore __alignof](../../cpp/alignof-operator.md)

- [__unaligned](../../cpp/unaligned.md)

- [/ALIGN (allineamento sezione)](align-section-alignment.md)

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **C/C++** > **generazione di codice** pagina delle proprietà.

1. Modificare il **Allineamento membri Struct** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.StructMemberAlignment%2A>.

## <a name="see-also"></a>Vedere anche

- [Opzioni del compilatore MSVC](compiler-options.md)
- [Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
