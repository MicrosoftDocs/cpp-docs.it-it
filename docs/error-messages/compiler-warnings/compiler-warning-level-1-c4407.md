---
title: Compilatore avviso (livello 1) C4407 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4407
dev_langs:
- C++
helpviewer_keywords:
- C4407
ms.assetid: 32bc2c21-363a-4bb8-b486-725faeaededc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a9a665dbb71157b37f72d3d0721357d00dc37230
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46032603"
---
# <a name="compiler-warning-level-1-c4407"></a>Avviso del compilatore (livello 1) C4407

eseguire il cast tra diversi puntatore alle rappresentazioni di membro, compilatore potrebbe generare codice non corretto

È stato rilevato un cast non corretto.

C4407 può essere generato a causa di operazioni di conformità del compilatore è stata eseguita in Visual C++ 2005. Puntatore a membro richiede ora un nome qualificato e l'operatore address-of (&).

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