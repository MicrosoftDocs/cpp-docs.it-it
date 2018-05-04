---
title: _com_ptr_t::QueryInterface | Documenti Microsoft
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
ms.openlocfilehash: 7c046f1b1d14b7e7dbd44ca9f5f012e632efef6e
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="comptrtqueryinterface"></a>_com_ptr_t::QueryInterface
**Sezione specifica Microsoft**  
  
 Chiamate di `QueryInterface` funzione membro di **IUnknown** sul puntatore a interfaccia incapsulato.  
  
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
 `iid`  
 **IID** un puntatore di interfaccia.  
  
 `p`  
 Puntatore a interfaccia raw.  
  
## <a name="remarks"></a>Note  
 Chiamate **IUnknown:: QueryInterface** sul puntatore a interfaccia incapsulato con l'oggetto specificato **IID** e restituisce un puntatore a interfaccia raw risultante in `p`. Questa routine restituisce `HRESULT` per indicare l'esito positivo o negativo.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_ptr_t](../cpp/com-ptr-t-class.md)