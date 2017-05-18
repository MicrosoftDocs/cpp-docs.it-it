---
title: Struttura space_info | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- filesystem/std::tr2::sys::space_info
dev_langs:
- C++
ms.assetid: f2b35b42-06ff-45bd-8617-39a0f5358a54
caps.latest.revision: 13
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 4ecf60434799708acab4726a95380a2d3b9dbb3a
ms.openlocfilehash: e8573fab6f0d1a1ad43a9be2e3be1ddd8f556748
ms.contentlocale: it-it
ms.lasthandoff: 04/19/2017

---
# <a name="spaceinfo-structure"></a>Struttura space_info
Contiene informazioni su un volume.  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct space_info    {
    uintmax_t capacity;
    uintmax_t free;
    uintmax_t available;
    };  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`unsigned long long available`|Rappresenta il numero di byte disponibili per rappresentare i dati nel volume.|  
|`unsigned long long capacity`|Rappresenta il numero totale di byte che il volume può rappresentare.|  
|`unsigned long long free`|Rappresenta il numero di byte che non vengono usati per rappresentare i dati nel volume.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<filesystem >  
  
 **Spazio nomi:** std::experimental::filesystem  
  
## <a name="see-also"></a>Vedere anche  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)  (Riferimento file di intestazione)  
 [\<filesystem>](../standard-library/filesystem.md)   
 [spazio](http://msdn.microsoft.com/en-us/7fce0b0e-523b-4598-b218-47245d0204ca)   
 [Esplorazione del file system (C++)](../standard-library/file-system-navigation.md)


