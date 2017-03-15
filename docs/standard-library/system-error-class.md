---
title: Classe system_error | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- system_error/std::system_error
- std.system_error
- std::system_error
- system_error
dev_langs:
- C++
helpviewer_keywords:
- system_error class
ms.assetid: 2eeaacbb-8a4a-4ad7-943a-997901a77f32
caps.latest.revision: 17
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
translationtype: Machine Translation
ms.sourcegitcommit: 51fbd09793071631985720550007dddbe16f598f
ms.openlocfilehash: cec13ab1b6358ffeb9c8df31154f5b706c266c5b
ms.lasthandoff: 02/24/2017

---
# <a name="systemerror-class"></a>Classe system_error
Rappresenta la classe di base per tutte le eccezioni generate per segnalare un errore di sistema di basso livello.  
  
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
 Il valore restituito da `what` nella classe [exception](../standard-library/exception-class.md) è costruito da `_Message` e dall'oggetto archiviato di tipo [error_code](../standard-library/error-code-class.md) (`code` o `error_code(_Errval, _Errcat)`).  
  
 La funzione membro `code` restituisce l'oggetto [error_code](../standard-library/error-code-class.md) archiviato.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<system_error>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<system_error>](../standard-library/system-error.md)


