---
title: Avviso del compilatore (livello 4) C4057
ms.date: 11/04/2016
f1_keywords:
- C4057
helpviewer_keywords:
- C4057
ms.assetid: e75d0645-84c9-4bef-a812-942ed9879aa3
ms.openlocfilehash: 45d2db56a7b0fc871de60743954012faf0f5c366
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80185386"
---
# <a name="compiler-warning-level-4-c4057"></a>Avviso del compilatore (livello 4) C4057

'operator': 'identifier1' differisce da 'identifier2' nel riferimento indiretto a tipi di base leggermente diversi

Due espressioni puntatore fanno riferimento a tipi di base diversi. Le espressioni vengono usate senza conversione.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolvere il problema, verificare le seguenti cause possibili:

1. Combinazione di tipi con segno e senza segno.

1. Combinazione di tipi **short** e **long** .
