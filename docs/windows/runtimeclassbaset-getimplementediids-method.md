---
title: 'Metodo runtimeclassbaset:: Getimplementediids | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::RuntimeClassBaseT::GetImplementedIIDS
dev_langs:
- C++
helpviewer_keywords:
- GetImplementedIIDS method
ms.assetid: adae54da-521d-4add-87f5-242fbd85f33b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 2a5c63a3b2dbbac934162f74abb8e742cc4418a7
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40018991"
---
# <a name="runtimeclassbasetgetimplementediids-method"></a>Metodo RuntimeClassBaseT::GetImplementedIIDS
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template<typename T>  
__forceinline static HRESULT GetImplementedIIDS(  
   _In_ T* implements,  
   _Out_ ULONG *iidCount,  
   _Deref_out_ _Deref_post_cap_(*iidCount) IID **iids  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *T*  
 Il tipo dei *implementa* parametro.  
  
 *Implementa*  
 Puntatore al tipo specificato dal parametro *T*.  
  
 *iidCount*  
 Il numero massimo di ID di interfaccia da recuperare.  
  
 *IID*  
 Se questa operazione viene completata correttamente, una matrice di ID di interfaccia implementato dal tipo *T*.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se l'esito positivo. in caso contrario, HRESULT che descrive l'errore.  
  
## <a name="remarks"></a>Note  
 Recupera una matrice ID che sono implementate da un tipo specificato di interfaccia.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Struttura RuntimeClassBaseT](../windows/runtimeclassbaset-structure.md)