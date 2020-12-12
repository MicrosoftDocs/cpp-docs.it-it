---
description: 'Altre informazioni su: avviso del compilatore C4687'
title: Avviso del compilatore C4687
ms.date: 11/04/2016
f1_keywords:
- C4687
helpviewer_keywords:
- C4687
ms.assetid: 2f28e0b1-7358-4c88-bd70-aad8f0aa004c
ms.openlocfilehash: ffa8e645aa82a8577d0cd39a4963b8008b6cf9a3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97180721"
---
# <a name="compiler-warning-c4687"></a>Avviso del compilatore C4687

> '*Class*': una classe astratta sealed non può implementare un'interfaccia '*Interface*'

## <a name="remarks"></a>Commenti

Un tipo astratto sealed è in genere utile solo per mantenere funzioni membro statiche.

Per ulteriori informazioni, vedere [abstract](../../extensions/abstract-cpp-component-extensions.md) e [sealed](../../extensions/sealed-cpp-component-extensions.md).

Per impostazione predefinita, C4687 viene generato come errore. È possibile disattivare C4687 con il pragma [warning](../../preprocessor/warning.md) . Se si è certi di voler implementare un'interfaccia in un tipo astratto sealed, è possibile disattivare C4687.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4687.

```cpp
// C4687.cpp
// compile with: /clr /c
interface class A {};

ref struct B sealed abstract : A {};   // C4687
ref struct C sealed : A {};   // OK
ref struct D abstract : A {};   // OK
```
