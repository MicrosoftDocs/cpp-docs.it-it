---
title: ': INTERVALLO COMPRESO | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /RANGE
dev_langs:
- C++
helpviewer_keywords:
- /RANGE dumpbin option
- -RANGE dumpbin option
ms.assetid: 7eeba266-32be-49cc-a350-96bdf541f98a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d06d699500ba3ea441af61a2e2a5a0da3f96903a
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32374424"
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