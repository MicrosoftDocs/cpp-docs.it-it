---
title: Errore del compilatore C2844
ms.date: 11/04/2016
f1_keywords:
- C2844
helpviewer_keywords:
- C2844
ms.assetid: dcaf4cd2-21b0-4280-ae42-0a706c524d83
ms.openlocfilehash: 8af9f42be279f728f72fc6968aeba98ee5d2474a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50462712"
---
# <a name="compiler-error-c2844"></a>Errore del compilatore C2844

'member': non può essere un membro di interfaccia 'interface'

Un' [classe di interfaccia](../../windows/interface-class-cpp-component-extensions.md) non può contenere un membro dati a meno che non sia anche una proprietà.

Qualsiasi elemento diverso da una proprietà o una funzione membro non è consentita in un'interfaccia. Inoltre, non sono consentiti costruttori, distruttori e operatori.

L'esempio seguente genera l'errore C2844:

```
// C2844a.cpp
// compile with: /clr /c
public interface class IFace {
   int i;   // C2844
   // try the following line instead
   // property int Size;
};
```
