---
title: /DISASM | Microsoft Docs
ms.date: 1/17/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /disasm
dev_langs:
- C++
helpviewer_keywords:
- -DISASM dumpbin option
- DISASM dumpbin option
- /DISASM dumpbin option
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 89b0784ff10e7d9521351e01d8907c963c9304fd
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="disasm"></a>/DISASM

Stampare il disassembly di sezioni di codice nell'output di DUMPBIN.

## <a name="syntax"></a>Sintassi

> **/DISASM**{**:**\[**BYTE**|**NOBYTES**]}  

### <a name="arguments"></a>Argomenti

**BYTE**  
Include i byte di istruzione con i codici operativi interpretati e gli argomenti nell'output di disassembly. Questa è l'opzione predefinita.

**NOBYTES**  
Non include i byte di istruzione nell'output di disassembly.

## <a name="remarks"></a>Note

Il **opzione /DISASM** opzione Visualizza disassembly di sezioni di codice nel file. Usa i simboli di debug se sono presenti nel file.

**/DISASM** deve essere utilizzata solo sulle immagini native, non gestite. Lo strumento equivalente per il codice gestito è [ILDASM](/dotnet/framework/tools/ildasm-exe-il-disassembler).

Solo il [/HEADERS](../../build/reference/headers.md) (opzione DUMPBIN) è disponibile per l'utilizzo con i file generati dal [/GL (Ottimizzazione intero programma)](../../build/reference/gl-whole-program-optimization.md) l'opzione del compilatore.

## <a name="see-also"></a>Vedere anche

[Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)  
