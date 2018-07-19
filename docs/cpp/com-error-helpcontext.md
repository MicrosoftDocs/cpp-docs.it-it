---
title: _com_error::HelpContext | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_error::HelpContext
dev_langs:
- C++
helpviewer_keywords:
- HelpContext method [C++]
ms.assetid: 160d6443-9b68-4cf5-a540-50da951a5b2b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e800bd3100fa0199534f3e9bdf6646aa0ffc6860
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37940898"
---
# <a name="comerrorhelpcontext"></a>_com_error::HelpContext
**Sezione specifica Microsoft**  
  
 Le chiamate `IErrorInfo::GetHelpContext` (funzione).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
DWORD HelpContext( ) const throw( );  
  
```  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce il risultato del `IErrorInfo::GetHelpContext` per il `IErrorInfo` registrato nel `_com_error` oggetto. Se nessun `IErrorInfo` è registrato, restituisce zero.  
  
## <a name="remarks"></a>Note  
 Qualsiasi errore durante la chiamata di `IErrorInfo::GetHelpContext` metodo viene ignorato.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_error](../cpp/com-error-class.md)