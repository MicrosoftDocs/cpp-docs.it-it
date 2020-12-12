---
description: 'Altre informazioni su: direttive del punto'
title: Direttive con il punto
ms.date: 11/04/2016
helpviewer_keywords:
- NMAKE program, dot directives
- dot directives in NMAKE
ms.assetid: ab35da65-30b6-48b7-87d6-61503d7faf9f
ms.openlocfilehash: 41b13d5f0f0f0a04ee47a9958be76c384617fe5f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97192863"
---
# <a name="dot-directives"></a>Direttive con il punto

Specificare le direttive per il punto all'esterno di un blocco Description, all'inizio di una riga. Le direttive punto iniziano con un punto (. ) e sono seguiti da due punti (:). Sono consentiti spazi e tabulazioni. I nomi delle direttive con distinzione tra maiuscole e minuscole e sono maiuscoli.

|Direttiva|Scopo|
|---------------|-------------|
|**. IGNORARE**|Ignora i codici di uscita diversi da zero restituiti dai comandi, dal punto in cui viene specificato alla fine del makefile. Per impostazione predefinita, NMAKE si interrompe se un comando restituisce un codice di uscita diverso da zero. Per ripristinare il controllo degli errori, usare **! CMDSWITCHES**. Per ignorare il codice di uscita per un singolo comando, usare il modificatore Dash (-). Per ignorare i codici di uscita per un intero file, usare/I.|
|**. PREZIOSO:** *destinazioni*|Consente di mantenere le *destinazioni* sul disco se i comandi per aggiornarli sono interrotti; non ha alcun effetto se un comando gestisce un interrupt eliminando il file. Separare i nomi di destinazione con uno o più spazi o tabulazioni. Per impostazione predefinita, NMAKE Elimina una destinazione se una compilazione viene interrotta da CTRL + C o CTRL + INTERr. Ogni utilizzo di **. PRECIOUS** si applica all'intero makefile; più specifiche sono cumulative.|
|**. SILENZIOSO**|Elimina la visualizzazione dei comandi eseguiti, dal punto in cui viene specificata alla fine del makefile. Per impostazione predefinita, NMAKE Visualizza i comandi richiamati. Per ripristinare l'eco, usare **! CMDSWITCHES**. Per non visualizzare l'eco di un singolo comando, usare il **@** modificatore. Per non visualizzare l'eco per un intero file, usare/S.|
|**. SUFFISSi:**`list`|Elenca le estensioni per la corrispondenza tra regole di inferenza; predefinito per includere le estensioni seguenti:. exe. obj. asm. c. cpp. cxx. bas. CBL. for. pas. res. RC. f. F90|

Per modificare l'oggetto **. SUFFISSi** elenco o per specificare un nuovo elenco, cancellare l'elenco e specificare una nuova impostazione. Per cancellare l'elenco, specificare nessuna estensione dopo i due punti:

```
.SUFFIXES :
```

Per aggiungere ulteriori suffissi alla fine dell'elenco, specificare

```
.SUFFIXES : suffixlist
```

dove *suffisso* è un elenco dei suffissi aggiuntivi, separati da uno o più spazi o tabulazioni. Per visualizzare l'impostazione corrente di **. SUFFISSi**, eseguire NMAKE con/P.

## <a name="see-also"></a>Vedi anche

[Riferimento a NMAKE](nmake-reference.md)
