---
title: Struttura once_flag | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: mutex/std::once_flag
dev_langs: C++
ms.assetid: 71bfb88d-ca8c-4082-a6e1-ff52151e8629
caps.latest.revision: "13"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: fc66f322490bc728ab6d25e185f6b8d4ce0f0179
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="onceflag-structure"></a>Struttura once_flag
Rappresenta un oggetto `struct` usato con la funzione modello [call_once](../standard-library/mutex-functions.md#call_once) per garantire che il codice di inizializzazione venga chiamato una sola volta, anche in presenza di più thread di esecuzione.  
  
## <a name="syntax"></a>Sintassi  
  
struct once_flag { constexpr once_flag() noexcept; once_flag(const once_flag&); once_flag& operator=(const once_flag&); };  
  
## <a name="remarks"></a>Note  
 Il `once_flag` `struct` ha solo un costruttore predefinito.  
  
 È possibile creare oggetti di tipo `once_flag`, ma non eseguirne la copia.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<mutex >  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<mutex>](../standard-library/mutex.md)



