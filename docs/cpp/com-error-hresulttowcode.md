---
title: _com_error::HRESULTToWCode | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_error::HRESULTToWCode
dev_langs:
- C++
helpviewer_keywords:
- HRESULTToWCode method [C++]
ms.assetid: ff3789f5-1047-41a0-b7e3-86dd8f638dba
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7e3955fcda665e08e5415652a1e8f1f232d0fe13
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="comerrorhresulttowcode"></a>_com_error::HRESULTToWCode
**Sezione specifica Microsoft**  
  
 Esegue il mapping a 32 bit `HRESULT` a 16 bit `wCode`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      static WORD HRESULTToWCode(  
   HRESULT hr   
) throw( );  
```  
  
#### <a name="parameters"></a>Parametri  
 `hr`  
 32 bit `HRESULT` devono essere mappati a 16 bit `wCode`.  
  
## <a name="return-value"></a>Valore restituito  
 16 bit `wCode` mappato da 32 bit `HRESULT`.  
  
## <a name="remarks"></a>Note  
 Vedere [_com_error::WCode](../cpp/com-error-wcode.md) per ulteriori informazioni.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [_com_error::WCode](../cpp/com-error-wcode.md)   
 [_com_error::WCodeToHRESULT](../cpp/com-error-wcodetohresult.md)   
 [Classe _com_error](../cpp/com-error-class.md)