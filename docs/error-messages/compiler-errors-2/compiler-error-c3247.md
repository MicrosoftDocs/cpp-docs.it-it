---
description: 'Altre informazioni su: errore del compilatore C3247'
title: Errore del compilatore C3247
ms.date: 11/04/2016
f1_keywords:
- C3247
helpviewer_keywords:
- C3247
ms.assetid: f9a2bbb5-3fce-40bf-9fd3-835a5f164dbb
ms.openlocfilehash: 02e8f20f9804067e0179f3b5583d589d16dae302
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97307186"
---
# <a name="compiler-error-c3247"></a>Errore del compilatore C3247

'class1': una coclasse non può ereditare da un'altra coclasse 'class2'

Una classe contrassegnata con l'attributo [coclass](../../windows/attributes/coclass.md) non può derivare da un'altra classe contrassegnata con l'attributo `coclass` .

L'esempio seguente genera l'errore C3247:

```cpp
// C3247.cpp
[module(name="MyLib")];
[coclass]
class a {
};

[coclass]
class b : public a {   // C3247
};
int main() {
}
```
