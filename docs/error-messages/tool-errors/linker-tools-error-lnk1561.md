---
description: 'Altre informazioni su: errore degli strumenti del linker LNK1561'
title: Errore degli strumenti del linker LNK1561
ms.date: 11/04/2016
f1_keywords:
- LNK1561
helpviewer_keywords:
- LNK1561
ms.assetid: cb0b709b-7c9c-4496-8a4e-9e1e4aefe447
ms.openlocfilehash: b8c99c6e4b016b1eee443cf8f166665f4f9ad894
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97310645"
---
# <a name="linker-tools-error-lnk1561"></a>Errore degli strumenti del linker LNK1561

il punto di ingresso deve essere definito

Il linker non ha trovato un *punto di ingresso*, la funzione iniziale da chiamare nell'eseguibile. Per impostazione predefinita, il linker cerca una `main` `wmain` funzione o per un'app console, una `WinMain` `wWinMain` funzione o per un'app di Windows o `DllMain` per una dll che richiede l'inizializzazione. È possibile specificare un'altra funzione utilizzando l'opzione del linker [/entry](../../build/reference/entry-entry-point-symbol.md) .

Questo errore può avere diverse cause:

- È possibile che non sia stato incluso il file che definisce il punto di ingresso nell'elenco dei file da collegare. Verificare che il file che contiene la funzione del punto di ingresso sia collegato all'app.
- È possibile che il punto di ingresso sia stato definito utilizzando la firma della funzione errata; ad esempio, è possibile che sia stato digitato in modo errato o che sia stato utilizzato il caso errato per il nome della funzione o che i tipi restituiti o i tipi di parametro siano stati specificati in modo errato.
- È possibile che non sia stata specificata l'opzione [/dll](../../build/reference/dll-build-a-dll.md) durante la compilazione di una dll.
- È possibile che sia stato specificato erroneamente il nome della funzione del punto di ingresso quando è stata usata l'opzione del linker [/entry](../../build/reference/entry-entry-point-symbol.md) .
- Se si utilizza lo strumento [lib](../../build/reference/lib-reference.md) per compilare una dll, è possibile che sia stato specificato un file def. In tal caso, rimuovere il file def dalla compilazione.

Quando si compila un'app, il linker cerca una funzione del punto di ingresso per chiamare per avviare il codice. Questa è la funzione che viene chiamata dopo il caricamento dell'app e l'inizializzazione del runtime. È necessario fornire una funzione del punto di ingresso per un'app o l'app non può essere eseguita. Un punto di ingresso è facoltativo per una DLL. Per impostazione predefinita, il linker cerca una funzione del punto di ingresso con uno dei diversi nomi e firme specifici, ad esempio `int main(int, char**)` . È possibile specificare un altro nome di funzione come punto di ingresso usando l'opzione del linker/ENTRY.

## <a name="example"></a>Esempio

L'esempio seguente genera l'LNK1561:

```cpp
// LNK1561.cpp
// LNK1561 expected
int i;
// add a main function to resolve this error
```
