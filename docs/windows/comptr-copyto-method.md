---
title: 'Metodo comptr:: CopyTo | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::ComPtr::CopyTo
dev_langs:
- C++
helpviewer_keywords:
- CopyTo method
ms.assetid: 8801bc49-6db4-4393-a55f-a701ae3b8718
caps.latest.revision: ''
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: baa8c64187be3d1ddf52bf7056a00b7c13abeceb
ms.sourcegitcommit: 1d11412c8f5e6ddf4edded89e0ef5097cc89f812
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/22/2018
---
# <a name="comptrcopyto-method"></a>Metodo ComPtr::CopyTo
Copia l'interfaccia corrente o specificata associato a questo ComPtr al puntatore specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
HRESULT CopyTo(  
   _Deref_out_ InterfaceType** ptr  
);  
  
HRESULT CopyTo(  
   REFIID riid,  
   _Deref_out_ void** ptr  
) const;  

template<typename U>  
HRESULT CopyTo(  
   _Deref_out_ U** ptr  
) const;  
```  
  
#### <a name="parameters"></a>Parametri  
 `U`  
 Un nome di tipo.  
  
 `ptr`  
 Quando questa operazione viene completata, un puntatore all'interfaccia richiesta.  
  
 `riid`  
 ID di interfaccia.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario, HRESULT che indica perché l'operazione QueryInterface implicita non è riuscita.  
  
## <a name="remarks"></a>Note  
 La prima funzione restituisce una copia di un puntatore all'interfaccia associata a questo ComPtr. Questa funzione restituisce sempre S_OK.  
  
 La seconda funzione esegue un'operazione QueryInterface sull'interfaccia associata a questo ComPtr per l'interfaccia specificata per il `riid` parametro.  
  
 La terza funzione esegue un'operazione QueryInterface sull'interfaccia associata a questo ComPtr per l'interfaccia sottostante del parametro `U`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)