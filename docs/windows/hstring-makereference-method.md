---
title: 'Metodo hstring:: Makereference | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HString::MakeReference
dev_langs:
- C++
ms.assetid: 9e1fd2b2-66ad-4a50-b647-a20ab10e522f
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 3e2eba5756f2c18830c4c8fe7e16f2751ea61ac1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="hstringmakereference-method"></a>Metodo HString::MakeReference
Crea un oggetto HStringReference da un parametro di stringa specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<unsigned int sizeDest>  
    static HStringReference MakeReference(  
              wchar_t const (&str)[ sizeDest]);  
  
    template<unsigned int sizeDest>  
    static HStringReference MakeReference(  
              wchar_t const (&str)[sizeDest],   
              unsigned int len);  
```  
  
#### <a name="parameters"></a>Parametri  
 `sizeDest`  
 Un parametro di modello che specifica la dimensione del buffer di HStringReference di destinazione.  
  
 `str`  
 Un riferimento a una stringa di caratteri "wide".  
  
 `len`  
 La lunghezza massima del `str` buffer del parametro da utilizzare in questa operazione. Se il `len` parametro non è specificato, l'intero `str` parametro viene utilizzato.  
  
## <a name="return-value"></a>Valore restituito  
 Un oggetto HStringReference il cui valore è lo stesso specificato `str` parametro.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HString](../windows/hstring-class.md)