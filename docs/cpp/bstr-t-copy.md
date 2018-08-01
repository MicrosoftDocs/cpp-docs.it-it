---
title: _bstr_t::Copy | Microsoft Docs
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
ms.openlocfilehash: 5b7032d9344ec9375059d5584d080854ffe5c775
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39405340"
---
# <a name="bstrtcopy"></a>_bstr_t::copy
**Sezione specifica Microsoft**  
  
 Costruisce una copia dell'oggetto `BSTR` incapsulato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
BSTR copy( bool fCopy = true ) const;  
```  
  
#### <a name="parameters"></a>Parametri  
 *fCopy*  
 Se TRUE, **copia** restituisce una copia dell'oggetto contenuto `BSTR`; in caso contrario **copia** restituisce l'oggetto BSTR effettivo.  
  
## <a name="remarks"></a>Note  
 Restituisce una copia allocata dell'oggetto `BSTR` incapsulato.  
  
## <a name="example"></a>Esempio  
  
```cpp 
STDMETHODIMP CAlertMsg::get_ConnectionStr(BSTR *pVal){ //  m_bsConStr is _bstr_t  
   *pVal = m_bsConStr.copy();  
}  
```  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _bstr_t](../cpp/bstr-t-class.md)