---
title: _com_ptr_t::Detach | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: _com_ptr_t::Detach
dev_langs: C++
helpviewer_keywords: Detach method [C++]
ms.assetid: 0652053e-af37-44e9-a278-2522212ebfed
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: ddb1d52ab9706293a03be074c3698c35c1bf291c
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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