---
title: Classe time_get_byname | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: xloctime/std::time_get_byname
dev_langs: C++
helpviewer_keywords: time_get_byname class
ms.assetid: 6e54153e-da40-4bb9-a942-1a6ce57b30c9
caps.latest.revision: "25"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: f32cb9d5412cc8f6c0f053e8ad8c43fe7a197de5
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="timegetbyname-class"></a>Classe time_get_byname
Questa classe modello derivata descrive un oggetto che può essere usato come facet delle impostazioni locali di tipo `time_get`\<CharType, InputIterator>.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Elem, class InputIterator =
    istreambuf_iterator<CharType, char_traits<CharType>>>
class time_get_byname : public time_get<CharType, InputIterator>
{
public:
    explicit time_get_byname(
    const char* _Locname,
    size_t _Refs = 0);

    explicit time_get_byname(
    const string& _Locname,
    size_t _Refs = 0);

protected:
    virtual ~time_get_byname()
};
```  
  
#### <a name="parameters"></a>Parametri  
 `_Locname`  
 Impostazioni locali denominate.  
  
 `_Refs`  
 Conteggio di riferimento iniziale.  
  
## <a name="requirements"></a>Requisiti  
 Il comportamento è determinato dalle impostazioni locali denominate `_Locname`. Ogni costruttore inizializza l'oggetto di base con [time_get](../standard-library/time-get-class.md#time_get)\<CharType, InputIterator>( `_Refs`).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<locale>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md) (Thread safety nella libreria standard C++)



