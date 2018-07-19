---
title: _variant_t::ChangeType | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _variant_t::ChangeType
- _variant_t.ChangeType
dev_langs:
- C++
helpviewer_keywords:
- ChangeType method [C++]
- VARIANT object [C++], ChangeType
- VARIANT object
ms.assetid: 829d2eeb-3338-4a88-9dce-0ca145f47aac
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f87d9e4d7193755f70e3463f4da60d88a7bd832c
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943482"
---
# <a name="varianttchangetype"></a>_variant_t::ChangeType
**Sezione specifica Microsoft**  
  
 Modifica il tipo dei `_variant_t` oggetto indicato `VARTYPE`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
void ChangeType(  
   VARTYPE vartype,  
   const _variant_t* pSrc = NULL   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *VarType*  
 Il `VARTYPE` per questo `_variant_t` oggetto.  
  
 *pSrc*  
 Puntatore all'oggetto `_variant_t` da convertire. Se questo valore è NULL, la conversione viene eseguita sul posto.  
  
## <a name="remarks"></a>Note  
 Questa funzione membro converte un `_variant_t` oggetto indicato `VARTYPE`. Se *pSrc* è NULL, la conversione viene eseguita sul posto, in caso contrario ciò `_variant_t` oggetto viene copiato dalla *pSrc* e quindi convertito.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _variant_t](../cpp/variant-t-class.md)