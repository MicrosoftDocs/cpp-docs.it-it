---
title: Compilatore avviso (livello 3) C4580 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4580
dev_langs:
- C++
helpviewer_keywords:
- C4580
ms.assetid: fef6e8e0-0d6a-44fa-b22a-2fe7ba2ef379
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 90cd0b401624ea6815b31b55a7da9c8796746ce8
ms.sourcegitcommit: 955ef0f9d966e7c9c65e040f1e28fa83abe102a5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/04/2018
ms.locfileid: "48789202"
---
# <a name="compiler-warning-level-3-c4580"></a>Avviso del compilatore (livello 3) C4580

[attribute] è deprecato; specificare System::Attribute o Platform::Metadata come classe base

[[attributo](../../windows/attributes/attribute.md)] non è più la sintassi preferita per la creazione di attributi definiti dall'utente. Per altre informazioni, vedere [User-Defined Attributes](../../windows/user-defined-attributes-cpp-component-extensions.md). Per il codice CLR, derivare gli attributi da `System::Attribute`. Per il codice Windows Runtime, derivare gli attributi da `Platform::Metadata`.

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