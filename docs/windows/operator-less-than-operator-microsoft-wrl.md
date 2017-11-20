---
title: 'operatore&lt; (Microsoft:: wrl) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: client/Microsoft::WRL::operator<
dev_langs: C++
ms.assetid: bfae0e1c-1648-482b-99c2-3217d62aba46
caps.latest.revision: "3"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: d82291702791b138e0aaebefb5650e19d9e515f8
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="operatorlt-operator-microsoftwrl"></a>operatore&lt; (Microsoft:: wrl)
Determina se l'indirizzo di un oggetto è minore di un altro.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template<class T, class U>  
bool operator<(const ComPtr<T>& a, const ComPtr<U>& b) throw();  
template<class T, class U>  
bool operator<(const Details::ComPtrRef<ComPtr<T>>& a, const Details::ComPtrRef<ComPtr<U>>& b) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `a`  
 Oggetto a sinistra.  
  
 `b`  
 Oggetto a destra.  
  
## <a name="return-value"></a>Valore restituito  
 `true`Se l'indirizzo di `a` è minore dell'indirizzo di `b`; in caso contrario, `false`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)