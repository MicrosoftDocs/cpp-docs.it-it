---
title: Compilatore avviso (livello 4) C4564 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4564
dev_langs:
- C++
helpviewer_keywords:
- C4564
ms.assetid: 555b301b-313e-4262-9f81-eb878674be60
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ea8d392251c8168490d7841ad590731b5a08e7f5
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46031834"
---
# <a name="compiler-warning-level-4-c4564"></a>Avviso del compilatore (livello 4) C4564

metodo 'method' della classe 'class' definisce il parametro predefinito non supportata 'parameter'

Il compilatore ha rilevato un metodo con uno o più parametri con valori predefiniti. I valori predefiniti per i parametri verranno ignorati quando viene richiamato il metodo; specificare in modo esplicito i valori per tali parametri. Se non si specifica in modo esplicito i valori per tali parametri, il compilatore C++ genererà un errore.

Dato il file DLL seguenti creati con Visual Basic, che consente di parametri predefiniti in argomenti del metodo:

```
' C4564.vb
' compile with: vbc /t:library C4564.vb
Public class TestClass
   Public Sub MyMethod (a as Integer, _
                        Optional c as Integer=1)
   End Sub
End class
```

L'esempio C++ seguente che usa il file DLL creati con Visual Basic, e

```
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