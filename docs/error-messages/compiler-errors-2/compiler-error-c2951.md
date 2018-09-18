---
title: Errore del compilatore C2951 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2951
dev_langs:
- C++
helpviewer_keywords:
- C2951
ms.assetid: c6f95aa2-c894-425b-a51c-d40d70c8daa1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c6757256f08c5c1ed0a35fbf1c2a70776a4f2936
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46074669"
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