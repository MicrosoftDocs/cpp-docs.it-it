---
title: 'Costruttore weakref:: Weakref | Documenti Microsoft'
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
ms.openlocfilehash: ae70dabdd86fedf82c26c0c7d9a09d842e2310e7
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33891048"
---
# <a name="weakrefweakref-constructor"></a>Costruttore WeakRef::WeakRef
Inizializza una nuova istanza della classe WeakRef.  
  
## <a name="syntax"></a>Sintassi  
  
```  
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
  
#### <a name="parameters"></a>Parametri  
 `ptr`  
 Un puntatore, un riferimento o un riferimento rvalue a un oggetto esistente che inizializza l'oggetto WeakRef corrente.  
  
## <a name="remarks"></a>Note  
 Il primo costruttore inizializza un oggetto WeakRef vuoto. Il secondo costruttore inizializza un oggetto WeakRef da un puntatore all'interfaccia IWeakReference. Il terzo costruttore inizializza un oggetto WeakRef da un riferimento a un ComPtr\<IWeakReference > oggetto. Il quarto e quinto costruttore inizializza un oggetto WeakRef da un altro oggetto WeakRef.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe WeakRef](../windows/weakref-class.md)