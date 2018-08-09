---
title: 'Metodo hstring:: set | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HString::Set
dev_langs:
- C++
ms.assetid: c9b3d613-95c4-48b0-999d-f5baf0804faf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 18ea9eafe3786d0a0df543cde654e1f0270dc8c7
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40011767"
---
# <a name="hstringset-method"></a>Metodo HString::Set
Imposta il valore dell'oggetto corrente **HString** oggetto per la stringa di caratteri wide specificata oppure **HString** parametro.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
HRESULT Set(  
          const wchar_t* str) throw();  
HRESULT Set(   
          const wchar_t* str,   
          unsigned int len  
           ) throw();  
HRESULT Set(  
          const HSTRING& hstr  
           ) throw();  
```  
  
### <a name="parameters"></a>Parametri  
 *str*  
 Una stringa di caratteri "wide".  
  
 *Len*  
 La lunghezza massima del *str* parametro assegnato all'oggetto corrente **HString** oggetto.  
  
 *HSTR*  
 Un oggetto esistente **HString** oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HString](../windows/hstring-class.md)