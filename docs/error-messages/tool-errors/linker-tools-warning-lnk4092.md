---
description: 'Altre informazioni su: avvisi degli strumenti del linker LNK4092'
title: Avviso degli strumenti del linker LNK4092
ms.date: 11/04/2016
f1_keywords:
- LNK4092
helpviewer_keywords:
- LNK4092
ms.assetid: d569ec47-a338-40e1-940b-8a8061459acb
ms.openlocfilehash: 6ef835981a8ed7921147697d6ed9fc79ceeb7033
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97210010"
---
# <a name="linker-tools-warning-lnk4092"></a>Avviso degli strumenti del linker LNK4092

la sezione ' section ' scrivibile condivisa contiene rilocazioni; l'immagine potrebbe non essere eseguita correttamente

Il linker genera questo avviso ogni volta che si dispone di una sezione condivisa per segnalare un problema potenzialmente grave.

Un modo per condividere i dati tra più processi consiste nel contrassegnare una sezione come "condivisa". Tuttavia, contrassegnare una sezione come condivisa può causare problemi. Ad esempio, si dispone di una DLL che contiene dichiarazioni come questa in una sezione di dati condivisa:

```
int var = 1;
int *pvar = &var;
```

Il linker non è in grado di risolversi `pvar` perché il suo valore dipende dalla posizione in cui la dll viene caricata in memoria, quindi inserisce un record di rilocazione nella dll. Quando la DLL viene caricata in memoria, l'indirizzo di `var` può essere risolto e `pvar` assegnato. Se un altro processo carica la stessa DLL ma non è in grado di caricarla allo stesso indirizzo, la rilocazione per l'indirizzo di `var` verrà aggiornata per il secondo processo e lo spazio degli indirizzi del primo processo punterà all'indirizzo errato.
