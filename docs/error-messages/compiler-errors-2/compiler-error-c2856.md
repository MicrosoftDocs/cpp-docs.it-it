---
title: Errore del compilatore C2856
ms.date: 11/04/2016
f1_keywords:
- C2856
helpviewer_keywords:
- C2856
ms.assetid: fe616c51-124e-49e3-9dd8-883ec1660680
ms.openlocfilehash: 1e515f250c8ab9d1008ded91b99176f1d86d7cd1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50499606"
---
# <a name="compiler-error-c2856"></a>Errore del compilatore C2856

\#pragma hdrstop non può trovarsi all'interno di un blocco #if

Il `hdrstop` pragma non può essere inserito all'interno del corpo di un blocco di compilazione condizionale.

Spostare il `#pragma hdrstop` istruzione su un'area che non è inclusa in un `#if/#endif` blocco.