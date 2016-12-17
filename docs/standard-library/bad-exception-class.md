---
title: "bad_exception Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.bad_exception"
  - "bad_exception"
  - "std::bad_exception"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bad_exception (classe)"
ms.assetid: 5ae2c4ef-c7ad-4469-8a9e-a773e86bb000
caps.latest.revision: 20
caps.handback.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# bad_exception Class
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe descrive un'eccezione che può essere generata da un gestore imprevisto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class bad_exception    : public exception {};  
```  
  
## <a name="remarks"></a>Note  
 [imprevisto](../Topic/%3Cexception%3E%20functions.md#unexpected) genererà un `bad_exception` invece di terminazione o invece di chiamare un'altra funzione specificata con [set_unexpected](../Topic/%3Cexception%3E%20functions.md#set_unexpected) Se `bad_exception` è incluso nell'elenco throw di una funzione.  
  
 Il valore restituito da **cosa** è una stringa C definito dall'implementazione. Nessuna delle funzioni membro genera eccezioni.  
  
 Per un elenco di membri ereditati dalla `bad_exception` classe, vedere [eccezione classe](../standard-library/exception-class1.md).  
  
## <a name="example"></a>Esempio  
 Vedere [set_unexpected](../Topic/%3Cexception%3E%20functions.md#set_unexpected) per un esempio dell'utilizzo di [imprevisto](../Topic/%3Cexception%3E%20functions.md#unexpected) la generazione di un `bad_exception`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \< (eccezione)>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
[Classe di eccezione](../standard-library/exception-class1.md)
 [Thread-safe nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

