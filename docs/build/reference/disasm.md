---
title: /DISASM
ms.date: 1/17/2018
f1_keywords:
- /disasm
helpviewer_keywords:
- -DISASM dumpbin option
- DISASM dumpbin option
- /DISASM dumpbin option
ms.openlocfilehash: 77f6f05029ec4480afb2180eab0bb57838d643a6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50462946"
---
# <a name="disasm"></a>/DISASM

Stampare il disassemblaggio delle sezioni di codice nell'output di DUMPBIN.

## <a name="syntax"></a>Sintassi

> **/DISASM**{**:**\[**BYTE**|**NOBYTES**]}

### <a name="arguments"></a>Argomenti

**BYTE**<br/>
Include i byte di istruzione con gli argomenti e i codici operativi interpretati nell'output disassembly. Questa è l'opzione predefinita.

**NOBYTES**<br/>
Non include i byte di istruzione nell'output disassembly.

## <a name="remarks"></a>Note

Il **opzione /DISASM** opzione Visualizza disassembly delle sezioni di codice nel file. Usa i simboli di debug se sono presenti nel file.

**/DISASM** deve essere usato solo su immagini non gestite e native. Lo strumento equivalente per il codice gestito viene [ILDASM](/dotnet/framework/tools/ildasm-exe-il-disassembler).

Solo le [/HEADERS](../../build/reference/headers.md) (opzione dumpbin) è disponibile per l'uso con i file generati dalle [/GL (Ottimizzazione intero programma)](../../build/reference/gl-whole-program-optimization.md) opzione del compilatore.

## <a name="see-also"></a>Vedere anche

[Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)
