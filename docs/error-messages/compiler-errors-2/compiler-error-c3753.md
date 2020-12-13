---
description: 'Altre informazioni su: errore del compilatore C3753'
title: Errore del compilatore C3753
ms.date: 11/04/2016
f1_keywords:
- C3753
helpviewer_keywords:
- C3753
ms.assetid: a5b99e28-796c-4107-a673-97c2ae3bb2b9
ms.openlocfilehash: a6a427001d1d9f0cfbcb1994e996208ee9ef2e2e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340164"
---
# <a name="compiler-error-c3753"></a>Errore del compilatore C3753

Proprietà generica non consentita

Gli elenchi di parametri generici possono essere visualizzati solo su classi, struct o funzioni gestite.

Per ulteriori informazioni, vedere [generics](../../extensions/generics-cpp-component-extensions.md) and [Property](../../extensions/property-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3753.

```cpp
// C3753.cpp
// compile with: /clr /c
ref struct A {
   generic <typename T>
   property int i;   // C3753 error
};
```
