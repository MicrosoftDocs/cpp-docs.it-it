---
title: 'Metodo hstring:: Makereference | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HString::MakeReference
dev_langs:
- C++
ms.assetid: 9e1fd2b2-66ad-4a50-b647-a20ab10e522f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e30b3ea3c6b791eb654a6fbbe91b3c87353f31c1
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33882641"
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