---
title: Errore del compilatore C3869
ms.date: 11/04/2016
f1_keywords:
- C3869
helpviewer_keywords:
- C3869
ms.assetid: 85b2ad72-95c1-4ed6-9761-6ef66c3802b7
ms.openlocfilehash: ae8931d3b139e0e7e7aa947ffea16700e2f12302
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74736711"
---
# <a name="compiler-error-c3869"></a>Errore del compilatore C3869

nel vincolo gcnew manca l'elenco di parametri vuoto ' ()'

Il `gcnew` vincolo speciale è stato specificato senza l'elenco di parametri vuoto. Per ulteriori informazioni, vedere [vincoli suiC++parametri di tipo generico (/CLI)](../../extensions/constraints-on-generic-type-parameters-cpp-cli.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3869.

```cpp
// C3869.cpp
// compile with: /c /clr
using namespace System;
generic <typename T>
where T : gcnew   // C3869
// try the following line instead
// where T : gcnew()
ref class List {};
```
