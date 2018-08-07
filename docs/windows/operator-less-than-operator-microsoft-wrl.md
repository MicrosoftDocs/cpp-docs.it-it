---
title: 'operatore&lt; (Microsoft:: wrl) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::operator<
dev_langs:
- C++
ms.assetid: bfae0e1c-1648-482b-99c2-3217d62aba46
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 2de0d40a4b506da2cec36719b8fa2fe9c22108d8
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39604213"
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
  
### <a name="parameters"></a>Parametri  
 *a*  
 Oggetto a sinistra.  
  
 *b*  
 Oggetto a destra.  
  
## <a name="return-value"></a>Valore restituito  
 **true** se l'indirizzo del *una* è minore rispetto all'indirizzo del *b*; in caso contrario, **false**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)