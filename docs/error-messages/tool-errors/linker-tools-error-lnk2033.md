---
title: Errore degli strumenti del linker LNK2033
ms.date: 11/04/2016
f1_keywords:
- LNK2033
helpviewer_keywords:
- LNK2033
ms.assetid: d61db467-9328-4788-bf54-e2a20537f13f
ms.openlocfilehash: 7e95823e23215848ff3e5d201171523c9009eb2d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62298906"
---
# <a name="linker-tools-error-lnk2033"></a>Errore degli strumenti del linker LNK2033

token typeref non risolto (token) per 'type'

Un tipo non ha una definizione nei metadati MSIL.

Errore LNK2033 possono verificarsi durante la compilazione con **/CLR: safe** e in cui è presente solo una dichiarazione con prototipo per un tipo in un modulo MSIL, in cui il tipo fa riferimento al modulo MSIL.

Il tipo deve essere definito in **/CLR: safe**.

Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore LNK2033.

```
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