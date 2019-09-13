---
title: /DISASM
ms.date: 01/17/2018
f1_keywords:
- /disasm
helpviewer_keywords:
- -DISASM dumpbin option
- DISASM dumpbin option
- /DISASM dumpbin option
ms.openlocfilehash: fb394b2266470e77c50ce5398aea961c37ac34fb
ms.sourcegitcommit: effb516760c0f956c6308eeded48851accc96b92
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70927714"
---
# <a name="disasm"></a>/DISASM

Stampare il disassembly delle sezioni di codice nell'output di DUMPBIN.

## <a name="syntax"></a>Sintassi

> **/DISASM**{ **:** \[**BYTES**|**NOBYTES**]}

### <a name="arguments"></a>Argomenti

**BYTES**<br/>
Include i byte di istruzioni insieme ai codici operativi e agli argomenti interpretati nell'output del Disassembly. Questa è l'opzione predefinita.

**NOBYTES**<br/>
Non include i byte dell'istruzione nell'output del Disassembly.

## <a name="remarks"></a>Note

L'opzione **/DISASM** Visualizza il disassembly delle sezioni di codice nel file. USA i simboli di debug se sono presenti nel file.

**/DISASM** deve essere usato solo su immagini native, non gestite. Lo strumento equivalente per il codice gestito è [Ildasm](/dotnet/framework/tools/ildasm-exe-il-disassembler).

Solo l'opzione [/headers](headers.md) DUMPBIN è disponibile per l'uso nei file prodotti dall'opzione del compilatore [/GL (intero programma Optimization)](gl-whole-program-optimization.md) .

## <a name="see-also"></a>Vedere anche

[Opzioni di DUMPBIN](dumpbin-options.md)
