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
ms.openlocfilehash: 794a71ae9a146b691ba6a4377a7fdf2c3ddd3501
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62384673"
---
# <a name="serialization-ccli"></a>Serializzazione (C++/CLI)

Serializzazione (il processo di archiviazione dello stato di un oggetto o un membro da un supporto permanente) delle classi gestite (inclusi i singoli campi o proprietà) è supportato per il <xref:System.SerializableAttribute> e <xref:System.NonSerializedAttribute> classi.

## <a name="remarks"></a>Note

Si applicano i **SerializableAttribute** attributo personalizzato da una classe gestita per serializzare la classe per intero o si applicano solo a determinati campi o proprietà da serializzare parti della classe gestita. Usare la **NonSerializedAttribute** attributo personalizzato da campi o proprietà di una classe gestita la serializzazione.

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

Nell'esempio seguente, la classe `MyClass` (e la proprietà `m_nCount`) è contrassegnato come serializzabile. Tuttavia, il `m_nData` proprietà non è serializzata come indicato dal **NonSerialized** attributo personalizzato:

### <a name="code"></a>Codice

```
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

Si noti che è possano fare riferimento a entrambi gli attributi mediante il "nome breve" (**Serializable** e **NonSerialized**). Queste operazioni sono illustrate ulteriormente nella [Applying Attributes](/dotnet/standard/attributes/applying-attributes).

## <a name="see-also"></a>Vedere anche

[Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)
