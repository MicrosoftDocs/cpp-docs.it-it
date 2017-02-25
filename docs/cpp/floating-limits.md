---
title: "Limiti sulle costanti a virgola mobile | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "file di intestazione FLOAT.H"
  - "costanti a virgola mobile, limiti"
  - "numeri a virgola mobile, limiti sulle costanti a virgola mobile"
  - "limiti, costanti a virgola mobile"
  - "intervalli, costanti a virgola mobile"
ms.assetid: fc718652-1f4c-4ed8-af60-0e769637459c
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Limiti sulle costanti a virgola mobile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 La tabella seguente elenca i limiti sui valori delle costanti a virgola mobile.  Questi limiti sono definiti anche nel file di intestazione standard FLOAT.H.  
  
### Limiti su costanti a virgola mobile  
  
|Costante|Significato|Valore|  
|--------------|-----------------|------------|  
|FLT\_DIG DBL\_DIG LDBL\_DIG|Numero di cifre, q, tali che un numero a virgola mobile con q cifre decimali possa essere arrotondato in una rappresentazione a virgola mobile e viceversa senza perdita di precisione.|6 15 15|  
|FLT\_EPSILON DBL\_EPSILON LDBL\_EPSILON|Minor numero positivo x tale che x \+ 1 non sia uguale a 1.|1,192092896e–07F 2,2204460492503131e–016 2,2204460492503131e–016|  
|FLT\_GUARD||0|  
|FLT\_MANT\_DIG DBL\_MANT\_DIG LDBL\_MANT\_DIG|Numero di cifre nella radice specificato da FLT\_RADIX nel significando a virgola mobile.  La radice è 2, pertanto questi valori specificano i bit.|24 53 53|  
|FLT\_MAX DBL\_MAX LDBL\_MAX|Massimo numero a virgola mobile rappresentabile.|3,402823466e\+38F 1,7976931348623158e\+308 1,7976931348623158e\+308|  
|FLT\_MAX\_10\_EXP DBL\_MAX\_10\_EXP LDBL\_MAX\_10\_EXP|Massimo numero intero tale che 10 elevato a tale numero sia un numero a virgola mobile rappresentabile.|38 308 308|  
|FLT\_MAX\_EXP DBL\_MAX\_EXP LDBL\_MAX\_EXP|Massimo numero intero tale che FLT\_RADIX elevato a tale numero sia un numero a virgola mobile rappresentabile.|128 1024 1024|  
|FLT\_MIN DBL\_MIN LDBL\_MIN|Valore positivo minimo.|1,175494351e–38F 2,2250738585072014e–308 2,2250738585072014e–308|  
|FLT\_MIN\_10\_EXP DBL\_MIN\_10\_EXP LDBL\_MIN\_10\_EXP|Minimo numero negativo tale che 10 elevato a tale numero sia un numero a virgola mobile rappresentabile.|–37<br /><br /> –307<br /><br /> –307|  
|FLT\_MIN\_EXP DBL\_MIN\_EXP LDBL\_MIN\_EXP|Minimo numero negativo tale che FLT\_RADIX elevato a tale numero sia un numero a virgola mobile rappresentabile.|–125<br /><br /> –1021<br /><br /> –1021|  
|FLT\_NORMALIZE||0|  
|FLT\_RADIX \_DBL\_RADIX \_LDBL\_RADIX|Base della rappresentazione dell'esponente.|2 2 2|  
|FLT\_ROUNDS \_DBL\_ROUNDS \_LDBL\_ROUNDS|Modalità di arrotondamento per l'addizione a virgola mobile.|1 \(vicino\) 1 \(vicino\) 1 \(vicino\)|  
  
> [!NOTE]
>  Le informazioni contenute nella tabella possono variare nelle versioni future del prodotto.  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Limiti per tipi Integer](../cpp/integer-limits.md)