---
title: /RAWDATA
ms.date: 11/04/2016
f1_keywords:
- /rawdata
helpviewer_keywords:
- RAWDATA dumpbin option
- raw data
- -RAWDATA dumpbin option
- /RAWDATA dumpbin option
ms.assetid: 41cba845-5e1f-415e-9fe4-604a52235983
ms.openlocfilehash: 02af8df04d80c20c5d7629b51abab6295a21f5e5
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57816464"
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

Solo le [/HEADERS](headers.md) (opzione dumpbin) è disponibile per l'uso con i file generati con la [/GL](gl-whole-program-optimization.md) opzione del compilatore.

## <a name="see-also"></a>Vedere anche

[Opzioni di DUMPBIN](dumpbin-options.md)
