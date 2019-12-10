---
title: Errore degli strumenti del linker LNK2033
ms.date: 11/04/2016
f1_keywords:
- LNK2033
helpviewer_keywords:
- LNK2033
ms.assetid: d61db467-9328-4788-bf54-e2a20537f13f
ms.openlocfilehash: 407f5eaf94a0e2da43425c3bbdd1955a88c95f14
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74991184"
---
# <a name="linker-tools-error-lnk2033"></a>Errore degli strumenti del linker LNK2033

token TypeRef non risolto (token) per ' type '

Un tipo non ha una definizione nei metadati MSIL.

LNK2033 può verificarsi quando si esegue la compilazione con **/CLR: safe** e dove esiste solo una dichiarazione con esecuzione per un tipo in un modulo MSIL, in cui al tipo viene fatto riferimento nel modulo MSIL.

Il tipo deve essere definito in **/CLR: safe**.

Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'LNK2033.

```cpp
// LNK2033.cpp
// compile with: /clr:safe
// LNK2033 expected
ref class A;
ref class B {};

int main() {
   A ^ aa = nullptr;
   B ^ bb = nullptr;   // OK
};
```
