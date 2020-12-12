---
description: 'Altre informazioni su: errore del compilatore C3446'
title: Errore del compilatore C3446
ms.date: 07/21/2017
f1_keywords:
- C3446
helpviewer_keywords:
- C3446
ms.assetid: 33064548-24e4-46f1-beb1-476e3c3b3fbf
ms.openlocfilehash: 442ac07c1684278e76f86531d1c28de6507eb999
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97113671"
---
# <a name="compiler-error-c3446"></a>Errore del compilatore C3446

>'*Class*': un inizializzatore di membro predefinito non è consentito per un membro di una classe di valori

In Visual Studio 2015 e versioni precedenti il compilatore consentiva, ma ignorava, un inizializzatore di membro predefinito per un membro di una classe di valori. L'inizializzazione predefinita di una classe di valori inizializza sempre a zero i membri e un costruttore predefinito non è consentito. In Visual Studio 2017 gli inizializzatori di membri predefiniti generano un errore del compilatore, come illustra l'esempio seguente:

## <a name="example"></a>Esempio

L'esempio seguente genera C3446 in Visual Studio 2017 e versioni successive:

```cpp
// C3446.cpp
value struct V
{
       int i = 0; // error C3446: 'V::i': a default member initializer
                  // is not allowed for a member of a value class
       int j {0}; // C3446
};
```

Per correggere l'errore, rimuovere l'inizializzatore:

```cpp
// C3446b.cpp
value struct V
{
       int i;
       int j;
};
```
