---
title: "Classe collate_byname | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::collate_byname"
  - "locale/std::collate_byname"
  - "std.collate_byname"
  - "collate_byname"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "collate_byname (classe)"
ms.assetid: 3dc380df-867c-4763-b60e-ba62a8e63ca7
caps.latest.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 24
---
# Classe collate_byname
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Classe modello derivata che descrive un oggetto che può essere utilizzato come facet di ordinamento delle impostazioni locali specificate, consentendo il recupero di informazioni relative alle convenzioni di ordinamento delle stringhe specifiche di un'area culturale.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class CharType>
class collate_byname : public collate<CharType> {
public:
    explicit collate_byname(
    const char* _Locname,
    size_t _Refs = 0);

    explicit collate_byname(
    const string& _Locname,
    size_t _Refs = 0);

protected:
    virtual ~collate_byname();

};
```  
  
#### <a name="parameters"></a>Parametri  
 `_Locname`  
 Nome delle impostazioni locali.  
  
 `_Refs`  
 Un conteggio di riferimento iniziale.  
  
## <a name="remarks"></a>Note  
 La classe modello descrive un oggetto che può essere utilizzato come un [facet delle impostazioni locali](../standard-library/locale-class.md#facet_class) di tipo [collate](../standard-library/collate-class.md#collate__collate)\< CharType>. Il comportamento varia a seconda di [denominato](../standard-library/locale-class.md#locale__name) delle impostazioni locali `_Locname`. Ogni costruttore inizializza il relativo oggetto di base con [collate](../standard-library/collate-class.md#collate__collate)\< CharType>( `_Refs`).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \< impostazioni locali>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Sicurezza dei thread nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)



