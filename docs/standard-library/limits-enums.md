---
title: Enumerazioni &lt;limits&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: c86680a2-ba97-4ed9-8c20-a448857d7dc5
caps.latest.revision: 11
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: e0f4b6ca5d11207787f9ff4f27b21dbbc78080c0
ms.lasthandoff: 02/24/2017

---
# <a name="ltlimitsgt-enums"></a>Enumerazioni &lt;limits&gt;
|||  
|-|-|  
|[Enumerazione float_denorm_style](#float_denorm_style_enumeration)|[Enumerazione float_round_style](#float_round_style_enumeration)|  
  
##  <a name="a-namefloatdenormstyleenumerationa--floatdenormstyle-enumeration"></a><a name="float_denorm_style_enumeration"></a>  Enumerazione float_denorm_style  
 L'enumerazione descrive i vari metodi che un'implementazione può scegliere per la rappresentazione di un valore a virgola mobile denormalizzato, ovvero troppo piccolo per essere rappresentato come valore normalizzato.  
  
```
enum float_denorm_style {
    denorm_indeterminate = -1,
    denorm_absent = 0,
    denorm_present = 1    };
```  
  
### <a name="return-value"></a>Valore restituito  
 L'enumerazione restituisce:  
  
- **denorm_indeterminate** se la presenza o l'assenza di form denormalizzato non può essere determinata al momento della conversione.  
  
- **denorm_absent** se non sono presenti form denormalizzati.  
  
- **denorm_present** se sono presenti form denormalizzati.  
  
### <a name="example"></a>Esempio  
  Vedere [numeric_limits::has_denorm](../standard-library/numeric-limits-class.md#numeric_limits__has_denorm) per un esempio in cui è possibile accedere ai valori di questa enumerazione.  
  
##  <a name="a-namefloatroundstyleenumerationa--floatroundstyle-enumeration"></a><a name="float_round_style_enumeration"></a>  Enumerazione float_round_style  
 L'enumerazione descrive i vari metodi che un'implementazione può scegliere per l'arrotondamento di un valore a virgola mobile in un valore intero.  
  
```
enum float_round_style {    
    round_indeterminate = -1,
    round_toward_zero = 0,
    round_to_nearest = 1,
    round_toward_infinity = 2,
    round_toward_neg_infinity = 3    };
```  
  
### <a name="return-value"></a>Valore restituito  
 L'enumerazione restituisce:  
  
- **round_indeterminate** se il metodo di arrotondamento non può essere determinato.  
  
- **round_toward_zero** se l'arrotondamento è a zero.  
  
- **round_to_nearest** se l'arrotondamento è al numero intero più vicino.  
  
- **round_toward_infinity** se l'arrotondamento si allontana da zero.  
  
- **round_toward_neg_infinity** se l'arrotondamento è al massimo numero intero negativo.  
  
### <a name="example"></a>Esempio  
  Vedere [numeric_limits::round_style](../standard-library/numeric-limits-class.md#numeric_limits__round_style) per un esempio in cui è possibile accedere ai valori di questa enumerazione.  
  
## <a name="see-also"></a>Vedere anche  
 [\<limits>](../standard-library/limits.md)




