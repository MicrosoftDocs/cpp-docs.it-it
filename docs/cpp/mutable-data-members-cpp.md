---
description: 'Altre informazioni su: membri dati modificabili (C++)'
title: Membri dati modificabili (C++)
ms.date: 11/04/2016
f1_keywords:
- mutable_cpp
helpviewer_keywords:
- mutable keyword [C++]
ms.assetid: ebe89746-3d36-43a8-8d69-f426af23f551
ms.openlocfilehash: a288b382b456fa313c49832bd2d13aaceb269be9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97313814"
---
# <a name="mutable-data-members-c"></a>Membri dati modificabili (C++)

Questa parola chiave può essere applicata solo a membri dati non dichiarati come static e const di una classe. Se viene dichiarato un membro dati **`mutable`** , è consentito assegnare un valore a questo membro dati da una **`const`** funzione membro.

## <a name="syntax"></a>Sintassi

```
mutable member-variable-declaration;
```

## <a name="remarks"></a>Osservazioni

Il codice seguente, ad esempio, verrà compilato senza errori perché `m_accessCount` è stato dichiarato come **`mutable`** e pertanto può essere modificato da `GetFlag` anche se `GetFlag` è una funzione membro const.

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

## <a name="see-also"></a>Vedi anche

[Parole chiave](../cpp/keywords-cpp.md)
