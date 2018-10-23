---
title: execution_character_set | Microsoft Docs
ms.custom: ''
ms.date: 10/18/2018
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
f1_keywords:
- execution_character_set
- vc-pragma.execution_character_set
dev_langs:
- C++
helpviewer_keywords:
- pragma execution_character_set
ms.assetid: 32248cbc-7c92-4dca-8442-230c052b53ad
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1557cf0ee42b10627618fff8a30ea6d5a6fbb169
ms.sourcegitcommit: 0164af5615389ffb1452ccc432eb55f6dc931047
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/23/2018
ms.locfileid: "49807939"
---
# <a name="executioncharacterset"></a>execution_character_set

Specifica il set di caratteri di esecuzione utilizzato per i valori letterali stringa e carattere. Questa direttiva non è necessaria per i valori letterali contrassegnati con il prefisso u8.

## <a name="syntax"></a>Sintassi

```
#pragma execution_character_set("target")
```

### <a name="parameters"></a>Parametri

*target*<br/>
Specifica il set di caratteri di esecuzione di destinazione. Attualmente l'esecuzione di destinazione solo imposta supportata è "utf-8".

## <a name="remarks"></a>Note

Questa direttiva del compilatore è obsoleta a partire da Visual Studio 2015 Update 2. È consigliabile usare la `/execution-charset:utf-8` o `/utf-8` le opzioni del compilatore insieme utilizzando il `u8` prefisso su narrow valori letterali stringa e carattere che contengono caratteri estesi. Per altre informazioni sul `u8` prefix, vedere [String and Character Literals](../cpp/string-and-character-literals-cpp.md). Per altre informazioni sulle opzioni del compilatore, vedere [(Set esecuzione Set di caratteri) /execution-charset](../build/reference/execution-charset-set-execution-character-set.md) e [/utf-8 (Imposta origine ed eseguibili set di caratteri UTF-8)](../build/reference/utf-8-set-source-and-executable-character-sets-to-utf-8.md).

Il `#pragma execution_character_set("utf-8")` direttiva indica al compilatore di codificare i caratteri narrow e valori letterali stringa a caratteri narrow nel codice sorgente come UTF-8 nel file eseguibile. Questa codifica dell'output è indipendente dal file di origine codifica usata.

Per impostazione predefinita, il compilatore codifica caratteri narrow e stringhe a caratteri narrow usando la tabella codici corrente come il set di caratteri di esecuzione. Ciò significa che vengono convertiti caratteri Unicode o DBCS in un valore letterale che non rientrano nell'intervallo della tabella codici corrente per il carattere di sostituzione predefinito nell'output. Caratteri Unicode e DBCS vengono troncati ai byte meno significativo. Si tratta quasi certamente non previsto. È possibile specificare la codifica UTF-8 per i valori letterali nel file di origine usando un `u8` prefisso. Il compilatore passa queste stringhe con codificata UTF-8 sull'output invariato. Valori letterali carattere Narrow hanno come preceduti u8 non devono superare un byte o che sono state troncate nell'output.

Per impostazione predefinita, Visual Studio Usa la tabella codici corrente come il set di caratteri di origine utilizzato per interpretare il codice sorgente per l'output. Durante la lettura di un file, Visual Studio viene interpretata in base alla tabella codici corrente a meno che non è stata impostata la tabella codici di file, a meno che un ordine dei byte (BOM) o caratteri UTF-16 vengono rilevate all'inizio del file. Poiché UTF-8 non può essere impostata come la tabella codici corrente, quando il rilevamento automatico rileva i file di origine codificati come UTF-8 senza BOM, Visual Studio presuppone che questi caratteri vengono codificati utilizzando la tabella codici corrente. Caratteri nel file di origine compreso nell'intervallo specificato o automaticamente rilevati codici possono causare errori e avvisi del compilatore.

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)<br/>
[/Execution-CharSet (set esecuzione Set di caratteri)](../build/reference/execution-charset-set-execution-character-set.md)<br/>
[/utf/8 (imposta i set di caratteri eseguibili e di origine su UTF/8)](../build/reference/utf-8-set-source-and-executable-character-sets-to-utf-8.md)