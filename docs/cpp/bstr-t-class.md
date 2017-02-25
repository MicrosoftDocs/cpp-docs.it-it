---
title: "_bstr_t Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_bstr_t"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_bstr_t (classe)"
  - "oggetto BSTR"
  - "oggetto BSTR, incapsulamento COM"
ms.assetid: 58841fef-fe21-4a84-aab9-780262b5201f
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# _bstr_t Class
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Un oggetto `_bstr_t` incapsula il [tipo di dati BSTR](http://msdn.microsoft.com/it-it/1b2d7d2c-47af-4389-a6b6-b01b7e915228).  La classe gestisce l'allocazione e la deallocazione delle risorse con chiamate di funzione a **SysAllocString** e a**SysFreeString** nonché ad altre API `BSTR`, quando necessario.  La classe `_bstr_t` utilizza il conteggio dei riferimenti per evitare un sovraccarico eccessivo.  
  
### Costruzione  
  
|||  
|-|-|  
|[\_bstr\_t](../cpp/bstr-t-bstr-t.md)|Costruisce un oggetto `_bstr_t`.|  
  
### Operazioni  
  
|||  
|-|-|  
|[Assign](../cpp/bstr-t-assign.md)|Copia `BSTR` in  `BSTR` sottoposto a wrapping da un oggetto `_bstr_t`.|  
|[Connetti](../cpp/bstr-t-attach.md)|Collega un wrapper `_bstr_t` a  `BSTR`.|  
|[copy](../cpp/bstr-t-copy.md)|Costruisce una copia dell'oggetto `BSTR` incapsulato.|  
|[Disconnetti](../cpp/bstr-t-detach.md)|Restituisce `BSTR` sottoposto a wrapping da un oggetto `_bstr_t` e rimuove `BSTR` da `_bstr_t`.|  
|[GetAddress](../cpp/bstr-t-getaddress.md)|Punta a `BSTR` sottoposto a wrapping da un oggetto `_bstr_t`.|  
|[GetBSTR](../cpp/bstr-t-getbstr.md)|Punta all'inizio dell'oggetto `BSTR` sottoposto a wrapping da `_bstr_t`.|  
|[length](../cpp/bstr-t-length.md)|Restituisce il numero di caratteri presenti in `_bstr_t`.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator \=](../cpp/bstr-t-operator-equal.md)|Assegna un nuovo valore a un oggetto `_bstr_t` esistente.|  
|[operatore \+\=](../cpp/bstr-t-operator-add-equal-plus.md)|Aggiunge caratteri alla fine dell'oggetto `_bstr_t`.|  
|[operatore \+](../cpp/bstr-t-operator-add-equal-plus.md)|Concatena due stringhe.|  
|[operatore \!](../cpp/bstr-t-operator-logical-not.md)|Controlla se `BSTR` incapsulato è una stringa **NULL**.|  
|[operatore \=\=, \!\=, \<, \>, \<\=, \>\=](../cpp/bstr-t-relational-operators.md)|Confronta due oggetti `_bstr_t`.|  
|[operatore wchar\_t\* &#124; char\*](../cpp/bstr-t-wchar-t-star-bstr-t-char-star.md)|Estrae i puntatori all'oggetto Unicode incapsulato o all'oggetto multibyte `BSTR`.|  
  
## Fine sezione specifica Microsoft  
  
## Requisiti  
 **Header:** comutil.h  
  
 **Lib:** comsuppw.lib o comsuppwd.lib \(per ulteriori informazioni, vedere [\/Zc:wchar\_t \(Tipo nativo wchar\_t\)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md)\)  
  
## Vedere anche  
 [Classi di supporto COM del compilatore](../cpp/compiler-com-support-classes.md)