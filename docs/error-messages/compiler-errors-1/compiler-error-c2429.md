---
title: C2429 errore del compilatore | Documenti Microsoft
ms.custom: ''
ms.date: 11/16/2017
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2429
dev_langs:
- C++
helpviewer_keywords:
- C2429
ms.assetid: 57ff6df9-5cf1-49f3-8bd8-4e550dfd65a0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 032df433b28e83f720fe76952a541b59bda889f5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33227817"
---
# <a name="compiler-error-c2429"></a>C2429 errore del compilatore

> '*funzionalità del linguaggio*'richiede flag del compilatore'*l'opzione del compilatore*'

La funzionalità del linguaggio richiede un'opzione del compilatore specifici per il supporto.

L'errore **C2429: flag del compilatore richiede la funzionalità del linguaggio 'annidato-namespace-definition' ' / std:c + + 17'** viene generato se si tenta di definire un *dello spazio dei nomi composto*, uno spazio dei nomi che contiene uno o più nomi dello spazio dei nomi con ambito annidato, a partire da Visual Studio 2015 Update 5. (In Visual Studio 2017 versione 15.3, il **/std:c + + più recente** switch è obbligatorio.) Composta dello spazio dei nomi definizioni non sono consentite in C++ prima di C++ 17. Il compilatore supporta le definizioni di spazi dei nomi composti quando il [/std:c + + 17](../../build/reference/std-specify-language-standard-version.md) è specificata l'opzione del compilatore:

```cpp
// C2429a.cpp
namespace a::b { int i; } // C2429 starting in Visual C++ 2015 Update 3.
                          // Use /std:c++17 to fix, or do this:
// namespace a { namespace b { int i; }}

int main() {
   a::b::i = 2;
}
```
