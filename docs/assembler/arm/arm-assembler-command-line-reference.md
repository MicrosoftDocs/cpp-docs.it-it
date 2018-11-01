---
title: Riferimenti alla riga di comando dell'assembler ARM
ms.date: 08/30/2018
ms.assetid: f7b89478-1ab5-4995-8cde-a805f0462c45
ms.openlocfilehash: f49b59a81fbe5f11c0f219d1e1fe83a4ee811c7a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50579237"
---
# <a name="arm-assembler-command-line-reference"></a>Riferimenti alla riga di comando dell'assembler ARM

Questo articolo fornisce informazioni della riga di comando dell'assembler ARM Microsoft, *armasm*, che viene compilato in linguaggio assembly ARMv7 Thumb nell'implementazione Microsoft del File di formato COFF (Common Object). Il linker può collegare codice COFF con codice oggetto generato dall'assembler ARM o dal compilatore C, insieme alle librerie di oggetti creati da Gestione librerie.

## <a name="syntax"></a>Sintassi

> **armasm** [*opzioni*] *sourcefile* *oggetto estratto sovrascriverà*
> **armasm** [*opzioni *] **-o** *oggetto estratto sovrascriverà* *sourcefile*

### <a name="parameters"></a>Parametri

*options*<br/>
Una combinazione di zero o più delle operazioni seguenti:

- **-errori** *nomefile*<br/>
   Reindirizzare i messaggi di errore e avviso per *filename*.

- **-i** *dir*[**;** <em>dir</em>]<br/>
   Aggiungere la directory specificata al percorso di ricerca di inclusione.

- **-predefinire** *(direttiva)*<br/>
   Specificare una direttiva di impostare, SETL o set di predefinire un simbolo.<br/>
   Esempio: **armasm.exe-predefinire source.asm "Impostare 150 conteggio"**<br/>
   Per altre informazioni, vedere la [del compilatore ARM armasm Guida di riferimento](http://infocenter.arm.com/help/topic/com.arm.doc.dui0802b/index.html).

- **-nowarn**<br/>
   Disabilitare tutti i messaggi di avviso.

- **-ignorare** *avviso*<br/>
   Disabilitare l'avviso specificato. Per i valori possibili, vedere la sezione sugli avvisi.

- **-help**<br/>
   Stampa il messaggio della Guida della riga di comando.

- **-machine** *macchina*<br/>
   Specificare il tipo di computer da impostare nell'intestazione del PE.  I possibili valori per *machine* sono:<br/>
   **ARM**: imposta il tipo di computer su IMAGE_FILE_MACHINE_ARMNT. Questa è l'impostazione predefinita.<br/>
   **THUMB**: imposta il tipo di computer su IMAGE_FILE_MACHINE_THUMB.

- **-oldit**<br/>
   Genera stile ARMv7 blocchi IT.  Per impostazione predefinita, compatibile con ARMv8 vengono generati blocchi IT.

- **-tramite** *nomefile*<br/>
   Argomenti della riga di comando aggiuntivi da leggere *filename*.

- **-16**<br/>
   Assemblare origine come istruzioni Thumb 16 bit.  Questa è l'impostazione predefinita.

- **-32**<br/>
   Assemblare origine come istruzioni ARM a 32 bit.

- **-g**<br/>
   Genera informazioni di debug.

- **-errorReport:** *opzione*<br/>
   Specificare la modalità interna dell'assembler gli errori vengono segnalati a Microsoft.  I possibili valori per *opzione* sono:<br/>
   **Nessuno**: non inviare rapporti.<br/>
   **prompt dei comandi**, richiedere all'utente per inviarle immediatamente.<br/>
   **coda**, richiedere all'utente di inviare segnalazioni al successivo accesso amministratore. Questa è l'impostazione predefinita.<br/>
   **inviare**: inviare automaticamente report.

*SourceFile*<br/>
Il nome del file di origine.

*oggetto estratto sovrascriverà*<br/>
Il nome del file oggetto (output).

## <a name="remarks"></a>Note

Nell'esempio seguente viene illustrato come utilizzare armasm in uno scenario tipico. Prima di tutto usare armasm per creare un file di origine (asm) in linguaggio assembly in un file oggetto (obj). Quindi, usare il compilatore C della riga di comando di CL per compilare un file di origine (c) e anche specificare l'opzione del linker di collegare file oggetto ARM.

**armasm myasmcode.asm -o myasmcode.obj**

**CL myccode.c /link myasmcode.obj**

## <a name="see-also"></a>Vedere anche

[Messaggi di diagnostica assembler ARM](../../assembler/arm/arm-assembler-diagnostic-messages.md)<br/>
[Direttive assembly ARM](../../assembler/arm/arm-assembler-directives.md)<br/>
