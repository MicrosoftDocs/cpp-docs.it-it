---
title: _com_error::WCodeToHRESULT | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_error::WCodeToHRESULT
dev_langs:
- C++
helpviewer_keywords:
- WCodeToHRESULT method [C++]
ms.assetid: 0ec43a4b-ca91-42d5-b270-3fde9c8412ea
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 31b9df8305d0eea772979904f63847f6d6c2325a
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="comerrorwcodetohresult"></a>_com_error::WCodeToHRESULT
**Sezione specifica Microsoft**  
  
 Esegue il mapping di `wCode` a 16 bit a `HRESULT` a 32 bit.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      static HRESULT WCodeToHRESULT(  
   WORD wCode   
) throw( );  
```  
  
#### <a name="parameters"></a>Parametri  
 `wCode`  
 `wCode` a 16 bit di cui eseguire il mapping a `HRESULT` a 32 bit.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` a 32 bit di cui è stato eseguito il mapping da `wCode` a 16 bit.  
  
## <a name="remarks"></a>Note  
 Vedere il [WCode](../cpp/com-error-wcode.md) funzione membro.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [_com_error::WCode](../cpp/com-error-wcode.md)   
 [_com_error::HRESULTToWCode](../cpp/com-error-hresulttowcode.md)   
 [Classe _com_error](../cpp/com-error-class.md)