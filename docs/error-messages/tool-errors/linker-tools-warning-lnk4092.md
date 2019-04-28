---
title: Avviso degli strumenti del linker LNK4092
ms.date: 11/04/2016
f1_keywords:
- LNK4092
helpviewer_keywords:
- LNK4092
ms.assetid: d569ec47-a338-40e1-940b-8a8061459acb
ms.openlocfilehash: 0b18002135d225a90f7e45adc2ff57a64c0a79f4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62279320"
---
# <a name="linker-tools-warning-lnk4092"></a>Avviso degli strumenti del linker LNK4092

la sezione scrivibile condivisa 'section' contiene rilocazioni; immagine non venga eseguita correttamente

Il linker genera questo avviso ogni volta che è presente una sezione condivisa per avvisare l'utente di un problema potenzialmente pericolose.

Un modo per condividere dati tra più processi è possibile contrassegnare una sezione come "condiviso". Contrassegna una sezione come condiviso, tuttavia, può causare problemi. Ad esempio, si dispone di una DLL che contiene le dichiarazioni simile al seguente in una sezione di dati condiviso:

```
int var = 1;
int *pvar = &var;
```

Non è possibile risolvere il linker `pvar` perché il suo valore dipende in cui la DLL viene caricata in memoria, pertanto inserisce un record di rilocazione nella DLL. Quando la DLL viene caricata in memoria, l'indirizzo del `var` può essere risolto e `pvar` assegnato. Se un altro processo carica la DLL stessa ma non è possibile caricarla nello stesso indirizzo, la rilocazione dell'indirizzo del `var` verrà aggiornato per il secondo processo e spazio degli indirizzi del processo prima punterà all'indirizzo errato.