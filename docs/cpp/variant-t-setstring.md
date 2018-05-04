---
title: _variant_t::SetString | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _variant_t::SetString
dev_langs:
- C++
helpviewer_keywords:
- SetString method [C++]
ms.assetid: 816b08e5-6830-46ca-b3d7-7689308b3be3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 76aaf29febd04f95efc0922e0d2680976e1e97da
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="varianttsetstring"></a>_variant_t::SetString
**Sezione specifica Microsoft**  
  
 Assegna una stringa a questo oggetto `_variant_t`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      void SetString(  
   const char* pSrc   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `pSrc`  
 Puntatore alla stringa di caratteri.  
  
## <a name="remarks"></a>Note  
 Converte una stringa di caratteri ANSI in una stringa `BSTR` Unicode e la assegna a questo oggetto `_variant_t`.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _variant_t](../cpp/variant-t-class.md)