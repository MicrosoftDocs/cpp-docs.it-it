---
description: 'Altre informazioni su: errore del compilatore C3161'
title: Errore del compilatore C3161
ms.date: 11/04/2016
f1_keywords:
- C3161
helpviewer_keywords:
- C3161
ms.assetid: 1fe2be85-a343-487b-8476-bf9e257eb29d
ms.openlocfilehash: 4e45d64e1c1f318a126122148c2dd8e3ddb9c5af
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97203965"
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
