---
title: Errore del compilatore C3873
ms.date: 11/04/2016
f1_keywords:
- C3873
helpviewer_keywords:
- C3873
ms.assetid: e68fd3be-2391-492b-ac3f-d2428901b2e9
ms.openlocfilehash: ca70af12ef3223c8c5950f0fa98b1c63a2dd3a4c
ms.sourcegitcommit: 28eae422049ac3381c6b1206664455dbb56cbfb6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/31/2019
ms.locfileid: "66450828"
---
# <a name="compiler-error-c3873"></a>Errore del compilatore C3873

'char': questo carattere non è consentito come primo carattere di un identificatore

Il compilatore C++ è conforme allo standard C++11 sui caratteri consentiti in un identificatore. In un identificatore sono consentiti solo alcuni intervalli di caratteri e di nomi di caratteri universali. Sono previste ulteriori restrizioni per il carattere iniziale di un identificatore. Per altre informazioni e per un elenco degli intervalli di caratteri universali e di caratteri consentiti, vedere [Identifiers](../../cpp/identifiers-cpp.md).

L'intervallo di caratteri consentiti in un identificatore è meno restrittivo quando si compila codice C++/CLI. Gli identificatori nel codice compilato con /clr devono seguire [ECMA-335 Standard: Common Language Infrastructure (CLI)](https://www.ecma-international.org/publications/standards/Ecma-335.htm).

L'esempio seguente genera l'errore C3873:

```
// C3873.cpp
int main() {
   int \u036F_abc;   // C3873, not in allowed range for initial character
   int abc_\u036F;   // OK, in allowed range for non-initial character
}
```