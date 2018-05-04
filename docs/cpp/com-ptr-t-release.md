---
title: _com_ptr_t::Release | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_ptr_t.Release
- _com_ptr_t::Release
dev_langs:
- C++
helpviewer_keywords:
- Release method [C++]
ms.assetid: db448b34-0efa-4f02-b701-ad1ca3ae6ca5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9bf83b3f6ece4e8422f1ba8dbc5d1448da6bf0c7
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="comptrtrelease"></a>_com_ptr_t::Release
**Sezione specifica Microsoft**  
  
 Chiamate di **versione** funzione membro di **IUnknown** sul puntatore a interfaccia incapsulato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
void Release( );  
  
```  
  
## <a name="remarks"></a>Note  
 Chiamate `IUnknown::Release` sul puntatore a interfaccia incapsulato, che genera un `E_POINTER` errore se questo puntatore a interfaccia **NULL**.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_ptr_t](../cpp/com-ptr-t-class.md)