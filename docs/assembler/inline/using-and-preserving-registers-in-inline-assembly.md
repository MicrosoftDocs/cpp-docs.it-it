---
title: Utilizzo e mantenimento dei registri nell'assembly inline
ms.date: 08/30/2018
helpviewer_keywords:
- __asm keyword [C++], register values
- inline assembly, registers
- registers, inline assembly
- preserving registers
ms.assetid: dbcd7360-6f3e-4b22-9ee2-9f65ca6f2543
ms.openlocfilehash: 30b2f9ca8c658b65819709bb2e536b5aaecad676
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50643066"
---
# <a name="using-and-preserving-registers-in-inline-assembly"></a>Utilizzo e mantenimento dei registri nell'assembly inline

**Sezione specifica Microsoft**

In generale, non si deve supporre che un registro conterrà un dato valore quando un blocco `__asm` viene avviato. Non è garantito che i valori del registro siano mantenuti tra blocchi `__asm` separati. Se si termina un blocco di codice inline e se ne avvia un altro, non è possibile basarsi sui registri nel secondo blocco per conservare i valori dal primo blocco. Un blocco `__asm` eredita qualsiasi valore di registro risulti dal flusso di controllo normale.

Se si utilizza la convenzione di chiamata `__fastcall`, il compilatore passa gli argomenti della funzione nei registri anziché sullo stack. Ciò può creare problemi in funzioni con blocchi `__asm` poiché una funzione non ha modo di stabilire quale parametro sia in quale registro. Se la funzione riceve un parametro in EAX e immediatamente archivia qualcos'altro in EAX, il parametro originale viene perduto. Inoltre, è necessario mantenere il registro ECX in qualsiasi funzione dichiarata con `__fastcall`.

Per evitare questi conflitti di registro, non utilizzare la convenzione `__fastcall` per le funzioni che contengono un blocco `__asm`. Se si specifica la convenzione `__fastcall` globalmente con l'opzione del compilatore /Gr, dichiarare ciascuna funzione che contiene un blocco `__asm` con `__cdecl` o `__stdcall`. L'attributo `__cdecl` indica al compilatore di utilizzare la convenzione di chiamata C per tale funzione. Se non si esegue la compilazione con /Gr, evitare di dichiarare la funzione con l'attributo `__fastcall`.

Quando si utilizza `__asm` per scrivere il linguaggio assembly in funzioni C/C++, non è necessario mantenere i registri EAX, EBX, ECX, EDX, ESI o EDI. Ad esempio, in POWER2. Esempio C in [scrittura di funzioni con Inline Assembly](../../assembler/inline/writing-functions-with-inline-assembly.md), il `power2` funzione non mantiene il valore nel registro EAX. Tuttavia, l'utilizzo di questi registri influirà sulla qualità del codice in quanto l'allocatore del registro non può utilizzarli per archiviare i valori nei blocchi `__asm`. Inoltre, tramite EBX, ESI o EDI nel codice assembly inline, si forza il compilatore a salvare e ripristinare tali registri nel prologo e nell'epilogo di funzione.

È consigliabile mantenere altri registri utilizzati (come registri DS, SS, SP, BP e di flag) per l'ambito del blocco `__asm`. È consigliabile mantenere i registri ESP e EBP a meno che non esista un motivo per modificarli (per passare da uno stack ad un altro, ad esempio). Vedere anche [ottimizzazione dell'Inline Assembly](../../assembler/inline/optimizing-inline-assembly.md).

Alcuni tipi di SSE richiedono l'allineamento dello stack a otto byte, forzando il compilatore a generare codice di allineamento stack dinamico. Per poter accedere sia alle variabili locali che ai parametri della funzione dopo l'allineamento, il compilatore gestisce due puntatori ai frame.  Se il compilatore esegue l'omissione dei puntatori ai frame (FPO), utilizzerà EBP ed ESP.  Se il compilatore non esegue il FPO, utilizzerà EBX ed EBP. Per garantire che il codice venga eseguito correttamente, non modificare EBX nel codice asm se la funzione richiede l'allineamento dinamico dello stack poiché ciò potrebbe modificare il puntatore ai frame. Spostare i tipi allineati a otto byte dalla funzione oppure evitare l'utilizzo di EBX.

> [!NOTE]
>  Se il codice assembly inline modifica il flag di direzione mediante istruzioni CLD o STD, è necessario ripristinare il flag al valore originale.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Assembler inline](../../assembler/inline/inline-assembler.md)<br/>