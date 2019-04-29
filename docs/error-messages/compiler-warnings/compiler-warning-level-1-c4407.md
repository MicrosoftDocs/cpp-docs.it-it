---
title: Avviso del compilatore (livello 1) C4407
ms.date: 11/04/2016
f1_keywords:
- C4407
helpviewer_keywords:
- C4407
ms.assetid: 32bc2c21-363a-4bb8-b486-725faeaededc
ms.openlocfilehash: 5142e3800f3ad716166a27e3b0407a40999b5746
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62408407"
---
# <a name="compiler-warning-level-1-c4407"></a>Avviso del compilatore (livello 1) C4407

eseguire il cast tra diversi puntatore alle rappresentazioni di membro, compilatore potrebbe generare codice non corretto

È stato rilevato un cast non corretto.

C4407 può essere generato a causa di operazioni di conformità del compilatore è stata eseguita in Visual C++ 2005. Puntatore a membro richiede ora un nome completo e l'operatore address-of (&).

C4407 può verificarsi se si esegue il cast tra un più ereditarietà puntatore a membro a ereditarietà singola puntatore-a-membro. In alcuni casi ciò possa funzionare, ma a volte non viene completata perché la rappresentazione di puntatore a membro ereditarietà singola non contiene informazioni sufficienti. La compilazione con il **/vmm** può essere utile (per altre informazioni, vedere [/vmm, /vms, /vmv (rappresentazione generale)](../../build/reference/vmm-vms-vmv-general-purpose-representation.md)). È anche possibile provare riorganizzando le classi base. il compilatore rileva una perdita di informazioni durante la conversione perché è una classe di base a un offset di diverso da zero da derivato.

L'esempio seguente genera l'errore C4407:

```
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