---
title: IID_PPV_ARGS_Helper (funzione) | Microsoft Docs
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
ms.openlocfilehash: 351e0755f786e69da1dea6a925b7afc7cb6d6bf1
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40011640"
---
# <a name="iidppvargshelper-function"></a>IID_PPV_ARGS_Helper (funzione)
Verifica che il tipo dell'argomento specificato deriva dal `IUnknown` interfaccia.  
  
> [!IMPORTANT]
>  Questa specializzazione di modello supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice. Uso [IID_PPV_ARGS](http://msdn.microsoft.com/library/windows/desktop/ee330727.aspx) invece.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template<typename T>  
void** IID_PPV_ARGS_Helper(  
   _Inout_ Microsoft::WRL::Details::ComPtrRef<T> pp  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *T*  
 Il tipo dell'argomento *pp*.  
  
 *profilo di porta*  
 Puntatore indiretto doppio.  
  
## <a name="return-value"></a>Valore restituito  
 Argomento *pp* eseguire il cast a un puntatore-a-a-puntatore al **void**.  
  
## <a name="remarks"></a>Note  
 Viene generato un errore in fase di compilazione se il parametro di modello *T* non deriva da `IUnknown`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento (libreria Windows Runtime)](http://msdn.microsoft.com/00000000-0000-0000-0000-000000000000)