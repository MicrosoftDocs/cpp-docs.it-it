---
title: Errore del compilatore C3409
ms.date: 11/06/2018
f1_keywords:
- C3409
helpviewer_keywords:
- C3409
ms.assetid: e372d9fa-230c-4b28-b6d3-6ad81ccf9dbb
ms.openlocfilehash: d3800998ded1758ab1de92af689d9d4613c2c61e
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91502339"
---
# <a name="compiler-error-c3409"></a>Errore del compilatore C3409

> blocco di attributi vuoto non consentito

## <a name="remarks"></a>Osservazioni

Le parentesi quadre sono state interpretate dal compilatore come un blocco di attributi, ma non è stato trovato alcun [attributo](../../windows/attributes/attributes-alphabetical-reference.md) .

Il compilatore può generare questo errore quando si utilizzano le parentesi quadre come parte della definizione di un'espressione lambda. Questo errore si verifica quando il compilatore non è in grado di determinare se le parentesi quadre sono parte della definizione di un'espressione lambda o di un blocco di attributi. Per ulteriori informazioni sulle espressioni lambda, vedere [espressioni lambda](../../cpp/lambda-expressions-in-cpp.md).

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Se le parentesi quadre fanno parte di un blocco di attributi:

   1. Fornire uno o più attributi nel blocco di attributi.

   1. Rimuovere il blocco di attributi.

1. Se le parentesi quadre fanno parte di un'espressione lambda, assicurarsi che l'espressione lambda segua le regole di sintassi valide.

   Per ulteriori informazioni sulla sintassi delle espressioni lambda, vedere [sintassi delle espressioni lambda](../../cpp/lambda-expression-syntax.md).

## <a name="examples"></a>Esempio

Nell'esempio seguente viene generato C3409.

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

Nell'esempio seguente viene generato C3409 perché un'espressione lambda utilizza la **`mutable`** specifica, ma non fornisce un elenco di parametri. Il compilatore non è in grado di determinare se le parentesi quadre sono parte della definizione di un'espressione lambda o di un blocco di attributi.

```cpp
// C3409b.cpp

int main()
{
   [] mutable {}();
}
```

## <a name="see-also"></a>Vedere anche

[attributo](../../windows/attributes/attributes-alphabetical-reference.md)<br/>
[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)<br/>
[Sintassi delle espressioni lambda](../../cpp/lambda-expression-syntax.md)
