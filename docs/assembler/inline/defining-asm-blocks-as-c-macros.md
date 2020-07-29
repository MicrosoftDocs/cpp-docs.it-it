---
title: Definizione dei blocchi __asm come macro C
ms.date: 08/30/2018
helpviewer_keywords:
- macros, __asm blocks
- Visual C, macros
- __asm keyword [C++], as C macros
ms.assetid: 677ba11c-21c8-4609-bba7-cd47312243b0
ms.openlocfilehash: 4195624078c53f6c1f20cd2a03ed53dac937d9cd
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87192106"
---
# <a name="defining-__asm-blocks-as-c-macros"></a>Definizione dei blocchi __asm come macro C

**Specifico di Microsoft**

Le macro del linguaggio C offrono un modo pratico per inserire il codice assembly nel codice sorgente, tuttavia richiedono una gestione aggiuntiva in quanto una macro si espande in una singola riga logica. Per creare macro senza problemi, attenersi alle seguenti regole:

- Racchiudere il **`__asm`** blocco tra parentesi graffe.

- Inserire la **`__asm`** parola chiave davanti a ogni istruzione dell'assembly.

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

A prima vista, le ultime tre **`__asm`** parole chiave sembrano superflue. Tuttavia, sono necessarie, perché la macro si espande in una singola riga:

```cpp
__asm /* Port output */ { __asm mov al, 2  __asm mov dx, 0xD007 __asm out dx, al }
```

La terza e la quarta **`__asm`** parola chiave sono necessarie come separatori di istruzione. Gli unici separatori di istruzione riconosciuti nei **`__asm`** blocchi sono il carattere di nuova riga e la **`__asm`** parola chiave. Poiché un blocco definito come macro è una linea logica, è necessario separare ogni istruzione con **`__asm`** .

Anche le parentesi graffe sono indispensabili. Se vengono omesse, il compilatore può essere confuso dalle istruzioni C o C++ che si trovano nella stessa riga a destra della chiamata di macro. Senza la parentesi graffa di chiusura, il compilatore non può stabilire dove si interrompe il codice assembly e visualizza le istruzioni C o C++ dopo il **`__asm`** blocco come istruzioni di assembly.

I commenti in stile assembly che iniziano con un punto**e**virgola (;) continuano fino alla fine della riga. Questo causa problemi nelle macro perché il compilatore ignora tutti gli elementi dopo il commento, fino alla fine della riga logica. Lo stesso vale per i commenti a riga singola C o C++ (`// comment`). Per evitare errori, usare i commenti di tipo C obsoleti ( `/* comment */` ) in **`__asm`** blocchi definiti come macro.

Un **`__asm`** blocco scritto come macro C può assumere argomenti. A differenza di una normale macro C, tuttavia, una **`__asm`** macro non può restituire un valore. Pertanto non è possibile utilizzare tali macro nelle espressioni C o C++.

Prestare attenzione a non richiamare le macro di questo tipo senza alcun criterio. Ad esempio, richiamando una macro del linguaggio assembly in una funzione dichiarata con la **`__fastcall`** convenzione possono verificarsi risultati imprevisti. (Vedere [uso e mantenimento di registri nell'assembly inline](../../assembler/inline/using-and-preserving-registers-in-inline-assembly.md)).

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Assembler inline](../../assembler/inline/inline-assembler.md)<br/>
