---
title: "Classe _variant_t | Microsoft Docs"
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
  - "Variant"
  - "_variant_t"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_variant_t (classe)"
  - "_variant_t (classe), funzioni membro"
  - "_variant_t (classe), operatori"
  - "VARIANT (oggetto)"
  - "VARIANT (oggetto), incapsulamento COM"
ms.assetid: 6a3cbd4e-0ae8-425e-b4cf-ca0df894c93f
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe _variant_t
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Un oggetto `_variant_t` incapsula il tipo di dati `VARIANT`.  La classe gestisce l'allocazione delle risorse e la disallocazione ed effettua chiamate di funzione a **VariantInit** e **VariantClear** in base alle proprie esigenze.  
  
### Costruzione  
  
|||  
|-|-|  
|[\_variant\_t](../cpp/variant-t-variant-t.md)|Costruisce un oggetto `_variant_t`.|  
  
### Operazioni  
  
|||  
|-|-|  
|[Connetti](../cpp/variant-t-attach.md)|Associa un oggetto **VARIANT** nell'oggetto `_variant_t`.|  
|[Clear](../cpp/variant-t-clear.md)|Rimuove l'oggetto **VARIANT** incapsulato.|  
|[ChangeType](../cpp/variant-t-changetype.md)|Modifica il tipo di oggetto `_variant_t` nel **VARTYPE** indicato.|  
|[Disconnetti](../cpp/variant-t-detach.md)|Rimuove l'oggetto **VARIANT** incapsulato dall'oggetto `_variant_t`.|  
|[SetString](../cpp/variant-t-setstring.md)|Assegna una stringa all’oggetto `_variant_t`.|  
  
### Operatori  
  
|||  
|-|-|  
|[Operator \=](../cpp/variant-t-operator-equal.md)|Assegnare un nuovo valore a un oggetto `_variant_t` esistente.|  
|[operator \=\=, \!\=](../cpp/variant-t-relational-operators.md)|Confronta due oggetti `_variant_t` per uguaglianza o di disuguaglianza.|  
|[Extractors](../cpp/variant-t-extractors.md)|Estrae dati dall'oggetto **VARIANT** incapsulato.|  
  
## Specifica END Microsoft  
  
## Requisiti  
 **Intestazione:** comutil.h  
  
 **Lib:** comsuppw.lib o comsuppwd.lib \(vedere [\/Zc:wchar\_t \(Tipo nativo wchar\_t\)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) per ulteriori informazioni\)  
  
## Vedere anche  
 [Classi di supporto COM del compilatore](../cpp/compiler-com-support-classes.md)