---
description: 'Altre informazioni su: errore del compilatore C3836'
title: Errore del compilatore C3836
ms.date: 11/04/2016
f1_keywords:
- C3836
helpviewer_keywords:
- C3836
ms.assetid: 254f851b-7b7d-4c34-a740-fcf72f6a636a
ms.openlocfilehash: c7e05bbf95facf5b8552b4442138cc38b86703c0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97180877"
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
