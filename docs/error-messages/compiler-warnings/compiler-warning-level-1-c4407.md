---
title: Avviso del compilatore (livello 1) C4407
ms.date: 11/04/2016
f1_keywords:
- C4407
helpviewer_keywords:
- C4407
ms.assetid: 32bc2c21-363a-4bb8-b486-725faeaededc
ms.openlocfilehash: 8dd78872d4edf82fb61c8ab93639dbcd93085754
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80162543"
---
# <a name="compiler-warning-level-1-c4407"></a>Avviso del compilatore (livello 1) C4407

cast tra diverse rappresentazioni di puntatore a membro, il compilatore potrebbe generare codice non corretto

È stato rilevato un cast errato.

C4407 può essere generato a causa di operazioni di conformità del compilatore eseguite in Visual Studio 2005. Il puntatore a membro ora richiede un nome completo e l'operatore address-of (&).

C4407 può verificarsi se si esegue il cast tra un puntatore a membro con ereditarietà multipla a un singolo puntatore di ereditarietà a membro. A volte questo può funzionare, ma a volte non è possibile perché la rappresentazione da puntatore a membro con ereditarietà singola non tiene a sufficienza le informazioni. La compilazione con **/VMM** può essere utile (per altre informazioni, vedere [/VMM,/VMS,/vmv (rappresentazione per utilizzo generico)](../../build/reference/vmm-vms-vmv-general-purpose-representation.md)). È anche possibile provare a riorganizzare le classi base. il compilatore sta rilevando una perdita di informazioni nella conversione perché una classe base è a un offset diverso da zero dall'oggetto derivato.

L'esempio seguente genera l'C4407:

```cpp
// C4407.cpp
// compile with: /W1 /c
struct C1 {};
struct C2 {};
struct C3 : C1, C2 {};

typedef void(C3::*PMF_C3)();
typedef void(C2::*PMF_C2)();

PMF_C2 f1(PMF_C3 pmf) {
   return (PMF_C2)pmf;   // C4407, change type of cast,
   // or reverse base class inheritance of C3 (i.e. : C2, C1)
}
```
