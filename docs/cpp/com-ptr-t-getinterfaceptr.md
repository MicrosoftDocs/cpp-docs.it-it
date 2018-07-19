---
title: _com_ptr_t::GetInterfacePtr | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_ptr_t::GetInterfacePtr
dev_langs:
- C++
helpviewer_keywords:
- GetInterfacePtr method [C++]
ms.assetid: 55e3e2c7-c939-48b5-a905-4b9cbefeea7e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1e81484f7b40417320078700332b512cbc81d7e6
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943201"
---
# <a name="comptrtgetinterfaceptr"></a>_com_ptr_t::GetInterfacePtr
**Sezione specifica Microsoft**  
  
 Restituisce un puntatore a interfaccia incapsulato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
Interface* GetInterfacePtr( ) const throw( );   
Interface*& GetInterfacePtr() throw();  
```  
  
## <a name="remarks"></a>Note  
 Restituisce il puntatore a interfaccia incapsulato, che può essere NULL.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_ptr_t](../cpp/com-ptr-t-class.md)