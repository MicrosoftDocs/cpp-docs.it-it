---
title: Errore del compilatore C3399
ms.date: 11/04/2016
f1_keywords:
- C3399
helpviewer_keywords:
- C3399
ms.assetid: 306ad199-d150-4f6c-bcf1-24a7948b93be
ms.openlocfilehash: d05a861a2baedb86482503b6860098f12c41bd78
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59776457"
---
# <a name="compiler-error-c3399"></a>Errore del compilatore C3399

'type': impossibile specificare argomenti durante la creazione di un'istanza di un parametro generico

Quando si specifica il vincolo `gcnew()` , si indica che il tipo di vincolo avrà un costruttore senza parametri. Quindi, se si tenta di creare un'istanza del tipo e di passare un parametro viene generato un errore.

Visualizzare [vincoli su parametri di tipo generico (C++/CLI)](../../extensions/constraints-on-generic-type-parameters-cpp-cli.md) per altre informazioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3399.

```
// C3399.cpp
// compile with: /clr /c
generic <class T>
where T : gcnew()
void f() {
   T t = gcnew T(1);   // C3399
   T t2 = gcnew T();   // OK
}
```