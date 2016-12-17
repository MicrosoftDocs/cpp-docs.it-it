---
title: "Classe enable_shared_from_this | Microsoft Docs"
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
  - "tr1.enable_shared_from_this"
  - "enable_shared_from_this"
  - "std.tr1.enable_shared_from_this"
  - "memory/std::tr1::enable_shared_from_this"
  - "std::tr1::enable_shared_from_this"
  - "tr1::enable_shared_from_this"
  - "std.enable_shared_from_this"
  - "memory/std::enable_shared_from_this"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "enable_shared_from_this (classe)"
  - "enable_shared_from_this (classe) [TR1]"
ms.assetid: 9237603d-22e2-421f-b070-838ac006baf5
caps.latest.revision: 22
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe enable_shared_from_this
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Consente di generare un `shared_ptr`.  
  
## Sintassi  
  
```  
template<class Ty>  
    class enable_shared_from_this {  
public:  
    shared_ptr<Ty> shared_from_this();  
    shared_ptr<const Ty> shared_from_this() const;  
  
protected:  
    enable_shared_from_this();  
    enable_shared_from_this(const enable_shared_from_this&);  
    enable_shared_from_this& operator=(const enable_shared_from_this&);  
    ~enable_shared_from_this();  
    };  
```  
  
#### Parametri  
 `Ty`  
 Tipo controllato dal puntatore condiviso.  
  
## Note  
 Oggetti derivati da `enable_shared_from_this` possibile utilizzare il `shared_from_this` metodi nelle funzioni membro per creare [shared\_ptr](../standard-library/shared-ptr-class.md) proprietari dell'istanza che condividono la proprietà con esistente `shared_ptr` proprietari. In caso contrario, se si crea un nuovo `shared_ptr` utilizzando `this`, è diverso dal esistente `shared_ptr` proprietari, che possono portare a riferimenti di non valido o l'oggetto da eliminare più volte.  
  
 I costruttori, distruttore e operatore di assegnazione sono protetti per evitare un uso improprio accidentale. Il tipo di argomento di modello `Ty` deve essere il tipo della classe derivata.  
  
 Per un esempio di utilizzo, vedere [enable\_shared\_from\_this::shared\_from\_this](../Topic/enable_shared_from_this::shared_from_this.md).  
  
## Requisiti  
 **Intestazione:** \<memory\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [enable\_shared\_from\_this::shared\_from\_this](../Topic/enable_shared_from_this::shared_from_this.md)   
 [Classe shared\_ptr](../standard-library/shared-ptr-class.md)