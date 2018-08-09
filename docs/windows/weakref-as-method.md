---
title: 'Metodo weakref:: As | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::WeakRef::As
dev_langs:
- C++
helpviewer_keywords:
- As method
ms.assetid: 7173da62-b3fe-44d6-aea4-1aa97e69b221
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 7dd0dca806c1568d88c20eec6a7ac63e5fb242fb
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40020356"
---
# <a name="weakrefas-method"></a>Metodo WeakRef::As
Imposta l'oggetto specificato `ComPtr` parametro del puntatore per rappresentare l'interfaccia specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template<typename U>  
HRESULT As(  
   _Out_ ComPtr<U>* ptr  
);  
  
template<typename U>  
HRESULT As(  
   _Out_ Details::ComPtrRef<ComPtr<U>> ptr  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *U*  
 ID di interfaccia.  
  
 *ptr*  
 Al termine di questa operazione, un oggetto che rappresenta i parametri *U*.  
  
## <a name="return-value"></a>Valore restituito  
  
-   S_OK se l'operazione riesce; in caso contrario, HRESULT che indica il motivo dell'errore dell'operazione e *ptr* è impostata su **nullptr**.  
  
-   S_OK se l'operazione riesce, ma l'oggetto corrente **WeakRef** oggetto è già stato rilasciato. Parametro *ptr* è impostata su **nullptr**.  
  
-   S_OK se l'operazione riesce, ma l'oggetto corrente **WeakRef** oggetto non è derivato dal parametro *U*. Parametro *ptr* è impostata su **nullptr**.  
  
## <a name="remarks"></a>Note  
 Viene generato un errore se parametro *U* viene `IWeakReference`, o non è derivato da `IInspectable`.  
  
 Il primo modello è il form da usare nel codice. Il secondo modello è una specializzazione helper interna che supporta le funzionalità del linguaggio C++, ad esempio la parola chiave di deduzione del tipo [auto](../cpp/auto-cpp.md) .  
  
 A partire da Windows 10 SDK, questo metodo non imposta il **WeakRef** istanza **nullptr** se non è stato possibile ottenere il riferimento debole, pertanto, evitare codice controllo degli errori che verifica WeakRef per **nullptr**. Controllare invece *ptr* per **nullptr**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe WeakRef](../windows/weakref-class.md)