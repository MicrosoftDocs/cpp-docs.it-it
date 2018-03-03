---
title: _com_error::ErrorInfo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- _com_error::ErrorInfo
dev_langs:
- C++
helpviewer_keywords:
- ErrorInfo method [C++]
ms.assetid: 071b446c-4395-4fb8-bd3d-300a8b25f5cd
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 642078d84f72a553e9b2407b279265a3a7e77522
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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