---
title: 'Metodo Implements:: cancastto | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Implements::CanCastTo
dev_langs:
- C++
helpviewer_keywords:
- CanCastTo method
ms.assetid: a8e85c7d-4dcd-446d-bebc-a97da46ce44a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 53b17558998812895ece4b47f5de03700e502b8e
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39608943"
---
# <a name="implementscancastto-method"></a>Metodo Implements::CanCastTo
Ottiene un puntatore all'interfaccia specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
__forceinline HRESULT CanCastTo(  
   REFIID riid,  
   _Deref_out_ void **ppv  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *riid*  
 Un riferimento all'ID di interfaccia.  
  
 *ppv*  
 Se ha esito positivo, un puntatore all'interfaccia specificata da *riid*.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se l'esito positivo. in caso contrario, HRESULT che indica l'errore, ad esempio E_NOINTERFACE.  
  
## <a name="remarks"></a>Note  
 Si tratta di una funzione helper interna che esegue un'operazione QueryInterface.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Struttura Implements](../windows/implements-structure.md)