---
title: 'Costruttore comptr:: Comptr | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::ComPtr::ComPtr
dev_langs:
- C++
helpviewer_keywords:
- ComPtr, constructor
ms.assetid: eaf70907-beac-458f-a503-2e5e27b0c196
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e3a632c96c39ccd40f008556287af95944530cdc
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33871175"
---
# <a name="comptrcomptr-constructor"></a>Costruttore ComPtr::ComPtr
Inizializza una nuova istanza della classe ComPtr. Gli overload forniscono costruttori predefiniti, di copia, di spostamento e di conversione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
WRL_NOTHROW ComPtr();  
WRL_NOTHROW ComPtr(  
   decltype(__nullptr)  
);  
template<class U>  
WRL_NOTHROW ComPtr(  
   _In_opt_ U *other  
);  
WRL_NOTHROW ComPtr(  
   const ComPtr& other  
);  
template<class U>  
WRL_NOTHROW ComPtr(  
   const ComPtr<U> &other,  
   typename ENABLE_IF<__is_convertible_to(U*,  
   T*),  
   void *>;  
WRL_NOTHROW ComPtr(  
   _Inout_ ComPtr &&other  
);  
template<class U>  
WRL_NOTHROW ComPtr(  
   _Inout_ ComPtr<U>&& other,  
   typename ENABLE_IF<__is_convertible_to(U*,  
   T*),  
   void *>;  
```  
  
#### <a name="parameters"></a>Parametri  
 `U`  
 Tipo del parametro `other`.  
  
 `other`  
 Oggetto di tipo `U`.  
  
## <a name="return-value"></a>Valore restituito  
  
## <a name="remarks"></a>Note  
 Il primo costruttore è il costruttore predefinito, quale modo implicito crea un oggetto vuoto. Il secondo costruttore specifica [nullptr](../windows/nullptr-cpp-component-extensions.md), che crea in modo esplicito un oggetto vuoto.  
  
 Il terzo costruttore crea un oggetto dall'oggetto specificato da un puntatore.  
  
 Il quarto e quinto costruttore sono costruttori di copia. Il quinto costruttore copia un oggetto se è convertibile al tipo corrente.  
  
 Il sesto e il settimo costruttore sono costruttori di spostamento. Il settimo costruttore sposta un oggetto se è convertibile al tipo corrente.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)