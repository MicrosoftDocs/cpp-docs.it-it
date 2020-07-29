---
title: Debug ed elenchi per assembly inline
ms.date: 08/30/2018
helpviewer_keywords:
- source level debugger
- __asm keyword [C++], debugging
- inline assembly, listings
- bugs, __asm blocks
- debugging [C++], inline assembly code
- inline assembly, debugging
ms.assetid: 69266930-6f9a-433d-b704-f4f44e7b2583
ms.openlocfilehash: 6e97c2528f480268599f561e8cf4a1df2518c6b3
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87192184"
---
# <a name="debugging-and-listings-for-inline-assembly"></a>Debug ed elenchi per assembly inline

**Specifico di Microsoft**

È possibile eseguire il debug di programmi contenenti codice assembly inline con un debugger a livello di origine se si compila con l'opzione [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) .

All'interno del debugger è possibile impostare punti di interruzione sia in C che in C++ oltre che righe in linguaggio assembly. Se si abilita la modalità di compilazione mista assembly e linguaggio di origine, è possibile visualizzare sia l'origine che il form disassemblato del codice assembly.

Tenere presente che l'inserimento di più istruzioni assembly o di più istruzioni del linguaggio di origine su una singola riga può compromettere il debug. Nella modalità di origine è possibile utilizzare il debugger per impostare i punti di interruzione in una singola riga, ma non nelle singole istruzioni sulla stessa riga. Lo stesso principio si applica a un **`__asm`** blocco definito come macro C, che si espande in una singola riga logica.

Se si crea un'origine mista e un elenco di assembly con l'opzione del compilatore [/FAS](../../build/reference/fa-fa-listing-file.md) , l'elenco contiene i moduli di origine e di assembly di ogni riga del linguaggio di assembly. Le macro non vengono espanse nei listati, ma durante la compilazione.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Uso del linguaggio assembly nei blocchi di __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>
