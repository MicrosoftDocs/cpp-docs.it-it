---
description: 'Altre informazioni su: serializzazione (C++/CLI)'
title: Serializzazione (C++/CLI)
ms.date: 11/04/2016
helpviewer_keywords:
- serialization [C++]
- SerializableAttribute class, managed applications
- NonSerializedAttribute class, managed applications
- managed code [C++], serializing
- .NET Framework [C++], serialization
- serialization [C++], about serialization
ms.assetid: 869010ca-74e1-4989-b409-4643cdb94084
ms.openlocfilehash: 1524ed5d4a000d2006f6f830b1d82119d170c3b2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97164601"
---
# <a name="serialization-ccli"></a>Serializzazione (C++/CLI)

La serializzazione (il processo di archiviazione dello stato di un oggetto o di un membro in un supporto permanente) di classi gestite (inclusi singoli campi o proprietà) è supportata dalle <xref:System.SerializableAttribute> <xref:System.NonSerializedAttribute> classi e.

## <a name="remarks"></a>Commenti

Applicare l'attributo personalizzato **SerializableAttribute** a una classe gestita per serializzare l'intera classe o applicare solo a campi o proprietà specifiche per serializzare parti della classe gestita. Utilizzare l'attributo personalizzato **NonSerializedAttribute** per esentare i campi o le proprietà di una classe gestita da serializzare.

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

Nell'esempio seguente la classe `MyClass` (e la proprietà `m_nCount` ) è contrassegnata come serializzabile. Tuttavia, la `m_nData` proprietà non viene serializzata come indicato dall'attributo personalizzato non **serializzato** :

### <a name="code"></a>Codice

```cpp
// serialization_and_mcpp.cpp
// compile with: /LD /clr
using namespace System;

[ Serializable ]
public ref class MyClass {
public:
   int m_nCount;
private:
   [ NonSerialized ]
   int m_nData;
};
```

### <a name="comments"></a>Commenti

Si noti che è possibile fare riferimento a entrambi gli attributi utilizzando il relativo nome breve (**serializzabile** e non **serializzato**). Questa operazione viene illustrata più avanti nell' [applicazione degli attributi](/dotnet/standard/attributes/applying-attributes).

## <a name="see-also"></a>Vedi anche

[Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)
