---
title: Errore del compilatore C3836
ms.date: 11/04/2016
f1_keywords:
- C3836
helpviewer_keywords:
- C3836
ms.assetid: 254f851b-7b7d-4c34-a740-fcf72f6a636a
ms.openlocfilehash: 9c8a7e761f2ece046d5de5c0e74ee911e5ee550d
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74741404"
---
# <a name="compiler-error-c3836"></a>Errore del compilatore C3836

il costruttore statico non può avere un elenco di inizializzatori di membri

Una classe gestita non può avere un costruttore statico che include anche un elenco di inizializzazione dei membri. I costruttori di classi statiche vengono chiamati dal Common Language Runtime per eseguire l'inizializzazione della classe, inizializzando i membri dati statici.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3836:

```cpp
// C3836a.cpp
// compile with: /clr
ref class M
{
   static int s_i;

public:
   static M() :  s_i(1234)   // C3836, delete initializer to resolve
   {
   }
};

int main()
{
}
```
