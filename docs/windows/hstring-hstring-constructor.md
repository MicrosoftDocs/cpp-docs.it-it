---
title: 'Costruttore hstring:: Hstring | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HString::HString
dev_langs:
- C++
ms.assetid: 6da12785-ed01-4720-a004-667db60298f1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a3188e137d3a39fb26ca4151f72073306038e46f
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="hstringhstring-constructor"></a>Costruttore HString::HString
Inizializza una nuova istanza della classe HString.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
HString(HSTRING hstr = nullptr) throw();  
HString(HString&& other) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `hstr`  
 Un handle HSTRING.  
  
 `other`  
 Oggetto HString esistente.  
  
## <a name="remarks"></a>Note  
 Il primo costruttore inizializza un nuovo oggetto HString che è vuoto.  
  
 Il secondo costruttore inizializza un nuovo oggetto HString al valore dell'oggetto esistente `other` parametro, quindi Elimina il `other` parametro.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HString](../windows/hstring-class.md)