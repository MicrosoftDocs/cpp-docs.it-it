---
title: Passaggio a etichette nell'assembly inline
ms.date: 08/30/2018
helpviewer_keywords:
- inline assembly, jumping to labels
- labels, in inline assembly
- __asm keyword [C++], labels
- case sensitivity, labels in inline assembly
- labels, in __asm blocks
- jumping to labels in inline assembly
ms.assetid: 36c18b97-8981-4631-9dfd-af6c14a04297
ms.openlocfilehash: 7653dc990e2f4b490bcbe333ed6f7586ac966d2e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50616224"
---
# <a name="jumping-to-labels-in-inline-assembly"></a>Passaggio a etichette nell'assembly inline

**Sezione specifica Microsoft**

Come un'etichetta C o C++ comune, un'etichetta in un blocco `__asm` ha un ambito nella funzione in cui è definita (non solo nel blocco). Sia le istruzioni di assembly che le istruzioni `goto` possono passare alle etichette all'interno o all'esterno del blocco `__asm`.

Nelle etichette definite in blocchi `__asm` non viene fatta distinzione tra maiuscole e minuscole; sia le istruzioni `goto` che le istruzioni di assembly possono fare riferimento a tali etichette senza tale distinzione. Nelle etichette C++ e C viene fatta distinzione tra maiuscole e minuscole solo se utilizzate dalle istruzioni `goto`. Le istruzioni di assembly possono passare a un'etichetta C o C++ senza fare distinzione tra maiuscole e minuscole.

Il codice seguente illustra tutte le permutazioni:

```cpp
void func( void )
{
   goto C_Dest;  /* Legal: correct case   */
   goto c_dest;  /* Error: incorrect case */

   goto A_Dest;  /* Legal: correct case   */
   goto a_dest;  /* Legal: incorrect case */

   __asm
   {
      jmp C_Dest ; Legal: correct case
      jmp c_dest ; Legal: incorrect case

      jmp A_Dest ; Legal: correct case
      jmp a_dest ; Legal: incorrect case

      a_dest:    ; __asm label
   }

   C_Dest:       /* C label */
   return;
}
int main()
{
}
```

Non utilizzare nomi delle funzioni della libreria C come etichette in blocchi `__asm`. Ad esempio, si potrebbe essere tentati di utilizzare `exit` come etichetta, come segue:

```cpp
; BAD TECHNIQUE: using library function name as label
   jne exit
   .
   .
   .
exit:
   ; More __asm code follows
```

Perché **uscire** è il nome di una funzione di libreria C, questo codice potrebbe causare un passaggio per il **uscire** funzione anziché nella posizione desiderata.

Come nei programmi MASM, il simbolo di dollaro (`$`) serve come contatore di posizione corrente. È un'etichetta per l'istruzione al momento assemblata. Nei blocchi `__asm`, l'uso principale è di eseguire passaggi condizionali lunghi:

```cpp
   jne $+5 ; next instruction is 5 bytes long
   jmp farlabel ; $+5
   .
   .
   .
farlabel:
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Assembler inline](../../assembler/inline/inline-assembler.md)<br/>