---
title: Funzione MakeAndInitialize | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::MakeAndInitialize
dev_langs:
- C++
ms.assetid: 71ceeb12-d2a2-4317-b010-3dcde1b39467
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f4bebe74ae855cf303f09dd8798fcceec0df455b
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="makeandinitialize-function"></a>Funzione MakeAndInitialize
Inizializza la classe di Windows Runtime specificata. Utilizzare questa funzione per creare un'istanza di un componente definito nello stesso modulo.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template <typename T, typename I,   
typename TArg1,   
typename TArg2,   
typename TArg3,   
typename TArg4,   
typename TArg5,   
typename TArg6,   
typename TArg7,   
typename TArg8,   
typename TArg9> HRESULT MakeAndInitialize(_Outptr_result_nullonfailure_ I** ppvObject, TArg1 &&arg1, TArg2 &&arg2, TArg3 &&arg3, TArg4 &&arg4, TArg5 &&arg5, TArg6 &&arg6, TArg7 &&arg7, TArg8 &&arg8, TArg9 &&arg9) throw()  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Classe definita dall'utente che eredita da `WRL::RuntimeClass`.  
  
 `TArg1`  
 Tipo di argomento 1 che viene passato alla classe di runtime specificato.  
  
 `TArg2`  
 Tipo di argomento 2 che viene passato alla classe di runtime specificato.  
  
 `TArg3`  
 Tipo di argomento 3 che viene passato alla classe di runtime specificato.  
  
 `TArg4`  
 Tipo di argomento 4 che viene passato alla classe di runtime specificato.  
  
 `TArg5`  
 Tipo di argomento 5 che viene passato alla classe di runtime specificato.  
  
 `TArg6`  
 Tipo di argomento 6 viene passato alla classe di runtime specificato.  
  
 `TArg7`  
 Tipo di argomento 7 che viene passato alla classe di runtime specificato.  
  
 `TArg8`  
 Tipo di argomento 8 che viene passato alla classe di runtime specificato.  
  
 `TArg9`  
 Tipo di argomento 9 che viene passato alla classe di runtime specificato.  
  
 `arg1`  
 Argomento 1 che viene passato alla classe di runtime specificato.  
  
 `arg2`  
 Argomento 2 che viene passato alla classe di runtime specificato.  
  
 `arg3`  
 Argomento 3 che viene passato alla classe di runtime specificato.  
  
 `arg4`  
 Argomento 4 che viene passato alla classe di runtime specificato.  
  
 `arg5`  
 Argomento 5 che viene passato alla classe di runtime specificato.  
  
 `arg6`  
 Argomento 6 passato alla classe di runtime specificato.  
  
 `arg7`  
 Argomento 7 che viene passato alla classe di runtime specificato.  
  
 `arg8`  
 Argomento 8 che viene passato alla classe di runtime specificato.  
  
 `arg9`  
 Argomento 9 che viene passato alla classe di runtime specificato.  
  
## <a name="return-value"></a>Valore restituito  
 Valore `HRESULT`.  
  
## <a name="remarks"></a>Note  
 Vedere [procedura: creare un'istanza direttamente i componenti WRL](../windows/how-to-instantiate-wrl-components-directly.md) per imparare le differenze tra questa funzione e [Microsoft::WRL::Make](../windows/make-function.md)e per un esempio.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM.  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)