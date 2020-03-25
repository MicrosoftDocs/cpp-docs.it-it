---
title: Avviso degli strumenti del linker LNK4092
ms.date: 11/04/2016
f1_keywords:
- LNK4092
helpviewer_keywords:
- LNK4092
ms.assetid: d569ec47-a338-40e1-940b-8a8061459acb
ms.openlocfilehash: 706ab843f4b079b507033af76a7f407816fce820
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80183358"
---
# <a name="linker-tools-warning-lnk4092"></a>Avviso degli strumenti del linker LNK4092

la sezione ' section ' scrivibile condivisa contiene rilocazioni; l'immagine potrebbe non essere eseguita correttamente

Il linker genera questo avviso ogni volta che si dispone di una sezione condivisa per segnalare un problema potenzialmente grave.

Un modo per condividere i dati tra più processi consiste nel contrassegnare una sezione come "condivisa". Tuttavia, contrassegnare una sezione come condivisa può causare problemi. Ad esempio, si dispone di una DLL che contiene dichiarazioni come questa in una sezione di dati condivisa:

```
int var = 1;
int *pvar = &var;
```

Il linker non è in grado di risolvere `pvar` perché il suo valore dipende dalla posizione in cui la DLL viene caricata in memoria, quindi inserisce un record di rilocazione nella DLL. Quando la DLL viene caricata in memoria, l'indirizzo di `var` può essere risolto e `pvar` assegnato. Se un altro processo carica la stessa DLL ma non è in grado di caricarla allo stesso indirizzo, la rilocazione per l'indirizzo di `var` verrà aggiornata per il secondo processo e lo spazio degli indirizzi del primo processo punterà all'indirizzo errato.
