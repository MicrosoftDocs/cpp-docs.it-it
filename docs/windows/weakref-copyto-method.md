---
title: 'Metodo weakref:: CopyTo | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: client/Microsoft::WRL::WeakRef::CopyTo
dev_langs: C++
helpviewer_keywords: CopyTo method
ms.assetid: f83de6da-b3d4-41a6-9845-cd725ecf3b75
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5b0114a9768fbea12a5b98f51911267cb24b0b43
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="weakrefcopyto-method"></a>Metodo WeakRef::CopyTo
Assegna un puntatore a un'interfaccia, se disponibile, per la variabile del puntatore specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
HRESULT CopyTo(  
   REFIID riid,  
   _Deref_out_ IInspectable** ptr  
);  
  
template<  
   typename U  
>  
HRESULT CopyTo(  
   _Deref_out_ U** ptr  
);  
  
HRESULT CopyTo(  
   _Deref_out_ IWeakReference** ptr  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `U`  
 Puntatore a un'interfaccia IInspectable. Se `U` non è derivato da IInspectable, viene generato un errore.  
  
 `riid`  
 ID di interfaccia. Se `riid` non è derivato da **IWeakReference**, viene generato un errore.  
  
 `ptr`  
 Puntatore indiretto doppio IInspectable o IWeakReference.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT che descrive l'errore. Per altre informazioni, vedere la sezione Note.  
  
## <a name="remarks"></a>Note  
 Il valore restituito S_OK indica che l'operazione è riuscita, ma non se il riferimento debole è stato risolto in un riferimento forte. Se viene restituito S_OK, verificare che il parametro `p` sia un riferimento forte, ossia che il parametro `p` non sia uguale a `nullptr`.  
  
 A partire da Windows 10 SDK, questo metodo non imposta l'istanza di WeakRef su `nullptr` se non è stato ottenuto il riferimento debole. Si consiglia, quindi, di non usare un codice per il controllo degli errori che verifica WeakRef per `nullptr`. Controllare invece `ptr` per `nullptr`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe WeakRef](../windows/weakref-class.md)