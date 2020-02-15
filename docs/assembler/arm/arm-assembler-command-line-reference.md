---
title: Riferimenti alla riga di comando dell'assembler ARM
description: Guida di riferimento per le opzioni della riga di comando dell'assembler ARM Microsoft.
ms.date: 02/09/2020
ms.assetid: f7b89478-1ab5-4995-8cde-a805f0462c45
ms.openlocfilehash: a63273e8d21e7a28574ec79d62c15f29ee59cd50
ms.sourcegitcommit: 8414cd91297dea88c480e208c7b5301db9972f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2020
ms.locfileid: "77257379"
---
# <a name="arm-assembler-command-line-reference"></a>Riferimenti alla riga di comando dell'assembler ARM

Questo articolo fornisce informazioni sulla riga di comando relative all'assembler ARM Microsoft, **Armas**. **armast** assembla il linguaggio assembly Thumb ARMv7 nell'implementazione Microsoft del formato COFF (Common Object File Format). Il linker può collegare oggetti di codice COFF prodotti sia dall'assembler ARM che dal compilatore C. Può collegarsi insieme alle librerie di oggetti create dal bibliotecario.

## <a name="syntax"></a>Sintassi

> **`armasm`** [*opzioni*] *source_file* *object_file*\
> **`armasm`** [*opzioni*] **`-o`** *object_file* *source_file*

### <a name="parameters"></a>Parametri

*opzioni*\
Una combinazione di zero o più delle opzioni seguenti:

- **`-errors`** *filename*\
   Reindirizza i messaggi di errore e di avviso al *nome file*.

- *dir*`-i`[ **`;`** <em>dir</em>] \
   Aggiungere le directory specificate al percorso di ricerca di inclusione.

- **`-predefine`** *direttiva*\
   Specificare una direttiva SETA, SETL o set per predefinire un simbolo. \
   Esempio: `armasm.exe -predefine "COUNT SETA 150" source.asm`\
   Per ulteriori informazioni, vedere la [Guida di riferimento per il compilatore ARM](http://infocenter.arm.com/help/topic/com.arm.doc.dui0802b/index.html).

- **`-nowarn`**\
   Disabilitare tutti i messaggi di avviso.

- *avviso*`-ignore`\
   Disabilitare l'avviso specificato. Per i valori possibili, vedere la sezione relativa agli avvisi.

- **`-help`**\
   Stampare il messaggio della guida della riga di comando.

- *computer*`-machine`\
   Specificare il tipo di computer da impostare nell'intestazione PE.  I valori possibili per il *computer* sono: \
   **ARM**: imposta il tipo di computer su IMAGE_FILE_MACHINE_ARMNT. Questa opzione è l'impostazione predefinita. \
   **Thumb**: imposta il tipo di computer su IMAGE_FILE_MACHINE_THUMB.

- **`-oldit`**\
   Genera blocchi IT di tipo ARMv7.  Per impostazione predefinita, vengono generati blocchi IT compatibili con ARMv8.

- **`-via`** *filename*\
   Leggere argomenti aggiuntivi della riga di comando dal *nome file*.

- **`-16`**\
   Assemblare l'origine come istruzioni Thumb a 16 bit.  Questa opzione è l'impostazione predefinita.

- **`-32`**\
   Assemblare l'origine come istruzioni ARM a 32 bit.

- **`-g`**\
   Genera informazioni di debug.

- *opzione*`-errorReport:`\
   Questa opzione è deprecata. A partire da Windows Vista, la segnalazione degli errori è controllata dalle impostazioni di [segnalazione errori Windows (WER)](/windows/win32/wer/windows-error-reporting) .

*source_file*\
Nome del file di origine.

*object_file*\
Nome del file oggetto (output).

## <a name="remarks"></a>Osservazioni

Nell'esempio seguente viene illustrato come utilizzare il metodo Armas in uno scenario tipico. Per prima cosa, usare armaso per compilare un file di origine (con estensione ASM) del linguaggio assembly in un file oggetto (con estensione obj). Usare quindi il compilatore C della riga di comando CL per compilare un file di origine (con estensione C) e specificare anche l'opzione del linker per collegare il file oggetto ARM.

```cmd
armasm myasmcode.asm -o myasmcode.obj
cl myccode.c /link myasmcode.obj
```

## <a name="see-also"></a>Vedere anche

[Messaggi di diagnostica dell'assembler ARM](../../assembler/arm/arm-assembler-diagnostic-messages.md)\
[Direttive assembler ARM](../../assembler/arm/arm-assembler-directives.md)
