---
title: Classe messages_byname | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: xlocmes/std::messages_byname
dev_langs: C++
helpviewer_keywords: messages_byname class
ms.assetid: c6c64841-3e80-43c8-b54c-fed41833ad6b
caps.latest.revision: "22"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: b5d7bc352f536f427d14e495d8a218f27aceb102
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="messagesbyname-class"></a>Classe messages_byname
Questa classe modello derivata descrive un oggetto che può essere usato come facet dei messaggi delle impostazioni locali specificate, consentendo il recupero dei messaggi localizzati.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class CharType>
class messages_byname : public messages<CharType> {
public:
    explicit messages_byname(
    const char *_Locname,
    size_t _Refs = 0);

    explicit messages_byname(
    const string& _Locname,
    size_t _Refs = 0);

protected:
    virtual ~messages_byname();

};
```  
  
#### <a name="parameters"></a>Parametri  
 `_Locname`  
 Impostazioni locali denominate.  
  
 `_Refs`  
 Conteggio di riferimento iniziale.  
  
## <a name="remarks"></a>Note  
 Il comportamento è determinato dalle impostazioni locali denominate `_Locname`. Ogni costruttore inizializza l'oggetto di base con [messages](../standard-library/messages-class.md#messages)\<CharType>( `_Refs`).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<locale>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md) (Thread safety nella libreria standard C++)



