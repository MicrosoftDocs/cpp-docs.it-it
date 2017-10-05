---
title: Classe codecvt_base | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- xlocale/std::codecvt_base
dev_langs:
- C++
helpviewer_keywords:
- codecvt_base class
ms.assetid: 7e95c083-91b4-4b3f-8918-0d4ea244a040
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
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
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: 13cfd32c6df8e191c8329008249cffecdb24e78f
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="codecvtbase-class"></a>Classe codecvt_base
Classe di base per la classe codecvt usata per definire un tipo di enumerazione a cui si fa riferimento come **result**, usato come tipo restituito per le funzioni membro facet per indicare il risultato di una conversione.  
  
## <a name="syntax"></a>Sintassi  
  
```
class codecvt_base : public locale::facet {
public:
    enum result {ok, partial, error, noconv};
    codecvt_base( size_t _Refs = 0);
    bool always_noconv() const;
    int max_length() const;
    int encoding() const;
    ~codecvt_base()

protected:
    virtual bool do_always_noconv() const;
    virtual int do_max_length() const;
    virtual int do_encoding() const;
};
```  
  
## <a name="remarks"></a>Note  
 La classe descrive un'enumerazione comune a tutte le specializzazioni della classe modello [codecvt](../standard-library/codecvt-class.md). Il risultato dell'enumerazione descrive i possibili valori restituiti da [do_in](../standard-library/codecvt-class.md#do_in) o [do_out](../standard-library/codecvt-class.md#do_out):  
  
- **ok** se la conversione tra codifiche di caratteri interni ed esterni ha esito positivo.  
  
- **partial** se la destinazione non è abbastanza grande per consentire la conversione.  
  
- **error** se la sequenza di origine non è stata creata nel formato corretto.  
  
- **noconv** se la funzione non esegue alcuna conversione.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<locale>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md) (Thread safety nella libreria standard C++)




