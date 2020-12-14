---
description: Altre informazioni su:/RAWDATA
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
ms.openlocfilehash: efe2001c0170b8539b98902591849dedaf0fb819
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97225375"
---
# <a name="rawdata"></a>/RAWDATA

```
/RAWDATA[:{1|2|4|8|NONE[,number]]
```

## <a name="remarks"></a>Commenti

Questa opzione consente di visualizzare il contenuto non elaborato di ogni sezione del file. Gli argomenti controllano il formato della visualizzazione, come mostrato di seguito:

|Argomento|Risultato|
|--------------|------------|
|1|Valore predefinito. I contenuti vengono visualizzati in byte esadecimali e anche come caratteri ASCII se hanno una rappresentazione stampata.|
|2|I contenuti vengono visualizzati come valori esadecimali a 2 byte.|
|4|I contenuti vengono visualizzati come valori esadecimali a 4 byte.|
|8|I contenuti vengono visualizzati come valori esadecimali a 8 byte.|
|NONE|I dati non elaborati vengono eliminati. Questo argomento è utile per controllare l'output di/ALL.|
|*Number*|Le righe visualizzate sono impostate su una larghezza che include `number` valori per riga.|

Solo l'opzione [/HEADERS](headers.md) DUMPBIN può essere usata nei file generati con l'opzione del compilatore [/GL](gl-whole-program-optimization.md).

## <a name="see-also"></a>Vedi anche

[Opzioni di DUMPBIN](dumpbin-options.md)
