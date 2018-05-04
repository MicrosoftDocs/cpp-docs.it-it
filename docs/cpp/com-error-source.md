---
title: _com_error::Source | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_error::Source
dev_langs:
- C++
helpviewer_keywords:
- Source method [C++]
ms.assetid: 55353741-fabc-4b0c-9787-b5a69bb189f2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a33834df20606e8380e6a328a41435522185ac70
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="comerrorsource"></a>_com_error::Source
**Sezione specifica Microsoft**  
  
 Chiamate **IErrorInfo:: getSource** (funzione).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
_bstr_t Source() const;  
  
```  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce il risultato della **IErrorInfo:: getSource** per il **IErrorInfo** oggetto registrati all'interno di `_com_error` oggetto. La stringa BSTR risultante viene incapsulata in un oggetto `_bstr_t`. Se non **IErrorInfo** è registrato, restituisce un oggetto vuoto `_bstr_t`.  
  
## <a name="remarks"></a>Note  
 Qualsiasi errore durante la chiamata di **IErrorInfo:: getSource** metodo viene ignorato.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_error](../cpp/com-error-class.md)