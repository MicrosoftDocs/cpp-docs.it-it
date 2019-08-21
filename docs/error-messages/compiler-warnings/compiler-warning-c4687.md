---
title: Avviso del compilatore C4687
ms.date: 11/04/2016
f1_keywords:
- C4687
helpviewer_keywords:
- C4687
ms.assetid: 2f28e0b1-7358-4c88-bd70-aad8f0aa004c
ms.openlocfilehash: 83f5c535f9cf252783110838c181c88c8b0096ee
ms.sourcegitcommit: 9d4ffb8e6e0d70520a1e1a77805785878d445b8a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/20/2019
ms.locfileid: "69631601"
---
# <a name="compiler-warning-c4687"></a>Avviso del compilatore C4687

> '*Class*': una classe astratta sealed non può implementare un'interfaccia '*Interface*'

## <a name="remarks"></a>Note

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
