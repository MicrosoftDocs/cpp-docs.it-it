---
title: Errore del compilatore C3162 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3162
dev_langs:
- C++
helpviewer_keywords:
- C3162
ms.assetid: 0d4c4a24-1456-4191-b7d8-c38cb7b17c32
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 529dfa41064e9d22b796b9d079a67b213b816fb2
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46030937"
---
# <a name="compiler-error-c3162"></a>Errore del compilatore C3162

'type': un tipo di riferimento che ha un distruttore non può essere usato come tipo di membro dati statico 'member'

Common language runtime non può sapere quando eseguire un distruttore definito dall'utente quando la classe contiene inoltre una funzione membro statica.

Un distruttore non verranno eseguito solo se l'oggetto viene eliminato in modo esplicito.

Per ulteriori informazioni, vedere,

- [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md)

- [Problemi comuni relativi alla migrazione di Visual C++ a 64 bit](../../build/common-visual-cpp-64-bit-migration-issues.md)

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3162.

```
// C3162.cpp
// compile with: /clr /c
ref struct A {
   ~A() { System::Console::WriteLine("in destructor"); }
   static A i;   // C3162
   static A^ a = gcnew A;   // OK
};

int main() {
   A ^ a = gcnew A;
   delete a;
}
```