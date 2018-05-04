---
title: _bstr_t::Copy | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _bstr_t::copy
dev_langs:
- C++
helpviewer_keywords:
- Copy method [C++]
- BSTR object [C++], copy
ms.assetid: 00ba7311-e82e-4a79-8106-5329fa2f869a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c7337669cae68c088265d812585a44fadd6bcb76
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="bstrtcopy"></a>_bstr_t::copy
**Sezione specifica Microsoft**  
  
 Costruisce una copia dell'oggetto `BSTR` incapsulato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      BSTR copy(  
  bool fCopy = true  
) const;  
```  
  
#### <a name="parameters"></a>Parametri  
 `fCopy`  
 Se **true**, **copia** restituisce una copia dell'oggetto contenuto `BSTR`, in caso contrario **copia** restituisce l'oggetto BSTR effettivo.  
  
## <a name="remarks"></a>Note  
 Restituisce una copia allocata dell'oggetto `BSTR` incapsulato.  
  
## <a name="example"></a>Esempio  
  
```  
STDMETHODIMP CAlertMsg::get_ConnectionStr(BSTR *pVal){ //  m_bsConStr is _bstr_t  
   *pVal = m_bsConStr.copy();  
}  
```  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _bstr_t](../cpp/bstr-t-class.md)