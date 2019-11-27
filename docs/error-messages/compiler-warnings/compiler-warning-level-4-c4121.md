---
title: Avviso del compilatore (livello 4) C4121
ms.date: 11/04/2016
f1_keywords:
- C4121
helpviewer_keywords:
- C4121
ms.assetid: 8c5b85c9-2543-426b-88bc-319c50158c7e
ms.openlocfilehash: bafa16cbad2cb0a2475cae5a98c608096e296442
ms.sourcegitcommit: 3ee06ec53153cf21910fc8cfef78a4f25f9633f3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/26/2019
ms.locfileid: "74541611"
---
# <a name="compiler-warning-level-4-c4121"></a>Avviso del compilatore (livello 4) C4121

"simbolo": allineamento di un membro sensibile alla compressione

Il compilatore ha aggiunto della spaziatura interna per allineare un membro della struttura al limite di compressione, ma il valore di compressione è inferiore alle dimensioni del membro. Il frammento di codice seguente, ad esempio, genera l'errore C4121:

```cpp
// C4121.cpp
// compile with: /W4 /c
#pragma pack(2)
struct s
{
   char a;
   int b; // C4121
   long long c;
};
```

Per risolvere l'errore, apportare una delle modifiche seguenti:

- Allineare le dimensioni di compressione alle dimensioni del membro che ha causato l'avviso o impostare dimensioni superiori. In questo frammento, ad esempio, modificare `pack(2)` in `pack(4)` o `pack(8)`.

- Riordinare le dichiarazioni dei membri in base alle dimensioni, dalla più grande alla più piccola. Nel frammento invertire l'ordine dei membri della struttura in modo che il membro `long long` preceda `int` e `int` preceda `char`.

Questo avviso viene visualizzato solo quando il compilatore aggiunge della spaziatura interna prima dei membri dati. Non viene visualizzato se in seguito alla compressione i dati si trovano in una posizione di memoria non allineata per il tipo di dati e prima del membro dati non è stata inserita spaziatura. Se i dati non sono allineati a limiti che sono multipli delle dimensioni dei dati stessi, è possibile che si verifichi un calo delle prestazioni. Su alcune architetture, la lettura e la scrittura di dati non allineati causano errori del processore la cui risoluzione potrebbe richiedere molto più tempo. Gli accessi ai dati non allineati non possono essere portati su alcune architetture RISC.

È possibile utilizzare [#pragma pack](../../preprocessor/pack.md) o [/ZP](../../build/reference/zp-struct-member-alignment.md) per specificare l'allineamento della struttura. Il compilatore non genera questo avviso quando viene specificato **/Zp1** .