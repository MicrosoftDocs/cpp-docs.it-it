---
title: Errore del compilatore C2844
ms.date: 11/04/2016
f1_keywords:
- C2844
helpviewer_keywords:
- C2844
ms.assetid: dcaf4cd2-21b0-4280-ae42-0a706c524d83
ms.openlocfilehash: 2676a32cee487595a2241359496ae9b0380126b8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62329192"
---
# <a name="compiler-error-c2844"></a>Errore del compilatore C2844

'member': non può essere un membro di interfaccia 'interface'

Un' [classe di interfaccia](../../extensions/interface-class-cpp-component-extensions.md) non può contenere un membro dati a meno che non sia anche una proprietà.

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
