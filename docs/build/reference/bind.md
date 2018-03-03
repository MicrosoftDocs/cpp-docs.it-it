---
title: -BIND | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /bind
dev_langs:
- C++
helpviewer_keywords:
- -BIND editbin option
- entry points, addresses
- BIND editbin option
- entry points
- /BIND editbin option
- import address table
ms.assetid: 3772b330-1868-4c90-857d-c31faa867982
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 50f2f1856b4718af8e87728a79511d9b18654efb
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="bind"></a>/BIND
```  
/BIND[:PATH=path]  
```  
  
## <a name="remarks"></a>Note  
 Questa opzione imposta gli indirizzi dei punti di ingresso nella tabella di indirizzi di importazione per un file eseguibile o DLL. Utilizzare questa opzione per ridurre il tempo di caricamento di un programma.  
  
 Specificare un file eseguibile del programma e DLL nel *file* argomento nella riga di comando EDITBIN. Facoltativo *percorso* argomento di /BIND indica la posizione delle DLL utilizzate dai file specificati. Separare più directory con un punto e virgola (**;**). Se *percorso* non viene specificato, la ricerca verrà effettuata nelle directory specificate nella variabile di ambiente PATH. Se *percorso* viene specificato, la variabile PATH verrà ignorata.  
  
 Per impostazione predefinita, il caricatore programma imposta gli indirizzi dei punti di ingresso durante il caricamento di un programma. La quantità di tempo questo processo varia a seconda del numero delle DLL e il numero di punti di ingresso a cui fa riferimento nel programma. Se un programma è stato modificato con /BIND e se gli indirizzi di base per il file eseguibile e la DLL non sono in conflitto con le DLL che sono già caricate, il sistema operativo è necessario impostare questi indirizzi. In una situazione in cui si basano erroneamente i file, il sistema operativo consente di rilocare le DLL del programma e Ricalcola gli indirizzi di punto di ingresso, che aggiunge alla fase di caricamento del programma.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)