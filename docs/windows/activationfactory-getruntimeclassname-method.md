---
title: 'Metodo activationfactory:: Getruntimeclassname | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::ActivationFactory::GetRuntimeClassName
dev_langs:
- C++
helpviewer_keywords:
- GetRuntimeClassName method
ms.assetid: 74e34f0a-9c51-4b40-89f5-45c6c5886ece
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: db26591bc4d0f1912c968c331266200baeea9917
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39463668"
---
# <a name="activationfactorygetruntimeclassname-method"></a>Metodo ActivationFactory::GetRuntimeClassName
Ottiene il nome della classe di runtime dell'oggetto a cui l'oggetto corrente **ActivationFactory** crea un'istanza.  
  
## <a name="syntax"></a>Sintassi  
  
```  
STDMETHOD(  
   GetRuntimeClassName  
)(_Out_ HSTRING* runtimeName);  
```  
  
#### <a name="parameters"></a>Parametri  
 *runtimeName*  
 Al termine di questa operazione, un handle a una stringa che contiene il nome della classe di runtime dell'oggetto che l'oggetto corrente **ActivationFactory** crea un'istanza.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT che descrive l'errore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe ActivationFactory](../windows/activationfactory-class.md)