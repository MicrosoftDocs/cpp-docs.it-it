---
title: Strumenti del linker LNK1561 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK1561
dev_langs:
- C++
helpviewer_keywords:
- LNK1561
ms.assetid: cb0b709b-7c9c-4496-8a4e-9e1e4aefe447
caps.latest.revision: 8
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
ms.sourcegitcommit: 4bac7b2942f9d72674b8092dc7bf64174dd3c349
ms.openlocfilehash: fbc63a58cd4e276aa2a3f77baeea07d1912eda98
ms.lasthandoff: 04/24/2017

---
# <a name="linker-tools-error-lnk1561"></a>Errore degli strumenti del linker LNK1561
il punto d'ingresso deve essere definito  
  
Non è stato individuato un punto di ingresso. Questo errore può avere cause diverse:  
-   Si potrebbe non includere il file che definisce il punto di ingresso nell'elenco dei file da collegare. Verificare che il file che contiene la funzione di punto di ingresso è collegato l'app.  
-   Si può essere definite come il punto di ingresso utilizzando la firma della funzione errato. ad esempio, si potrebbe avere digitato utilizzato nel caso di errore per il nome della funzione o specificato in modo errato il tipo restituito o i tipi di parametro. Per impostazione predefinita, il linker cerca un `main` o `wmain` funzione per un'applicazione console, un `WinMain` o `wWinMain` funzione per un'app di Windows, o `DllMain` per una DLL che richiede l'inizializzazione.  
-   Non è stato specificato il [/DLL](../../build/reference/dll-build-a-dll.md) opzione quando si compila una DLL.  
-   Era possibile specificare il nome della funzione di punto di ingresso in modo non corretto quando si utilizza il [/ENTRY](../../build/reference/entry-entry-point-symbol.md) l'opzione del linker.  
-   Se si utilizza il [LIB](../../build/reference/lib-reference.md) strumento per compilare una DLL, potrebbe essere stato specificato un file def. In questo caso, rimuovere il file con estensione def dalla compilazione.    
  
Quando si compila un'app, il linker cerca un *punto di ingresso*, la funzione chiamata per avviare il codice. Si tratta della funzione che viene chiamata dopo che l'applicazione viene caricato e viene inizializzato il runtime. È necessario fornire una funzione di punto di ingresso per un'app o non è possibile eseguire l'app. Un punto di ingresso è facoltativo per una DLL. Per impostazione predefinita, il linker esegue la ricerca di una funzione di punto di ingresso con uno dei diversi nomi specifici e le firme, ad esempio `int main(int, char**)`. È possibile specificare un altro nome di funzione come voce punto utilizzando l'opzione del linker /ENTRY.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore LNK1561:  
  
```cpp  
// LNK1561.cpp  
// LNK1561 expected  
int i;  
// add a main function to resolve this error  
```
