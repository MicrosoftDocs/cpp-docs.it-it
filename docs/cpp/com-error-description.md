---
title: _com_error::Description | Microsoft Docs
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
ms.openlocfilehash: 848709fa6cbbbfb4166750f86540de2433a73023
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39404028"
---
# <a name="comerrordescription"></a>_com_error::Description
**Sezione specifica Microsoft**  
  
 Le chiamate `IErrorInfo::GetDescription` (funzione).  
  
## <a name="syntax"></a>Sintassi  
  
```  
_bstr_t Description( ) const;  
```  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce il risultato del `IErrorInfo::GetDescription` per il `IErrorInfo` registrato nel `_com_error` oggetto. La stringa `BSTR` risultante viene incapsulata in un oggetto `_bstr_t`. Se nessun `IErrorInfo` viene registrato, restituisce un oggetto vuoto `_bstr_t`.  
  
## <a name="remarks"></a>Note  
 Chiama il `IErrorInfo::GetDescription` funzione e recupera `IErrorInfo` registrato nel `_com_error` oggetto. Qualsiasi errore durante la chiamata di `IErrorInfo::GetDescription` metodo viene ignorato.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_error](../cpp/com-error-class.md)