---
description: Altre informazioni su:/DISASM
title: /DISASM
ms.date: 01/17/2018
f1_keywords:
- /disasm
helpviewer_keywords:
- -DISASM dumpbin option
- DISASM dumpbin option
- /DISASM dumpbin option
ms.openlocfilehash: 764754e017958a57afd53236b7fc1ffb6217d850
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97192902"
---
# <a name="disasm"></a>/DISASM

Stampare il disassembly delle sezioni di codice nell'output di DUMPBIN.

## <a name="syntax"></a>Sintassi

> **/DISASM**{**:** \[ **byte** | **nobytes**]}

### <a name="arguments"></a>Argomenti

**BYTES**<br/>
Include i byte di istruzioni insieme ai codici operativi e agli argomenti interpretati nell'output del Disassembly. Questa è l'opzione predefinita.

**Nobytes**<br/>
Non include i byte dell'istruzione nell'output del Disassembly.

## <a name="remarks"></a>Commenti

L'opzione **/DISASM** Visualizza il disassembly delle sezioni di codice nel file. USA i simboli di debug se sono presenti nel file.

**/DISASM** deve essere usato solo su immagini native, non gestite. Lo strumento equivalente per il codice gestito è [Ildasm](/dotnet/framework/tools/ildasm-exe-il-disassembler).

Solo l'opzione [/headers](headers.md) DUMPBIN è disponibile per l'uso nei file prodotti dall'opzione del compilatore [/GL (intero programma Optimization)](gl-whole-program-optimization.md) .

## <a name="see-also"></a>Vedi anche

[Opzioni di DUMPBIN](dumpbin-options.md)
