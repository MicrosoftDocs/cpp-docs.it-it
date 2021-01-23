---
description: Altre informazioni sulla direttiva execution_character_set pragma in Microsoft C/C++
title: execution_character_set pragma
ms.date: 01/22/2021
f1_keywords:
- execution_character_set
- vc-pragma.execution_character_set
helpviewer_keywords:
- pragma, execution_character_set
- execution_character_set pragma
no-loc:
- pragma
ms.openlocfilehash: cc768aa0d35fffc9c387b31870adf47f35073f35
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98712856"
---
# <a name="execution_character_set-no-locpragma"></a>`execution_character_set` pragma

Specifica il set di caratteri di esecuzione usato per i valori letterali stringa e carattere. Questa direttiva non è necessaria per i valori letterali contrassegnati con il `u8` prefisso.

## <a name="syntax"></a>Sintassi

> **`#pragma execution_character_set(`** "*destinazione*" **`)`**

### <a name="parameters"></a>Parametri

*destinazione*\
Specifica il set di caratteri di esecuzione di destinazione. Attualmente l'unico set di esecuzioni di destinazione supportato è "UTF-8".

## <a name="remarks"></a>Osservazioni

Questa direttiva del compilatore è obsoleta a partire da Visual Studio 2015 Update 2. Si consiglia di usare le **`/execution-charset:utf-8`** Opzioni del **`/utf-8`** compilatore o insieme al `u8` prefisso per i valori letterali stringa e carattere Narrow che contengono caratteri estesi. Per altre informazioni sul `u8` prefisso, vedere [valori letterali stringa e carattere](../cpp/string-and-character-literals-cpp.md). Per ulteriori informazioni sulle opzioni del compilatore, vedere [ `/execution-charset` (impostare set di caratteri di esecuzione)](../build/reference/execution-charset-set-execution-character-set.md) e [ `/utf-8` (impostare i set di caratteri di origine e eseguibili su UTF-8)](../build/reference/utf-8-set-source-and-executable-character-sets-to-utf-8.md).

La `#pragma execution_character_set("utf-8")` direttiva indica al compilatore di codificare valori letterali di tipo carattere e Narrow String nel codice sorgente come UTF-8 nell'eseguibile. Questa codifica di output è indipendente dalla codifica del file di origine usata.

Per impostazione predefinita, il compilatore codifica i caratteri narrow e le stringhe strette usando la tabella codici corrente come set di caratteri di esecuzione. Indica che i caratteri Unicode o DBCS al di fuori dell'intervallo della tabella codici corrente vengono convertiti nel carattere di sostituzione predefinito nell'output. I caratteri Unicode e DBCS vengono troncati in base al relativo byte di ordine inferiore, che è quasi mai quello che si desidera. È possibile specificare la codifica UTF-8 per i valori letterali nel file di origine usando un `u8` prefisso. Il compilatore passa le stringhe con codifica UTF-8 all'output senza modifiche. I valori letterali carattere limitati con prefisso U8 devono contenere un byte o troncati nell'output.

Per impostazione predefinita, Visual Studio usa la tabella codici corrente come set di caratteri di origine usato per interpretare il codice sorgente per l'output. Quando un file viene letto, in Visual Studio viene interpretato in base alla tabella codici corrente a meno che non sia stata impostata la tabella codici del file oppure, a meno che non vengano rilevati i caratteri BOM (Byte Order Mark) o UTF-16 all'inizio del file. In alcune versioni di Windows non è possibile impostare UTF-8 come tabella codici corrente. Quando il rilevamento automatico individua i file di origine codificati come UTF-8 senza un BOM in tali versioni, Visual Studio presuppone che siano codificati usando la tabella codici corrente. I caratteri nel file di origine che non rientrano nell'intervallo della tabella codici specificata o rilevata automaticamente possono causare errori e avvisi del compilatore.

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)\
[`/execution-charset` (Impostare il set di caratteri di esecuzione)](../build/reference/execution-charset-set-execution-character-set.md)\
[`/utf-8` (Imposta i set di caratteri di origine ed eseguibile su UTF-8)](../build/reference/utf-8-set-source-and-executable-character-sets-to-utf-8.md)
