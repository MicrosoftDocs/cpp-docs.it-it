---
title: 'Metodo weakref:: As | Documenti Microsoft'
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
ms.openlocfilehash: 70e694b4c86194402f48d335aac353e48c3de79a
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33890700"
---
# <a name="weakrefas-method"></a>Metodo WeakRef::As
Imposta il parametro del puntatore ComPtr specificato per rappresentare l'interfaccia specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
template<typename U>  
HRESULT As(  
   _Out_ ComPtr<U>* ptr  
);  
  
template<typename U>  
HRESULT As(  
   _Out_ Details::ComPtrRef<ComPtr<U>> ptr  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `U`  
 ID di interfaccia.  
  
 `ptr`  
 Al termine dell'operazione, un oggetto che rappresenta il parametro `U`.  
  
## <a name="return-value"></a>Valore restituito  
  
-   S_OK se l'operazione riesce; in caso contrario, HRESULT che indica il motivo dell'errore dell'operazione. `ptr` è impostato su `nullptr`.  
  
-   S_OK se l'operazione riesce, ma l'oggetto WeakRef corrente è già stato rilasciato. Il parametro `ptr` viene impostato su `nullptr`.  
  
-   S_OK se l'operazione riesce, ma l'oggetto WeakRef corrente non è derivato dal parametro `U`. Il parametro `ptr` viene impostato su `nullptr`.  
  
## <a name="remarks"></a>Note  
 Se il parametro `U` è IWeakReference o non è derivato da IInspectable, viene generato un errore.  
  
 Il primo modello è il form da usare nel codice. Il secondo modello è una specializzazione helper interna che supporta le funzionalità del linguaggio C++, ad esempio la parola chiave di deduzione del tipo [auto](../cpp/auto-cpp.md) .  
  
 A partire da Windows 10 SDK, questo metodo non imposta l'istanza di WeakRef su `nullptr` se non è stato ottenuto il riferimento debole. Si consiglia, quindi, di non usare un codice per il controllo degli errori che verifica WeakRef per `nullptr`. Controllare invece `ptr` per `nullptr`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe WeakRef](../windows/weakref-class.md)