---
title: Errore del compilatore C2170 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2170
dev_langs:
- C++
helpviewer_keywords:
- C2170
ms.assetid: d5c663f0-2459-4e11-a8bf-a52b62f3c71d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b75d4c54bc6ec24cb182f3b6fb37ff4b8cd1ddfc
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46055728"
---
# <a name="compiler-error-c2170"></a>Errore del compilatore C2170

'identifier': non è dichiarato come funzione, non può essere intrinseca

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Pragma `intrinsic` viene usato per un elemento diverso da una funzione.

1. Pragma `intrinsic` viene usato per una funzione con alcun formato intrinseco.