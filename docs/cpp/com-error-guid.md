---
title: _com_error::GUID | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_error::GUID
dev_langs:
- C++
helpviewer_keywords:
- GUID method [C++]
ms.assetid: e84c2c23-d02e-48f8-b776-9bd6937296d2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ee1952e50251cfac7563357c7626ab8603589e4d
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32409685"
---
# <a name="comerrorguid"></a>_com_error::GUID
**Sezione specifica Microsoft**  
  
 Chiamate **IErrorInfo:: GetGuid** (funzione).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
GUID GUID( ) const throw( );  
  
```  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce il risultato della **IErrorInfo:: GetGuid** per il **IErrorInfo** oggetto registrati all'interno di `_com_error` oggetto. Se non **IErrorInfo** è registrato, restituisce `GUID_NULL`.  
  
## <a name="remarks"></a>Note  
 Qualsiasi errore durante la chiamata di **IErrorInfo:: GetGuid** metodo viene ignorato.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_error](../cpp/com-error-class.md)