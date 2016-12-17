---
title: "_bstr_t::copy | Microsoft Docs"
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
  - "_bstr_t::copy"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "oggetto BSTR, copia"
  - "Copy (metodo)"
ms.assetid: 00ba7311-e82e-4a79-8106-5329fa2f869a
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _bstr_t::copy
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Costruisce una copia dell'oggetto `BSTR` incapsulato.  
  
## Sintassi  
  
```  
  
      BSTR copy(  
  bool fCopy = true  
) const;  
```  
  
#### Parametri  
 `fCopy`  
 Se **true**, **copy** restituisce una copia dell'oggetto `BSTR`contenuto, in caso contrario **copy** restituisce l'oggetto BSTR effettivo.  
  
## Note  
 Restituisce una copia allocata dell'oggetto `BSTR` incapsulato.  
  
## Esempio  
  
```  
STDMETHODIMP CAlertMsg::get_ConnectionStr(BSTR *pVal){ //  m_bsConStr is _bstr_t  
   *pVal = m_bsConStr.copy();  
}  
```  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [\_bstr\_t Class](../cpp/bstr-t-class.md)