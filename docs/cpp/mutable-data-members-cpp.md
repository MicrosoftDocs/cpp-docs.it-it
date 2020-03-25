---
title: Membri dati modificabili (C++)
ms.date: 11/04/2016
f1_keywords:
- mutable_cpp
helpviewer_keywords:
- mutable keyword [C++]
ms.assetid: ebe89746-3d36-43a8-8d69-f426af23f551
ms.openlocfilehash: db3a9594a77a9ada971213eaea74a9842bd96a54
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80179341"
---
# <a name="mutable-data-members-c"></a>Membri dati modificabili (C++)

Questa parola chiave può essere applicata solo a membri dati non dichiarati come static e const di una classe. Se un membro dati viene dichiarato **modificabile**, è consentito assegnare un valore a questo membro dati da una funzione membro **const** .

## <a name="syntax"></a>Sintassi

```
mutable member-variable-declaration;
```

## <a name="remarks"></a>Osservazioni

Il codice seguente, ad esempio, verrà compilato senza errori perché `m_accessCount` è stato dichiarato come **modificabile**e pertanto può essere modificato da `GetFlag` anche se `GetFlag` è una funzione membro const.

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
