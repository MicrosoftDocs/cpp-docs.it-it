---
title: Errore del compilatore C3299
ms.date: 11/04/2016
f1_keywords:
- C3299
helpviewer_keywords:
- C3299
ms.assetid: 7cabdf01-bceb-404f-9401-cdd9c7fc1641
ms.openlocfilehash: 314b75a9d0ab8cde2886a7466fa0f95b5bbdd8f1
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58778052"
---
# <a name="compiler-error-c3299"></a>Errore del compilatore C3299

'member_function': impossibile specificare vincoli poiché vengono ereditati dal metodo base

Quando si esegue l'override di una funzione membro generica, non è possibile specificare clausole vincolo (la ripetizione dei vincoli implica che i vincoli non vengano ereditati).

Le clausole vincolo sulla funzione generica di cui si esegue l'override verranno ereditate.

Per altre informazioni, vedere [vincoli su parametri di tipo generico (C + + CLI)](../../extensions/constraints-on-generic-type-parameters-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3299.

```
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