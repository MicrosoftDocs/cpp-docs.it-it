---
title: Avviso del compilatore (livello 4) C4092
ms.date: 11/04/2016
f1_keywords:
- C4092
helpviewer_keywords:
- C4092
ms.assetid: 396ae826-a892-4327-bd66-f4762376d72b
ms.openlocfilehash: 675e6ccbc516734a405620aa74eaa04ff2f75087
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87219989"
---
# <a name="compiler-warning-level-4-c4092"></a>Avviso del compilatore (livello 4) C4092

> sizeof restituisce ' unsigned long '

Poiché l'operando dell' **`sizeof`** operatore è molto grande, viene **`sizeof`** restituito un oggetto **`unsigned long`** . Questo avviso viene visualizzato in Microsoft Extensions ( [`/Ze`](../../build/reference/za-ze-disable-language-extensions.md) ). In compatibilità ANSI ( **`/Za`** ) il risultato viene invece troncato.
