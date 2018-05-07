---
title: Errore irreversibile del compilatore di risorse RC1120 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- RC1120
dev_langs:
- C++
helpviewer_keywords:
- RC1120
ms.assetid: 4e462931-e42e-42e3-8bfc-847677194286
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d117f7b106e14cde2def5477fab5ad0fc92a6411
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="resource-compiler-fatal-error-rc1120"></a>Errore irreversibile del compilatore di risorse RC1120
dalla memoria, necessaria del numero di byte  
  
 Il compilatore di risorse ha esaurito la risorsa di archiviazione per gli elementi memorizzati nell'heap. In genere, questa è la causa della presenza di troppi simboli.  
  
### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili  
  
1.  Aumentare lo spazio dei file di scambio di Windows. Per ulteriori informazioni su come aumentare lo spazio del file di scambio, vedere la memoria virtuale nella Guida di Windows.  
  
2.  Eliminare non necessari file di inclusione, in particolare non necessari `#define`prototipi s e la funzione.  
  
3.  Suddividere il file corrente in due o più file e compilarle separatamente.  
  
4.  Rimuovere altri programmi o i driver in esecuzione nel sistema, che potrebbe essere molta memoria.