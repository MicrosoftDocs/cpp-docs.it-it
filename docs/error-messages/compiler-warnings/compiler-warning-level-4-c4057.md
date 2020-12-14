---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4057'
title: Avviso del compilatore (livello 4) C4057
ms.date: 11/04/2016
f1_keywords:
- C4057
helpviewer_keywords:
- C4057
ms.assetid: e75d0645-84c9-4bef-a812-942ed9879aa3
ms.openlocfilehash: 0b5da5c4768f4101b7b1780b5d0518ed723c5225
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97262087"
---
# <a name="compiler-warning-level-4-c4057"></a>Avviso del compilatore (livello 4) C4057

'operator': 'identifier1' differisce da 'identifier2' nel riferimento indiretto a tipi di base leggermente diversi

Due espressioni puntatore fanno riferimento a tipi di base diversi. Le espressioni vengono usate senza conversione.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Combinazione di tipi con segno e senza segno.

1. Combinazione **`short`** di **`long`** tipi e.
