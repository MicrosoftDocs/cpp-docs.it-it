---
title: _com_error::WCodeToHRESULT | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- _com_error::WCodeToHRESULT
- _com_error.WCodeToHRESULT
- WCodeToHRESULT
dev_langs:
- C++
helpviewer_keywords:
- WCodeToHRESULT method
ms.assetid: 0ec43a4b-ca91-42d5-b270-3fde9c8412ea
caps.latest.revision: 6
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: e5165f3bf0058d2c1f5ae4cb416fd6b26e0077d3
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

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
