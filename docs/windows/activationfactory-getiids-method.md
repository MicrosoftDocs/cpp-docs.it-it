---
title: 'Metodo activationfactory:: Getiids | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::ActivationFactory::GetIids
dev_langs:
- C++
helpviewer_keywords:
- GetIids method
ms.assetid: 0983d709-d155-4d65-aae4-5b2c8bb0fede
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8f937bf3da7aab803164ca968ba9fa3de227ce03
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39463524"
---
# <a name="activationfactorygetiids-method"></a>Metodo ActivationFactory::GetIids
Recupera una matrice di ID di interfaccia implementata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
STDMETHOD(  
   GetIids  
)(_Out_ ULONG *iidCount, _Deref_out_ _Deref_post_cap_(*iidCount) IID **iids);  
```  
  
#### <a name="parameters"></a>Parametri  
 *iidCount*  
 Al termine di questa operazione, il numero di ID di interfaccia nel *IID* matrice.  
  
 *IID*  
 Quando questa operazione viene completata, una matrice di implementato gli ID di interfaccia.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT che descrive l'errore. E_OUTOFMEMORY è un HRESULT di errore possibili.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe ActivationFactory](../windows/activationfactory-class.md)