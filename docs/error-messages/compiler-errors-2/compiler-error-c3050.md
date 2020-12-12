---
description: 'Altre informazioni su: errore del compilatore C3050'
title: Errore del compilatore C3050
ms.date: 11/04/2016
f1_keywords:
- C3050
helpviewer_keywords:
- C3050
ms.assetid: ee090a0b-29cc-4215-a2f9-d82af79b8e82
ms.openlocfilehash: 354efe0ba8445042571d76cfeeb41e98fae96256
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97269666"
---
# <a name="compiler-error-c3050"></a>Errore del compilatore C3050

'type1': una classe di riferimento non può ereditare da 'type1'

`System::ValueType` non può essere una classe base per un tipo riferimento.

L'esempio seguente genera l'errore C3050:

```cpp
// C3050.cpp
// compile with: /clr /LD
ref struct X : System::ValueType {};   // C3050
ref struct Y {};   // OK
```
