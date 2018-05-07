---
title: Riga di comando D9041 avviso | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- D9041
dev_langs:
- C++
helpviewer_keywords:
- D9041
ms.assetid: ada8815f-4246-4e25-b57d-a7f16fa107cc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c22573d26e09e14789f4cbd64d68f4082125c2b3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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