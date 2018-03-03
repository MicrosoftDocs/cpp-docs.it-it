---
title: 'Costruttore hstring:: Hstring | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HString::HString
dev_langs:
- C++
ms.assetid: 6da12785-ed01-4720-a004-667db60298f1
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d13f532484cc071744b9b823546052d92c6f6b78
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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