---
title: Membri dati modificabili (C++)
ms.date: 11/04/2016
f1_keywords:
- mutable_cpp
helpviewer_keywords:
- mutable keyword [C++]
ms.assetid: ebe89746-3d36-43a8-8d69-f426af23f551
ms.openlocfilehash: 8d592eb97f70bfc26c075317c57ec4d5c78e3956
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62301591"
---
# <a name="mutable-data-members-c"></a>Membri dati modificabili (C++)

Questa parola chiave può essere applicata solo a membri dati non dichiarati come static e const di una classe. Se un membro dati viene dichiarato **modificabile**, è consentito assegnare un valore per questo membro dati da un **const** funzione membro.

## <a name="syntax"></a>Sintassi

```
mutable member-variable-declaration;
```

## <a name="remarks"></a>Note

Ad esempio, il codice seguente verrà compilata senza errori perché `m_accessCount` è stata dichiarata come **modificabile**e pertanto può essere modificato da `GetFlag` anche se `GetFlag` è una funzione membro const.

```cpp
// mutable.cpp
class X
{
public:
   bool GetFlag() const
   {
      m_accessCount++;
      return m_flag;
   }
private:
   bool m_flag;
   mutable int m_accessCount;
};

int main()
{
}
```

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)