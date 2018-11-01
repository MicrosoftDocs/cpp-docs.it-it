---
title: Avviso del compilatore (livello 3) C4306
ms.date: 08/27/2018
f1_keywords:
- C4306
helpviewer_keywords:
- C4306
ms.assetid: 5b2192d7-402d-4b6d-8619-08105e7dcac7
ms.openlocfilehash: 78ec291b555838b1af63287e3d24fdb809afd7c4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50582026"
---
# <a name="compiler-warning-level-3-c4306"></a>Avviso del compilatore (livello 3) C4306

> «*identifier*': conversione da '*type1*'a'*type2*' di dimensioni maggiori

L'identificatore è di tipo cast a un puntatore di dimensioni maggiori. Divengono bit alti del nuovo tipo sarà riempiti con zero.

Questo avviso può indicare una conversione indesiderata. Il puntatore risultante potrebbe non essere valido.