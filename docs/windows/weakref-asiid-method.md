---
title: 'Metodo weakref:: Asiid | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::WeakRef::AsIID
dev_langs:
- C++
helpviewer_keywords:
- AsIID method
ms.assetid: 94e87309-32da-4dbb-8233-e77313a1f448
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 69108681b181d0b2fce20f9e30a009b6b93c2180
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33891298"
---
# <a name="weakrefasiid-method"></a>Metodo WeakRef::AsIID
Imposta il parametro del puntatore ComPtr specificato per rappresentare l'ID di interfaccia specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
HRESULT AsIID(  
   REFIID riid,  
   _Out_ ComPtr<IInspectable>* ptr  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `riid`  
 ID di interfaccia.  
  
 `ptr`  
 Al termine dell'operazione, un oggetto che rappresenta il parametro `riid`.  
  
## <a name="return-value"></a>Valore restituito  
  
-   S_OK se l'operazione riesce; in caso contrario, HRESULT che indica il motivo dell'errore dell'operazione. `ptr` è impostato su `nullptr`.  
  
-   S_OK se l'operazione riesce, ma l'oggetto WeakRef corrente è già stato rilasciato. Il parametro `ptr` viene impostato su `nullptr`.  
  
-   S_OK se l'operazione riesce, ma l'oggetto WeakRef corrente non è derivato dal parametro `riid`. Il parametro `ptr` viene impostato su `nullptr`. Per altre informazioni, vedere Note.  
  
## <a name="remarks"></a>Note  
 Se il parametro `riid` non è derivato da IInspectable, viene generato un errore. Questo errore sostituisce il valore restituito.  
  
 Il primo modello è il form da usare nel codice. Il secondo modello (non illustrato di seguito, ma dichiarato nel file di intestazione) è una specializzazione helper interna che supporta le funzionalità del linguaggio C++, ad esempio la parola chiave di deduzione del tipo [auto](../cpp/auto-cpp.md) .  
  
 A partire da Windows 10 SDK, questo metodo non imposta l'istanza di WeakRef su `nullptr` se non è stato ottenuto il riferimento debole. Si consiglia, quindi, di non usare un codice per il controllo degli errori che verifica WeakRef per `nullptr`. Controllare invece `ptr` per `nullptr`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe WeakRef](../windows/weakref-class.md)