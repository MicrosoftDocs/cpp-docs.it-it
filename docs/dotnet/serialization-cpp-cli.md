---
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
ms.openlocfilehash: b2dfdcaf1a1f33e89d106d4529ffc9af2d08376b
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988404"
---
# <a name="serialization-ccli"></a>Serializzazione (C++/CLI)

La serializzazione (il processo di archiviazione dello stato di un oggetto o di un membro in un supporto permanente) di classi gestite (inclusi singoli campi o proprietà) è supportata dalle classi <xref:System.SerializableAttribute> e <xref:System.NonSerializedAttribute>.

## <a name="remarks"></a>Note

Applicare l'attributo personalizzato **SerializableAttribute** a una classe gestita per serializzare l'intera classe o applicare solo a campi o proprietà specifiche per serializzare parti della classe gestita. Utilizzare l'attributo personalizzato **NonSerializedAttribute** per esentare i campi o le proprietà di una classe gestita da serializzare.

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

Nell'esempio seguente la classe `MyClass` (e la proprietà `m_nCount`) è contrassegnata come serializzabile. Tuttavia, la proprietà `m_nData` non viene serializzata come indicato dall'attributo personalizzato non **serializzato** :

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

### <a name="comments"></a>Comments

Si noti che è possibile fare riferimento a entrambi gli attributi utilizzando il relativo nome breve (**serializzabile** e non **serializzato**). Questa operazione viene illustrata più avanti nell' [applicazione degli attributi](/dotnet/standard/attributes/applying-attributes).

## <a name="see-also"></a>Vedere anche

[Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)
