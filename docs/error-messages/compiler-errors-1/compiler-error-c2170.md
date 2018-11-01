---
title: Errore del compilatore C2170
ms.date: 11/04/2016
f1_keywords:
- C2170
helpviewer_keywords:
- C2170
ms.assetid: d5c663f0-2459-4e11-a8bf-a52b62f3c71d
ms.openlocfilehash: 04d41a50bc0d5e811e47e5f9d146362a543f26f9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50445695"
---
# <a name="compiler-error-c2170"></a>Errore del compilatore C2170

'identifier': non è dichiarato come funzione, non può essere intrinseca

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Pragma `intrinsic` viene usato per un elemento diverso da una funzione.

1. Pragma `intrinsic` viene usato per una funzione con alcun formato intrinseco.