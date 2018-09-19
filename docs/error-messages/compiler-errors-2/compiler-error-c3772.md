---
title: Errore del compilatore C3772 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3772
dev_langs:
- C++
helpviewer_keywords:
- C3772
ms.assetid: 63e938d4-088d-41cc-a562-5881a05b5710
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: db40c71001e34cc24c19410006cd39f658718c14
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46048760"
---
# <a name="compiler-error-c3772"></a>Errore del compilatore C3772

"name": dichiarazione di modello Friend non valida

Non è consentito dichiarare un elemento Friend di una specializzazione di modello di classe. Non è possibile dichiarare una specializzazione esplicita o parziale di un modello di classe se nella stessa istruzione viene dichiarato un elemento Friend di tale specializzazione. Il segnaposto *nome* identifica la dichiarazione non valida.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Non dichiarare un elemento Friend di una specializzazione di modello di classe.

- Se possibile per l'applicazione usata, dichiarare un elemento Friend del modello di classe o dichiarare un elemento Friend di una determinata specializzazione parziale o esplicita.

## <a name="example"></a>Esempio

Nell'esempio di codice seguente viene generato un errore perché viene dichiarato un elemento Friend di una specializzazione parziale di un modello di classe.

```cpp
// c3772.cpp
// compile with: /c

// A class template.
    template<class T> class A {};

// A partial specialization of the class template.
    template<class T> class A<T*> {};

// An explicit specialization.
    template<> class A<char>;

class X {
// Invalid declaration of a friend of a partial specialization.
    template<class T> friend class A<T*>; // C3772

// Instead, if it is appropriate for your application, declare a
// friend of the class template. Consequently, all specializations
// of the class template are friends:
//    template<class T> friend class A;
// Or declare a friend of a particular partial specialization:
//    friend class A<int*>;
// Or declare a friend of a particular explicit specialization:
//    friend class A<char>;
};
```

## <a name="see-also"></a>Vedere anche

[Modelli](../../cpp/templates-cpp.md)<br/>
[Specializzazione modello](../../cpp/template-specialization-cpp.md)
