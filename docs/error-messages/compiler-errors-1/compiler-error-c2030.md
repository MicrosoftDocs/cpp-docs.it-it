---
title: Errore del compilatore C2030
ms.date: 11/04/2016
f1_keywords:
- C2030
helpviewer_keywords:
- C2030
ms.assetid: 5806cead-64df-4eff-92de-52c9a3f5ee62
ms.openlocfilehash: f9090e098d7f523bf7bc12b7fa4d9312f6ca5466
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87212904"
---
# <a name="compiler-error-c2030"></a>Errore del compilatore C2030

un distruttore con accessibilità 'protected private' non può essere membro di una classe dichiarata 'sealed'

Una classe Windows Runtime dichiarata come **`sealed`** non può avere un distruttore privato protetto. Nei tipi sealed sono consentiti solo distruttori pubblici virtuali e privati non virtuali. Per altre informazioni, vedere [Classi e struct di riferimento](../../cppcx/ref-classes-and-structs-c-cx.md).

Per correggere l'errore, modificare l'accessibilità del distruttore.
