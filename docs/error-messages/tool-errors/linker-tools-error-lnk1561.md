---
title: Errore degli strumenti del linker LNK1561
ms.date: 11/04/2016
f1_keywords:
- LNK1561
helpviewer_keywords:
- LNK1561
ms.assetid: cb0b709b-7c9c-4496-8a4e-9e1e4aefe447
ms.openlocfilehash: b397ef8e551f8cd6179392541e35183a5850454f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81357756"
---
# <a name="linker-tools-error-lnk1561"></a>Errore degli strumenti del linker LNK1561

punto di ingresso deve essere definito

Il linker non ha trovato un punto di *ingresso,* la funzione iniziale da chiamare nell'eseguibile. Per impostazione predefinita, `main` il `wmain` linker cerca una `WinMain` funzione `wWinMain` o per un'app console, una funzione o per un'app di Windows o `DllMain` una DLL che richiede l'inizializzazione. È possibile specificare un'altra funzione utilizzando l'opzione del linker [/ENTRY.](../../build/reference/entry-entry-point-symbol.md)

Questo errore può avere diverse cause:

- È possibile che il file che definisce il punto di ingresso nell'elenco dei file da collegare non sia stato incluso. Verifica che il file che contiene la funzione del punto di ingresso sia collegato all'app.
- È possibile che il punto di ingresso sia stato definito utilizzando la firma della funzione errata; Ad esempio, è possibile che sia stato digitato in modo errato o che sia stato utilizzato un caso errato per il nome della funzione oppure che il tipo restituito o i tipi di parametro siano stati specificati in modo non corretto.
- È possibile che non sia stata specificata l'opzione [/DLL durante](../../build/reference/dll-build-a-dll.md) la compilazione di una DLL.
- È possibile che il nome della funzione del punto di ingresso sia stato specificato in modo non corretto quando è stata utilizzata l'opzione del linker [/ENTRY.](../../build/reference/entry-entry-point-symbol.md)
- Se si utilizza lo strumento [LIB](../../build/reference/lib-reference.md) per compilare una DLL, è possibile che sia stato specificato un file def. In tal caso, rimuovere il file def dalla compilazione.

Quando si compila un'app, il linker cerca una funzione del punto di ingresso da chiamare per avviare il codice. Questa è la funzione che viene chiamata dopo il caricamento dell'app e l'inizializzazione del runtime. È necessario fornire una funzione del punto di ingresso per un'app, altrimenti non è possibile eseguire l'app. Un punto di ingresso è facoltativo per una DLL. Per impostazione predefinita, il linker cerca una funzione del punto di `int main(int, char**)`ingresso con uno dei diversi nomi e firme specifici, ad esempio . È possibile specificare un altro nome di funzione come punto di ingresso utilizzando l'opzione del linker /ENTRY.

## <a name="example"></a>Esempio

Nell'esempio seguente viene generato l'errore LNK1561:

```cpp
// LNK1561.cpp
// LNK1561 expected
int i;
// add a main function to resolve this error
```
