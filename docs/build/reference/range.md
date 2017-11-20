---
title: ': INTERVALLO COMPRESO | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /RANGE
dev_langs: C++
helpviewer_keywords:
- /RANGE dumpbin option
- -RANGE dumpbin option
ms.assetid: 7eeba266-32be-49cc-a350-96bdf541f98a
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 2558beae1a7bd689beba001f4637b1109b70faa5
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="range"></a>/RANGE
Modifica l'output di dumpbin se utilizzata con altre opzioni di dumpbin, ad esempio /RAWDATA o opzione /DISASM.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/RANGE:vaMin[,vaMax]  
```  
  
## <a name="flags"></a>Flag  
 **vaMin**  
 L'indirizzo virtuale in cui si desidera l'operazione di dumpbin per iniziare.  
  
 **vaMax** (facoltativo)  
 L'indirizzo virtuale in cui si desidera l'operazione di dumpbin per terminare. Se non specificato, dumpbin passerà alla fine del file.  
  
## <a name="remarks"></a>Note  
 Per visualizzare gli indirizzi virtuali per un'immagine, utilizzare il file di mapping per l'immagine (RVA + Base), il **opzione /DISASM** o **/HEADERS** opzione di dumpbin oppure la finestra disassembly nel debugger di Visual Studio.  
  
## <a name="example"></a>Esempio  
 In questo esempio, **/intervallo** viene utilizzata per modificare la visualizzazione del **opzione /disasm** opzione. In questo esempio, il valore iniziale viene espresso come numero decimale e il valore finale viene specificato un numero esadecimale.  
  
```  
dumpbin /disasm /range:4219334,0x004061CD t.exe  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)