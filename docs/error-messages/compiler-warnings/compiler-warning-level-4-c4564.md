---
title: Avviso del compilatore (livello 4) C4564
ms.date: 11/04/2016
f1_keywords:
- C4564
helpviewer_keywords:
- C4564
ms.assetid: 555b301b-313e-4262-9f81-eb878674be60
ms.openlocfilehash: 042eab1c125f2b98fd36257dfd8971262015ab92
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74990671"
---
# <a name="compiler-warning-level-4-c4564"></a>Avviso del compilatore (livello 4) C4564

il metodo ' Method ' della classe ' Class ' definisce il parametro predefinito ' parameter ' non supportato

Il compilatore ha rilevato un metodo con uno o più parametri con i valori predefiniti. I valori predefiniti per i parametri verranno ignorati quando viene richiamato il metodo. specificare in modo esplicito i valori per tali parametri. Se non si specificano in modo esplicito i valori per tali C++ parametri, il compilatore genererà un errore.

Dato il file con estensione dll seguente creato con Visual Basic, che consente i parametri predefiniti negli argomenti del metodo:

```vb
' C4564.vb
' compile with: vbc /t:library C4564.vb
Public class TestClass
   Public Sub MyMethod (a as Integer, _
                        Optional c as Integer=1)
   End Sub
End class
```

E l'esempio C++ seguente che usa il file con estensione dll creato con Visual Basic,

```cpp
// C4564.cpp
// compile with: /clr /W4 /WX
#using <C4564.dll>

int main() {
   TestClass ^ myx = gcnew TestClass();   // C4564
   myx->MyMethod(9);
   // try the following line instead, to avoid an error
   // myx->MyMethod(9, 1);
}
```
