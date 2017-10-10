---
title: Errore irreversibile C1047 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C1047
dev_langs:
- C++
helpviewer_keywords:
- C1047
ms.assetid: e1bbbc6b-a5bc-4c23-8203-488120a0ec78
caps.latest.revision: 5
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: b848f874f382e3d4f944a7eb372db9dcc5011f59
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="fatal-error-c1047"></a>Errore irreversibile C1047
L'oggetto o il file di libreria 'file' è stato creato con un compilatore precedente rispetto a quello utilizzato per altri oggetti. Ricompilare i vecchi oggetti e librerie  
  
 L'errore C1047 si verifica quando si collegano tra loro librerie o file oggetto compilati con **/LTCG** , ma mediante versioni diverse del set di strumenti di Visual C++.  
  
 Ciò può verificarsi quando si inizia a usare una nuova versione del compilatore senza eseguire una ricompilazione pulita dei file oggetto o delle librerie esistenti.  
  
 Per correggere l'errore C1047, ricompilare tutti i file oggetto o le librerie.
