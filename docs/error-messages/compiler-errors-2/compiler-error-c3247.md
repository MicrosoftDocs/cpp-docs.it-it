---
title: Errore del compilatore C3247
ms.date: 11/04/2016
f1_keywords:
- C3247
helpviewer_keywords:
- C3247
ms.assetid: f9a2bbb5-3fce-40bf-9fd3-835a5f164dbb
ms.openlocfilehash: 81dc5d5e54551aff49adad2ada2eb25f57a37ec2
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74754381"
---
# <a name="compiler-error-c3247"></a>Errore del compilatore C3247

'class1': una coclasse non può ereditare da un'altra coclasse 'class2'

Una classe contrassegnata con l'attributo [coclass](../../windows/coclass.md) non può derivare da un'altra classe contrassegnata con l'attributo `coclass` .

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
