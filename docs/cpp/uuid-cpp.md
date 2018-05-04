---
title: UUID (C++) | Documenti Microsoft
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
ms.openlocfilehash: b143def4d758307c6ce6737281bdca1097aaa8c5
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="uuid-c"></a>uuid (C++)
**Sezione specifica Microsoft**  
  
 Il compilatore associa un GUID a una classe o struttura dichiarata o definita (solo per le definizioni complete dell'oggetto COM) con l'attributo `uuid`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
__declspec( uuid("ComObjectGUID") ) declarator  
```  
  
## <a name="remarks"></a>Note  
 L'attributo `uuid` accetta una stringa come proprio argomento. Questa stringa denomina un GUID nel formato normale del Registro di sistema con o senza il **{}** delimitatori. Ad esempio:  
  
```  
struct __declspec(uuid("00000000-0000-0000-c000-000000000046")) IUnknown;  
struct __declspec(uuid("{00020400-0000-0000-c000-000000000046}")) IDispatch;  
```  
  
 Tale attributo può essere applicato in una ridichiarazione. Questo consente alle intestazioni di sistema di fornire le definizioni di interfaccia come **IUnknown**e alla ridichiarazione in un'altra intestazione (ad esempio \<Comdef. h >) per fornire il GUID.  
  
 La parola chiave [uuidof](../cpp/uuidof-operator.md) possono essere applicati per recuperare la costante GUID associata a un tipo definito dall'utente.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [__declspec](../cpp/declspec.md)   
 [Parole chiave](../cpp/keywords-cpp.md)