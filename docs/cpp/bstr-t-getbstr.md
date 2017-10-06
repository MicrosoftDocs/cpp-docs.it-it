---
title: _bstr_t::GetBSTR | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- _bstr_t::GetBSTR
dev_langs:
- C++
helpviewer_keywords:
- GetBSTR method
ms.assetid: 0c62ff16-4433-4183-a03c-d5a0a9b731ef
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
ms.openlocfilehash: 376951862a82d6588221b592238c9346d31bad4d
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

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
 `GetBSTR` ha effetto su tutti gli oggetti `_bstr_t` che condividono un oggetto `BSTR`. Più di un oggetto `_bstr_t` può condividere un oggetto `BSTR` tramite l'utilizzo del costruttore copia e di `operator=`.  
  
## <a name="example"></a>Esempio  
 Vedere [Connetti](../cpp/bstr-t-assign.md) per un esempio di utilizzo `GetBSTR`.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _bstr_t](../cpp/bstr-t-class.md)
