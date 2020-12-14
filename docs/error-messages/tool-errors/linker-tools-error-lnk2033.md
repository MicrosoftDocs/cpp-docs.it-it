---
description: 'Altre informazioni su: errore degli strumenti del linker LNK2033'
title: Errore degli strumenti del linker LNK2033
ms.date: 11/04/2016
f1_keywords:
- LNK2033
helpviewer_keywords:
- LNK2033
ms.assetid: d61db467-9328-4788-bf54-e2a20537f13f
ms.openlocfilehash: 46ee94e0aff4379a6d28a508ed1394e90ef9a96d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97275646"
---
# <a name="linker-tools-error-lnk2033"></a>Errore degli strumenti del linker LNK2033

token TypeRef non risolto (token) per ' type '

Un tipo non ha una definizione nei metadati MSIL.

LNK2033 può verificarsi quando si esegue la compilazione con **/CLR: safe** e dove esiste solo una dichiarazione con esecuzione per un tipo in un modulo MSIL, in cui al tipo viene fatto riferimento nel modulo MSIL.

Il tipo deve essere definito in **/CLR: safe**.

Per altre informazioni, vedere [/CLR (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).

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
