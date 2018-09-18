---
title: Errore del compilatore C3873 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3873
helpviewer_keywords:
- C3873
ms.assetid: e68fd3be-2391-492b-ac3f-d2428901b2e9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 83580d8202dada0b650b1703dcadf9b99e6771d9
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46072810"
---
# <a name="compiler-error-c3873"></a>Errore del compilatore C3873

'char': questo carattere non è consentito come primo carattere di un identificatore

Il compilatore C++ è conforme allo standard C++11 sui caratteri consentiti in un identificatore. In un identificatore sono consentiti solo alcuni intervalli di caratteri e di nomi di caratteri universali. Sono previste ulteriori restrizioni per il carattere iniziale di un identificatore. Per altre informazioni e per un elenco degli intervalli di caratteri universali e di caratteri consentiti, vedere [Identifiers](../../cpp/identifiers-cpp.md).

L'intervallo di caratteri consentiti in un identificatore è meno restrittivo quando si compila codice C++/CLI. Gli identificatori nel codice compilato con /clr devono essere conformi allo  [standard ECMA-335: Common Language Infrastructure (CLI)](http://www.ecma-international.org/publications/standards/Ecma-335.htm).

L'esempio seguente genera l'errore C3873:

```
// C3873.cpp
int main() {
   int \u036F_abc;   // C3873, not in allowed range for initial character
   int abc_\u036F;   // OK, in allowed range for non-initial character
}
```