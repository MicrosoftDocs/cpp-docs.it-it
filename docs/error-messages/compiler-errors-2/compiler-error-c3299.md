---
description: 'Altre informazioni su: errore del compilatore C3299'
title: Errore del compilatore C3299
ms.date: 11/04/2016
f1_keywords:
- C3299
helpviewer_keywords:
- C3299
ms.assetid: 7cabdf01-bceb-404f-9401-cdd9c7fc1641
ms.openlocfilehash: ab86a675eb13b975943130802ae98679dbc1cbb3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97337406"
---
# <a name="compiler-error-c3299"></a>Errore del compilatore C3299

'member_function': impossibile specificare vincoli poiché vengono ereditati dal metodo base

Quando si esegue l'override di una funzione membro generica, non è possibile specificare clausole vincolo (la ripetizione dei vincoli implica che i vincoli non vengano ereditati).

Le clausole vincolo sulla funzione generica di cui si esegue l'override verranno ereditate.

Per altre informazioni, vedere [Vincoli su parametri di tipo generico (C++/CLI)](../../extensions/constraints-on-generic-type-parameters-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3299.

```cpp
// C3299.cpp
// compile with: /clr /c
public ref struct R {
   generic<class T>
   where T : R
   virtual void f();
};

public ref struct S : R {
   generic<class T>
   where T : R   // C3299
   virtual void f() override;
};
```
