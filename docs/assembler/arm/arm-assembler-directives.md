---
description: 'Altre informazioni su: direttive assembler ARM'
title: Direttive assembly ARM
ms.date: 08/30/2018
ms.assetid: 9cfa8896-ec10-4e77-855a-3135c40d7d2a
ms.openlocfilehash: 8362453f2113922c5e834d1d68583b4199cf8d4c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97118118"
---
# <a name="arm-assembler-directives"></a>Direttive assembly ARM

Nella maggior parte dei casi, l'assembler ARM Microsoft usa il linguaggio di assembly ARM, documentato nella [Guida di riferimento per il compilatore ARM](http://infocenter.arm.com/help/topic/com.arm.doc.dui0802b/index.html). Tuttavia, le implementazioni Microsoft di alcune direttive assembly sono diverse dalle direttive Assembly ARM. Questo articolo illustra le differenze.

## <a name="microsoft-implementations-of-arm-assembly-directives"></a>Implementazioni Microsoft delle direttive Assembly ARM

- AREA

   Microsoft ARM Assembler supporta questi `AREA` attributi: `ALIGN` , `CODE` , `CODEALIGN` , `DATA` , `NOINIT` , `READONLY` , `READWRITE` , `THUMB` , `ARM` .

   Tutti tranne `THUMB` e `ARM` funzionano come descritto nella Guida di riferimento per il [compilatore ARM](http://infocenter.arm.com/help/topic/com.arm.doc.dui0802b/index.html).

   Nell'assembler ARM Microsoft, `THUMB` indica che una `CODE` sezione contiene il codice Thumb ed è l'impostazione predefinita per le `CODE` sezioni.  `ARM` indica che la sezione contiene codice ARM.

- ATTR

   Non supportata.

- CODE16

   Non supportato perché implica la sintassi del Thumb pre-registrazione accesso utenti, che non è consentita dall'assembler Microsoft ARM.  Usare `THUMB` invece la direttiva, insieme alla sintassi registrazione accesso utenti.

- COMUNE

   La specifica di un allineamento per l'area comune non è supportata.

- DCDO

   Non supportata.

- `DN`, `QN`, `SN`

   La specifica di un tipo o di una corsia nell'alias di registro non è supportata.

- ENTRY

   Non supportata.

- EQU

   La specifica di un tipo per il simbolo definito non è supportata.

- `EXPORT` e `GLOBAL`

   Specifica le esportazioni utilizzando questa sintassi:

   > **Esporta** | **Global** <em>sym</em>{**[**<em>tipo</em>**]**}

   *sym* è il simbolo da esportare.  [*Type*], se specificato, può essere `[DATA]` per indicare che il simbolo punta ai dati o `[FUNC]` per indicare che il simbolo punta al codice. `GLOBAL` è un sinonimo di `EXPORT`.

- Esportazioni

   Non supportata.

- FRAME

   Non supportata.

- `FUNCTION` e `PROC`

   Sebbene la sintassi dell'assembly supporti la specifica di una convenzione di chiamata personalizzata sulle procedure elencando i registri che sono il salvataggio del chiamante e quelli chiamati-Save, l'assembler Microsoft ARM accetta la sintassi ma ignora gli elenchi di registri.  Le informazioni di debug generate dall'assembler supportano solo la convenzione di chiamata predefinita.

- `IMPORT` e `EXTERN`

   Specifica le importazioni utilizzando questa sintassi:

   > **Importazione** | di **Extern** *sym*{**,** *alias* vulnerabile {**, tipo** *t*}}

   *sym* è il nome del simbolo da importare.

   Se `WEAK` viene specificato *alias* , indica che *sym* è un oggetto esterno vulnerabile. Se non viene trovata alcuna definizione in fase di collegamento, tutti i riferimenti a esso vengono associati invece all' *alias*.

   Se `TYPE` viene specificato *t* , *t* indica il modo in cui il linker deve tentare di risolvere *sym*.  Questi valori per *t* sono possibili:

   |Valore|Descrizione|
   |-|-|
   |1|Non eseguire una ricerca di libreria per *sym*|
   |2|Eseguire una ricerca di libreria per *sym*|
   |3|*sym* è un alias per *alias* (impostazione predefinita)|

   `EXTERN` è un sinonimo di `IMPORT` , ad eccezione del fatto che *sym* viene importato solo se vi sono riferimenti nell'assembly corrente.

- MACRO

   L'uso di una variabile per conservare il codice della condizione di una macro non è supportato. I valori predefiniti per i parametri della macro non sono supportati.

- NOFP

   Non supportata.

- `OPT`, `TTL`, `SUBT`

   Non supportato perché l'assembler Microsoft ARM non produce elenchi.

- PRESERVE8

   Non supportata.

- RELOC

   `RELOC n` può seguire solo un'istruzione o una direttiva di definizione dei dati. Non è presente alcun "simbolo anonimo" che può essere rilocato.

- RICHIEDONO

   Non supportata.

- REQUIRE8

   Non supportata.

- THUMBX

   Non supportato perché l'assembler Microsoft ARM non supporta il set di istruzioni Thumb-2EE.

## <a name="see-also"></a>Vedi anche

[Riferimento Command-Line assembler ARM](../../assembler/arm/arm-assembler-command-line-reference.md)<br/>
[Messaggi di diagnostica dell'assembler ARM](../../assembler/arm/arm-assembler-diagnostic-messages.md)<br/>
