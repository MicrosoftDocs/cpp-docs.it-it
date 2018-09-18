---
title: Errore del compilatore C3869 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3869
dev_langs:
- C++
helpviewer_keywords:
- C3869
ms.assetid: 85b2ad72-95c1-4ed6-9761-6ef66c3802b7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 84b4ce32f6c4916e0e178d488bf725d257f4d887
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46020166"
---
# <a name="compiler-error-c3869"></a>Errore del compilatore C3869

vincolo gcnew manca l'elenco di parametri vuoto '(')

Il `gcnew` vincolo speciale è stato specificato senza elenco parametri vuoto. Vedere [vincoli su parametri di tipo generico (C + + CLI)](../../windows/constraints-on-generic-type-parameters-cpp-cli.md) per altre informazioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3869.

```
// C3869.cpp
// compile with: /c /clr
using namespace System;
generic <typename T>
where T : gcnew   // C3869
// try the following line instead
// where T : gcnew()
ref class List {};
```