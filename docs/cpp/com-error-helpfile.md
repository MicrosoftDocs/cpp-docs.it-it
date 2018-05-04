---
title: _com_error::HelpFile | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_error::HelpFile
dev_langs:
- C++
helpviewer_keywords:
- HelpFile method [C++]
ms.assetid: d2d3a0a1-6b62-4d52-a818-3cfae545a4af
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a1f02238d228b5de4302812bacf4f9ad5cf1300c
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="comerrorhelpfile"></a>_com_error::HelpFile
**Sezione specifica Microsoft**  
  
 Chiamate **IErrorInfo:: GetHelpFile** (funzione).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
_bstr_t HelpFile() const;  
  
```  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce il risultato della **IErrorInfo:: GetHelpFile** per il **IErrorInfo** oggetto registrati all'interno di `_com_error` oggetto. La stringa BSTR risultante viene incapsulata in un oggetto `_bstr_t`. Se non **IErrorInfo** è registrato, restituisce un oggetto vuoto `_bstr_t`.  
  
## <a name="remarks"></a>Note  
 Qualsiasi errore durante la chiamata di **IErrorInfo:: GetHelpFile** metodo viene ignorato.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_error](../cpp/com-error-class.md)