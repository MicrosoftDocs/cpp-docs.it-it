---
description: 'Altre informazioni su: errore del compilatore C2030'
title: Errore del compilatore C2030
ms.date: 11/04/2016
f1_keywords:
- C2030
helpviewer_keywords:
- C2030
ms.assetid: 5806cead-64df-4eff-92de-52c9a3f5ee62
ms.openlocfilehash: b29996051a87f050e61c94b4134d046f52be6f09
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97175482"
---
# <a name="compiler-error-c2030"></a>Errore del compilatore C2030

un distruttore con accessibilità 'protected private' non può essere membro di una classe dichiarata 'sealed'

Una classe Windows Runtime dichiarata come **`sealed`** non può avere un distruttore privato protetto. Nei tipi sealed sono consentiti solo distruttori pubblici virtuali e privati non virtuali. Per altre informazioni, vedere [Classi e struct di riferimento](../../cppcx/ref-classes-and-structs-c-cx.md).

Per correggere l'errore, modificare l'accessibilità del distruttore.
