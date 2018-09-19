---
title: Errore del compilatore C3612 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3612
dev_langs:
- C++
helpviewer_keywords:
- C3612
ms.assetid: aa6e3a2b-4afa-481c-98c1-1b6d1f82f869
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 16d960095942af34aa516341862c9a2bcf72bbba
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46053686"
---
# <a name="compiler-error-c3612"></a>Errore del compilatore C3612

'type': una classe sealed non può essere astratta

I tipi definiti tramite `value` sono sealed per impostazione predefinita, e una classe è astratta, a meno che non implementa tutti i metodi della relativa base. Una classe astratta sealed non può essere una classe di base né può essere creata.

Per altre informazioni, vedere [classi e struct](../../windows/classes-and-structs-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3612:

```
// C3612.cpp
// compile with: /clr /c
value struct V: public System::ICloneable {};   // C3612

// OK
value struct V2: public System::ICloneable {
   Object^ Clone();
};
```