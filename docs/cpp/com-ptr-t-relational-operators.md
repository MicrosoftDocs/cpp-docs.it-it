---
title: "Operatori relazionali _com_ptr_t | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_com_ptr_t::operator>"
  - "_com_ptr_t::operator>="
  - "_com_ptr_t.operator<="
  - "_com_ptr_t.operator!="
  - "_com_ptr_t::operator<="
  - "_com_ptr_t.operator>"
  - "_com_ptr_t.operator<"
  - "_com_ptr_t.operator=="
  - "_com_ptr_t::operator=="
  - "_com_ptr_t.operator>="
  - "_com_ptr_t::operator!="
  - "_com_ptr_t::operator<"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "!= (operatore)"
  - "< (operatore), confronto tra oggetti specifici"
  - "<= (operatore), oggetti specifici"
  - "== (operatore), oggetti specifici di Visual C++"
  - "> (operatore), confronto tra oggetti specifici"
  - ">= (operatore), confronto tra oggetti specifici"
  - "operatore !=, operatori relazionali"
  - "operatore <, puntatori"
  - "operatore <=, puntatori"
  - "operatore ==, puntatori"
  - "operatore >, puntatori"
  - "operatore >=, puntatori"
  - "operator!=, operatori relazionali"
  - "operator<, puntatori"
  - "operator<=, puntatori"
  - "operator==, puntatori"
  - "operator>=, puntatori"
  - "operatori relazionali, _com_ptr_t (classe)"
ms.assetid: 5ae4028c-33ee-485d-bbda-88d2604d6d4b
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Operatori relazionali _com_ptr_t
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Confrontare l'oggetto del puntatore intelligente con un altro puntatore intelligente, puntatore a interfaccia raw o **NULL**.  
  
## Sintassi  
  
```  
  
      template<typename _OtherIID>   
bool operator==(   
   const _com_ptr_t<_OtherIID>& p   
);  
  
template<typename _OtherIID>    
bool operator==(   
   _com_ptr_t<_OtherIID>& p   
);  
  
template<typename _InterfaceType>   
bool operator==(   
   _InterfaceType* p   
);  
  
template<>   
bool operator==(   
   Interface* p   
);  
  
template<>   
bool operator==(   
   const _com_ptr_t& p   
) throw();  
  
template<>   
bool operator==(   
   _com_ptr_t& p   
) throw();  
  
bool operator==(   
   int null   
);  
```  
  
```  
  
      template<typename _OtherIID>   
bool operator!=(   
   const _com_ptr_t<_OtherIID>& p   
);  
  
template<typename _OtherIID>   
bool operator!=(   
   _com_ptr_t<_OtherIID>& p   
);  
  
template<typename _InterfaceType>   
bool operator!=(   
   _InterfaceType* p   
);  
  
bool operator!=(   
   int null   
);  
```  
  
```  
  
      template<typename _OtherIID>   
bool operator<(   
   const _com_ptr_t<_OtherIID>& p   
);  
  
template<typename _OtherIID>   
bool operator<(   
   _com_ptr_t<_OtherIID>& p   
);  
  
template<typename _InterfaceType>   
bool operator<(   
   _InterfaceType* p   
);  
```  
  
```  
  
      template<typename _OtherIID>   
bool operator>(   
   const _com_ptr_t<_OtherIID>& p   
);  
  
template<typename _OtherIID>   
bool operator>(_com_ptr_t<   
   _OtherIID>& p   
);  
  
template<typename _InterfaceType>   
bool operator>(   
   _InterfaceType* p   
);  
```  
  
```  
  
      template<typename _OtherIID>   
bool operator<=(   
   const _com_ptr_t<_OtherIID>& p   
);  
  
template<typename _OtherIID>   
bool operator<=(   
   _com_ptr_t<_OtherIID>& p   
);  
  
template<typename _InterfaceType>   
bool operator<=(   
   _InterfaceType* p   
);  
```  
  
```  
  
      template<typename _OtherIID>   
bool operator>=(   
   const _com_ptr_t<_OtherIID>& p   
);  
  
template<typename _OtherIID>   
bool operator>=(   
   _com_ptr_t<_OtherIID>& p   
);  
  
template<typename _InterfaceType>   
bool operator>=(   
   _InterfaceType* p   
);  
```  
  
## Note  
 Confronta un oggetto del puntatore intelligente con un altro puntatore intelligente, un puntatore a interfaccia raw o un puntatore **NULL**.  Ad eccezione dei test del puntatore **NULL**, questi operatori eseguono prima una query su entrambi i puntatori per **IUnknown**, quindi confrontano i risultati.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Classe \_com\_ptr\_t](../cpp/com-ptr-t-class.md)