---
title: Classe HString | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HString
dev_langs:
- C++
ms.assetid: 6709dd2e-8d72-4675-8ec7-1baa7d71854d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 868d0a4e2d84add447c95bfcd9690c8a17850718
ms.sourcegitcommit: d5d6bb9945c3550b8e8864b22b3a565de3691fde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/06/2018
ms.locfileid: "39571451"
---
# <a name="hstring-class"></a>Classe HString
Classe helper per la gestione della durata di HSTRING adottando il modello RAII.
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
class HString;  
```  
  
## <a name="remarks"></a>Note  
 Il Runtime di Windows fornisce accesso alle stringhe attraverso handle di HSTRING. Il **HString** classe fornisce funzioni comode e operatori per semplificare l'uso di handle di HSTRING. Questa classe può gestire la durata della sua proprietà tramite un modello RAII HSTRING. 
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore HString::HString](../windows/hstring-hstring-constructor.md)|Inizializza una nuova istanza di **HString** classe.|  
|[Distruttore HString::~HString](../windows/hstring-tilde-hstring-destructor.md)|Elimina l'istanza corrente del **HString** classe.|  
  
### <a name="members"></a>Membri  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo HString::Set](../windows/hstring-set-method.md)|Imposta il valore dell'oggetto corrente **HString** oggetto per la stringa di caratteri wide specificata oppure **HString** parametro.|  
|[Metodo HString::Attach](../windows/hstring-attach-method.md)|Associa l'oggetto specificato **HString** oggetto con l'attuale **HString** oggetto.|  
|[Metodo HString::CopyTo](../windows/hstring-copyto-method.md)|Copia l'oggetto corrente **HString** oggetto in un oggetto HSTRING.|  
|[Metodo HString::Detach](../windows/hstring-detach-method.md)|Rimuove l'associazione specificata **HString** oggetto dal relativo valore sottostante.|  
|[Metodo HString::GetAddressOf](../windows/hstring-getaddressof-method.md)|Recupera un puntatore all'handle sottostante di HSTRING.|  
|[Metodo HString::Get](../windows/hstring-get-method.md)|Recupera il valore di handle sottostante di HSTRING.|  
|[Metodo HString::Release](../windows/hstring-release-method.md)|Elimina il valore string sottostante e inizializza l'oggetto corrente **HString** oggetto su un valore vuoto.|  
|[Metodo HString::MakeReference](../windows/hstring-makereference-method.md)|Crea un `HStringReference` oggetto da un parametro di stringa specificata.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore HString::Operator=](../windows/hstring-operator-assign-operator.md)|Sposta il valore di un'altra **HString** oggetto all'oggetto corrente **HString** oggetto.|  
|[Operatore HString::Operator==](../windows/hstring-operator-equality-operator.md)|Indica se i due parametri sono uguali.|  
|[Operatore HString::Operator!=](../windows/hstring-operator-inequality-operator.md)|Indica se i due parametri non sono uguali.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `HString`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)