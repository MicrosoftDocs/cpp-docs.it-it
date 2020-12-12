---
description: 'Altre informazioni su: errore del compilatore C2951'
title: Errore del compilatore C2951
ms.date: 11/04/2016
f1_keywords:
- C2951
helpviewer_keywords:
- C2951
ms.assetid: c6f95aa2-c894-425b-a51c-d40d70c8daa1
ms.openlocfilehash: 7f3030764cdd36d40fbd78a8c3768c7dc1085c21
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97322107"
---
# <a name="compiler-error-c2951"></a>Errore del compilatore C2951

le dichiarazioni di tipo sono consentite solo nell'ambito globale, dello spazio dei nomi o della classe

Non è possibile dichiarare una classe generica o modello al di fuori dell'ambito globale o dello spazio dei nomi. Se si crea una dichiarazione generica o di modello in un file di inclusione, verificare che il file di inclusione sia in ambito globale.

L'esempio seguente genera l'C2951:

```cpp
// C2951.cpp
template <class T>
class A {};

int main() {
   template <class T>   // C2951
   class B {};
}
```

C2951 può verificarsi anche quando si usano i generics:

```cpp
// C2951b.cpp
// compile with: /clr /c

// OK
generic <class T>
ref class GC { };

int main() {
   generic <class T> ref class GC2 {};   // C2951
}
```
