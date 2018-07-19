---
title: _com_ptr_t::QueryInterface | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_ptr_t::QueryInterface
- _com_ptr_t.QueryInterface
dev_langs:
- C++
helpviewer_keywords:
- QueryInterface method [C++]
ms.assetid: d03292f1-6b02-40db-9756-8b0837a97319
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c455ce81a869d64b3a9019088028e384c6a06217
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943150"
---
# <a name="comptrtqueryinterface"></a>_com_ptr_t::QueryInterface
**Sezione specifica Microsoft**  
  
 Chiama il `QueryInterface` funzione membro di `IUnknown` sul puntatore a interfaccia incapsulato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
template<typename _InterfaceType> HRESULT QueryInterface (  
   const IID& iid,  
   _InterfaceType*& p   
) throw ( );  
template<typename _InterfaceType> HRESULT QueryInterface (  
   const IID& iid,  
   _InterfaceType** p  
) throw( );  
```  
  
#### <a name="parameters"></a>Parametri  
 *IID*  
 `IID` un puntatore di interfaccia.  
  
 *p*  
 Puntatore a interfaccia raw.  
  
## <a name="remarks"></a>Note  
 Le chiamate `IUnknown::QueryInterface` sul puntatore a interfaccia incapsulato con la proprietà specificata `IID` e restituisce un puntatore a interfaccia raw risultante in *p*. Questa routine restituisce il valore HRESULT per indicare esito positivo o negativo.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_ptr_t](../cpp/com-ptr-t-class.md)