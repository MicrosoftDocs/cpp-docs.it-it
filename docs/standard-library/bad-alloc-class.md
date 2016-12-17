---
title: "Classe bad_alloc | Microsoft Docs"
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
  - "std::bad_alloc"
  - "new/std:bad_alloc"
  - "bad_alloc"
  - "std.bad_alloc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bad_alloc (classe)"
ms.assetid: 6429a8e6-5a49-4907-8d56-f4a4ec8131d0
caps.latest.revision: 26
caps.handback.revision: 26
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe bad_alloc
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe descrive un'eccezione generata per indicare che una richiesta di allocazione ha avuto esito negativo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class bad_alloc : public exception {  
    bad_alloc();
virtual ~bad_alloc();

};  
```  
  
## <a name="remarks"></a>Note  
 Il valore restituito da **cosa** è una stringa C definito dall'implementazione. Nessuna delle funzioni membro genera eccezioni.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \< new>  
  
 **Spazio dei nomi:** std  
  
## <a name="example"></a>Esempio  
  
```  
// bad_alloc.cpp  
// compile with: /EHsc  
#include<new>  
#include<iostream>  
using namespace std;  
  
int main() {  
   char* ptr;  
   try {  
      ptr = new char[(~unsigned int((int)0)/2) - 1];  
      delete[] ptr;  
   }  
   catch( bad_alloc &ba) {  
      cout << ba.what( ) << endl;  
   }  
}  
```  
  
## <a name="sample-output"></a>Esempio di output  
  
```  
bad allocation  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \< new>  
  
## <a name="see-also"></a>Vedere anche
 [Classe di eccezione](../standard-library/exception-class1.md)  
 [Sicurezza dei thread nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

