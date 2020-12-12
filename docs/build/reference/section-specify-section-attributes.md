---
description: Altre informazioni su:/SECTION (specifica attributi di sezione)
title: /SECTION (Specifica attributi di sezione)
ms.date: 12/29/2017
f1_keywords:
- /section
helpviewer_keywords:
- SECTION linker option
- -SECTION linker option
- section attributes
- /SECTION linker option
ms.openlocfilehash: 8731f720e04ae2893f288e4b96aeaa019af43350
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97224790"
---
# <a name="section-specify-section-attributes"></a>/SECTION (Specifica attributi di sezione)

> **/Section:**_nome_, [[**!**] {**DEKPRSW**}] [**, Align =**_numero_]

## <a name="remarks"></a>Commenti

L'opzione **/Section** modifica gli attributi di una sezione, sostituendo gli attributi impostati durante la compilazione del file obj per la sezione.

Una *sezione* in un file eseguibile portabile (PE) è un blocco di memoria contiguo denominato che contiene il codice o i dati. Alcune sezioni contengono codice o dati dichiarati e usati direttamente dal programma, mentre altre sezioni di dati vengono create automaticamente dal linker e da Gestione librerie (lib.exe) e contengono informazioni essenziali per il sistema operativo. Per altre informazioni, vedere [formato PE](/windows/win32/Debug/pe-format).

Specificare i due punti (:) e un *nome* di sezione. Il *nome* fa distinzione tra maiuscole e minuscole.

Non usare i nomi seguenti, perché sono in conflitto con i nomi standard. Ad esempio,. sdata viene usato sulle piattaforme RISC:

- . Arch

- . bss

- . Data

- .edata

- . idata

- . pData

- . rdata

- . reloc

- . rsrc

- . sbss

- . sdata

- .srdata

- text

- . XData

Specificare uno o più attributi per la sezione. I caratteri di attributo, elencati di seguito, non fanno distinzione tra maiuscole e minuscole. È necessario specificare tutti gli attributi che si desidera includere nella sezione. un carattere di attributo omesso causa la disattivazione del bit di attributo. Se non si specifica R, W o E, lo stato di lettura, scrittura o eseguibile esistente rimane invariato.

Per negare un attributo, anteporre al carattere un punto esclamativo (!). In questa tabella vengono mostrati i significati dei caratteri di attributo:

|Carattere|Attributo|Significato|
|---------------|---------------|-------------|
|E|Execute|La sezione è eseguibile|
|R|Lettura|Consente operazioni di lettura sui dati|
|W|Scrittura|Consente operazioni di scrittura sui dati|
|S|Condiviso|Condivide la sezione tra tutti i processi che caricano l'immagine|
|D|Annullabile|Contrassegna la sezione come annullabile|
|K|Inseribile nella cache|Contrassegna la sezione come non memorizzabile nella cache|
|P|Paginabile|Contrassegna la sezione come non paginabile|

K e P sono insoliti perché i flag di sezione che corrispondono a tali flag vengono utilizzati in senso negativo. Se si specifica uno di essi nella sezione. Text usando l'opzione **/Section:. text, K** , non esiste alcuna differenza nei flag di sezione quando si esegue [dumpbin](dumpbin-options.md) con l'opzione [/headers](headers.md) . la sezione è già stata memorizzata nella cache in modo implicito. Per rimuovere il valore predefinito, specificare **/Section:. text,! K** in alternativa. DUMPBIN rivela le caratteristiche della sezione, tra cui "non memorizzato nella cache".

Una sezione del file PE che non contiene il set E, R o W è probabilmente non valida.

L'argomento **align =**_Number_ consente di specificare un valore di allineamento per una sezione specifica. Il _numero_ dell'argomento è in byte e deve essere una potenza di due. Per ulteriori informazioni, vedere [/align](align-section-alignment.md) .

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Scegliere la   >  pagina delle proprietà della riga di comando del **linker** proprietà di configurazione  >   .

1. Immettere l'opzione nella casella **Opzioni aggiuntive** . Scegliere **OK** o **applica** per applicare la modifica.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
