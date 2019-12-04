---
title: Errore del compilatore C2951
ms.date: 11/04/2016
f1_keywords:
- C2951
helpviewer_keywords:
- C2951
ms.assetid: c6f95aa2-c894-425b-a51c-d40d70c8daa1
ms.openlocfilehash: fdb837f8e9a9b769d470b70b962ce63d144161e1
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74755980"
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
