---
title: _com_error::HelpContext | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: _com_error::HelpContext
dev_langs: C++
helpviewer_keywords: HelpContext method [C++]
ms.assetid: 160d6443-9b68-4cf5-a540-50da951a5b2b
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: d7c350a2c8879ecf927974aa48650c59247716c4
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="comerrorhelpcontext"></a>_com_error::HelpContext
**Sezione specifica Microsoft**  
  
 Chiamate **IErrorInfo:: GetHelpContext** (funzione).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
DWORD HelpContext( ) const throw( );  
  
```  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce il risultato della **IErrorInfo:: GetHelpContext** per il **IErrorInfo** oggetto registrati all'interno di `_com_error` oggetto. Se non **IErrorInfo** è registrato, restituisce zero.  
  
## <a name="remarks"></a>Note  
 Qualsiasi errore durante la chiamata di **IErrorInfo:: GetHelpContext** metodo viene ignorato.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_error](../cpp/com-error-class.md)