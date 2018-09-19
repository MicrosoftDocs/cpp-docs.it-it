---
title: Errore del compilatore C3836 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3836
dev_langs:
- C++
helpviewer_keywords:
- C3836
ms.assetid: 254f851b-7b7d-4c34-a740-fcf72f6a636a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0a1349ff88c00f8091a8187bb963f4fb683b694e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46046030"
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
