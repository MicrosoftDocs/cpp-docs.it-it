---
title: Errore del compilatore C2170
ms.date: 11/04/2016
f1_keywords:
- C2170
helpviewer_keywords:
- C2170
ms.assetid: d5c663f0-2459-4e11-a8bf-a52b62f3c71d
ms.openlocfilehash: 828e5bbca0b796864ec8b364ee69c18a3b5eea00
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80206951"
---
# <a name="compiler-error-c2170"></a>Errore del compilatore C2170

' Identifier ': non dichiarato come funzione, non può essere intrinseco

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolvere il problema, verificare le seguenti cause possibili:

1. Pragma `intrinsic` viene usato per un elemento diverso da una funzione.

1. Pragma `intrinsic` viene usato per una funzione senza form intrinseco.
