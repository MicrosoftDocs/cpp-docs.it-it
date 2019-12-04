---
title: Errore del compilatore C3399
ms.date: 11/04/2016
f1_keywords:
- C3399
helpviewer_keywords:
- C3399
ms.assetid: 306ad199-d150-4f6c-bcf1-24a7948b93be
ms.openlocfilehash: d20b5e816930969278536fe3771df4ad38c3c86b
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74737517"
---
# <a name="compiler-error-c3399"></a>Errore del compilatore C3399

'type': impossibile specificare argomenti durante la creazione di un'istanza di un parametro generico

Quando si specifica il vincolo `gcnew()` , si indica che il tipo di vincolo avrà un costruttore senza parametri. Quindi, se si tenta di creare un'istanza del tipo e di passare un parametro viene generato un errore.

Per ulteriori informazioni, vedere [vincoli suiC++parametri di tipo generico (/CLI)](../../extensions/constraints-on-generic-type-parameters-cpp-cli.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3399.

```cpp
// C3399.cpp
// compile with: /clr /c
generic <class T>
where T : gcnew()
void f() {
   T t = gcnew T(1);   // C3399
   T t2 = gcnew T();   // OK
}
```
