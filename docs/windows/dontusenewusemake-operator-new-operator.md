---
title: 'Nuovo operatore dontusenewusemake:: operator | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: implements/Microsoft::WRL::Details::DontUseNewUseMake::operator new
dev_langs: C++
helpviewer_keywords: operator new operator
ms.assetid: 6af07a0d-2271-430c-9d9b-5a4223fed049
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 5424108692bd97bdea890aff85ab7428276dd430
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="dontusenewusemakeoperator-new-operator"></a>Operatore DontUseNewUseMake::operator new
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void* operator new(  
   size_t,  
   _In_ void* placement  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `__unnamed0`  
 Un parametro senza nome che specifica il numero di byte di memoria da allocare.  
  
 `placement`  
 Il tipo deve essere allocata.  
  
## <a name="return-value"></a>Valore restituito  
 Fornisce un modo per passare argomenti aggiuntivi se si esegue l'overload di operatore `new`.  
  
## <a name="remarks"></a>Note  
 Esegue l'overload di operatore `new` e impedisce venga utilizzato in RuntimeClass.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [DontUseNewUseMake (classe)](../windows/dontusenewusemake-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)