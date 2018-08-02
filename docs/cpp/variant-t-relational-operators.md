---
title: Operatori relazionali variant_t | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _variant_t::operator==
- _variant_t::operator!=
dev_langs:
- C++
helpviewer_keywords:
- '!= operator'
- relational operators [C++], _variant_t class
- operator!= [C++], variant
- operator!= [C++], relational operators
- operator != [C++], variant
- operator == [C++], variant
- operator== [C++], variant
- operator != [C++], relational operators
- == operator [C++], with specific Visual C++ objects
ms.assetid: 141bacb8-41a2-44dd-b3c0-4ad1f884f4ea
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 32f9a45fcfaaff02cfb7cf765857957f20c41ba1
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39463041"
---
# <a name="variantt-relational-operators"></a>Operatori relazionali _variant_t
**Sezione specifica Microsoft**  
  
 Confronta due oggetti `_variant_t` per verificarne l'uguaglianza o la disuguaglianza.  
  
## <a name="syntax"></a>Sintassi  
  
```  
bool operator==(  
   const VARIANT& varSrc) const;  
bool operator==(  
   const VARIANT* pSrc) const;  
bool operator!=(  
   const VARIANT& varSrc) const;  
bool operator!=(  
   const VARIANT* pSrc) const;  
```  
  
#### <a name="parameters"></a>Parametri  
 *varSrc*  
 Oggetto `VARIANT` da confrontare con il `_variant_t` oggetto.  
  
 *pSrc*  
 Puntatore per il `VARIANT` da confrontare con il `_variant_t` oggetto.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce **true** qualora sia presente, il confronto **false** in caso contrario.  
  
## <a name="remarks"></a>Note  
 Confronta un `_variant_t` dell'oggetto con un `VARIANT`, il test di uguaglianza o disuguaglianza.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _variant_t](../cpp/variant-t-class.md)