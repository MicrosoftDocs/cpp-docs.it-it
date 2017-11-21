---
title: Riga di comando D9041 avviso | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: D9041
dev_langs: C++
helpviewer_keywords: D9041
ms.assetid: ada8815f-4246-4e25-b57d-a7f16fa107cc
caps.latest.revision: "3"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 9f80de8e9bbbf7c754ac8e13061ef3ae50c4715a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="command-line-warning-d9041"></a>Avviso della riga di comando D9041
valore non valido 'value' per '/Option'; Supponendo che 'value'; aggiungere ' /ANALYZE ' alle opzioni della riga di comando quando si specifica questo avviso  
  
 È stato aggiunto un numero di avviso di analisi del codice di **/wd**, **/we**, **/wo**, o **/wl** opzione della riga di comando senza specificare anche il **/ANALYZE** opzione della riga di comando. Per risolvere questo errore, aggiungere il **/ANALYZE** opzione della riga di comando oppure rimuovere il numero di avviso non valido dal appropriata **/w** opzione della riga di comando.  
  
## <a name="example"></a>Esempio  
 L'esempio di riga di comando seguente genera l'avviso D9041:  
  
```  
cl /EHsc /LD /wd6001 filename.cpp  
```  
  
 Per risolvere il problema, aggiungere il **/ANALYZE** opzione della riga di comando. Se **/ANALYZE** non è supportato nella versione del compilatore, rimuovere il numero di avviso non valido di **/wd** opzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Errori della riga di comando D8000 a D9999](../../error-messages/tool-errors/command-line-errors-d8000-through-d9999.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)