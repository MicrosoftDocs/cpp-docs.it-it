---
title: UUID (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- uuid_cpp
dev_langs:
- C++
helpviewer_keywords:
- __declspec keyword [C++], uuid
- uuid __declspec keyword
ms.assetid: 9d004621-09bc-4a8d-871b-648f5d5102d7
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 80975b751b6e167573a038e55042b3546821c68f
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

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
