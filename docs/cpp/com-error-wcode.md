---
title: _com_error::WCode | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: _com_error::WCode
dev_langs: C++
helpviewer_keywords: WCode method [C++]
ms.assetid: f3b21852-f8ea-4e43-bff1-11c2d35454c4
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 3c26d02b6c010d17978dd517576cd74d5dd8adef
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="comerrorwcode"></a>_com_error::WCode
**Sezione specifica Microsoft**  
  
 Recupera il codice di errore a 16 bit il cui mapping si trova in `HRESULT` incapsulato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
WORD WCode ( ) const throw( );  
  
```  
  
## <a name="return-value"></a>Valore restituito  
 Se il `HRESULT` è compreso nell'intervallo tra 0x80040200 e 0x8004FFFF, il **WCode** metodo restituisce il `HRESULT` meno 0x80040200; in caso contrario, restituisce zero.  
  
## <a name="remarks"></a>Note  
 Il **WCode** metodo viene utilizzato per annullare un mapping che si verifica nel codice di supporto COM. Il wrapper per un **dispinterface** proprietà o un metodo chiama una routine di supporto che assembla gli argomenti e chiama **IDispatch:: Invoke**. Al termine, se un errore `HRESULT` di `DISP_E_EXCEPTION` viene restituito, le informazioni sull'errore vengono recuperati i **EXCEPINFO** struttura passata al **IDispatch:: Invoke**. Il codice di errore può essere un valore a 16 bit memorizzato nel `wCode` appartenente il **EXCEPINFO** struttura o un valore a 32 bit nel **scode** membro del **EXCEPINFO**struttura. Se viene restituito un `wCode` a 16 bit, è necessario eseguire prima il mapping di un errore `HRESULT` a 32 bit.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [_com_error::HRESULTToWCode](../cpp/com-error-hresulttowcode.md)   
 [_com_error::WCodeToHRESULT](../cpp/com-error-wcodetohresult.md)   
 [Classe _com_error](../cpp/com-error-class.md)