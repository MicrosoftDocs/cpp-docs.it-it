---
title: _com_error::ErrorInfo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_error::ErrorInfo
dev_langs:
- C++
helpviewer_keywords:
- ErrorInfo method [C++]
ms.assetid: 071b446c-4395-4fb8-bd3d-300a8b25f5cd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8fbc735dfae1b30209eccfd14f1170826fb07680
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32410993"
---
# <a name="comerrorerrorinfo"></a>_com_error::ErrorInfo
**Sezione specifica Microsoft**  
  
 Recupera il **IErrorInfo** oggetto passato al costruttore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
IErrorInfo * ErrorInfo( ) const throw( );  
  
```  
  
## <a name="return-value"></a>Valore restituito  
 Raw **IErrorInfo** elemento passato al costruttore.  
  
## <a name="remarks"></a>Note  
 Recupera incapsulato **IErrorInfo** elemento un `_com_error` oggetto, o **NULL** se nessun **IErrorInfo** elemento viene registrato. Il chiamante deve chiamare **versione** sull'oggetto restituito al termine dell'utilizzo.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_error](../cpp/com-error-class.md)