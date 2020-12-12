---
description: 'Altre informazioni su: errore del compilatore C2588'
title: Errore del compilatore C2588
ms.date: 11/04/2016
f1_keywords:
- C2588
helpviewer_keywords:
- C2588
ms.assetid: 19a0cabd-ca13-44a5-9be3-ee676abf9bc4
ms.openlocfilehash: 7f723f826a5d4e609c0766c5287a0fffdee72d18
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97177575"
---
# <a name="compiler-error-c2588"></a>Errore del compilatore C2588

':: ~ Identifier ': distruttore globale non valido

Il distruttore viene definito per un elemento diverso da una classe, una struttura o un'Unione. ma questa operazione non è consentita.

Questo errore può essere causato da un nome di classe, struttura o unione mancante sul lato sinistro dell'operatore di risoluzione dell'ambito ( `::` ).

L'esempio seguente genera l'C2588:

```cpp
// C2588.cpp
~F();   // C2588
```
