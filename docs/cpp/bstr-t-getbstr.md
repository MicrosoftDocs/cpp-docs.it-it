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
ms.openlocfilehash: 3041e8a4ece0ddff813b7ef9cd2ccb258e520a82
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37940482"
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
 `GetBSTR` ha effetto su tutti gli oggetti `_bstr_t` che condividono un oggetto `BSTR`. Più di un `_bstr_t` possono condividere una `BSTR` tramite il costruttore di copia ed e **operatore =**.  
  
## <a name="example"></a>Esempio  
 Visualizzare [_bstr_t::Assign](../cpp/bstr-t-assign.md) per un esempio di utilizzo `GetBSTR`.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _bstr_t](../cpp/bstr-t-class.md)