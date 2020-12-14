---
description: 'Altre informazioni su: errore del compilatore C3409'
title: Errore del compilatore C3409
ms.date: 11/06/2018
f1_keywords:
- C3409
helpviewer_keywords:
- C3409
ms.assetid: e372d9fa-230c-4b28-b6d3-6ad81ccf9dbb
ms.openlocfilehash: 6d3ba602ab9f98526d2ddd6538e424b7879c7017
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97316258"
---
# <a name="compiler-error-c3409"></a>Errore del compilatore C3409

> blocco di attributi vuoto non consentito

## <a name="remarks"></a>Commenti

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

## <a name="see-also"></a>Vedi anche

[attributo](../../windows/attributes/attributes-alphabetical-reference.md)<br/>
[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)<br/>
[Sintassi delle espressioni lambda](../../cpp/lambda-expression-syntax.md)
