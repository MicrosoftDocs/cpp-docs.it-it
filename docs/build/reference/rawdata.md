---
title: -RAWDATA | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /rawdata
dev_langs:
- C++
helpviewer_keywords:
- RAWDATA dumpbin option
- raw data
- -RAWDATA dumpbin option
- /RAWDATA dumpbin option
ms.assetid: 41cba845-5e1f-415e-9fe4-604a52235983
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 28691e636f01174ecfe2a9d48b016523fce67f14
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32374999"
---
# <a name="rawdata"></a>/RAWDATA
```  
/RAWDATA[:{1|2|4|8|NONE[,number]]  
```  
  
## <a name="remarks"></a>Note  
 Questa opzione consente di visualizzare il contenuto non elaborato di ogni sezione nel file. Gli argomenti di controllano il formato dello schermo, come illustrato di seguito:  
  
|Argomento|Risultato|  
|--------------|------------|  
|1|Valore predefinito. Contenuto viene visualizzato in byte esadecimali, nonché come caratteri ASCII se dispongono di una rappresentazione stampata.|  
|2|Contenuto viene visualizzato come valori esadecimali a 2 byte.|  
|4|Contenuto viene visualizzato come valori esadecimali a 4 byte.|  
|8|Contenuto viene visualizzato come valori esadecimali a 8 byte.|  
|NESSUNO|Dati non elaborati sono stati eliminati. Questo argomento è utile per controllare l'output di o tutti.|  
|*Numero*|Le righe visualizzate sono impostate su una larghezza contenente `number` valori per ogni riga.|  
  
 Solo il [/HEADERS](../../build/reference/headers.md) (opzione DUMPBIN) è disponibile per l'utilizzo con i file generati con la [/GL](../../build/reference/gl-whole-program-optimization.md) l'opzione del compilatore.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)