---
title: _com_error::WCodeToHRESULT | Microsoft Docs
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
ms.openlocfilehash: dce98775007360e3fdd4177141f7a550548d3679
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37939195"
---
# <a name="comerrorwcodetohresult"></a>_com_error::WCodeToHRESULT
**Sezione specifica Microsoft**  
  
 Esegue il mapping a 16 *wCode* a 32 bit HRESULT.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      static HRESULT WCodeToHRESULT(  
   WORD wCode   
) throw( );  
```  
  
#### <a name="parameters"></a>Parametri  
 *wCode*  
 Il 16-bit *wCode* devono essere mappati a 32 bit HRESULT.  
  
## <a name="return-value"></a>Valore restituito  
 32 bit HRESULT mappato da 16 bit *wCode*.  
  
## <a name="remarks"></a>Note  
 Vedere le [WCode](../cpp/com-error-wcode.md) funzione membro.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [_com_error::WCode](../cpp/com-error-wcode.md)   
 [_com_error::HRESULTToWCode](../cpp/com-error-hresulttowcode.md)   
 [Classe _com_error](../cpp/com-error-class.md)