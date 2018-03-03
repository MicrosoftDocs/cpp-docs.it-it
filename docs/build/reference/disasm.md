---
title: /DISASM | Microsoft Docs
ms.date: 1/17/2018
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
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
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d448b92c3436f3d2875bd8d9b8e0af6a7149e065
ms.sourcegitcommit: ff9bf140b6874bc08718674c07312ecb5f996463
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/19/2018
---
# <a name="disasm"></a>/DISASM

Stampare il disassembly di sezioni di codice nell'output di DUMPBIN.

## <a name="syntax"></a>Sintassi

> **/DISASM**{**:**\[**BYTES**|**NOBYTES**]}  

### <a name="arguments"></a>Argomenti

**BYTE**  
Include i byte di istruzione con i codici operativi interpretati e gli argomenti nell'output di disassembly. Questa è l'opzione predefinita.

**NOBYTES**  
Non include i byte di istruzione nell'output di disassembly.

## <a name="remarks"></a>Note

Il **opzione /DISASM** opzione Visualizza disassembly di sezioni di codice nel file. Usa i simboli di debug se sono presenti nel file.

**/DISASM** deve essere utilizzato solo in immagini native e non gestite. Lo strumento equivalente per il codice gestito è [ILDASM](/dotnet/framework/tools/ildasm-exe-il-disassembler).

Solo il [/HEADERS](../../build/reference/headers.md) (opzione DUMPBIN) è disponibile per l'utilizzo con i file generati dal [/GL (Ottimizzazione intero programma)](../../build/reference/gl-whole-program-optimization.md) l'opzione del compilatore.

## <a name="see-also"></a>Vedere anche

[Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)  
