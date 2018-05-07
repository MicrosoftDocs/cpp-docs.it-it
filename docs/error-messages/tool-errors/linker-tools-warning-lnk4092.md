---
title: Strumenti del linker LNK4092 avviso | Documenti Microsoft
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
ms.openlocfilehash: 72edd9e75dbc781355396e38f767a64c1ded3aa9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-warning-lnk4092"></a>Avviso degli strumenti del linker LNK4092
la sezione scrivibile condivisa 'section' contiene rilocazioni; immagine potrebbe non funzionare correttamente  
  
 Il linker genera questo avviso ogni volta che è presente una sezione condivisa per avvisare l'utente di un problema potenzialmente grave.  
  
 Per condividere dati tra più processi è possibile contrassegnare una sezione come "condiviso". Tuttavia, contrassegnare una sezione come condiviso può causare problemi. Ad esempio, si dispone di una DLL che contiene le dichiarazioni simile al seguente in una sezione di dati condiviso:  
  
```  
int var = 1;  
int *pvar = &var;  
```  
  
 Il linker non è possibile risolvere `pvar` poiché il relativo valore dipende in cui la DLL viene caricata in memoria, pertanto inserisce un record di rilocazione nella DLL. Quando la DLL viene caricata in memoria, l'indirizzo di `var` possono essere risolti e `pvar` assegnato. Se un altro processo carica la DLL stessa, ma non è possibile caricarlo con lo stesso indirizzo, la rilocazione per l'indirizzo di `var` verrà aggiornato per il secondo processo e lo spazio di indirizzo del primo processo farà riferimento a un indirizzo errato.