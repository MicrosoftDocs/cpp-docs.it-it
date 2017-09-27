---
title: _variant_t::ChangeType | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- _variant_t::ChangeType
- _variant_t.ChangeType
dev_langs:
- C++
helpviewer_keywords:
- ChangeType method
- VARIANT object, ChangeType
- VARIANT object
ms.assetid: 829d2eeb-3338-4a88-9dce-0ca145f47aac
caps.latest.revision: 6
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
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 535bc332a108cf50badca116c496661b7c257bf7
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="varianttchangetype"></a>_variant_t::ChangeType
**Sezione specifica Microsoft**  
  
 Il tipo di modifica di `_variant_t` oggetto per il functoid **VARTYPE**.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      void ChangeType(  
   VARTYPE vartype,  
   const _variant_t* pSrc = NULL   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `vartype`  
 Il **VARTYPE** per questo `_variant_t` oggetto.  
  
 `pSrc`  
 Puntatore all'oggetto `_variant_t` da convertire. Se questo valore è **NULL**, la conversione viene eseguita sul posto.  
  
## <a name="remarks"></a>Note  
 Questa funzione membro converte un `_variant_t` oggetto indicato **VARTYPE**. Se `pSrc` è **NULL**, la conversione viene eseguita sul posto, in caso contrario questo `_variant_t` oggetto viene copiato da `pSrc` e quindi convertito.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _variant_t](../cpp/variant-t-class.md)
