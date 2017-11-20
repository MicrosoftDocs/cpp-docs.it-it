---
title: _com_error::WCodeToHRESULT | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: _com_error::WCodeToHRESULT
dev_langs: C++
helpviewer_keywords: WCodeToHRESULT method [C++]
ms.assetid: 0ec43a4b-ca91-42d5-b270-3fde9c8412ea
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 925e1f7a2675dc0aaed3a0cab064e01681de673c
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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