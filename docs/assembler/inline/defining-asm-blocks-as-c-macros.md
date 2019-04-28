---
title: Definizione dei blocchi __asm come macro C
ms.date: 08/30/2018
helpviewer_keywords:
- macros, __asm blocks
- Visual C, macros
- __asm keyword [C++], as C macros
ms.assetid: 677ba11c-21c8-4609-bba7-cd47312243b0
ms.openlocfilehash: c48298cf802600995dbbf68885896b6feccb807d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62167026"
---
# <a name="defining-asm-blocks-as-c-macros"></a>Definizione dei blocchi __asm come macro C

**Sezione specifica Microsoft**

Le macro del linguaggio C offrono un modo pratico per inserire il codice assembly nel codice sorgente, tuttavia richiedono una gestione aggiuntiva in quanto una macro si espande in una singola riga logica. Per creare macro senza problemi, attenersi alle seguenti regole:

- Racchiudere il blocco `__asm` tra parentesi graffe.

- Inserire la parola chiave `__asm` davanti a ogni istruzione assembly.

- Utilizzare i commenti di tipo obsoleto C ( `/* comment */`) invece di commenti stile assembly ( `; comment`) o commenti a riga singola di C ( `// comment`).

Nell'esempio seguente viene definita una macro semplice:

```cpp
#define PORTIO __asm      \
/* Port output */         \
{                         \
   __asm mov al, 2        \
   __asm mov dx, 0xD007   \
   __asm out dx, al       \
}
```

A prima vista, le ultime tre parole chiave `__asm` sembrano superflue. Tuttavia, sono necessarie, perché la macro si espande in una singola riga:

```cpp
__asm /* Port output */ { __asm mov al, 2  __asm mov dx, 0xD007 __asm out dx, al }
```

La terza e la quarta parola chiave `__asm` sono necessarie come separatori di istruzione. Gli unici separatori di istruzione riconosciuti nei blocchi `__asm` sono il carattere di nuova riga e la parola chiave `__asm`. Poiché un blocco definito come macro è una riga logica, è necessario separare ogni istruzione con `__asm`.

Anche le parentesi graffe sono indispensabili. Se vengono omesse, il compilatore può essere confuso dalle istruzioni C o C++ che si trovano nella stessa riga a destra della chiamata di macro. Senza la parentesi graffa di chiusura, il compilatore non è in grado di riconoscere il punto in cui il codice assembly viene interrotto né di considerare le istruzioni C o C++ presenti dopo il blocco `__asm` come istruzioni assembly.

I commenti stile assembly che iniziano con un punto e virgola (**;**) continuano alla fine della riga. Questo causa problemi nelle macro perché il compilatore ignora tutti gli elementi dopo il commento, fino alla fine della riga logica. Lo stesso vale per i commenti a riga singola C o C++ (`// comment`). Per evitare errori, utilizzare commenti C obsoleti ( `/* comment */`) nei blocchi `__asm` definiti come macro.

Un blocco `__asm` scritto come una macro C può accettare argomenti. Tuttavia, a differenza di una macro di C normale, una macro `__asm` non può restituire un valore. Pertanto non è possibile utilizzare tali macro nelle espressioni C o C++.

Prestare attenzione a non richiamare le macro di questo tipo senza alcun criterio. Ad esempio, richiamare una macro in linguaggio assembly in una funzione dichiarata con la convenzione `__fastcall` può causare risultati imprevisti. (Vedere [utilizzo e mantenimento dei registri nell'Assembly Inline](../../assembler/inline/using-and-preserving-registers-in-inline-assembly.md).)

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Assembler inline](../../assembler/inline/inline-assembler.md)<br/>