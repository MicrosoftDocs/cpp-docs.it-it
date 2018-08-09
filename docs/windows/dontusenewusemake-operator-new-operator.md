---
title: 'Nuovo operatore dontusenewusemake:: operator | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::DontUseNewUseMake::operator new
dev_langs:
- C++
helpviewer_keywords:
- operator new operator
ms.assetid: 6af07a0d-2271-430c-9d9b-5a4223fed049
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b849c7578b29a3d4595a9ecd07c4339dc751e9dd
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39652949"
---
# <a name="dontusenewusemakeoperator-new-operator"></a>Operatore DontUseNewUseMake::operator new
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
void* operator new(  
   size_t,  
   _In_ void* placement  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *__unnamed0*  
 Un parametro non denominato che specifica il numero di byte di memoria da allocare.  
  
 *selezione host*  
 Il tipo da allocare.  
  
## <a name="return-value"></a>Valore restituito  
 Fornisce un modo per passare argomenti aggiuntivi se si esegue l'overload di operatore **nuovo**.  
  
## <a name="remarks"></a>Note  
 Operatore di overload **nuove** e impedisce l'utilizzo `RuntimeClass`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [DontUseNewUseMake (classe)](../windows/dontusenewusemake-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)