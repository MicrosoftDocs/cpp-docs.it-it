---
title: Riferimento della riga di comando di Assembler ARM | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: reference
dev_langs:
- C++
ms.assetid: f7b89478-1ab5-4995-8cde-a805f0462c45
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f196b4aad76c72233c179249386dbb42960b31a6
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
ms.locfileid: "32054611"
---
# <a name="arm-assembler-command-line-reference"></a>Riferimenti alla riga di comando dell'assembler ARM
Questo articolo fornisce informazioni della riga di comando dell'assembler ARM Microsoft, *armasm*, che consente di compilare in linguaggio assembly ARMv7 Thumb nell'implementazione Microsoft del comune oggetto formato COFF (File). Il linker può collegare il codice COFF con codice oggetto a cui viene generato dall'assembler ARM o dal compilatore C, insieme alle librerie di oggetti creati da Gestione librerie.  
  
## <a name="syntax"></a>Sintassi  
  
```  
armasm [[options]] sourcefile objectfile  
```  
  
```  
armasm [[options]] -o objectfile sourcefile  
```  
  
#### <a name="parameters"></a>Parametri  
 `options`  
 -errori `filename`  
 Reindirizzare i messaggi di errore e avviso per `filename`.  
  
 -i `dir[;dir]`  
 Aggiungere la directory specificata per il percorso di ricerca.  
  
 -predefinire `directive`  
 Specificare una direttiva SETA, SETL o set predefinire un simbolo. Esempio: **armasm.exe-predefinire "Conteggio SETA 150" source.asm**. Per ulteriori informazioni, vedere il [Guida degli strumenti dell'assembler ARM](http://go.microsoft.com/fwlink/p/?linkid=246102).  
  
 -nowarn  
 Disabilitare tutti i messaggi di avviso.  
  
 -ignorare `warning`  
 Disabilitare l'avviso specificato. Per i valori possibili, vedere la sezione informazioni sugli avvisi.  
  
 -Guida in linea  
 Stampa il messaggio della Guida della riga di comando.  
  
 -computer `machine`  
 Specificare il tipo di computer per impostare nell'intestazione PE.  I valori possibili per `machine` sono:  
**ARM**: imposta il tipo di computer per IMAGE_FILE_MACHINE_ARMNT. Questa è l'impostazione predefinita.   
**THUMB**: imposta il tipo di computer per IMAGE_FILE_MACHINE_THUMB.  
  
 -oldit  
 Generare stile ARMv7 blocchi IT.  Per impostazione predefinita, compatibile con ARMv8 vengono generati blocchi IT.  
  
 -via `filename`  
 Leggere altri argomenti della riga di comando da `filename`.  
  
 -16  
 Assemblare origine come istruzioni Thumb a 16 bit.  Questa è l'impostazione predefinita.  
  
 -32  
 Assemblare origine come istruzioni ARM a 32 bit.  
  
 -g  
 Genera informazioni di debug.  
  
 -errorReport: `option`  
 Specificare come interno dell'assembler gli errori vengono segnalati a Microsoft.  I valori possibili per `option` sono:   
**Nessuna**: non inviare rapporti.   
**prompt dei comandi**, richiedere all'utente di inviare report immediatamente.   
**coda**, richiedere all'utente di inviare report al successivo accesso di amministratore. Questa è l'impostazione predefinita.   
**inviare**, inviare report automaticamente.  
  
 `sourcefile`  
 Il nome del file di origine.  
  
 `objectfile`  
 Il nome del file oggetto (output).  
  
 Nell'esempio seguente viene illustrato come utilizzare armasm in uno scenario tipico. Innanzitutto, utilizzare armasm per creare un file di origine (asm) in linguaggio assembly in un file oggetto (obj). Quindi, utilizza il compilatore C della riga di comando di CL per compilare un file di origine (c) e anche specificare l'opzione del linker per collegare il file oggetto ARM.  
  
 **armasm myasmcode.asm -o myasmcode.obj**  
  
 **CL myccode.c /link myasmcode.obj**  
  
## <a name="see-also"></a>Vedere anche  
 [Messaggi di diagnostica Assembler ARM](../../assembler/arm/arm-assembler-diagnostic-messages.md)   
 [Direttive assembly ARM](../../assembler/arm/arm-assembler-directives.md)