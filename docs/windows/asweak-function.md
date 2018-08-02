---
title: Funzione AsWeak | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::AsWeak
dev_langs:
- C++
helpviewer_keywords:
- AsWeak function
ms.assetid: a6f10cfc-c1d6-4761-adb9-1a119cc99913
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a51b7095ec654c4ebb393c9a83d1e30fb52ce019
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39462625"
---
# <a name="asweak-function"></a>AsWeak (funzione)
Recupera un riferimento debole a un'istanza specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename T>  
HRESULT AsWeak(  
   _In_ T* p,  
   _Out_ WeakRef* pWeak  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *T*  
 Un puntatore al tipo del parametro *p*.  
  
 *p*  
 Un'istanza di un tipo.  
  
 *pWeak*  
 Al termine di questa operazione, un puntatore a un riferimento debole al parametro *p*.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK, se questa operazione ha esito positivo; in caso contrario, un errore HRESULT che indica la causa dell'errore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)