---
title: _bstr_t::GetBSTR | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _bstr_t::GetBSTR
dev_langs:
- C++
helpviewer_keywords:
- GetBSTR method [C++]
ms.assetid: 0c62ff16-4433-4183-a03c-d5a0a9b731ef
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 56297f53aa40741a506ea65761d151dcab98c421
ms.sourcegitcommit: e9ce38decc9f986edab5543de3464b11ebccb123
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/13/2018
ms.locfileid: "42572158"
---
# <a name="bstrtgetbstr"></a>_bstr_t::GetBSTR
**Sezione specifica Microsoft**  
  
 Punta all'inizio dell'oggetto `BSTR` sottoposto a wrapping da `_bstr_t`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
BSTR& GetBSTR( );  
```  
  
## <a name="return-value"></a>Valore restituito  
 Inizio dell'oggetto `BSTR` sottoposto a wrapping da `_bstr_t`.  
  
## <a name="remarks"></a>Note  
 **GetBSTR** influisce su tutte `_bstr_t` gli oggetti che condividono un `BSTR`. Più di un `_bstr_t` possono condividere una `BSTR` tramite il costruttore di copia e **operatore =**.  
  
## <a name="example"></a>Esempio  
 Visualizzare [_bstr_t::Assign](../cpp/bstr-t-assign.md) per un esempio di utilizzo **GetBSTR**.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _bstr_t](../cpp/bstr-t-class.md)