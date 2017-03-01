---
title: Enumerazione ATL_URL_SCHEME | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: 'index-page '
dev_langs:
- C++
helpviewer_keywords:
- ATL_URL_SCHEME
ms.assetid: f4131046-8ba0-4ec1-8209-84203f05d20e
caps.latest.revision: 7.2
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 050e7483670bd32f633660ba44491c8bb3fc462d
ms.openlocfilehash: 608508b60192ccfdaf4cb0ea09d5274e07de9f0c
ms.lasthandoff: 02/24/2017

---


# <a name="atlurlscheme"></a>ATL_URL_SCHEME  

I membri di questa enumerazione forniscono costanti per gli schemi comprensibile [CUrl](curl-class.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      enum ATL_URL_SCHEME{  
   ATL_URL_SCHEME_UNKNOWN = -1,  
   ATL_URL_SCHEME_FTP     = 0,  
   ATL_URL_SCHEME_GOPHER  = 1,  
   ATL_URL_SCHEME_HTTP    = 2,  
   ATL_URL_SCHEME_HTTPS   = 3,  
   ATL_URL_SCHEME_FILE    = 4,  
   ATL_URL_SCHEME_NEWS    = 5,  
   ATL_URL_SCHEME_MAILTO  = 6,  
   ATL_URL_SCHEME_SOCKS   = 7  
};  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlutil. h  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../active-template-library-atl-concepts.md)   
 [CUrl::SetScheme](curl-class.md#setscheme)   
 [CUrl::GetScheme](curl-class.md#getscheme)
