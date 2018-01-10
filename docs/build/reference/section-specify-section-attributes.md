---
title: /Section (specifica attributi di sezione) | Documenti Microsoft
ms.custom: 
ms.date: 12/29/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /section
dev_langs: C++
helpviewer_keywords:
- SECTION linker option
- -SECTION linker option
- section attributes
- /SECTION linker option
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: aa214c7efeeee595300204df900a333258052772
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="section-specify-section-attributes"></a>/SECTION (Specifica attributi di sezione)

> **/Section:**_nome_, [[**!**] {**DEKPRSW**}] [**, ALIGN =**_numero_]

## <a name="remarks"></a>Note

Il **/sezione** opzione consente di modificare gli attributi di una sezione, sostituendo gli attributi impostati quando è stato compilato il file con estensione obj per la sezione.

Oggetto *sezione* in un file eseguibile portabile (PE) è un blocco di memoria che contiene codice o dati contiguo denominato. Alcune sezioni contengono codice o dati che il programma dichiarati e utilizzati direttamente, mentre altre sezioni di dati vengono creati automaticamente per il linker e gestione librerie (lib.exe) contengono informazioni essenziali per il sistema operativo. Per ulteriori informazioni, vedere [formato PE](https://msdn.microsoft.com/library/windows/desktop/ms680547).

Specificare i due punti (:) e una sezione *nome*. Il *nome* tra maiuscole e minuscole.

Non utilizzare i nomi seguenti, come sono in conflitto con i nomi standard. Sdata, ad esempio, viene utilizzato sulle piattaforme RISC:

- .arch

- BSS

- . Data

- .edata

- .IData

- . pdata

- rdata

- reloc

- . rsrc

- sbss

- sdata

- .srdata

- . Text

- . XData

Specificare uno o più attributi per la sezione. I caratteri di attributo, elencati di seguito, non fanno distinzione tra maiuscole e minuscole. È necessario specificare tutti gli attributi che si desidera che la sezione. un carattere di attributo viene omesso fa sì che bit dell'attributo è disattivato. Se non si specifica R, W o E, esistente di lettura, scrittura o esecuzione resta immutato.

Per negare un attributo, anteporre il carattere con un punto esclamativo (!). In questa tabella sono riportati i significati dei caratteri di attributo

|Carattere|Attributo|Significato|
|---------------|---------------|-------------|
|E|Esegui|La sezione è eseguibile|
|R|Lettura|Consente operazioni di lettura sui dati|
|W|Write|Consente operazioni di scrittura sui dati|
|S|Shared|Condivide la sezione tra tutti i processi che caricano l'immagine|
|D|Scaricabile|Contrassegna la sezione come annullabile|
|K|Memorizzabile nella cache|Contrassegna la sezione come non memorizzabile nella cache|
|P|Paging|Contrassegna la sezione come non paginabile|

K e P sono frequenti i flag di sezione che corrispondono a essi vengono utilizzati in senso negativo. Se si specifica uno di questi caratteri nella sezione utilizzando il **/Section:. Text, K** opzione, non c'è alcuna differenza nei flag di sezione quando si esegue [DUMPBIN](../../build/reference/dumpbin-options.md) con il [/HEADERS](../../build/reference/headers.md)opzione; la sezione è già in modo implicito è memorizzata nella cache. Per rimuovere il valore predefinito, specificare **/Section:. Text,! K** invece. DUMPBIN rivela le caratteristiche della sezione, tra cui "Non memorizzati nella cache."

Una sezione del file PE che non dispone di E, R o l impostato è probabilmente non è valida.

Il **ALIGN =**_numero_ argomento consente di specificare un valore di allineamento per una particolare sezione. Il _numero_ argomento è espresso in byte e deve essere una potenza di due. Vedere [/align](../../build/reference/align-section-alignment.md) per ulteriori informazioni.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Scegliere il **le proprietà di configurazione** > **Linker** > **riga di comando** pagina delle proprietà.

1. Immettere l'opzione di **opzioni aggiuntive** casella. Scegliere **OK** o **applica** per applicare la modifica.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)  
[Opzioni del linker](../../build/reference/linker-options.md)  
