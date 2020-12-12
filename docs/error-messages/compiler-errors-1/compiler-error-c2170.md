---
description: 'Altre informazioni su: errore del compilatore C2170'
title: Errore del compilatore C2170
ms.date: 11/04/2016
f1_keywords:
- C2170
helpviewer_keywords:
- C2170
ms.assetid: d5c663f0-2459-4e11-a8bf-a52b62f3c71d
ms.openlocfilehash: 2f6093221d214aa12f6b90f40dde14518e44e08e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97322258"
---
# <a name="compiler-error-c2170"></a>Errore del compilatore C2170

' Identifier ': non dichiarato come funzione, non può essere intrinseco

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. `intrinsic`Il pragma viene usato per un elemento diverso da una funzione.

1. Pragma `intrinsic` viene usato per una funzione senza form intrinseco.
