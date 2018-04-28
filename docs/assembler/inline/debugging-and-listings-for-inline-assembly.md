---
title: Debug ed elenchi per Assembly Inline | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- source level debugger
- __asm keyword [C++], debugging
- inline assembly, listings
- bugs, __asm blocks
- debugging [C++], inline assembly code
- inline assembly, debugging
ms.assetid: 69266930-6f9a-433d-b704-f4f44e7b2583
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 457402626edcdb2be05923aa33bbd26b1cab7137
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
---
# <a name="debugging-and-listings-for-inline-assembly"></a>Debug ed elenchi per assembly inline
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 I programmi contenenti codice assembly inline debug possono essere eseguiti con un debugger a livello di origine se si compila con il [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) opzione.  
  
 All'interno del debugger è possibile impostare punti di interruzione sia in C che in C++ oltre che righe in linguaggio assembly. Se si abilita la modalità di compilazione mista assembly e linguaggio di origine, è possibile visualizzare sia l'origine che il form disassemblato del codice assembly.  
  
 Tenere presente che l'inserimento di più istruzioni assembly o di più istruzioni del linguaggio di origine su una singola riga può compromettere il debug. Nella modalità di origine è possibile utilizzare il debugger per impostare i punti di interruzione in una singola riga, ma non nelle singole istruzioni sulla stessa riga. Lo stesso principio viene applicato a un blocco `__asm` definito come macro C, che si espande in una singola riga logica.  
  
 Se si crea un misto di origine e di un assembly elenca il [/FAs](../../build/reference/fa-fa-listing-file.md) l'opzione del compilatore, l'elenco contiene forme di origine e di assembly di ogni riga in linguaggio assembly. Le macro non vengono espanse nei listati, ma durante la compilazione.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Uso del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)