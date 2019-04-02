---
title: __super
ms.date: 11/04/2016
f1_keywords:
- __super_cpp
helpviewer_keywords:
- __super keyword [C++]
ms.assetid: f0957c31-9256-405b-b402-cad182404b5f
ms.openlocfilehash: a69d177bb83ce404a18d50c8f966be5d81f5fa72
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58779651"
---
# <a name="super"></a>__super

**Sezione specifica Microsoft**

Consente di dichiarare in modo esplicito che si sta chiamando un'implementazione della classe di base per una funzione di cui si esegue l'override.

## <a name="syntax"></a>Sintassi

```
__super::member_function();
```

## <a name="remarks"></a>Note

Tutti i metodi accessibili della classe di base vengono considerati durante la fase di risoluzione dell'overload e la funzione che fornisce la corrispondenza migliore è quella che viene chiamata.

**super** può trovarsi solo all'interno del corpo di una funzione membro.

**super** non è possibile usare con una dichiarazione. Visualizzare [dichiarazione using](../cpp/using-declaration.md) per altre informazioni.

Con l'introduzione del [attributi](../windows/attributes/attributes-alphabetical-reference.md) che inseriscono codice, il codice può contenere uno o più classi base i cui nomi si potrebbe non sapere ma che contengono metodi che si desiderano chiamare.

## <a name="example"></a>Esempio

```cpp
// deriv_super.cpp
// compile with: /c
struct B1 {
   void mf(int) {}
};

struct B2 {
   void mf(short) {}

   void mf(char) {}
};

struct D : B1, B2 {
   void mf(short) {
      __super::mf(1);   // Calls B1::mf(int)
      __super::mf('s');   // Calls B2::mf(char)
   }
};
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)