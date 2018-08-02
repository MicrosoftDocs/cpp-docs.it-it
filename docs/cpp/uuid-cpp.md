---
title: UUID (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- uuid_cpp
dev_langs:
- C++
helpviewer_keywords:
- __declspec keyword [C++], uuid
- uuid __declspec keyword
ms.assetid: 9d004621-09bc-4a8d-871b-648f5d5102d7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 93ae3ac7f0d6fff700e1c89aad197d5f03734cf5
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39467108"
---
# <a name="uuid-c"></a>uuid (C++)
**Sezione specifica Microsoft**  
  
 Il compilatore associa un GUID a una classe o struttura dichiarata o definita (COM oggetto definizioni complete solo) con i **uuid** attributo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
__declspec( uuid("ComObjectGUID") ) declarator  
```  
  
## <a name="remarks"></a>Note  
 Il **uuid** attributo accetta una stringa come argomento. Questa stringa denomina un GUID in formato normale del Registro di sistema con o senza il **{}** delimitatori. Ad esempio:  
  
```cpp 
struct __declspec(uuid("00000000-0000-0000-c000-000000000046")) IUnknown;  
struct __declspec(uuid("{00020400-0000-0000-c000-000000000046}")) IDispatch;  
```  
  
 Tale attributo può essere applicato in una ridichiarazione. In questo modo le intestazioni di sistema di fornire, ad esempio le definizioni delle interfacce `IUnknown`e alla ridichiarazione in un'altra intestazione (ad esempio \<Comdef. h >) per fornire il GUID.  
  
 La parola chiave [uuidof](../cpp/uuidof-operator.md) possono essere applicati per recuperare la costante GUID associata a un tipo definito dall'utente.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [__declspec](../cpp/declspec.md)   
 [Parole chiave](../cpp/keywords-cpp.md)