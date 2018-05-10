---
title: Funzione IID_PPV_ARGS_Helper | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/IID_PPV_ARGS_Helper
dev_langs:
- C++
helpviewer_keywords:
- IID_PPV_ARGS_Helper function
ms.assetid: afee9b23-8df1-4575-903f-e9ba748418f0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0cef979ae284a303b120df7d14ae71f311498423
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="iidppvargshelper-function"></a>IID_PPV_ARGS_Helper (funzione)
Verifica che il tipo dell'argomento specificato deriva il `IUnknown` interfaccia.  
  
> [!IMPORTANT]
>  Questa specializzazione di modello supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice. Utilizzare [IID_PPV_ARGS](http://msdn.microsoft.com/library/windows/desktop/ee330727.aspx) invece.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename T>  
void** IID_PPV_ARGS_Helper(  
   _Inout_ Microsoft::WRL::Details::ComPtrRef<T> pp  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di argomento `pp`.  
  
 `pp`  
 Puntatore indiretto doppio.  
  
## <a name="return-value"></a>Valore restituito  
 Argomento `pp` cast a un puntatore-a-a-puntatore per `void`.  
  
## <a name="remarks"></a>Note  
 Viene generato un errore di compilazione se il parametro di modello `T` non deriva da `IUnknown`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento (libreria Windows Runtime)](http://msdn.microsoft.com/en-us/00000000-0000-0000-0000-000000000000)