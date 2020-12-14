---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4092'
title: Avviso del compilatore (livello 4) C4092
ms.date: 11/04/2016
f1_keywords:
- C4092
helpviewer_keywords:
- C4092
ms.assetid: 396ae826-a892-4327-bd66-f4762376d72b
ms.openlocfilehash: 70b2d94304863610ede64a30bcb1bb6d407f2e12
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97262011"
---
# <a name="compiler-warning-level-4-c4092"></a>Avviso del compilatore (livello 4) C4092

> sizeof restituisce ' unsigned long '

Poiché l'operando dell' **`sizeof`** operatore è molto grande, viene **`sizeof`** restituito un oggetto **`unsigned long`** . Questo avviso viene visualizzato in Microsoft Extensions ( [`/Ze`](../../build/reference/za-ze-disable-language-extensions.md) ). In compatibilità ANSI ( **`/Za`** ) il risultato viene invece troncato.
