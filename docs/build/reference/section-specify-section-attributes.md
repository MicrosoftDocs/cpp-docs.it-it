---
title: /SECTION (Specifica attributi di sezione)
ms.date: 12/29/2017
f1_keywords:
- /section
helpviewer_keywords:
- SECTION linker option
- -SECTION linker option
- section attributes
- /SECTION linker option
ms.openlocfilehash: 8fb73043c9c185adee0859bb81098eab022430c2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62318563"
---
# <a name="section-specify-section-attributes"></a>/SECTION (Specifica attributi di sezione)

> **O della sezione:**_name_, [[**!**] {**DEKPRSW**}] [**, ALIGN =**_numero_]

## <a name="remarks"></a>Note

Il **/Section** opzione consente di modificare gli attributi di una sezione, sostituendo gli attributi impostati quando è stato compilato il file con estensione obj per la sezione.

Oggetto *sezione* in un file eseguibile portabile (PE) file è un blocco contiguo denominato di memoria che contiene codice né dati. Alcune sezioni contengono codice o dati che il programma dichiarato e Usa direttamente, mentre altre sezioni di dati vengono creati automaticamente dalla gestione librerie (lib.exe) e del linker e contengono informazioni essenziali per il sistema operativo. Per altre informazioni, vedere [formato PE](/windows/desktop/Debug/pe-format).

Specificare i due punti (:) e una sezione *nome*. Il *nome* distinzione maiuscole / minuscole.

Non utilizzare i nomi seguenti, perché sono in conflitto con nomi standard. Ad esempio, viene usato. sdata su piattaforme RISC:

- .arch

- BSS

- .data

- .edata

- .idata

- .pdata

- .rdata

- .reloc

- .rsrc

- .sbss

- .sdata

- .srdata

- .text

- .xdata

Specificare uno o più attributi per la sezione. I caratteri di attributo, elencati di seguito non sono tra maiuscole e minuscole. È necessario specificare tutti gli attributi che si desidera che la sezione. un carattere di attributo viene omesso fa in modo che tale bit attributo debba essere spenta. Se non si specifica scrittura R, W o E, di lettura esistente, o stato eseguibile rimane invariato.

Per negare a un attributo, anteporre il carattere con un punto esclamativo (!). Il significato dei caratteri di attributo è illustrato in questa tabella:

|Carattere|Attributo|Significato|
|---------------|---------------|-------------|
|E|Esegui|La sezione non eseguibile|
|R|Lettura|Consente operazioni di lettura sui dati|
|W|Write|Consente operazioni di scrittura sui dati|
|S|Shared|Condivide la sezione tra tutti i processi che caricano l'immagine|
|D|Scaricabile|Contrassegna la sezione come annullabile|
|K|Inseribili nella cache|Contrassegna la sezione come non memorizzabile nella cache|
|P|Paginabile|Contrassegna la sezione come non paginabile|

K e P sono insolito in quanto i flag di sezione che corrispondono a essi sono utilizzati nel senso negativo. Se si specifica uno di questi caratteri nella sezione utilizzando il **/Section:. Text, K** seleziona l'opzione, non c'è alcuna differenza nei flag di sezione quando si esegue [DUMPBIN](dumpbin-options.md) con il [/HEADERS](headers.md)opzione; la sezione già in modo implicito è stato memorizzato nella cache. Per rimuovere l'impostazione predefinita, specificare **/Section:,. Text. K** invece. DUMPBIN rivela le caratteristiche della sezione, tra cui "Non memorizzato nella cache."

Una sezione nel file PE che è privo di E, R o W impostata è probabilmente non è valida.

Il **ALIGN =**_numero_ argomento consente di specificare un valore di allineamento per una particolare sezione. Il _numero_ argomento è espresso in byte e deve essere una potenza di due. Visualizzare [/align](align-section-alignment.md) per altre informazioni.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Scegliere il **le proprietà di configurazione** > **Linker** > **della riga di comando** pagina delle proprietà.

1. Immettere l'opzione nel **opzioni aggiuntive** casella. Scegli **OK** oppure **applica** per applicare la modifica.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
