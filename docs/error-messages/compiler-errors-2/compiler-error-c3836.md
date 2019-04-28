---
title: Errore del compilatore C3836
ms.date: 11/04/2016
f1_keywords:
- C3836
helpviewer_keywords:
- C3836
ms.assetid: 254f851b-7b7d-4c34-a740-fcf72f6a636a
ms.openlocfilehash: 33860273db07894a9a4d15ba6d578598a18819ee
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62208057"
---
# <a name="compiler-error-c3836"></a>Errore del compilatore C3836

costruttore statico non è consentito avere un elenco di inizializzatori di membro

Una classe gestita non può avere un costruttore statico che include anche un elenco di inizializzazione del membro. Costruttori di classe statici vengono chiamati dal common language runtime per l'inizializzazione, l'inizializzazione dei membri dati statici delle classi.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3836:

```
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
