---
title: 'Metodo weakref:: CopyTo | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::WeakRef::CopyTo
dev_langs:
- C++
helpviewer_keywords:
- CopyTo method
ms.assetid: f83de6da-b3d4-41a6-9845-cd725ecf3b75
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 817d984e995e7ac33ba80f978a282a8c0bac3e4f
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33890635"
---
# <a name="weakrefcopyto-method"></a>Metodo WeakRef::CopyTo
Assegna un puntatore a un'interfaccia, se disponibile, per la variabile del puntatore specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
HRESULT CopyTo(  
   REFIID riid,  
   _Deref_out_ IInspectable** ptr  
);  
  
template<typename U>  
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