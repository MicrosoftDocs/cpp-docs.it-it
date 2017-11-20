---
title: _bstr_t::Attach | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: _bstr_t::Attach
dev_langs: C++
helpviewer_keywords: Attach method [C++]
ms.assetid: 8cad867e-40fc-435b-841f-0d412c2f58d3
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: dbb3f0352302d366d57ba94b745aa3dd18a4bb8f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="bstrtattach"></a>_bstr_t::Attach
**Sezione specifica Microsoft**  
  
 Collega un wrapper `_bstr_t` a  `BSTR`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      void Attach(  
   BSTR s  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *s*  
 `BSTR` da associare a o assegnato alla variabile `_bstr_t`.  
  
## <a name="remarks"></a>Note  
 Se `_bstr_t` in precedenza era associato a un altro `BSTR`, `_bstr_t` eseguirà la pulizia della risorsa `BSTR`, se nessun'altra variabile `_bstr_t` utilizza `BSTR`.  
  
## <a name="example"></a>Esempio  
 Vedere [Connetti](../cpp/bstr-t-assign.md) per un esempio di utilizzo **collegamento**.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _bstr_t](../cpp/bstr-t-class.md)