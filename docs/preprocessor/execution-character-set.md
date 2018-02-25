---
title: execution_character_set | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- execution_character_set
- vc-pragma.execution_character_set
dev_langs:
- C++
helpviewer_keywords:
- pragma execution_character_set
ms.assetid: 32248cbc-7c92-4dca-8442-230c052b53ad
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: eda04de6975708b2460e53681e50f8ea4f9dbcd3
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="executioncharacterset"></a>execution_character_set
Specifica il set di caratteri di esecuzione utilizzato per i valori letterali stringa e carattere. Questa direttiva, non è necessaria per i valori letterali contrassegnati con il prefisso u8.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#pragma execution_character_set("target")  
```  
  
#### <a name="parameters"></a>Parametri  
 `target`  
 Specifica il set di caratteri di esecuzione di destinazione. L'esecuzione di destinazione solo imposta supportato attualmente è "utf-8".  
  
## <a name="remarks"></a>Note  
 Questa direttiva del compilatore è obsoleta a partire da Visual Studio 2015 Update 2. È consigliabile utilizzare il **/execution-charset:utf-8** o **/utf-8** opzioni del compilatore insieme utilizzando la `u8` prefisso su "narrow" stringa di valori letterali carattere e che contengono estesi caratteri. Per ulteriori informazioni sul `u8` prefix, vedere [stringa e valori letterali carattere](../cpp/string-and-character-literals-cpp.md). Per ulteriori informazioni sulle opzioni del compilatore, vedere [/execution-charset (impostare esecuzione Character Set)](../build/reference/execution-charset-set-execution-character-set.md) e [/utf-8 (Imposta origine e file eseguibile di set di caratteri UTF-8)](../build/reference/utf-8-set-source-and-executable-character-sets-to-utf-8.md).  
  
 Il `#pragma execution_character_set("utf-8")` direttiva indica al compilatore di codifica dei caratteri narrow e valori letterali stringa a caratteri narrow nel codice sorgente come UTF-8 nel file eseguibile. Questa codifica output è indipendente il file di origine codifica usata.  
  
 Per impostazione predefinita, il compilatore codifica i caratteri "narrow" e le stringhe "narrow" utilizzando la tabella codici corrente come il set di caratteri di esecuzione. Ciò significa che i caratteri Unicode o DBCS in un valore letterale che non rientrano nell'intervallo della tabella codici corrente vengono convertiti nel carattere di sostituzione predefinito nell'output. Caratteri Unicode e DBCS vengono troncati ai byte di ordine inferiore. Si tratta quasi certamente non quella desiderata. È possibile specificare la codifica UTF-8 per i valori letterali nel file di origine utilizzando un `u8` prefisso. Nell'output non modificato, il compilatore passa le stringhe con codificata UTF-8. Valori letterali carattere "narrow" utilizzando u8 il prefisso devono essere contenuta in un byte o che sono state troncate nell'output.  
  
 Per impostazione predefinita, Visual Studio utilizza la tabella codici corrente come il set di caratteri di origine utilizzato per interpretare il codice sorgente per l'output. Durante la lettura di un file, Visual Studio interpreta in base alla tabella codici corrente a meno che non è stata impostata la tabella codici di file, a meno che un ordine dei byte (BOM) o caratteri UTF-16 vengono rilevati all'inizio del file. Poiché UTF-8 non può essere impostato come la tabella codici corrente, quando il rilevamento automatico rileva i file di origine, codificati come UTF-8 senza un indicatore ordine byte, Visual Studio si presuppone che vengono codificati utilizzando la tabella codici corrente. Caratteri nel file di origine non compreso nell'intervallo dell'oggetto specificato o automaticamente rilevati codici possono causare errori e avvisi del compilatore.  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive pragma e parola chiave pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)   
 [/Execution-CharSet (impostare esecuzione Character Set)](../build/reference/execution-charset-set-execution-character-set.md)   
 [/utf/8 (imposta i set di caratteri eseguibili e di origine su UTF/8)](../build/reference/utf-8-set-source-and-executable-character-sets-to-utf-8.md)