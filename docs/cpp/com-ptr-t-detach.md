---
title: _com_ptr_t::Detach | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- _com_ptr_t::Detach
dev_langs:
- C++
helpviewer_keywords:
- Detach method [C++]
ms.assetid: 0652053e-af37-44e9-a278-2522212ebfed
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
ms.openlocfilehash: f61b0fb05f182ef2723fdcc564fd697f490aed20
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

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
