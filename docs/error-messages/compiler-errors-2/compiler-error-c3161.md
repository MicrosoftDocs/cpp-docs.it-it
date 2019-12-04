---
title: Errore del compilatore C3161
ms.date: 11/04/2016
f1_keywords:
- C3161
helpviewer_keywords:
- C3161
ms.assetid: 1fe2be85-a343-487b-8476-bf9e257eb29d
ms.openlocfilehash: 7315dad7959cdd3b950ed814b13be3867399d332
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74761816"
---
# <a name="compiler-error-c3161"></a>Errore del compilatore C3161

' Interface ': l'annidamento di classi, strutture, unioni o interfacce in un'interfaccia non è valido; l'interfaccia di annidamento in una classe, uno struct o un'Unione non è valida

Un [__interface](../../cpp/interface.md) può essere visualizzato solo in ambito globale o in uno spazio dei nomi. Una classe, uno struct o un'Unione non può comparire in un'interfaccia.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3161.

```cpp
// C3161.cpp
// compile with: /c
__interface X {
   __interface Y {};   // C3161 A nested interface
};
```
