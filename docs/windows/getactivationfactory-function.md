---
title: GetActivationFactory (funzione) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::GetActivationFactory
- client/ABI::Windows::Foundation::GetActivationFactory
- client/Windows::Foundation::GetActivationFactory
dev_langs:
- C++
helpviewer_keywords:
- GetActivationFactory function
ms.assetid: 5736d285-6beb-42aa-8788-e261c0010afe
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 2cbb5be3603f79a7df1cb330ca06775357666854
ms.sourcegitcommit: d5d6bb9945c3550b8e8864b22b3a565de3691fde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/06/2018
ms.locfileid: "39570311"
---
# <a name="getactivationfactory-function"></a>GetActivationFactory (funzione)
Recupera una factory di attivazione per il tipo specificato dal parametro di modello.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename T>  
inline HRESULT GetActivationFactory(  
   _In_ HSTRING activatableClassId,  
   _Out_ Microsoft::WRL::Details::ComPtrRef<T> factory  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *T*  
 Un parametro di modello che specifica il tipo della factory dell'attivazione.  
  
 *activatableClassId*  
 Il nome della classe che la factory di attivazione può produrre.  
  
 *factory*  
 Al termine di questa operazione, un riferimento alla factory di attivazione per il tipo *T*.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se l'esito positivo. in caso contrario, un errore HRESULT che indica il motivo per cui questa operazione non è riuscita.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Namespace:** spazio  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Windows::Foundation](../windows/windows-foundation-namespace.md)