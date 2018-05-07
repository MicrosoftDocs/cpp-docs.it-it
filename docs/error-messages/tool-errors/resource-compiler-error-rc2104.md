---
title: Errore del compilatore di risorse RC2104 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- RC2104
dev_langs:
- C++
helpviewer_keywords:
- RC2104
ms.assetid: 792a3bd8-cb4c-4817-b288-4ce37082b582
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 28beaad95cc33d8b014b22035f9ed641f1b6ab6d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="resource-compiler-error-rc2104"></a>Errore del compilatore di risorse RC2104
Parola chiave o nome di chiave non definito: chiave  
  
 La parola chiave o il nome di chiave specificato non è stato definito.  
  
 Questo errore è spesso causato da un errore di digitazione nella definizione di risorse o nel file di intestazione incluso. Può anche essere causato da un file di intestazione mancante.  
  
 Per risolvere il problema, trovare il file di intestazione che deve contenere la parola chiave definita o il nome della chiave e verificare che sia incluso nel file di risorse e che la chiave o il nome della parola chiave sia stato digitato correttamente. Se il progetto è stato creato con un'intestazione precompilata che viene successivamente rimossa, assicurarsi che il file di risorse includa ancora eventuali intestazioni richieste.  
  
 Per verificare le parole chiave definite e i nomi delle chiavi nel file di risorse, in Visual Studio, aprire il **visualizzazione risorse** finestra, nella barra dei menu, scegliere **vista**, **visualizzazione risorse**- e quindi aprire il menu di scelta rapida per il file RC e scegliere **simboli risorsa** per visualizzare l'elenco dei simboli definiti. Per modificare le intestazioni incluse, aprire il menu di scelta rapida per il file RC e scegliere **Inclusioni risorsa**.  
  
 Se viene visualizzato il messaggio seguente:  
  
```  
undefined keyword or key name: MFT_STRING   
```  
  
 Aprire \MCL\MFC\Include\AfxRes.h e aggiungere la direttiva di inclusione seguente:  
  
```  
#include <winresrc.h>  
```