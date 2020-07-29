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
ms.openlocfilehash: 0c411289745466bd6478cc82ab30e6a05be9cc25
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87192002"
---
# <a name="jumping-to-labels-in-inline-assembly"></a>Passaggio a etichette nell'assembly inline

**Specifico di Microsoft**

Analogamente a un'etichetta C o C++ ordinaria, un'etichetta in un **`__asm`** blocco ha un ambito per tutta la funzione in cui è definita (non solo nel blocco). Le istruzioni e le istruzioni **`goto`** di assembly possono passare alle etichette all'interno o all'esterno del **`__asm`** blocco.

Le etichette definite nei **`__asm`** blocchi non fanno distinzione tra maiuscole e minuscole. entrambe **`goto`** le istruzioni e le istruzioni di assembly possono fare riferimento a tali etichette senza considerare i casi. Le etichette C e C++ fanno distinzione tra maiuscole e minuscole solo se utilizzate dalle **`goto`** istruzioni. Le istruzioni di assembly possono passare a un'etichetta C o C++ senza fare distinzione tra maiuscole e minuscole.

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

Non usare i nomi di funzione della libreria C come etichette nei **`__asm`** blocchi. Ad esempio, si potrebbe essere tentati di utilizzare `exit` come etichetta, come segue:

```cpp
; BAD TECHNIQUE: using library function name as label
   jne exit
   .
   .
   .
exit:
   ; More __asm code follows
```

Poiché **Exit** è il nome di una funzione della libreria C, questo codice può causare un passaggio alla funzione **Exit** invece che alla posizione desiderata.

Come nei programmi MASM, il simbolo di dollaro (`$`) serve come contatore di posizione corrente. È un'etichetta per l'istruzione al momento assemblata. In **`__asm`** blocchi, l'uso principale è quello di eseguire salti condizionali lunghi:

```cpp
   jne $+5 ; next instruction is 5 bytes long
   jmp farlabel ; $+5
   .
   .
   .
farlabel:
```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Assembler inline](../../assembler/inline/inline-assembler.md)<br/>
