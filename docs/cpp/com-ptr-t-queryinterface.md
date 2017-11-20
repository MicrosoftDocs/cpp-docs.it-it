---
title: _com_ptr_t::QueryInterface | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- _com_ptr_t::QueryInterface
- _com_ptr_t.QueryInterface
dev_langs: C++
helpviewer_keywords: QueryInterface method [C++]
ms.assetid: d03292f1-6b02-40db-9756-8b0837a97319
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 1dd546da4730bfd2995b4d97be8017807d2ae161
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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