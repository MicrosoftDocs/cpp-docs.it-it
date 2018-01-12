---
title: Errore irreversibile C1047 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C1047
dev_langs: C++
helpviewer_keywords: C1047
ms.assetid: e1bbbc6b-a5bc-4c23-8203-488120a0ec78
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6ddc117d1e83c635bfbc644606c6c8c6032ff4f8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fatal-error-c1047"></a>Errore irreversibile C1047
L'oggetto o il file di libreria 'file' è stato creato con un compilatore precedente rispetto a quello utilizzato per altri oggetti. Ricompilare i vecchi oggetti e librerie  
  
 L'errore C1047 si verifica quando si collegano tra loro librerie o file oggetto compilati con **/LTCG** , ma mediante versioni diverse del set di strumenti di Visual C++.  
  
 Ciò può verificarsi quando si inizia a usare una nuova versione del compilatore senza eseguire una ricompilazione pulita dei file oggetto o delle librerie esistenti.  
  
 Per correggere l'errore C1047, ricompilare tutti i file oggetto o le librerie.