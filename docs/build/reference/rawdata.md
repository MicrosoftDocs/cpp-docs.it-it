---
title: -RAWDATA | Microsoft Docs
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
ms.openlocfilehash: 38677b0e67ddaec5b6ef0e3fcffed1bed27826b6
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45707174"
---
# <a name="rawdata"></a>/RAWDATA

```
/RAWDATA[:{1|2|4|8|NONE[,number]]
```

## <a name="remarks"></a>Note

Questa opzione consente di visualizzare il contenuto non elaborato di ogni sezione nel file. Gli argomenti di controllano il formato di visualizzazione, come illustrato di seguito:

|Argomento|Risultato|
|--------------|------------|
|1|Valore predefinito. Contenuto viene visualizzato in byte esadecimali e anche come caratteri ASCII, se hanno una rappresentazione stampata.|
|2|Contenuto viene visualizzato come valori esadecimali a 2 byte.|
|4|Contenuto viene visualizzato come valori a 4 byte esadecimali.|
|8|Contenuto viene visualizzato come valori a 8 byte esadecimali.|
|NESSUNO|Dati non elaborati sono stati eliminati. Questo argomento è utile per controllare l'output di /all.|
|*Numero*|Le righe visualizzate sono impostate su una larghezza che contiene `number` valori per ogni riga.|

Solo le [/HEADERS](../../build/reference/headers.md) (opzione dumpbin) è disponibile per l'uso con i file generati con la [/GL](../../build/reference/gl-whole-program-optimization.md) opzione del compilatore.

## <a name="see-also"></a>Vedere anche

[Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)