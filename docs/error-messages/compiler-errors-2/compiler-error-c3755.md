---
title: Errore del compilatore C3755 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3755
dev_langs:
- C++
helpviewer_keywords:
- C3755
ms.assetid: 9317b55e-a52e-4b87-b915-5a208d6eda38
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 647f62fa75226fd2c80d1bf6285d76e1c2f8c4be
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46026726"
---
# <a name="compiler-error-c3755"></a>Errore del compilatore C3755

'delegate': un delegato non può essere definito

Oggetto [delegato (estensioni del componente C++)](../../windows/delegate-cpp-component-extensions.md) può essere dichiarata ma non definita.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3755.

```
// C3755.cpp
// compile with: /clr /c
delegate void MyDel() {};   // C3755
```

## <a name="example"></a>Esempio

C3755 può verificarsi anche se si prova a creare un modello di delegato. L'esempio seguente genera l'errore C3755.

```
// C3755_b.cpp
// compile with: /clr /c
ref struct R {
   template<class T>
   delegate void D(int) {}   // C3755
};
```