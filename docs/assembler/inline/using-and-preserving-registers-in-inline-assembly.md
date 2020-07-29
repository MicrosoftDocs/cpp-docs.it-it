---
title: Utilizzo e mantenimento dei registri nell'assembly inline
ms.date: 08/30/2018
helpviewer_keywords:
- __asm keyword [C++], register values
- inline assembly, registers
- registers, inline assembly
- preserving registers
ms.assetid: dbcd7360-6f3e-4b22-9ee2-9f65ca6f2543
ms.openlocfilehash: 99ca0093bb27e859854dfd1ca64addea923e5a5c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87191508"
---
# <a name="using-and-preserving-registers-in-inline-assembly"></a>Utilizzo e mantenimento dei registri nell'assembly inline

**Specifico di Microsoft**

In generale, è preferibile non presupporre che un registro abbia un valore specificato all'inizio di un **`__asm`** blocco. Non è garantito che i valori di registro vengano conservati in **`__asm`** blocchi distinti. Se si termina un blocco di codice inline e se ne avvia un altro, non è possibile basarsi sui registri nel secondo blocco per conservare i valori dal primo blocco. Un **`__asm`** blocco eredita qualsiasi valore di registro risultante dal normale flusso di controllo.

Se si usa la **`__fastcall`** convenzione di chiamata, il compilatore passa gli argomenti della funzione nei registri anziché nello stack. Questo può creare problemi nelle funzioni con **`__asm`** blocchi perché una funzione non ha modo di stabilire quale parametro è in quale registro. Se la funzione riceve un parametro in EAX e immediatamente archivia qualcos'altro in EAX, il parametro originale viene perduto. Inoltre, è necessario mantenere il registro ECX in qualsiasi funzione dichiarata con **`__fastcall`** .

Per evitare tali conflitti di registro, non usare la **`__fastcall`** convenzione per le funzioni che contengono un **`__asm`** blocco. Se si specifica la **`__fastcall`** convenzione a livello globale con l'opzione del compilatore/gr, dichiarare ogni funzione contenente un **`__asm`** blocco con **`__cdecl`** o **`__stdcall`** . L' **`__cdecl`** attributo indica al compilatore di usare la convenzione di chiamata C per la funzione. Se non si esegue la compilazione con/gr, evitare di dichiarare la funzione con l' **`__fastcall`** attributo.

Quando **`__asm`** si usa per scrivere il linguaggio assembly nelle funzioni C/C++, non è necessario mantenere i registri EAX, EBX, ecx, EDX, ESI o EDI. Ad esempio, in POWER2. Esempio C nella [scrittura di funzioni con assembly inline](../../assembler/inline/writing-functions-with-inline-assembly.md), la `power2` funzione non mantiene il valore nel registro EAX. Tuttavia, l'uso di questi registri influirà sulla qualità del codice perché l'allocatore del registro non può usarli per archiviare i valori nei **`__asm`** blocchi. Inoltre, tramite EBX, ESI o EDI nel codice assembly inline, si forza il compilatore a salvare e ripristinare tali registri nel prologo e nell'epilogo di funzione.

Per l'ambito del blocco è necessario mantenere gli altri registri usati, ad esempio i registri DS, SS, SP, BP e flags **`__asm`** . È consigliabile mantenere i registri ESP e EBP a meno che non esista un motivo per modificarli (per passare da uno stack ad un altro, ad esempio). Vedere anche [ottimizzazione dell'assembly inline](../../assembler/inline/optimizing-inline-assembly.md).

Alcuni tipi di SSE richiedono l'allineamento dello stack a otto byte, forzando il compilatore a generare codice di allineamento stack dinamico. Per poter accedere sia alle variabili locali che ai parametri della funzione dopo l'allineamento, il compilatore gestisce due puntatori ai frame.  Se il compilatore esegue l'omissione dei puntatori ai frame (Polinesia), utilizzerà EBP e ESP.  Se il compilatore non esegue la Polinesia, utilizzerà EBX e EBP. Per garantire che il codice venga eseguito correttamente, non modificare EBX nel codice asm se la funzione richiede l'allineamento dinamico dello stack poiché ciò potrebbe modificare il puntatore ai frame. Spostare i tipi allineati a otto byte dalla funzione oppure evitare l'utilizzo di EBX.

> [!NOTE]
> Se il codice assembly inline modifica il flag di direzione mediante istruzioni CLD o STD, è necessario ripristinare il flag al valore originale.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Assembler inline](../../assembler/inline/inline-assembler.md)<br/>
