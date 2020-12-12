---
description: 'Altre informazioni su: protected (C++)'
title: protected (C++)
ms.date: 11/04/2016
f1_keywords:
- protected_cpp
helpviewer_keywords:
- protected keyword [C++], member access
- protected keyword [C++]
ms.assetid: 863d299f-fc0d-45d5-a1a7-bd24b7778a93
ms.openlocfilehash: 17b74db6ae257e757253c12fdfeb4fa9bac2a3db
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97299111"
---
# <a name="protected-c"></a>protected (C++)

## <a name="syntax"></a>Sintassi

```
protected:
   [member-list]
protected base-class
```

## <a name="remarks"></a>Osservazioni

La **`protected`** parola chiave specifica l'accesso ai membri della classe nell' *elenco dei membri* fino all'identificatore di accesso successivo ( **`public`** o **`private`** ) o alla fine della definizione della classe. I membri della classe dichiarati come **`protected`** possono essere usati solo da quanto segue:

- Funzioni membro della classe che ha in origine dichiarato questi membri.

- Elementi friend della classe che ha in origine dichiarato questi membri.

- Classi derivate con accesso pubblico o protetto dalla classe che ha in origine dichiarato questi membri.

- Classi dirette derivate in modo privato che dispongono anche di accesso privato ai membri protetti.

Quando si precede il nome di una classe di base, la **`protected`** parola chiave specifica che i membri pubblici e protetti della classe base sono membri protetti delle classi derivate.

I membri protetti non sono privati come **`private`** membri, accessibili solo ai membri della classe in cui sono dichiarati, ma non sono pubblici come **`public`** membri, accessibili in qualsiasi funzione.

I membri protetti che vengono anche dichiarati come **`static`** sono accessibili a qualsiasi funzione Friend o membro di una classe derivata. I membri protetti che non sono dichiarati come **`static`** sono accessibili a elementi Friend e funzioni membro in una classe derivata solo tramite un puntatore a, un riferimento a o un oggetto della classe derivata.

Per informazioni correlate, vedere [Friend](../cpp/friend-cpp.md), [public](../cpp/public-cpp.md), [private](../cpp/private-cpp.md)e la tabella di accesso ai membri in [controllo dell'accesso ai membri della classe](member-access-control-cpp.md).

## <a name="clr-specific"></a>Specifico di /clr

Nei tipi CLR, le parole chiave dell'identificatore di accesso C++ ( **`public`** , **`private`** e **`protected`** ) possono influire sulla visibilità dei tipi e dei metodi relativamente agli assembly. Per altre informazioni, vedere [controllo di accesso dei membri](member-access-control-cpp.md).

> [!NOTE]
> I file compilati con [/LN](../build/reference/ln-create-msil-module.md) non sono interessati da questo comportamento. In questo caso, tutte le classi gestite (sia pubbliche che private) saranno visibili.

## <a name="end-clr-specific"></a>Specifico di END /clr

## <a name="example"></a>Esempio

```cpp
// keyword_protected.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;
class X {
public:
   void setProtMemb( int i ) { m_protMemb = i; }
   void Display() { cout << m_protMemb << endl; }
protected:
   int  m_protMemb;
   void Protfunc() { cout << "\nAccess allowed\n"; }
} x;

class Y : public X {
public:
   void useProtfunc() { Protfunc(); }
} y;

int main() {
   // x.m_protMemb;         error, m_protMemb is protected
   x.setProtMemb( 0 );   // OK, uses public access function
   x.Display();
   y.setProtMemb( 5 );   // OK, uses public access function
   y.Display();
   // x.Protfunc();         error, Protfunc() is protected
   y.useProtfunc();      // OK, uses public access function
                        // in derived class
}
```

## <a name="see-also"></a>Vedere anche

[Controllo dell'accesso ai membri di classi](member-access-control-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
