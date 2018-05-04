---
title: Punto direttive | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- NMAKE program, dot directives
- dot directives in NMAKE
ms.assetid: ab35da65-30b6-48b7-87d6-61503d7faf9f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 29eeedbdc2eaccb753751082a38736fa239837b2
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="dot-directives"></a>Direttive con il punto
Specificare direttive con il punto all'esterno di un blocco di descrizione, all'inizio di una riga. Direttive con il punto iniziano con un punto (. ) e sono seguite da due punti (:). Sono consentiti spazi e tabulazioni. I nomi di direttiva punto sono tra maiuscole e minuscole e maiuscole.  
  
|Direttiva|Scopo|  
|---------------|-------------|  
|**. IGNORA:**|Ignora i codici di uscita diverso da zero restituiti dai comandi, nella risorsa di cui che è specificato alla fine del makefile. Per impostazione predefinita, NMAKE viene arrestato se un comando restituisce un codice di uscita diverso da zero. Per ripristinare il controllo degli errori, utilizzare **! CMDSWITCHES**. Per ignorare il codice di uscita di un unico comando, usare il modificatore trattino (-). Per ignorare i codici di uscita di un intero file, utilizzare / I.|  
|**. PREZIOSI:** *destinazioni*|Consente di mantenere *destinazioni* su disco se l'interruzione dei comandi per aggiornarli; non ha alcun effetto se un comando gestisce un interrupt eliminando il file. Separare i nomi di destinazione con uno o più spazi o tabulazioni. Per impostazione predefinita, viene eliminata una destinazione, se una compilazione viene interrotta premendo CTRL + C o CTRL + INTERR. Ogni **. PREZIOSI** si applica all'intero makefile; più specifiche sono cumulative.|  
|**. INVISIBILE ALL'UTENTE:**|Evita la visualizzazione dei comandi eseguiti, dal punto che viene specificato alla fine del makefile. Per impostazione predefinita, NMAKE Visualizza i comandi che richiama. Per ripristinare la visualizzazione, utilizzare **! CMDSWITCHES**. Per omettere la visualizzazione di un unico comando, utilizzare il **@** modificatore. Per omettere la visualizzazione di un intero file, utilizzare/s.|  
|**. SUFFISSI:** `list`|Elenca le estensioni per la corrispondenza delle regole di inferenza; predefiniti per includere le seguenti estensioni: .exe obj ASM c. cpp. cxx BAS CBL per aver for. PAS. res RC. f. f90|  
  
 Per modificare il **. SUFFISSI** o per specificare un nuovo elenco, cancellare l'elenco e specificare una nuova impostazione. Per cancellare l'elenco, non specificare alcuna estensione dopo i due punti:  
  
```  
.SUFFIXES :  
```  
  
 Per aggiungere i suffissi aggiuntivi alla fine dell'elenco, specificare  
  
```  
.SUFFIXES : suffixlist  
```  
  
 dove *suffixlist* è un elenco di suffissi aggiuntivi, separati da uno o più spazi o tabulazioni. Per visualizzare l'impostazione corrente di **. SUFFISSI**, eseguire NMAKE /p.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti a NMAKE](../build/nmake-reference.md)