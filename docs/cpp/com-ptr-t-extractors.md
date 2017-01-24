---
title: "_com_ptr_t Extractors | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_com_ptr_t::operatorInterface&"
  - "operatorInterface*"
  - "operatorInterface&"
  - "_com_ptr_t::operatorbool"
  - "_com_ptr_t.operator->"
  - "_com_ptr_t.operator*"
  - "_com_ptr_t::operator->"
  - "_com_ptr_t::operator*"
  - "_com_ptr_t.operatorInterface&"
  - "_com_ptr_t.operatorbool"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "& (operatore), oggetti specifici"
  - "* (operatore), oggetti specifici"
  - "-> (operatore), oggetti specifici"
  - "estrattori"
  - "estrattori, _com_ptr_t (classe)"
  - "operatore *"
  - "bool (operatore)"
  - "operatore Interface&"
  - "operatore Interface*"
  - "operator&"
  - "operator*"
  - "operator->"
ms.assetid: 194b9e0e-123c-49ff-a187-0a7fcd68145a
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_ptr_t Extractors
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Estrae il puntatore a interfaccia COM incapsulato.  
  
## Sintassi  
  
```  
  
      operator Interface*( ) const throw( );   
operator Interface&( ) const;   
Interface& operator*( ) const;   
Interface* operator->( ) const;   
Interface** operator&( ) throw( );   
operator bool( ) const throw( );  
```  
  
## Note  
  
-   **operator Interface\*** Restituisce un puntatore a interfaccia incapsulato, che può essere **NULL**.  
  
-   **operator Interface&** Restituisce un riferimento al puntatore a interfaccia incapsulato e genera un errore se il puntatore è **NULL**.  
  
-   **operator\*** Consente a un oggetto del puntatore intelligente di agire come se fosse l'effettiva interfaccia incapsulata una volta dereferenziato.  
  
-   **operator\-\>** Consente a un oggetto del puntatore intelligente di agire come se fosse l'effettiva interfaccia incapsulata una volta dereferenziato.  
  
-   **operator&** Rilascia un puntatore a interfaccia incapsulato, sostituendolo con **NULL** e restituisce l'indirizzo del puntatore incapsulato.  In questo modo il puntatore intelligente può essere passato per indirizzo a una funzione con un parametro **out** con il quale restituisce un puntatore a interfaccia.  
  
-   **operator bool** Consente a un oggetto del puntatore intelligente di essere utilizzato in un'espressione condizionale.  Questo operatore restituisce **true** se il puntatore non è **NULL**.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Classe \_com\_ptr\_t](../cpp/com-ptr-t-class.md)