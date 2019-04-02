---
title: Avviso del compilatore (livello 3) C4580
ms.date: 11/04/2016
f1_keywords:
- C4580
helpviewer_keywords:
- C4580
ms.assetid: fef6e8e0-0d6a-44fa-b22a-2fe7ba2ef379
ms.openlocfilehash: bd2ecff5adc6538f75c61772b785acbfc89092ae
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58781770"
---
# <a name="compiler-warning-level-3-c4580"></a>Avviso del compilatore (livello 3) C4580

[attribute] è deprecato; specificare System::Attribute o Platform::Metadata come classe base

[[attributo](../../windows/attributes/attribute.md)] non è più la sintassi preferita per la creazione di attributi definiti dall'utente. Per altre informazioni, vedere [User-Defined Attributes](../../extensions/user-defined-attributes-cpp-component-extensions.md). Per il codice CLR, derivare gli attributi da `System::Attribute`. Per il codice Windows Runtime, derivare gli attributi da `Platform::Metadata`.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3454 e mostra come risolverlo.

```cpp
// C4580.cpp
// compile with: /W3 /c /clr
[attribute]   // C4580
public ref class Attr {
public:
   int m_t;
};

public ref class Attr2 : System::Attribute {
public:
   int m_t;
};
```