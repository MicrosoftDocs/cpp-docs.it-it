---
title: Errore del compilatore C2847 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2847
dev_langs:
- C++
helpviewer_keywords:
- C2847
ms.assetid: 9ad9a0e0-8b16-49d9-a5be-f8eda2372aa9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 41e3b49c509240fd0d782aacaa9fae836b62702a
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46054441"
---
# <a name="compiler-error-c2847"></a>Errore del compilatore C2847

impossibile applicare sizeof a un tipo gestito o WinRT 'class'

Il [sizeof](../../cpp/sizeof-operator.md) operatore ottiene il valore di un oggetto in fase di compilazione. Le dimensioni di un tipo di classe, interfaccia o valore gestito o WinRT sono dinamiche e quindi non sono note in fase di compilazione.

L'esempio seguente genera l'errore C2847:

```
// C2847.cpp
// compile with: /clr
ref class A {};

int main() {
   A ^ xA = gcnew A;
   sizeof(*xA);   // C2847 cannot use sizeof on managed object
}
```
