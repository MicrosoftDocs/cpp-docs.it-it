---
title: "Estrattori _variant_t | Microsoft Docs"
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
  - "_variant_t.operatordouble"
  - "operatorlong"
  - "_variant_t::operator_bstr_t"
  - "operatordouble"
  - "_variant_t.operatorCY"
  - "operatorCY"
  - "_variant_t::operatorCY"
  - "_variant_t::operatordouble"
  - "operatorfloat"
  - "operatorBYTE"
  - "_variant_t.operatorDECIMAL"
  - "_variant_t::operatorlong"
  - "operatorIDispatch"
  - "_variant_t.operatorBYTE"
  - "operatorDECIMAL"
  - "_variant_t.operator_bstr_t"
  - "_variant_t::operatorDECIMAL"
  - "_variant_t.operatorIUnknown"
  - "_variant_t.operatorlong"
  - "_variant_t::operatorIDispatch"
  - "_variant_t::operatorIUnknown"
  - "operatorIUnknown"
  - "_variant_t.operatorbool"
  - "_variant_t::operatorBYTE"
  - "_variant_t.operatorfloat"
  - "operator_bstr_t"
  - "_variant_t::operatorbool"
  - "operatorshort"
  - "_variant_t::operatorshort"
  - "_variant_t::operatorfloat"
  - "_variant_t.operatorIDispatch"
  - "_variant_t.operatorshort"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "estrattori, _variant_t (classe)"
  - "operatore _bstr_t"
  - "bool (operatore)"
  - "operatore BYTE"
  - "operatore CY"
  - "operatore DECIMAL"
  - "operatore double"
  - "operatore float"
  - "operatore IDispatch"
  - "operatore IUnknown"
  - "operatore long"
  - "operatore SHORT"
ms.assetid: 33c1782f-045a-4673-9619-1d750efc83a9
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Estrattori _variant_t
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Estrai dati dall'oggetto **VARIANT** incapsulato.  
  
## Sintassi  
  
```  
  
      operator short( ) const;   
operator long( ) const;   
operator float( ) const;   
operator double( ) const;   
operator CY( ) const;   
operator _bstr_t( ) const;   
operator IDispatch*( ) const;   
operator bool( ) const;   
operator IUnknown*( ) const;   
operator DECIMAL( ) const;   
operator BYTE( ) const;  
operator VARIANT() const throw();  
operator char() const;  
operator unsigned short() const;  
operator unsigned long() const;  
operator int() const;  
operator unsigned int() const;  
operator __int64() const;  
operator unsigned __int64() const;  
```  
  
## Note  
 Estrae i dati non elaborati dall'oggetto **VARIANT** incapsulato.  Se **VARIANT** non è già il tipo appropriato, **VariantChangeType** viene utilizzato per cercare una conversione e viene generato un errore in caso di errore:  
  
-   **operator short\( \)** Estrae uno **Short** Integer.  
  
-   **operator long\( \)** Estrae un **Long** Integer.  
  
-   **operator float\( \)** Estrae un valore numerico **float**.  
  
-   **operator double\( \)** Estrae un **double** Integer.  
  
-   **operator CY\( \)** Estrae un oggetto **CY**.  
  
-   **operator bool\( \)** Estrae un valore `bool`.  
  
-   **operator DECIMAL\( \)** Estrae un valore **DECIMAL**.  
  
-   **operator BYTE\( \)** Estrae un valore **BYTE**.  
  
-   **operator \_bstr\_t\( \)** Estrae una stringa, che viene incapsulata in un oggetto `_bstr_t`.  
  
-   **operator IDispatch\*\( \)** Estrae un puntatore a interfaccia dispatch da un oggetto **VARIANT** incapsulato.  `AddRef` viene chiamato sul puntatore risultante, pertanto è responsabilità dell'utente chiamare **Release** per liberarlo.  
  
-   **operator IUnknown\*\( \)** Estrae un puntatore a interfaccia COM da un oggetto **VARIANT** incapsulato.  `AddRef` viene chiamato sul puntatore risultante, pertanto è responsabilità dell'utente chiamare **Release** per liberarlo.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Classe \_variant\_t](../cpp/variant-t-class.md)