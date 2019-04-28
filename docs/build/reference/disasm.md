---
title: /DISASM
ms.date: 1/17/2018
f1_keywords:
- /disasm
helpviewer_keywords:
- -DISASM dumpbin option
- DISASM dumpbin option
- /DISASM dumpbin option
ms.openlocfilehash: 10e8187e896b3922438a8cf2dafa0aec4c91f904
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62272061"
---
# <a name="disasm"></a>/DISASM

Stampare il disassemblaggio delle sezioni di codice nell'output di DUMPBIN.

## <a name="syntax"></a>Sintassi

> **/DISASM**{**:**\[**BYTES**|**NOBYTES**]}

### <a name="arguments"></a>Argomenti

**BYTES**<br/>
Include i byte di istruzione con gli argomenti e i codici operativi interpretati nell'output disassembly. Questa è l'opzione predefinita.

**NOBYTES**<br/>
Non include i byte di istruzione nell'output disassembly.

## <a name="remarks"></a>Note

Il **opzione /DISASM** opzione Visualizza disassembly delle sezioni di codice nel file. Usa i simboli di debug se sono presenti nel file.

**/DISASM** deve essere usato solo su immagini non gestite e native. Lo strumento equivalente per il codice gestito viene [ILDASM](/dotnet/framework/tools/ildasm-exe-il-disassembler).

Solo le [/HEADERS](headers.md) (opzione dumpbin) è disponibile per l'uso con i file generati dalle [/GL (Ottimizzazione intero programma)](gl-whole-program-optimization.md) opzione del compilatore.

## <a name="see-also"></a>Vedere anche

[Opzioni di DUMPBIN](dumpbin-options.md)
