---
title: Errore del compilatore C3409
ms.date: 11/06/2018
f1_keywords:
- C3409
helpviewer_keywords:
- C3409
ms.assetid: e372d9fa-230c-4b28-b6d3-6ad81ccf9dbb
ms.openlocfilehash: 24f107e0c1f74f95afc521c8a4c888a26a35c13a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62173392"
---
# <a name="compiler-error-c3409"></a>Errore del compilatore C3409

> blocco attributi vuoto non consentito

## <a name="remarks"></a>Note

Le parentesi quadre sono state interpretate dal compilatore come un [attributo](../../windows/attributes-alphabetical-reference.md) blocco, ma non sono presenti attributi sono stati trovati.

Il compilatore può generare questo errore quando si usano le parentesi quadre come parte della definizione di un'espressione lambda. Questo errore si verifica quando il compilatore non è possibile determinare se le parentesi quadre sono parte della definizione di un'espressione lambda o di un blocco di attributi. Per altre informazioni sulle espressioni lambda, vedere [Espressioni lambda in C++](../../cpp/lambda-expressions-in-cpp.md).

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Se le parentesi quadre fanno parte di un blocco di attributi:

   1. Specificare uno o più attributi in blocco di attributi.

   1. Rimuovere il blocco di attributi.

1. Se le parentesi quadre fanno parte di un'espressione lambda, assicurarsi che l'espressione lambda segue le regole di sintassi valida.

   Per altre informazioni sulla sintassi delle espressioni lambda, vedere [sintassi delle espressioni Lambda](../../cpp/lambda-expression-syntax.md).

## <a name="example"></a>Esempio

Nell'esempio seguente genera l'errore C3409.

```cpp
// C3409.cpp
// compile with: /c
#include <windows.h>
[]   // C3409
class a {};

// OK
[object, uuid("00000000-0000-0000-0000-000000000000")]
__interface x {};

[coclass, uuid("00000000-0000-0000-0000-000000000001")]
class b : public x {};
```

## <a name="example"></a>Esempio

Nell'esempio seguente genera l'errore C3409 perché un'espressione lambda Usa il `mutable` specifica, ma non è incluso un elenco di parametri. Il compilatore non è possibile determinare se le parentesi quadre sono parte della definizione di un'espressione lambda o di un blocco di attributi.

```cpp
// C3409b.cpp

int main()
{
   [] mutable {}();
}
```

## <a name="see-also"></a>Vedere anche

[attribute](../../windows/attributes-alphabetical-reference.md)<br/>
[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)<br/>
[Sintassi delle espressioni lambda](../../cpp/lambda-expression-syntax.md)