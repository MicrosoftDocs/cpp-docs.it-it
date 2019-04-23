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
ms.openlocfilehash: d76cd93c7af4228bff8f73fa3bcbf40fa149b0be
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59237164"
---
# <a name="zp-struct-member-alignment"></a>/Zp (Allineamento membri struct)

Controlla come vengono compressi i membri di una struttura in memoria e consente di specificare la stessa compressione per tutte le strutture in un modulo.

## <a name="syntax"></a>Sintassi

> **/Zp**[**1**|**2**|**4**|**8**|**16**]

## <a name="remarks"></a>Note

Il **/Zp**_n_ opzione indica al compilatore in cui archiviare ogni membro della struttura. Il compilatore archivia membri dopo la prima a un limite che sarà il più piccolo delle dimensioni del tipo di membro, o un' *n*-limite di byte.

I valori di compressione disponibili sono descritti nella tabella seguente:

|/Zp argomento|Effetto|
|-|-|
|1|Comprime le strutture nei limiti di 1 byte. Uguale allo **/Zp**.|
|2|Comprime le strutture nei limiti di 2 byte.|
|4|Comprime le strutture nei limiti di 4 byte.|
|8|Comprime le strutture nei limiti di 8 byte (impostazione predefinita per x86, ARM e ARM64).|
|16| Comprime le strutture nei limiti di 16 byte (impostazione predefinita per x64).|

Non usare questa opzione a meno che non si abbiano requisiti specifici dell'allineamento.

> [!WARNING]
> Le intestazioni di C++ in Windows SDK impostato e presuppongono **/zp8** compressione internamente. Memoria potrebbero venire danneggiati se il **/Zp** impostazione viene modificata all'interno di intestazioni di Windows SDK. Le intestazioni non sono interessate da qualsiasi **/Zp** opzione è impostata nella riga di comando.

È anche possibile usare [pack](../../preprocessor/pack.md) alla compressione struttura controllo. Per ulteriori informazioni sull'allineamento, vedere:

- [align](../../cpp/align-cpp.md)

- [Operatore __alignof](../../cpp/alignof-operator.md)

- [__unaligned](../../cpp/unaligned.md)

- [/ALIGN (allineamento sezione)](align-section-alignment.md)

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **Code Generation** pagina delle proprietà.

1. Modificare il **Allineamento membri Struct** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.StructMemberAlignment%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md) \
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
