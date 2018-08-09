---
title: Funzione Make | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Make
dev_langs:
- C++
helpviewer_keywords:
- Make function
ms.assetid: 66704143-df99-4a95-904d-ed99607e1034
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0076445f21bcbad5ca7028c088cddfdbdcacf8cd
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40013701"
---
# <a name="make-function"></a>Funzione Make
Inizializza la classe di Runtime di Windows specificata. Utilizzare questa funzione per creare un'istanza di un componente definito nello stesso modulo.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template <  
   typename T,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4,  
   typename TArg5,  
   typename TArg6,  
   typename TArg7,  
   typename TArg8,  
   typename TArg9  
>  
ComPtr<T> Make(  
   TArg1 &&arg1,  
   TArg2 &&arg2,  
   TArg3 &&arg3,  
   TArg4 &&arg4,  
   TArg5 &&arg5,  
   TArg6 &&arg6,  
   TArg7 &&arg7,  
   TArg8 &&arg8,  
   TArg9 &&arg9  
);  
template <  
   typename T,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4,  
   typename TArg5,  
   typename TArg6,  
   typename TArg7,  
   typename TArg8  
>  
ComPtr<T> Make(  
   TArg1 &&arg1,  
   TArg2 &&arg2,  
   TArg3 &&arg3,  
   TArg4 &&arg4,  
   TArg5 &&arg5,  
   TArg6 &&arg6,  
   TArg7 &&arg7,  
   TArg8 &&arg8  
);  
template <  
   typename T,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4,  
   typename TArg5,  
   typename TArg6,  
   typename TArg7  
>  
ComPtr<T> Make(  
   TArg1 &&arg1,  
   TArg2 &&arg2,  
   TArg3 &&arg3,  
   TArg4 &&arg4,  
   TArg5 &&arg5,  
   TArg6 &&arg6,  
   TArg7 &&arg7  
);  
template <  
   typename T,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4,  
   typename TArg5,  
   typename TArg6  
>  
ComPtr<T> Make(  
   TArg1 &&arg1,  
   TArg2 &&arg2,  
   TArg3 &&arg3,  
   TArg4 &&arg4,  
   TArg5 &&arg5,  
   TArg6 &&arg6  
);  
template <  
   typename T,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4,  
   typename TArg5  
>  
ComPtr<T> Make(  
   TArg1 &&arg1,  
   TArg2 &&arg2,  
   TArg3 &&arg3,  
   TArg4 &&arg4,  
   TArg5 &&arg5  
);  
template <  
   typename T,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4  
>  
ComPtr<T> Make(  
   TArg1 &&arg1,  
   TArg2 &&arg2,  
   TArg3 &&arg3,  
   TArg4 &&arg4  
);  
template <  
   typename T,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3  
>  
ComPtr<T> Make(  
   TArg1 &&arg1,  
   TArg2 &&arg2,  
   TArg3 &&arg3  
);  
template <  
   typename T,  
   typename TArg1,  
   typename TArg2  
>  
ComPtr<T> Make(  
   TArg1 &&arg1,  
   TArg2 &&arg2  
);  
template <  
   typename T,  
   typename TArg1  
>  
ComPtr<T> Make(  
   TArg1 &&arg1  
);  
template <  
   typename T  
>  
ComPtr<T> Make();  
```  
  
### <a name="parameters"></a>Parametri  
 *T*  
 Classe definita dall'utente che eredita da `WRL::RuntimeClass`.  
  
 *TArg1*  
 Tipo di argomento 1 che viene passato alla classe di runtime specificato.  
  
 *TArg2*  
 Tipo di argomento 2 che viene passato alla classe di runtime specificato.  
  
 *TArg3*  
 Tipo di argomento 3 che viene passato alla classe di runtime specificato.  
  
 *TArg4*  
 Tipo di argomento 4 che viene passato alla classe di runtime specificato.  
  
 *TArg5*  
 Tipo di argomento 5 che viene passato alla classe di runtime specificato.  
  
 *TArg6*  
 Tipo di argomento 6 che viene passato alla classe di runtime specificato.  
  
 *TArg7*  
 Tipo di argomento 7 che viene passato alla classe di runtime specificato.  
  
 *TArg8*  
 Tipo di argomento 8 che viene passato alla classe di runtime specificato.  
  
 *TArg9*  
 Tipo di argomento 9 che viene passato alla classe di runtime specificato.  
  
 *arg1*  
 Argomento 1 che viene passato alla classe di runtime specificato.  
  
 *Arg2*  
 Argomento 2 che viene passato alla classe di runtime specificato.  
  
 *arg3*  
 Argomento 3 che viene passato alla classe di runtime specificato.  
  
 *Arg4*  
 Argomento 4 che viene passato alla classe di runtime specificato.  
  
 *Arg5*  
 Argomento 5 che viene passato alla classe di runtime specificato.  
  
 *Arg6*  
 Argomento 6 che viene passato alla classe di runtime specificato.  
  
 *Arg7*  
 Argomento 7 che viene passato alla classe di runtime specificato.  
  
 *arg8*  
 Argomento 8 che viene passato alla classe di runtime specificato.  
  
 *arg9*  
 Argomento 9 che viene passato alla classe di runtime specificato.  
  
## <a name="return-value"></a>Valore restituito  
 Oggetto `ComPtr<T>` oggetto se ha esito positivo; in caso contrario, **nullptr**.  
  
## <a name="remarks"></a>Note  
 Visualizzare [procedura: creare un'istanza direttamente i componenti WRL](../windows/how-to-instantiate-wrl-components-directly.md) per informazioni sulle differenze tra questa funzione e [Microsoft::WRL::Details::MakeAndInitialize](../windows/makeandinitialize-function.md)e per un esempio.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)