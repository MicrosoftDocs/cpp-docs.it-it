---
title: Funzione IID_PPV_ARGS_Helper | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: client/IID_PPV_ARGS_Helper
dev_langs: C++
helpviewer_keywords: IID_PPV_ARGS_Helper function
ms.assetid: afee9b23-8df1-4575-903f-e9ba748418f0
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 705f1ee7f1b471491b6df5953cf92b12f6edc13c
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="iidppvargshelper-function"></a>IID_PPV_ARGS_Helper (funzione)
Verifica che il tipo dell'argomento specificato deriva il `IUnknown` interfaccia.  
  
> [!IMPORTANT]
>  Questa specializzazione di modello supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice. Utilizzare [IID_PPV_ARGS](http://msdn.microsoft.com/library/windows/desktop/ee330727.aspx) invece.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<  
   typename T  
>  
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
 [Riferimento (libreria di Runtime di Windows)](http://msdn.microsoft.com/en-us/00000000-0000-0000-0000-000000000000)