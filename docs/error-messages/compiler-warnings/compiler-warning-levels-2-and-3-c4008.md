---
title: Avviso del compilatore (livelli 2 e 3) C4008
ms.date: 11/04/2016
f1_keywords:
- C4008
helpviewer_keywords:
- C4008
ms.assetid: fb45e535-cb68-4743-80e9-a6e34cfffeca
ms.openlocfilehash: 9b6fb56045d53cd18689f3903bb3d7a08c3d4e4d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80198004"
---
# <a name="compiler-warning-levels-2-and-3-c4008"></a>Avviso del compilatore (livelli 2 e 3) C4008

'identifier': attributo 'attribute' ignorato

Il compilatore ha ignorato l'attributo `__fastcall`, **static**o **inline** per una funzione (avviso di livello 3) o per i dati (avviso di livello 2).

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolvere il problema, verificare le seguenti cause possibili:

1. Attributo`__fastcall` con i dati.

1. Attributo**static** o **inline** con la funzione **main** .
