---
title: Strumenti del linker LNK1301 errore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1301
dev_langs:
- C++
helpviewer_keywords:
- LNK1301
ms.assetid: 760da428-7182-4b25-b20a-de90d4b9a9cd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0b4e298ad3815c741ff6c901ac39bf7838ed135d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33299705"
---
# <a name="linker-tools-error-lnk1301"></a>Errore degli strumenti del linker LNK1301
Moduli clr LTCG incompatibile con /LTCG: parametro  
  
 Un modulo compilato con /GL e /clr è stato passato al linker insieme a una delle ottimizzazioni PGO parametri (PGO) di /LTCG.  
  
 Ottimizzazioni PGO non sono supportate per i moduli /clr.  
  
 Per altre informazioni, vedere:  
  
-   [/GL (ottimizzazione intero programma)](../../build/reference/gl-whole-program-optimization.md)  
  
-   [/LTCG (generazione di codice in fase di collegamento)](../../build/reference/ltcg-link-time-code-generation.md)  
  
-   [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md)  
  
-   [Ottimizzazioni PGO](../../build/reference/profile-guided-optimizations.md)  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
1.  Non compilare con /clr o il collegamento con uno dei parametri a /LTCG PGO.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore LNK1301:  
  
```  
// LNK1301.cpp  
// compile with: /clr /GL /link /LTCG:PGI LNK1301.obj  
// LNK1301 expected  
class MyClass {  
public:  
   int i;  
};  
```