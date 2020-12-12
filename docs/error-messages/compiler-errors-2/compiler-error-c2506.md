---
description: 'Altre informazioni su: errore del compilatore C2506'
title: Errore del compilatore C2506
ms.date: 11/04/2016
f1_keywords:
- C2506
helpviewer_keywords:
- C2506
ms.assetid: cfed21cd-2404-46f2-985e-d0c2c3820830
ms.openlocfilehash: 28af99e418d8c058fa9b28b5fd581a44c0180065
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97212987"
---
# <a name="compiler-error-c2506"></a>Errore del compilatore C2506

' member ': non è possibile applicare ' __declspec (modificatore)' a questo simbolo

Non è possibile dichiarare i membri statici di una classe gestita per processo o per dominio di applicazione.

Per altre informazioni, vedere [appdomain](../../cpp/appdomain.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2506.

```cpp
// C2506.cpp
// compile with: /clr /c
ref struct R {
   __declspec(process) static int n;   // C2506
   int o;   // OK
};
```
