---
title: Direttive assembly ARM | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: reference
dev_langs:
- C++
ms.assetid: 9cfa8896-ec10-4e77-855a-3135c40d7d2a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5c37e010caa6c7cfb44ddaf2f7dd1e28bbb5c291
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45717704"
---
# <a name="arm-assembler-directives"></a>Direttive assembly ARM

Nella maggior parte, l'assembler ARM Microsoft Usa il linguaggio assembly ARM, documentato nel [del compilatore ARM armasm Guida di riferimento](http://infocenter.arm.com/help/topic/com.arm.doc.dui0802b/index.html). Tuttavia, l'implementazione Microsoft di alcune direttive dell'assembly è diverso dalle direttive assembly ARM. Questo articolo illustra le differenze.

## <a name="microsoft-implementations-of-arm-assembly-directives"></a>Implementazioni di Microsoft delle direttive Assembly ARM

- AREA

   L'assembler ARM Microsoft supporta questi `AREA` attributi: `ALIGN`, `CODE`, `CODEALIGN`, `DATA`, `NOINIT`, `READONLY`, `READWRITE`, `THUMB`, `ARM`.

   Tutti tranne `THUMB` e `ARM` funzionano esattamente come documentato nel [compilatore ARM armasm Guida di riferimento](http://infocenter.arm.com/help/topic/com.arm.doc.dui0802b/index.html).

   Nell'assembler ARM Microsoft, `THUMB` indica che un `CODE` sezione contiene codice Thumb ed è il valore predefinito per `CODE` sezioni.  `ARM` indica che la sezione contiene codice ARM.

- ATTR

   Non supportato.

- ORGANIZZAZIONE16

   Non è supportata perché implica la sintassi di Thumb pre-registrazione accesso utenti, che non consente l'assembler ARM Microsoft.  Usare il `THUMB` direttiva, invece, con sintassi di registrazione accesso utenti.

- COMUNI

   Specifica di un tipo di allineamento per l'area comune non è supportata.

- DCDO

   Non supportato.

- `DN`, `QN`, `SN`

   Specifica di un tipo o una corsia dell'alias di registrazione non è supportata.

- VOCE

   Non supportato.

- EQU

   Specifica di un tipo per il simbolo definito non è supportata.

- `EXPORT` e `GLOBAL`

   Specifica le esportazioni usando questa sintassi:

   > **ESPORTARE**|**GLOBAL** <em>sym</em>{**[**<em>tipo</em>**]**}

   *sym* è il simbolo da esportare.  [*tipo*], se specificato, può essere `[DATA]` per indicare che il simbolo punta ai dati o `[FUNC]` per indicare che il simbolo punta al codice. `GLOBAL` è un sinonimo `EXPORT`.

- EXPORTAS

   Non supportato.

- FRAME

   Non supportato.

- `FUNCTION` e `PROC`

   Sebbene la sintassi di assembly supporta la specifica di un oggetto personalizzato convenzione di chiamata sulle procedure visualizzando l'elenco di registri salvataggio chiamante e quelli destinati chiamato salvataggio, l'assembler ARM Microsoft accetta la sintassi ma ignora gli elenchi di registrazione.  Le informazioni di debug che viene generate tramite l'assembler supportano solo la convenzione di chiamata predefinita.

- `IMPORT` e `EXTERN`

   Specifica le importazioni usando questa sintassi:

   > **IMPORTAZIONE**|**EXTERN** *sym*{**, debole** *alias*{**, tipo** *t*}}

   *sym* è il nome del simbolo da importare.

   Se `WEAK` *alias* viene specificato, che indica *sym* è un esterno debole. Se non viene trovata alcuna definizione per tale in fase di collegamento, quindi associare invece tutti i riferimenti a esso *alias*.

   Se `TYPE` *t* viene specificato, quindi *t* indica come il linker deve tentare di risolvere *sym*.  Questi valori per *t* sono possibili:

   |Valore|Descrizione|
   |-|-|
   |1|Esegue la ricerca della libreria per *sym*|
   |2|Eseguire una ricerca di libreria *sym*|
   |3|*sym* è un alias per *alias* (impostazione predefinita)|

   `EXTERN` è un sinonimo `IMPORT`, ad eccezione del fatto che *sym* viene importato solo se sono presenti riferimenti a esso nell'assembly corrente.

- MACRO

   Non è supportato l'uso di una variabile per contenere il codice di condizione di una macro. I valori predefiniti per i parametri non sono supportati (macro).

- NOFP

   Non supportato.

- `OPT`, `TTL`, `SUBT`

   Non è supportata poiché l'assembler ARM Microsoft non produce gli elenchi.

- PRESERVE8

   Non supportato.

- RILOCAZIONE

   `RELOC n` può solo seguire un'istruzione o una direttiva di definizione dei dati. Non vi è alcun "simbolo anonimo" che può essere riposizionata.

- RICHIEDI

   Non supportato.

- REQUIRE8

   Non supportato.

- THUMBX

   Non è supportato poiché l'assembler ARM Microsoft non supporta il set di istruzioni Thumb-2EE.

## <a name="see-also"></a>Vedere anche

[Riferimenti alla riga di comando dell'assembler ARM](../../assembler/arm/arm-assembler-command-line-reference.md)<br/>
[Messaggi di diagnostica assembler ARM](../../assembler/arm/arm-assembler-diagnostic-messages.md)<br/>
