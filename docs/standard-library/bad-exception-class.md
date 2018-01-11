---
title: Classe bad_exception | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: exception/std::bad_exception
dev_langs: C++
helpviewer_keywords: bad_exception class
ms.assetid: 5ae2c4ef-c7ad-4469-8a9e-a773e86bb000
caps.latest.revision: "20"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: b5b91f3019a46aa011f95ae26434456d1e41de08
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="badexception-class"></a>bad_exception Class
La classe descrive un'eccezione che può essere generata da un gestore imprevisto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class bad_exception    : public exception {};  
```  
  
## <a name="remarks"></a>Note  
 [unexpected](../standard-library/exception-functions.md#unexpected) genererà `bad_exception` anziché terminare o chiamare un'altra funzione specificata con [set_unexpected](../standard-library/exception-functions.md#set_unexpected) se `bad_exception` è incluso nell'elenco di generazione di una funzione.  
  
 Il valore restituito da **what** è una stringa C definita dall'implementazione. Nessuna delle funzioni membro genera eccezioni.  
  
 Per un elenco dei membri ereditati dalla classe `bad_exception`, vedere [Classe exception](../standard-library/exception-class.md).  
  
## <a name="example"></a>Esempio  
 Vedere [set_unexpected](../standard-library/exception-functions.md#set_unexpected) per un esempio dell'utilizzo di [unexpected](../standard-library/exception-functions.md#unexpected) che genera `bad_exception`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<exception>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
[Classe di eccezione](../standard-library/exception-class.md) [Thread Safety nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

