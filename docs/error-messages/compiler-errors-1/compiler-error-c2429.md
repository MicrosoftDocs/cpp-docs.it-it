---
description: 'Altre informazioni su: errore del compilatore C2429'
title: Errore del compilatore C2429
ms.date: 11/16/2017
f1_keywords:
- C2429
helpviewer_keywords:
- C2429
ms.assetid: 57ff6df9-5cf1-49f3-8bd8-4e550dfd65a0
ms.openlocfilehash: 3c16a2a430e8050103c3903cf1355de089252ed5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97190133"
---
# <a name="compiler-error-c2429"></a>Errore del compilatore C2429

> '*funzionalità del linguaggio*' richiede il flag del compilatore '*opzione del compilatore*'

La funzionalità del linguaggio richiede un'opzione del compilatore specifica per il supporto.

Errore **C2429: la funzionalità del linguaggio ' nested-namespace-Definition ' richiede che il flag del compilatore '/std: c++ 17'** venga generato se si tenta di definire uno spazio dei nomi *composto*, uno spazio dei nomi che contiene uno o più nomi di spazio dei nomi annidati nell'ambito, a partire da Visual Studio 2015 Update 5. (In Visual Studio 2017 versione 15,3, l'opzione **/std: c + + Latest** è obbligatoria). Le definizioni dello spazio dei nomi composto non sono consentite in C++ prima di C++ 17. Il compilatore supporta le definizioni dello spazio dei nomi composto quando viene specificata l'opzione del compilatore [/std: c++ 17](../../build/reference/std-specify-language-standard-version.md) :

```cpp
// C2429a.cpp
namespace a::b { int i; } // C2429 starting in Visual Studio 2015 Update 3.
                          // Use /std:c++17 to fix, or do this:
// namespace a { namespace b { int i; }}

int main() {
   a::b::i = 2;
}
```
