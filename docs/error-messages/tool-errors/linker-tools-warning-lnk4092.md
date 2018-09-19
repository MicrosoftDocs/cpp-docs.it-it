---
title: Strumenti del linker LNK4092 avviso | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4092
dev_langs:
- C++
helpviewer_keywords:
- LNK4092
ms.assetid: d569ec47-a338-40e1-940b-8a8061459acb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b9b47b347e11e640425bc7840a0f78a33e9e3b7e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46113422"
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