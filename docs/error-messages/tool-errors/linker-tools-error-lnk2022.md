---
title: Strumenti del linker LNK2022 errore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK2022
dev_langs:
- C++
helpviewer_keywords:
- LNK2022
ms.assetid: d2128c73-dde3-4b8e-a9b2-0a153acefb3b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7769bc28dc777ef8d7b82b91b9695356db05a682
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-error-lnk2022"></a>Errore degli strumenti del linker LNK2022  
  
> operazione di metadati non riuscita (*HRESULT*): *error_message*  
  
Il linker ha rilevato un errore durante l'unione dei metadati. Per collegare correttamente, è necessario risolvere gli errori di metadati.  
  
Un modo per diagnosticare questo problema consiste nell'eseguire **ildasm-token** sui file per trovare tipi di oggetto sono elencati i token in `error_message`ed esaminare le differenze.  Nei metadati, due tipi diversi con lo stesso nome non è valido, anche se l'attributo LayoutType è diverso.  
  
Per LNK2022 è quando un tipo (ad esempio, uno struct) presente in più moduli con lo stesso nome ma con definizioni in conflitto, e quando si compila con [/clr](../../build/reference/clr-common-language-runtime-compilation.md).  In questo caso, assicurarsi che il tipo ha una definizione identica in tutti i moduli.  Il nome del tipo è elencato nella `error_message`.  
  
Un'altra possibile causa LNK2022 è quando il linker rileva un file di metadati in un percorso diverso rispetto a quello indicato al compilatore (con [#using](../../preprocessor/hash-using-directive-cpp.md) ). Assicurarsi che il file metadati (con estensione dll o netmodule), quando viene passato al linker, si trovi nello stesso percorso di quando è stato passato al compilatore.  
  
Quando si compila un'applicazione ATL, l'utilizzo della macro `_ATL_MIXED` è obbligatorio in tutti i moduli, se viene utilizzato in almeno uno.  
  
## <a name="example"></a>Esempio  
  
L'esempio seguente definisce un tipo vuoto.  
  
```cpp  
// LNK2022_a.cpp  
// compile with: /clr /c  
public ref class Test {};  
```  
  
## <a name="example"></a>Esempio  
  
Questo esempio viene illustrato che è possibile collegare i due file di codice sorgente che contengono i tipi con lo stesso nome ma definizioni diverse.  
  
L'esempio seguente genera l'errore LNK2022.  
  
```cpp  
// LNK2022_b.cpp  
// compile with: LNK2022_a.cpp /clr /LD   
// LNK2022 expected  
public ref class Test {  
   void func() {}  
   int var;  
};  
```