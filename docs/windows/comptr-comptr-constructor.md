---
title: 'Costruttore comptr:: Comptr | Microsoft Docs'
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
ms.openlocfilehash: 86b55d8288f44b04ac1afc30a0afd67fce4edf81
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39646773"
---
# <a name="comptrcomptr-constructor"></a>Costruttore ComPtr::ComPtr
Inizializza una nuova istanza di **ComPtr** classe. Gli overload forniscono costruttori predefiniti, di copia, di spostamento e di conversione.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
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
  
### <a name="parameters"></a>Parametri  
 *U*  
 Il tipo dei *altri* parametro.  
  
 *other*  
 Un oggetto di tipo *U*.  
  
## <a name="return-value"></a>Valore restituito  
  
## <a name="remarks"></a>Note  
 Il primo costruttore è il costruttore predefinito, quale modo implicito crea un oggetto vuoto. Il secondo costruttore viene specificato [nullptr](../windows/nullptr-cpp-component-extensions.md), che crea in modo esplicito un oggetto vuoto.  
  
 Il terzo costruttore crea un oggetto dall'oggetto specificato da un puntatore.  
  
 Il quarto e quinto costruttore sono costruttori di copia. Il quinto costruttore copia un oggetto se è convertibile nel tipo corrente.  
  
 Il sesto e il settimo costruttore sono costruttori di spostamento. Il settimo costruttore sposta un oggetto se è convertibile nel tipo corrente.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)