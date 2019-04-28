---
title: Errore del compilatore C2170
ms.date: 11/04/2016
f1_keywords:
- C2170
helpviewer_keywords:
- C2170
ms.assetid: d5c663f0-2459-4e11-a8bf-a52b62f3c71d
ms.openlocfilehash: 04d41a50bc0d5e811e47e5f9d146362a543f26f9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62174679"
---
# <a name="compiler-error-c2170"></a>Errore del compilatore C2170

'identifier': non è dichiarato come funzione, non può essere intrinseca

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Pragma `intrinsic` viene usato per un elemento diverso da una funzione.

1. Pragma `intrinsic` viene usato per una funzione con alcun formato intrinseco.