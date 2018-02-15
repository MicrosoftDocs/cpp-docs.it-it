---
title: Direttive assembly ARM | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
ms.assetid: 9cfa8896-ec10-4e77-855a-3135c40d7d2a
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c6d42e099ecf8d3630e54eeb629bb3f9f46fa363
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="arm-assembler-directives"></a>Direttive assembly ARM
La maggior parte, l'assembler ARM Microsoft utilizza il linguaggio assembly ARM, documentato nel capitolo 7 del [Guida degli strumenti dell'assembler ARM](http://go.microsoft.com/fwlink/p/?linkid=246102). Tuttavia, l'implementazione Microsoft di alcune direttive dell'assembly diversi da direttive assembly ARM. In questo articolo vengono illustrate le differenze.  
  
## <a name="microsoft-implementations-of-arm-assembly-directives"></a>Implementazioni di Microsoft delle direttive Assembly ARM  
 AREA  
 L'assembler ARM Microsoft supporta questi attributi AREA: allineare, codice CODEALIGN, i dati, NOINIT, sola lettura, lettura/scrittura, THUMB ARM.  
  
 Tutti tranne quelli THUMB e ARM funzionano come documentato nel [Guida degli strumenti dell'assembler ARM](http://go.microsoft.com/fwlink/p/?linkid=246102).  
  
 Nell'assembler ARM Microsoft, THUMB indica che una sezione di codice contiene codice Thumb ed è il valore predefinito per le sezioni di codice.  ARM indica che la sezione contiene codice ARM.  
  
 ATTR  
 Non supportato.  
  
 CODE16  
 Non è supportato perché implica la sintassi Thumb di pre-registrazione accesso utenti, che non consente l'assembler ARM Microsoft.  Utilizzare la direttiva THUMB, con la sintassi di registrazione accesso utenti.  
  
 COMUNI  
 Specifica di un tipo di allineamento per l'area comune non è supportata.  
  
 DCDO  
 Non supportato.  
  
 DN, QN, SN  
 Specifica di un tipo o una corsia dell'alias di registro non è supportata.  
  
 VOCE  
 Non supportato.  
  
 EQU  
 Specifica di un tipo per il simbolo definito non è supportata.  
  
 ESPORTAZIONE e GLOBAL  
 ```  
EXPORTsym {[type]}  
```  
  
 `sym` è il simbolo da esportare.  `[type]`, se specificato, può essere `[DATA]` per indicare che il simbolo punta ai dati o `[FUNC]` per indicare che il simbolo punta al codice.  
  
 GLOBALE è un sinonimo per l'esportazione.  
  
 EXPORTAS  
 Non supportato.  
  
 FRAME  
 Non supportato.  
  
 Process e (funzione)  
 Sebbene la sintassi di assembly supporta la specifica di un oggetto personalizzato convenzione di chiamata sulle procedure, elencando i registri salvataggio chiamante e quelle chiamato salvataggio, l'assembler ARM Microsoft accetta la sintassi ma ignora gli elenchi di registro.  Le informazioni di debug che viene generate dall'assembler supportano solo la convenzione di chiamata predefinita.  
  
 IMPORTAZIONE ed EXTERN  
 ```  
IMPORT sym{, WEAK alias{, TYPE t}}  
```  
  
 `sym` è il nome del simbolo da importare.  
  
 Se debole `alias` è specificato, indica che `sym` è un esterno debole. Se non viene trovata alcuna definizione per tale in fase di collegamento, è possibile associare invece tutti i riferimenti `alias`.  
  
 Se tipo `t` non viene specificato, `t` indica come il linker deve tentare di risolvere `sym`.  Questi valori per `t` sono possibili:   
1-non eseguire la ricerca della libreria di `sym`  
2: eseguire una ricerca di libreria `sym`  
3-`sym` è un alias per `alias` (impostazione predefinita)  
  
 EXTERN è un sinonimo per l'importazione, con la differenza che `sym` vengono importati solo se sono presenti riferimenti a esso nell'assembly corrente.  
  
 MACRO  
 L'utilizzo di una variabile per contenere il codice di condizione di una macro non è supportato. Valori predefiniti per la macro di parametri non sono supportati.  
  
 NOFP  
 Non supportato.  
  
 CONSENSO ESPLICITO, DURATA (TTL), SUBT  
 Non è supportato poiché l'assembler ARM Microsoft non produce elenchi.  
  
 PRESERVE8  
 Non supportato.  
  
 RELOC  
 `RELOC n` può solo seguire un'istruzione o una direttiva di definizione dati. Non vi è alcun "simbolo anonimo" che può essere ripristinato.  
  
 RICHIEDI  
 Non supportato.  
  
 REQUIRE8  
 Non supportato.  
  
 THUMBX  
 Non è supportato poiché l'assembler ARM Microsoft non supporta il set di istruzioni Thumb-2EE.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento della riga di comando di Assembler ARM](../../assembler/arm/arm-assembler-command-line-reference.md)   
 [Messaggi di diagnostica assembler ARM](../../assembler/arm/arm-assembler-diagnostic-messages.md)