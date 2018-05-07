---
title: Strumenti del linker LNK1561 errore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1561
dev_langs:
- C++
helpviewer_keywords:
- LNK1561
ms.assetid: cb0b709b-7c9c-4496-8a4e-9e1e4aefe447
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8de3a8eebb8cc023f3ee6f2d2e4c82e718fe79e7
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-error-lnk1561"></a>Errore degli strumenti del linker LNK1561
punto di ingresso deve essere definito  
  
Il linker non ha trovato un *punto di ingresso*, la funzione iniziale a chiamare nell'eseguibile. Per impostazione predefinita, il linker cerca un `main` o `wmain` funzione per un'applicazione console, un `WinMain` o `wWinMain` funzione per un'app di Windows, o `DllMain` per una DLL che richiede l'inizializzazione. È possibile specificare un'altra funzione utilizzando il [/ENTRY](../../build/reference/entry-entry-point-symbol.md) l'opzione del linker.  
  
Questo errore può avere cause diverse:  
-   Si potrebbe non includere il file che definisce il punto di ingresso nell'elenco dei file da collegare. Verificare che il file che contiene la funzione di punto di ingresso è collegato l'app.  
-   Si può essere definite come il punto di ingresso utilizzando la firma della funzione errato. ad esempio, si potrebbe avere digitato utilizzato nel caso di errore per il nome della funzione o specificato in modo errato il tipo restituito o i tipi di parametro.  
-   Non è stato specificato il [/DLL](../../build/reference/dll-build-a-dll.md) opzione quando si compila una DLL.  
-   Era possibile specificare il nome della funzione di punto di ingresso in modo non corretto quando si utilizza il [/ENTRY](../../build/reference/entry-entry-point-symbol.md) l'opzione del linker.  
-   Se si utilizza il [LIB](../../build/reference/lib-reference.md) strumento per compilare una DLL, potrebbe essere stato specificato un file def. In questo caso, rimuovere il file con estensione def dalla compilazione.    
  
Quando si compila un'app, il linker esegue la ricerca di una funzione di punto di ingresso da chiamare per avviare il codice. Si tratta della funzione che viene chiamata dopo che l'applicazione viene caricato e viene inizializzato il runtime. È necessario fornire una funzione di punto di ingresso per un'app o non è possibile eseguire l'app. Un punto di ingresso è facoltativo per una DLL. Per impostazione predefinita, il linker esegue la ricerca di una funzione di punto di ingresso con uno dei diversi nomi specifici e le firme, ad esempio `int main(int, char**)`. È possibile specificare un altro nome di funzione come voce punto utilizzando l'opzione del linker /ENTRY.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore LNK1561:  
  
```cpp  
// LNK1561.cpp  
// LNK1561 expected  
int i;  
// add a main function to resolve this error  
```