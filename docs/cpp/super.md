---
title: __super
ms.date: 11/04/2016
f1_keywords:
- __super_cpp
helpviewer_keywords:
- __super keyword [C++]
ms.assetid: f0957c31-9256-405b-b402-cad182404b5f
ms.openlocfilehash: b6f6a7e108224ab4c97893104c5d6c38d325fa42
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80160827"
---
# <a name="__super"></a>__super

**Sezione specifica Microsoft**

Consente di dichiarare in modo esplicito che si sta chiamando un'implementazione della classe di base per una funzione di cui si esegue l'override.

## <a name="syntax"></a>Sintassi

```
__super::member_function();
```

## <a name="remarks"></a>Osservazioni

Tutti i metodi accessibili della classe di base vengono considerati durante la fase di risoluzione dell'overload e la funzione che fornisce la corrispondenza migliore è quella che viene chiamata.

**__super** può essere presente solo all'interno del corpo di una funzione membro.

non è possibile usare **__super** con una dichiarazione using. Per ulteriori informazioni, vedere [utilizzo della dichiarazione](../cpp/using-declaration.md) .

Con l'introduzione degli [attributi](../windows/attributes/attributes-alphabetical-reference.md) che comportano il codice, il codice potrebbe contenere una o più classi di base i cui nomi non si conoscono ma che contengono i metodi che si desidera chiamare.

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
