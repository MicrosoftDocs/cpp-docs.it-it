---
title: Strumenti del linker LNK2022 errore | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK2022
dev_langs:
- C++
helpviewer_keywords:
- LNK2022
ms.assetid: d2128c73-dde3-4b8e-a9b2-0a153acefb3b
caps.latest.revision: 15
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 84964b0a49b236bae056125de8155b18880eb378
ms.openlocfilehash: 91fb85679fd6c66bc97974912a2de688f494d5e9
ms.lasthandoff: 02/24/2017

---
# <a name="linker-tools-error-lnk2022"></a>Errore degli strumenti del linker LNK2022
operazione dei metadati non riuscita (HRESULT): error_message  
  
 Il linker ha rilevato un errore durante l'unione dei metadati. È necessario risolvere gli errori di metadati per collegare correttamente.  
  
 Un modo per diagnosticare questo problema consiste nell'eseguire **ildasm – token** file di oggetto per individuare i cui tipi sono elencati i token in `error_message`e identificare eventuali differenze.  Nei metadati, due tipi diversi con lo stesso nome non è valido, anche se l'attributo LayoutType è diverso.  
  
 Per LNK2022 è quando un tipo (ad esempio, uno struct) presente in più moduli con lo stesso nome ma con definizioni in conflitto e quando esegue la compilazione con [/clr](../../build/reference/clr-common-language-runtime-compilation.md).  In questo caso, assicurarsi che il tipo dispone di una definizione identica in tutti i moduli.  Il nome del tipo è elencato `error_message`.  
  
 Un'altra possibile causa LNK2022 è quando il linker rileva un file di metadati in una posizione diversa rispetto a quello indicato al compilatore (con [#using](../../preprocessor/hash-using-directive-cpp.md) ). Assicurarsi che il file metadati (con estensione dll o netmodule), quando viene passato al linker, si trovi nello stesso percorso di quando è stato passato al compilatore.  
  
 Quando si compila un'applicazione ATL, l'utilizzo di [_ATL_MIXED è presente](http://msdn.microsoft.com/Library/11b59a83-7098-43e2-9f7b-408299930966) è obbligatorio in tutti i moduli, se viene utilizzato in almeno uno.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente definisce un tipo vuoto.  
  
```  
// LNK2022_a.cpp  
// compile with: /clr /c  
public ref class Test {};  
```  
  
## <a name="example"></a>Esempio  
 Questo esempio mostra che non è possibile collegare due file di codice sorgente che contengono i tipi con lo stesso nome ma definizioni differenti.  
  
 Nell'esempio seguente viene generato l'errore LNK2022.  
  
```  
// LNK2022_b.cpp  
// compile with: LNK2022_a.cpp /clr /LD   
// LNK2022 expected  
public ref class Test {  
   void func() {}  
   int var;  
};  
```
