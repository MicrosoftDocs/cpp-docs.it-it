---
title: Classe HString | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HString
dev_langs:
- C++
ms.assetid: 6709dd2e-8d72-4675-8ec7-1baa7d71854d
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 3e8d66f134eef5f2ecb75b30fd68874418dbc49d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="hstring-class"></a>Classe HString
Classe helper per la gestione della durata di HSTRING utilizzando il modello RAII.
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
class HString;  
```  
  
## <a name="remarks"></a>Note  
 Windows Runtime fornisce l'accesso alle stringhe tramite handle HSTRING. La classe HString fornisce funzioni di praticità e operatori per semplificare l'utilizzo di handle HSTRING. Questa classe consente di gestire la durata del HSTRING possiede tramite un modello RAII. 
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore HString::HString](../windows/hstring-hstring-constructor.md)|Inizializza una nuova istanza della classe HString.|  
|[Distruttore HString::~HString](../windows/hstring-tilde-hstring-destructor.md)|Elimina l'istanza corrente della classe HString.|  
  
### <a name="members"></a>Membri  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo HString::Set](../windows/hstring-set-method.md)|Imposta il valore dell'oggetto HString corrente per la stringa specificata di caratteri "wide" o il parametro HString.|  
|[Metodo HString::Attach](../windows/hstring-attach-method.md)|Associa l'oggetto HString specificato con l'oggetto HString corrente.|  
|[Metodo HString::CopyTo](../windows/hstring-copyto-method.md)|Copie di HString corrente dell'oggetto a un oggetto HSTRING.|  
|[Metodo HString::Detach](../windows/hstring-detach-method.md)|Rimuove l'associazione oggetto HString specificato dal relativo valore sottostante.|  
|[Metodo HString::GetAddressOf](../windows/hstring-getaddressof-method.md)|Recupera un puntatore all'handle HSTRING sottostante.|  
|[Metodo HString::Get](../windows/hstring-get-method.md)|Recupera il valore dell'handle HSTRING sottostante.|  
|[Metodo HString::Release](../windows/hstring-release-method.md)|Elimina il valore string sottostante e inizializza l'oggetto HString corrente su un valore vuoto.|  
|[Metodo HString::MakeReference](../windows/hstring-makereference-method.md)|Crea un oggetto HStringReference da un parametro di stringa specificata.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore HString::Operator=](../windows/hstring-operator-assign-operator.md)|Sposta il valore di un altro oggetto HString all'oggetto HString corrente.|  
|[Operatore HString::Operator==](../windows/hstring-operator-equality-operator.md)|Indica se i due parametri sono uguali.|  
|[Operatore HString::Operator!=](../windows/hstring-operator-inequality-operator.md)|Indica se i due parametri non sono uguali.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `HString`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)