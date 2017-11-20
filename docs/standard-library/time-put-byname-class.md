---
title: Classe time_put_byname | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- xloctime/std::time_put_byname
dev_langs:
- C++
helpviewer_keywords:
- time_put_byname class
ms.assetid: e08c2348-64d2-4ace-98b1-1496e14c7b1a
caps.latest.revision: 25
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: ba50414643d430798912e6a7a25d3fe9c49c1b9a
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="timeputbyname-class"></a>Classe time_put_byname
Questa classe modello derivata descrive un oggetto che può essere usato come facet delle impostazioni locali di tipo `time_put`\< CharType, OutputIterator >.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class CharType, class OutIt = ostreambuf_iterator<CharType, char_traits<CharType>>>
class time_put_byname : public time_put<CharType, OutputIterator>
{
public:
    explicit time_put_byname(
    const char* _Locname,
    size_t _Refs = 0);

    explicit time_put_byname(
    const string& _Locname,
    size_t _Refs = 0);

protected:
    virtual ~time_put_byname();

};
```  
  
#### <a name="parameters"></a>Parametri  
 `_Locname`  
 Nome delle impostazioni locali.  
  
 `_Refs`  
 Conteggio di riferimento iniziale.  
  
## <a name="remarks"></a>Note  
 Il comportamento è determinato dalle impostazioni locali [denominate](../standard-library/locale-class.md#name) `_Locname`. Ogni costruttore inizializza l'oggetto di base con [time_put](../standard-library/time-put-class.md#time_put)\<CharType, OutputIterator>( `_Refs`).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<locale>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md) (Thread safety nella libreria standard C++)



