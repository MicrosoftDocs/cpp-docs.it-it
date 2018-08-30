---
title: Del compilatore (livello 3) Avviso C4686 | Microsoft Docs
ms.custom: ''
ms.date: 08/27/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4686
dev_langs:
- C++
helpviewer_keywords:
- C4686
ms.assetid: 767c83c2-9e4b-4f9e-88c8-02128ba563f4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 32a44cd929eb7629ef317ce9847950b613bde52c
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43202080"
---
# <a name="compiler-warning-level-3-c4686"></a>Avviso del compilatore (livello 3) C4686

> «*tipo definito dall'utente*': possibile modifica del comportamento modifica nel tipo definito dall'utente restituiscono la convenzione di chiamata

## <a name="remarks"></a>Note

Non è una specializzazione di modello di classe è definita prima di essere usata in un tipo restituito. Tutto ciò che viene creata un'istanza della classe risolverà C4686; dichiarare un'istanza o l'accesso a un membro (C\<int >:: nulla) disponibili anche opzioni.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

## <a name="example"></a>Esempio

Provare a utilizzare il seguente:

```cpp
// C4686.cpp
// compile with: /W3
#pragma warning (default : 4686)
template <class T>
class C;

template <class T>
C<T> f(T);

template <class T>
class C {};

int main() {
   f(1);   // C4686
}

template <class T>
C<T> f(T) {
   return C<int>();
}
```