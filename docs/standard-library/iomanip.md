---
title: '&lt;iomanip&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- iomanip/std::<iomanip>
- <iomanip>
dev_langs: C++
helpviewer_keywords: iomanip header
ms.assetid: 3681c346-4763-4037-bba4-cf0dc3447974
caps.latest.revision: "21"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7c2f229f5706902eac1c0326cfb446b4dc650c54
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ltiomanipgt"></a>&lt;iomanip&gt;
Includere l'intestazione standard `iostreams` `<iomanip>` per definire diversi manipolatori che accettano un solo argomento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <iomanip>  
  
```  
  
## <a name="remarks"></a>Note  
 Ciascuno di questi manipolatori restituisce un tipo non specificato, a cui viene assegnato un nome compreso tra **T1** e **T10**, che esegue l'overload sia di `basic_istream`\<**Elem**, **Tr**>`::`[operator>>](../standard-library/istream-operators.md#op_gt_gt) sia di `basic_ostream`\<**Elem**, **Tr**>`::`[operator<<](../standard-library/ostream-operators.md#op_lt_lt).  
  
### <a name="manipulators"></a>Manipolatori  
  
|||  
|-|-|  
|[get_money](../standard-library/iomanip-functions.md#iomanip_get_money)|Ottiene un importo monetario, facoltativamente in formato internazionale.|  
|[get_time](../standard-library/iomanip-functions.md#iomanip_get_time)|Ottiene un'ora in una struttura di ora usando un formato specificato.|  
|[put_money](../standard-library/iomanip-functions.md#iomanip_put_money)|Fornisce un importo monetario, facoltativamente in formato internazionale.|  
|[put_time](../standard-library/iomanip-functions.md#iomanip_put_time)|Fornisce un'ora in una struttura di ora e una stringa di formato da usare.|  
|[quoted](../standard-library/iomanip-functions.md#quoted)|Abilita pratiche sequenze di andata e ritorno delle stringhe con operatori di inserimento ed estrazione.|  
|[resetiosflags](../standard-library/iomanip-functions.md#resetiosflags)|Cancella i flag specificati.|  
|[setbase](../standard-library/iomanip-functions.md#setbase)|Imposta la base per i valori integer.|  
|[setfill](../standard-library/iomanip-functions.md#setfill)|Imposta il carattere che verrà usato per riempire gli spazi in una visualizzazione giustificata a destra.|  
|[setiosflags](../standard-library/iomanip-functions.md#setiosflags)|Imposta i flag specificati.|  
|[setprecision](../standard-library/iomanip-functions.md#setprecision)|Imposta la precisione per i valori a virgola mobile.|  
|[setw](../standard-library/iomanip-functions.md#setw)|Specifica la larghezza del campo di visualizzazione.|  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)  (Sicurezza dei thread nella libreria standard C++)  
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)



