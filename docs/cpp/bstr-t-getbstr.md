---
title: _bstr_t::GetBSTR | Documenti Microsoft
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
ms.openlocfilehash: f2c9903170f62652357264a3ea2de0839496e9e2
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32409098"
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