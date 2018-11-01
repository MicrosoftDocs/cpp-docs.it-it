---
title: Direttive con il punto
ms.date: 11/04/2016
helpviewer_keywords:
- NMAKE program, dot directives
- dot directives in NMAKE
ms.assetid: ab35da65-30b6-48b7-87d6-61503d7faf9f
ms.openlocfilehash: 18688afedfe076ea2e4485471ffbe92dc2e09a2d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50542870"
---
# <a name="dot-directives"></a>Direttive con il punto

Specificare le direttive punto all'esterno di un blocco di descrizione, all'inizio di una riga. Direttive con il punto iniziano con un punto (. ) e sono seguite da due punti (:). Sono consentiti spazi e tabulazioni. Nomi di direttiva punto sono tra maiuscole e minuscole e maiuscole.

|Direttiva|Scopo|
|---------------|-------------|
|**. IGNORA:**|Ignora i codici di uscita diverso da zero restituiti dai comandi, nella risorsa di cui che è specificato alla fine del makefile. Per impostazione predefinita, il processo di NMAKE si interromperà se un comando restituisce un codice di uscita diverso da zero. Per ripristinare il controllo degli errori, usare **! CMDSWITCHES**. Per ignorare il codice di uscita per un singolo comando, usare il modificatore di trattino (-). Per ignorare i codici di uscita di un intero file, usare / I.|
|**. : Preziosi** *destinazioni*|Consente di mantenere *destinazioni* su disco se vengono interrotti i comandi per aggiornarli; non ha alcun effetto se un comando gestisce un interrupt eliminando il file. Separare i nomi di destinazione con una o più spazi o tabulazioni. Per impostazione predefinita, viene eliminata una destinazione, se una compilazione viene interrotta premendo CTRL + C o CTRL + INTERR. Ogni uso di **. PREZIOSE** si applica all'intero makefile; più specifiche di sono cumulative.|
|**. INVISIBILE ALL'UTENTE:**|Evita la visualizzazione di comandi eseguiti, dal punto che viene specificato alla fine del makefile. Per impostazione predefinita, NMAKE Visualizza i comandi che richiama. Per ripristinare la visualizzazione, usare **! CMDSWITCHES**. Per omettere la visualizzazione di un singolo comando, usare il **@** modificatore. Per omettere la visualizzazione di un intero file, usare/s.|
|**. SUFFISSI:** `list`|Elenca le estensioni per la corrispondenza delle regole di inferenza; predefinito per includere le seguenti estensioni: .exe obj ASM c. cpp. cxx BAS CBL per aver for. PAS. res rc 1).f. f90|

Per modificare il **. I SUFFISSI** o per specificare un nuovo elenco, cancellare l'elenco e specificare una nuova impostazione. Per cancellare l'elenco, non specificare nessuna estensione dopo i due punti:

```
.SUFFIXES :
```

Per aggiungere suffissi aggiuntivi alla fine dell'elenco, specificare

```
.SUFFIXES : suffixlist
```

in cui *suffixlist* è riportato un elenco di suffissi aggiuntivi, separati da uno o più spazi o tabulazioni. Per visualizzare l'impostazione corrente di **. I SUFFISSI**, eseguire NMAKE /p.

## <a name="see-also"></a>Vedere anche

[Riferimenti a NMAKE](../build/nmake-reference.md)