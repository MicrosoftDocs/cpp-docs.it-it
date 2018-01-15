---
title: Struttura is_error_code_enum | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: future/std::is_error_code_enum
dev_langs: C++
ms.assetid: 84ae4b99-66d2-41ba-9b50-645fcbe14630
caps.latest.revision: "13"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 44c7a0dbfe143705df880945b4343f0bac97bc73
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="iserrorcodeenum-structure"></a>Struttura is_error_code_enum
Specializzazione che indica che [future_errc](../standard-library/future-enums.md#future_errc) è adatto per l'archiviazione di un oggetto [error_code](../standard-library/error-code-class.md).  
  
## <a name="syntax"></a>Sintassi  
  
```
template <>
struct is_error_code_enum<Future_errc> : public true_type;
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<futura >  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<future>](../standard-library/future.md)



