---
title: _com_ptr_t::AddRef | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_ptr_t::AddRef
dev_langs:
- C++
helpviewer_keywords:
- AddRef method [C++], interface pointers
ms.assetid: c104dac3-aad3-40bb-a298-75c6cd0e63a2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 54a1b629f254bae2b72790546bcbb00185f2c44c
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32409774"
---
# <a name="comptrtaddref"></a>_com_ptr_t::AddRef
**Sezione specifica Microsoft**  
  
 Chiamate di `AddRef` funzione membro di **IUnknown** sul puntatore a interfaccia incapsulato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
void AddRef( );  
  
```  
  
## <a name="remarks"></a>Note  
 Chiamate `IUnknown::AddRef` sul puntatore a interfaccia incapsulato, che genera un `E_POINTER` errore se il puntatore è **NULL**.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_ptr_t](../cpp/com-ptr-t-class.md)