---
title: "Limiti sulle costanti a virgola mobile | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "costanti, virgola mobile"
  - "file di intestazione FLOAT.H"
  - "costanti a virgola mobile, limiti"
  - "numeri a virgola mobile, limiti sulle costanti a virgola mobile"
  - "limiti, costanti a virgola mobile"
  - "intervalli, costanti a virgola mobile"
ms.assetid: 2d975868-2af6-45d7-a8af-db79f2c6b67b
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Limiti sulle costanti a virgola mobile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 I limiti sui valori delle costanti a virgola mobile sono indicati nella tabella seguente.  Queste informazioni sono contenute nel file di intestazione FLOAT.H.  
  
### Limiti su costanti a virgola mobile  
  
|Costante|Significato|Valore|  
|--------------|-----------------|------------|  
|**FLT\_DIGDBL\_DIGLDBL\_DIG**|Numero di cifre, *q*, tali che un numero a virgola mobile con *q* cifre decimali possa essere arrotondato in una rappresentazione a virgola mobile e viceversa senza perdita di precisione.|6 15 15|  
|**FLT\_EPSILONDBL\_EPSILONLDBL\_EPSILON**|Minor numero positivo *x* tale che *x* \+ 1 non sia uguale a 1|1,192092896e–07F 2,2204460492503131e–016 2,2204460492503131e–016|  
|**FLT\_GUARD**||0|  
|**FLT\_MANT\_DIGDBL\_MANT\_DIGLDBL\_MANT\_DIG**|Numero di cifre nella base specificato da **FLT\_RADIX** nella parte significativa a virgola mobile.  La base è 2, pertanto questi valori specificano i bit.|24 53 53|  
|**FLT\_MAXDBL\_MAXLDBL\_MAX**|Massimo numero a virgola mobile rappresentabile.|3,402823466e\+38F 1,7976931348623158e\+308 1,7976931348623158e\+308|  
|**FLT\_MAX\_10\_EXPDBL\_MAX\_10\_EXPLDBL\_MAX\_10\_EXP**|Massimo numero intero tale che 10 elevato a tale numero sia un numero a virgola mobile rappresentabile.|38 308 308|  
|**FLT\_MAX\_EXPDBL\_MAX\_EXPLDBL\_MAX\_EXP**|Massimo numero intero tale che **FLT\_RADIX** elevato a tale numero sia un numero a virgola mobile rappresentabile.|128 1024 1024|  
|**FLT\_MINDBL\_MINLDBL\_MIN**|Valore positivo minimo.|1,175494351e–38F 2,2250738585072014e–308 2,2250738585072014e–308|  
|**FLT\_MIN\_10\_EXPDBL\_MIN\_10\_EXPLDBL\_MIN\_10\_EXP**|Minimo numero negativo tale che 10 elevato a tale numero sia un numero a virgola mobile rappresentabile.|–37<br /><br /> –307<br /><br /> –307|  
|**FLT\_MIN\_EXPDBL\_MIN\_EXPLDBL\_MIN\_EXP**|Minimo numero negativo tale che **FLT\_RADIX** elevato a tale numero sia un numero a virgola mobile rappresentabile.|–125<br /><br /> –1021<br /><br /> –1021|  
|**FLT\_NORMALIZE**||0|  
|**FLT\_RADIX\_DBL\_RADIX\_LDBL\_RADIX**|Base della rappresentazione dell'esponente.|2 2 2|  
|**FLT\_ROUNDS\_DBL\_ROUNDS\_LDBL\_ROUNDS**|Modalità di arrotondamento per l'addizione a virgola mobile.|1 \(vicino\) 1 \(vicino\) 1 \(vicino\)|  
  
 Si noti che le informazioni contenute nella tabella precedente possono variare nelle implementazioni future.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Costanti a virgola mobile C](../c-language/c-floating-point-constants.md)