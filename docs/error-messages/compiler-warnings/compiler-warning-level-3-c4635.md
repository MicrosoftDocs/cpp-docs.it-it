---
title: Avviso del compilatore (livello 3) C4635
ms.date: 11/04/2016
f1_keywords:
- C4635
helpviewer_keywords:
- C4635
ms.assetid: b2ba90de-c093-4a76-8076-b65878467574
ms.openlocfilehash: 21873a883b19924ce3ef41511d65f8ae640875f4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62401722"
---
# <a name="compiler-warning-level-3-c4635"></a>Avviso del compilatore (livello 3) C4635

commento al documento XML di destinazione: XML in formato non valido: motivo

Il compilatore ha rilevato alcuni problemi con i tag XML.  Correggere il problema e ricompilare

L'esempio seguente genera l'errore C4635:

```
// C4635.cpp
// compile with: /doc /clr /W3 /c
/// <summary>
/// The contents of the folder have changed.
/// <summary/>   // C4635

// try the following line instead
// /// </summary>
public ref class Test {};
```

Si noti che l'output relativo a questo esempio è: **Fine tag 'member' non corrisponde al tag iniziale 'summary'.**

Il problema con questo esempio è che il tag di fine per \<summary > non è corretta, e il compilatore non lo riconosce come il \<riepilogo > tag di fine.  Il \<membro > tag è incorporato nel file con estensione xdc dal compilatore nelle compilazioni /doc.  Quindi, qui il problema è che il tag di fine \</member >, non corrisponde al tag iniziale precedente che il compilatore elaborato (\<riepilogo >.