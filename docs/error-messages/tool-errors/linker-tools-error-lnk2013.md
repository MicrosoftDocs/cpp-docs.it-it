---
title: Strumenti del linker LNK2013 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK2013
dev_langs:
- C++
helpviewer_keywords:
- LNK2013
ms.assetid: 21408e2d-3f56-4d1f-a031-00df70785ed4
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8cf88f768f05eee06ae8ffaa66f8de5a9c443f82
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-error-lnk2013"></a>Errore degli strumenti del linker LNK2013
overflow della correzione tipo correzione. 'Symbol name' di destinazione non compreso nell'intervallo  
  
 Il linker non è sufficiente l'offset o l'indirizzo necessarie nell'istruzione data poiché il simbolo di destinazione è troppo lontano dal percorso dell'istruzione.  
  
 È possibile risolvere questo problema creando più immagini o utilizzando il [/ORDER](../../build/reference/order-put-functions-in-order.md) opzione in modo che l'istruzione e la destinazione siano insieme più vicino.  
  
 Quando il nome del simbolo è un simbolo definito dall'utente (e non un simbolo generato dal compilatore), è anche possibile provare le azioni seguenti per risolvere l'errore:  
  
-   Modificare la funzione statica per essere non statico.  
  
-   Rinominare la sezione di codice che contiene la funzione statica per corrispondere a quello del chiamante.  
  
 Utilizzare `DUMPBIN /SYMBOLS`, per verificare se una funzione statica.