---
title: _com_ptr_t::Detach | Microsoft Docs
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
ms.openlocfilehash: cf38e433f7042707b502a4cba2088db9412adb29
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39405834"
---
# <a name="comptrtdetach"></a>_com_ptr_t::Detach
**Sezione specifica Microsoft**  
  
 Estrae e restituisce un puntatore a interfaccia incapsulato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
Interface* Detach( ) throw( );  
```  
  
## <a name="remarks"></a>Note  
 Estrae e restituisce un puntatore a interfaccia incapsulato, quindi Cancella lo spazio di archiviazione puntatore incapsulato su NULL. In questo modo il puntatore a interfaccia viene rimosso dall'incapsulamento. È responsabilità dell'utente per chiamare `Release` sul puntatore a interfaccia restituito.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_ptr_t](../cpp/com-ptr-t-class.md)