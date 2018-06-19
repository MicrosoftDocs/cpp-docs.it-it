---
title: _com_ptr_t::Detach | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_ptr_t::Detach
dev_langs:
- C++
helpviewer_keywords:
- Detach method [C++]
ms.assetid: 0652053e-af37-44e9-a278-2522212ebfed
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6fbe8fd203c3fda75e83aee623254676dacaf1da
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32410580"
---
# <a name="comptrtdetach"></a>_com_ptr_t::Detach
**Sezione specifica Microsoft**  
  
 Estrae e restituisce un puntatore a interfaccia incapsulato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
Interface* Detach( ) throw( );  
  
```  
  
## <a name="remarks"></a>Note  
 Estrae e restituisce un puntatore a interfaccia incapsulato, quindi Cancella la risorsa di archiviazione puntatore incapsulato **NULL**. In questo modo il puntatore a interfaccia viene rimosso dall'incapsulamento. È responsabilità dell'utente chiamare **versione** sul puntatore a interfaccia restituito.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_ptr_t](../cpp/com-ptr-t-class.md)