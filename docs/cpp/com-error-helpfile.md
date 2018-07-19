---
title: _com_error::HelpFile | Microsoft Docs
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
ms.openlocfilehash: acd909224d6a682a210e15eebf04d2c8429a8a3c
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37939558"
---
# <a name="comerrorhelpfile"></a>_com_error::HelpFile
**Sezione specifica Microsoft**  
  
 Le chiamate `IErrorInfo::GetHelpFile` (funzione).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
_bstr_t HelpFile() const;  
  
```  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce il risultato del `IErrorInfo::GetHelpFile` per il `IErrorInfo` registrato nel `_com_error` oggetto. La stringa BSTR risultante viene incapsulata in un oggetto `_bstr_t`. Se nessun `IErrorInfo` viene registrato, restituisce un oggetto vuoto `_bstr_t`.  
  
## <a name="remarks"></a>Note  
 Qualsiasi errore durante la chiamata di `IErrorInfo::GetHelpFile` metodo viene ignorato.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_error](../cpp/com-error-class.md)