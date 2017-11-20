---
title: Strumenti del linker LNK2013 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK2013
dev_langs: C++
helpviewer_keywords: LNK2013
ms.assetid: 21408e2d-3f56-4d1f-a031-00df70785ed4
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 37d6fac7ff5f9fae061ed44c639d3d3de1e9fbda
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="linker-tools-error-lnk2013"></a>Errore degli strumenti del linker LNK2013
overflow della correzione tipo correzione. 'Symbol name' di destinazione non compreso nell'intervallo  
  
 Il linker non è sufficiente l'offset o l'indirizzo necessarie nell'istruzione data poiché il simbolo di destinazione è troppo lontano dal percorso dell'istruzione.  
  
 È possibile risolvere questo problema creando più immagini o utilizzando il [/ORDER](../../build/reference/order-put-functions-in-order.md) opzione in modo che l'istruzione e la destinazione siano insieme più vicino.  
  
 Quando il nome del simbolo è un simbolo definito dall'utente (e non un simbolo generato dal compilatore), è anche possibile provare le azioni seguenti per risolvere l'errore:  
  
-   Modificare la funzione statica per essere non statico.  
  
-   Rinominare la sezione di codice che contiene la funzione statica per corrispondere a quello del chiamante.  
  
 Utilizzare `DUMPBIN /SYMBOLS`, per verificare se una funzione statica.