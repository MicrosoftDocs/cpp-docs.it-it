---
title: Serializzazione (C + + CLI) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- serialization [C++]
- SerializableAttribute class, managed applications
- NonSerializedAttribute class, managed applications
- managed code [C++], serializing
- .NET Framework [C++], serialization
- serialization [C++], about serialization
ms.assetid: 869010ca-74e1-4989-b409-4643cdb94084
caps.latest.revision: 13
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 6efd56655cb5b262eab7d7f14c197e11466fb8bf
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="serialization-ccli"></a>Serializzazione (C++/CLI)
Serializzazione (il processo di archiviazione dello stato di un oggetto o membro su un supporto permanente) delle classi gestite (inclusi i singoli campi o proprietà) è supportato dal <xref:System.SerializableAttribute> e <xref:System.NonSerializedAttribute> classi.  
  
## <a name="remarks"></a>Note  
 Applicare il **SerializableAttribute** attributo personalizzato a una classe gestita per serializzare la classe per intero o si applicano solo a determinati campi o proprietà da serializzare parti della classe gestita. Utilizzare il **NonSerializedAttribute** attributo personalizzato da campi o proprietà di una classe gestita vengano serializzati.  
  
## <a name="example"></a>Esempio  
  
### <a name="description"></a>Descrizione  
 Nell'esempio seguente, la classe `MyClass` (e la proprietà `m_nCount`) è contrassegnata come serializzabile. Tuttavia, il `m_nData` proprietà non è serializzata come indicato dal **NonSerialized** attributo personalizzato:  
  
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
 Si noti che è possano fare riferimento a entrambi gli attributi mediante il nome"breve" (**Serializable** e **NonSerialized**). Ciò è illustrato nel [applicazione di attributi](/dotnet/standard/attributes/applying-attributes).  
  
## <a name="see-also"></a>Vedere anche  
 [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)