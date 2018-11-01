---
title: Errore del compilatore C3247
ms.date: 11/04/2016
f1_keywords:
- C3247
helpviewer_keywords:
- C3247
ms.assetid: f9a2bbb5-3fce-40bf-9fd3-835a5f164dbb
ms.openlocfilehash: 7ca84b4f054852aefa75a9c4547286137b436c63
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50569164"
---
# <a name="compiler-error-c3247"></a>Errore del compilatore C3247

'class1': una coclasse non può ereditare da un'altra coclasse 'class2'

Una classe contrassegnata con l'attributo [coclass](../../windows/coclass.md) non può derivare da un'altra classe contrassegnata con l'attributo `coclass` .

L'esempio seguente genera l'errore C3247:

```
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