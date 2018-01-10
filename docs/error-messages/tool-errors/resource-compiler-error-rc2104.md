---
title: Errore del compilatore di risorse RC2104 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: RC2104
dev_langs: C++
helpviewer_keywords: RC2104
ms.assetid: 792a3bd8-cb4c-4817-b288-4ce37082b582
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ce7fa189e03ec907c4b42f381096f095d5df734a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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