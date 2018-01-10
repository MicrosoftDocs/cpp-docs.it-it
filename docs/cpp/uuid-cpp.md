---
title: UUID (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: uuid_cpp
dev_langs: C++
helpviewer_keywords:
- __declspec keyword [C++], uuid
- uuid __declspec keyword
ms.assetid: 9d004621-09bc-4a8d-871b-648f5d5102d7
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ad4362b8e84d7ffb4bb090a4e513538cdb26ae25
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="uuid-c"></a>uuid (C++)
**Sezione specifica Microsoft**  
  
 Il compilatore associa un GUID a una classe o struttura dichiarata o definita (solo per le definizioni complete dell'oggetto COM) con l'attributo `uuid`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
__declspec( uuid("  
ComObjectGUID  
") ) declarator  
```  
  
## <a name="remarks"></a>Note  
 L'attributo `uuid` accetta una stringa come proprio argomento. Questa stringa denomina un GUID nel formato normale del Registro di sistema con o senza il **{}** delimitatori. Ad esempio:  
  
```  
struct __declspec(uuid("00000000-0000-0000-c000-000000000046")) IUnknown;  
struct __declspec(uuid("{00020400-0000-0000-c000-000000000046}")) IDispatch;  
```  
  
 Tale attributo può essere applicato in una ridichiarazione. Questo consente alle intestazioni di sistema di fornire le definizioni di interfaccia come **IUnknown**e alla ridichiarazione in un'altra intestazione (come COMDEF. H) per fornire il GUID.  
  
 La parola chiave [uuidof](../cpp/uuidof-operator.md) possono essere applicati per recuperare la costante GUID associata a un tipo definito dall'utente.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [declspec](../cpp/declspec.md)   
 [Parole chiave](../cpp/keywords-cpp.md)