---
title: Compilatore avviso (livello 3) C4635 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4635
dev_langs:
- C++
helpviewer_keywords:
- C4635
ms.assetid: b2ba90de-c093-4a76-8076-b65878467574
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7651012d4c48d420734a9c6ec2ff051718f82007
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46038113"
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

L'output relativo a questo esempio è: **Il tag finale 'member' non corrisponde al tag iniziale 'summary'**.

Il problema con questo esempio è che il tag di fine per \<summary > non è corretta, e il compilatore non lo riconosce come il \<riepilogo > tag di fine.  Il \<membro > tag è incorporato nel file con estensione xdc dal compilatore nelle compilazioni /doc.  Quindi, qui il problema è che il tag di fine \</member >, non corrisponde al tag iniziale precedente che il compilatore elaborato (\<riepilogo >.