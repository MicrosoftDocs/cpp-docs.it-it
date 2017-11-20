---
title: Funzione GetActivationFactory | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::GetActivationFactory
- client/ABI::Windows::Foundation::GetActivationFactory
- client/Windows::Foundation::GetActivationFactory
dev_langs: C++
helpviewer_keywords: GetActivationFactory function
ms.assetid: 5736d285-6beb-42aa-8788-e261c0010afe
caps.latest.revision: "4"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 34ffd1826e337194e83e4fa7741e18f7892a47cd
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="getactivationfactory-function"></a>GetActivationFactory (funzione)
Recupera una factory di attivazione per il tipo specificato dal parametro di modello.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<  
   typename T  
>  
inline HRESULT GetActivationFactory(  
   _In_ HSTRING activatableClassId,  
   _Out_ Microsoft::WRL::Details::ComPtrRef<T> factory  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Un parametro di modello che specifica il tipo di factory di attivazione.  
  
 `activatableClassId`  
 Il nome della classe in grado di produrre la factory di attivazione.  
  
 `factory`  
 Al termine di questa operazione, un riferimento per la factory di attivazione per il tipo `T`.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario, un errore HRESULT che indica perché questa operazione non è riuscita.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Namespace:** spazio  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Windows::Foundation](../windows/windows-foundation-namespace.md)