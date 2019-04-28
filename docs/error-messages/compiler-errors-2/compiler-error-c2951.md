---
title: Errore del compilatore C2951
ms.date: 11/04/2016
f1_keywords:
- C2951
helpviewer_keywords:
- C2951
ms.assetid: c6f95aa2-c894-425b-a51c-d40d70c8daa1
ms.openlocfilehash: dbc7186edfce6cc12a38fb2fc1dda08ac4a181c7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62300726"
---
# <a name="compiler-error-c2951"></a>Errore del compilatore C2951

le dichiarazioni di tipo sono consentite solo dello spazio dei nomi globale, o ambito di classe

È possibile dichiarare un ambito dello spazio dei nomi o classe di modello di fuori globale o generica. Se si apportano le dichiarazioni generica o modello in un file di inclusione, assicurarsi che il file di inclusione sia in ambito globale.

L'esempio seguente genera l'errore C2951:

```
// C2951.cpp
template <class T>
class A {};

int main() {
   template <class T>   // C2951
   class B {};
}
```

C2951 può verificarsi anche quando si usano i generics:

```
// C2951b.cpp
// compile with: /clr /c

// OK
generic <class T>
ref class GC { };

int main() {
   generic <class T> ref class GC2 {};   // C2951
}
```