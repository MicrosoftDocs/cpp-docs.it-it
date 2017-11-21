---
title: _com_error::ErrorInfo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: _com_error::ErrorInfo
dev_langs: C++
helpviewer_keywords: ErrorInfo method [C++]
ms.assetid: 071b446c-4395-4fb8-bd3d-300a8b25f5cd
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 3e968a3b9814aeec898d4e157781b58c40a87e25
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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