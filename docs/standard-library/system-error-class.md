---
title: "Classe system_error | Microsoft Docs"
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
  - "system_error/std::system_error"
  - "std.system_error"
  - "std::system_error"
  - "system_error"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "system_error (classe)"
ms.assetid: 2eeaacbb-8a4a-4ad7-943a-997901a77f32
caps.latest.revision: 17
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe system_error
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta la classe base per tutte le eccezioni generate per segnalare un errore di sistema di basso livello.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class system_error : public runtime_error {  
public:  
    explicit system_error(error_code _Errcode,
    const string& _Message = "");

    system_error(error_code _Errcode,
    const char *_Message);

    system_error(error_code::value_type _Errval,  
    const error_category& _Errcat,
    const string& _Message);

    system_error(error_code::value_type _Errval,  
    const error_category& _Errcat,
    const char *_Message);
const error_code& code() const throw();
const error_code& code() const throw();

 };  
```  
  
## <a name="remarks"></a>Note  
 Il valore restituito da `what` nella classe [eccezione](../standard-library/exception-class1.md) è costituito da `_Message` e l'oggetto archiviato di tipo [error_code](../standard-library/error-code-class.md) (sia `code` o `error_code(_Errval, _Errcat)`).  
  
 La funzione membro `code` restituisce l'oggetto memorizzato [error_code](../standard-library/error-code-class.md) oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \< system_error >  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [\< system_error >](../standard-library/system-error.md)

