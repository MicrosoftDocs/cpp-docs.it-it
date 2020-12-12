---
description: Altre informazioni su:/BASE (indirizzo di base)
title: /BASE (indirizzo di base)
ms.date: 09/05/2018
f1_keywords:
- /base
- VC.Project.VCLinkerTool.BaseAddress
helpviewer_keywords:
- base addresses [C++]
- programs [C++], preventing relocation
- semicolon [C++], specifier
- -BASE linker option
- key address size
- environment variables [C++], LIB
- programs [C++], base address
- LIB environment variable
- BASE linker option
- DLLs [C++], linking
- /BASE linker option
- '@ symbol for base address'
- executable files [C++], base address
- at sign symbol for base address
ms.assetid: 00b9f6fe-0bd2-4772-a69c-7365eb199069
ms.openlocfilehash: 269911c7d9fce47be1b9755ddebf38170ea4e81c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97182775"
---
# <a name="base-base-address"></a>/BASE (indirizzo di base)

Specifica l'indirizzo di base di un programma.

## <a name="syntax"></a>Sintassi

> **/Base:**{*Indirizzo*[**,**<em>dimensione</em>] | **\@** <em>nomefile</em>**,**<em>chiave</em>}

## <a name="remarks"></a>Commenti

> [!NOTE]
> Per motivi di sicurezza, Microsoft consiglia di usare l'opzione [/DynamicBase](dynamicbase-use-address-space-layout-randomization.md) invece di specificare gli indirizzi di base per i file eseguibili. Viene generata un'immagine eseguibile che può essere riassegnata in modo casuale in fase di caricamento utilizzando la funzionalità ASLR (Address Space Layout randomation) di Windows. L'opzione/DYNAMICBASE è abilitata per impostazione predefinita.

L'opzione/BASE imposta un indirizzo di base per il programma, eseguendo l'override del percorso predefinito per un file con estensione exe o DLL. L'indirizzo di base predefinito per un file con estensione exe è 0x400000 per le immagini a 32 bit o 0x140000000 per le immagini a 64 bit. Per una DLL, l'indirizzo di base predefinito è 0x10000000 per le immagini a 32 bit o 0x180000000 per le immagini a 64 bit. Nei sistemi operativi che non supportano la sequenza casuale del layout dello spazio degli indirizzi (ASLR) o quando l'opzione/DYNAMICBASE: NO è stata impostata, il sistema operativo tenta prima di tutto di caricare un programma all'indirizzo di base specificato o predefinito. Se non è disponibile spazio sufficiente, il sistema Riloca il programma. Per evitare la rilocazione, usare l'opzione [/fixed](fixed-fixed-base-address.md) .

Il linker genera un errore se *Address* non è un multiplo di 64K. Facoltativamente, è possibile specificare le dimensioni del programma. il linker genera un avviso se il programma non è in grado di adattarsi alle dimensioni specificate.

Nella riga di comando, un altro modo per specificare l'indirizzo di base consiste nell'usare un file di risposta dell'indirizzo di base. Un file di risposta dell'indirizzo di base è un file di testo che contiene gli indirizzi di base e le dimensioni facoltative di tutte le dll che verrà utilizzato dal programma e una chiave di testo univoca per ogni indirizzo di base. Per specificare un indirizzo di base usando un file di risposta, usare un simbolo di chiocciola ( **\@** ) seguito dal nome del file di risposta, *filename*, seguito da una virgola, quindi dal valore della *chiave* per l'indirizzo di base da usare nel file. Il linker cerca *filename* nel percorso specificato o, se non viene specificato alcun percorso, nelle directory specificate nella variabile di ambiente LIB. Ogni riga in *filename* rappresenta una dll e presenta la sintassi seguente:

>  *Indirizzo* chiave [*dimensione*] **;** *Commento*

La *chiave* è una stringa di caratteri alfanumerici e non distingue tra maiuscole e minuscole. Si tratta in genere del nome di una DLL, ma non deve essere. La *chiave* è seguita da un *Indirizzo* di base nella notazione C-Language, esadecimale o decimale e da una *dimensione* massima facoltativa. Tutti e tre gli argomenti sono separati da spazi o tabulazioni. Il linker genera un avviso se la *dimensione* specificata è inferiore allo spazio degli indirizzi virtuali richiesto dal programma. Un *Commento* viene specificato con un punto e virgola (**;**) e può trovarsi nella stessa riga o in una riga separata. Il linker ignora tutto il testo dal punto e virgola alla fine della riga. Questo esempio mostra parte di un file di questo tipo:

```
main   0x00010000    0x08000000    ; for PROJECT.exe
one    0x28000000    0x00100000    ; for DLLONE.DLL
two    0x28100000    0x00300000    ; for DLLTWO.DLL
```

Se il file che contiene queste righe è denominato DLLS.txt, il comando di esempio seguente applica queste informazioni:

```
link dlltwo.obj /dll /base:@dlls.txt,two
```

Un altro modo per impostare l'indirizzo di base consiste nell'usare l'argomento di *base* in un'istruzione [Name](name-c-cpp.md) o [Library](library.md) . Le opzioni/BASE e [/dll](dll-build-a-dll.md) insieme sono equivalenti all'istruzione **Library** .

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la   >  pagina delle proprietà avanzate del **linker** proprietà di configurazione  >   .

1. Modificare la proprietà **indirizzo di base** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.BaseAddress%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
