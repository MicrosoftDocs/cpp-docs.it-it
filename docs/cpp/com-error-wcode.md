---
title: _com_error::WCode | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_error::WCode
dev_langs:
- C++
helpviewer_keywords:
- WCode method [C++]
ms.assetid: f3b21852-f8ea-4e43-bff1-11c2d35454c4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c9ad0cbfa614c132a75e25f46b34e37ec3a5fc64
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39407004"
---
# <a name="comerrorwcode"></a>_com_error::WCode
**Sezione specifica Microsoft**  
  
 Recupera il codice di errore a 16 bit mappato in HRESULT incapsulato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
WORD WCode ( ) const throw( );  
```  
  
## <a name="return-value"></a>Valore restituito  
 Se il valore HRESULT è compreso nell'intervallo tra 0x80040200 e 0x8004FFFF, il `WCode` metodo restituisce il valore HRESULT meno 0x80040200; in caso contrario, restituisce zero.  
  
## <a name="remarks"></a>Note  
 Il `WCode` metodo viene utilizzato per annullare un mapping che si verifica nel codice di supporto COM. Il wrapper per un `dispinterface` proprietà o il metodo chiama una routine di supporto che assembla gli argomenti e le chiamate `IDispatch::Invoke`. Al termine, se un HRESULT di errore del `DISP_E_EXCEPTION` viene restituito, le informazioni sull'errore vengono recuperati dal `EXCEPINFO` struttura passata al `IDispatch::Invoke`. Il codice di errore possono essere archiviato in un valore a 16 bit il `wCode` membro del `EXCEPINFO` struttura o un valore a 32 bit completo nel `scode` membro del `EXCEPINFO` struttura. Se un bit 16 `wCode` viene restituito, prima deve essere mappato a un HRESULT di errore a 32 bit.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [_com_error::HRESULTToWCode](../cpp/com-error-hresulttowcode.md)   
 [_com_error::WCodeToHRESULT](../cpp/com-error-wcodetohresult.md)   
 [Classe _com_error](../cpp/com-error-class.md)