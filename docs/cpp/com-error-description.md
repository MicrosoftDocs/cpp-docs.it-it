---
title: _com_error::Description | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_error::Description
dev_langs:
- C++
helpviewer_keywords:
- Description method [C++]
ms.assetid: 88191e24-4ee8-44a6-8c4c-3758e22e0548
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7df1fb3a8ca600b888e5d6f2c51fc44fda17dd27
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32414259"
---
# <a name="comerrordescription"></a>_com_error::Description
**Sezione specifica Microsoft**  
  
 Chiamate **IErrorInfo:: GetDescription** (funzione).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
_bstr_t Description( ) const;  
  
```  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce il risultato della **IErrorInfo:: GetDescription** per il **IErrorInfo** oggetto registrati all'interno di `_com_error` oggetto. La stringa `BSTR` risultante viene incapsulata in un oggetto `_bstr_t`. Se non **IErrorInfo** è registrato, restituisce un oggetto vuoto `_bstr_t`.  
  
## <a name="remarks"></a>Note  
 Chiamate di **IErrorInfo:: GetDescription** (funzione) e recupera **IErrorInfo** registrati all'interno di `_com_error` oggetto. Qualsiasi errore durante la chiamata di **IErrorInfo:: GetDescription** metodo viene ignorato.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_error](../cpp/com-error-class.md)