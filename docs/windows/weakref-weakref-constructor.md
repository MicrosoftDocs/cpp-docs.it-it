---
title: 'Costruttore weakref:: Weakref | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::WeakRef::WeakRef
dev_langs:
- C++
helpviewer_keywords:
- WeakRef, constructor
ms.assetid: 589f87e0-8dcc-4e82-aab2-f2f66f1ec47c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 6e7b7d35fd8cae44c3f374a81cae572e4c9ee4f8
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40011159"
---
# <a name="weakrefweakref-constructor"></a>Costruttore WeakRef::WeakRef
Inizializza una nuova istanza di **WeakRef** classe.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
WeakRef();  
WeakRef(  
   decltype(__nullptr)  
);  
  
WeakRef(  
   _In_opt_ IWeakReference* ptr  
);  
  
WeakRef(  
   const ComPtr<IWeakReference>& ptr  
);  
  
WeakRef(  
   const WeakRef& ptr  
);  
  
WeakRef(  
   _Inout_ WeakRef&& ptr  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *ptr*  
 Un puntatore, riferimento o riferimento rvalue a un oggetto esistente che inizializza l'oggetto corrente **WeakRef** oggetto.  
  
## <a name="remarks"></a>Note  
 Il primo costruttore inizializza un oggetto vuoto **WeakRef** oggetto. Il secondo costruttore inizializza un **WeakRef** da un puntatore a oggetto di `IWeakReference` interfaccia. Il terzo costruttore inizializza un **WeakRef** oggetto da un riferimento a un `ComPtr<IWeakReference>` oggetto. Il quarto e quinto costruttore inizializza un **WeakRef** da un altro oggetto **WeakRef** oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe WeakRef](../windows/weakref-class.md)