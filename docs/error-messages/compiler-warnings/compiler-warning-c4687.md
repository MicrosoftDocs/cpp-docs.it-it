---
title: Avviso del compilatore C4687
ms.date: 11/04/2016
f1_keywords:
- C4687
helpviewer_keywords:
- C4687
ms.assetid: 2f28e0b1-7358-4c88-bd70-aad8f0aa004c
ms.openlocfilehash: 1978e1a35ba5b5d59b5961a21378d8af6921d145
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62311327"
---
# <a name="compiler-warning-c4687"></a>Avviso del compilatore C4687

'class': una classe astratta sealed non può implementare un'interfaccia 'interface'

Un tipo sealed e astratto è in genere utile solo per contenere le funzioni membro statiche.

Per altre informazioni, vedere [astratto](../../extensions/abstract-cpp-component-extensions.md)e [sealed](../../extensions/sealed-cpp-component-extensions.md).

Per impostazione predefinita, C4687 viene generato come errore. È possibile eliminare C4687 con il [avviso](../../preprocessor/warning.md) pragma. Se si è certi che si desidera implementare un'interfaccia in un tipo sealed e astratto, è possibile eliminare C4687.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4687.

```
// C4687.cpp
// compile with: /clr /c
interface class A {};

ref struct B sealed abstract : A {};   // C4687
ref struct C sealed : A {};   // OK
ref struct D abstract : A {};   // OK
```