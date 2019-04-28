---
title: Errore degli strumenti del linker LNK1561
ms.date: 11/04/2016
f1_keywords:
- LNK1561
helpviewer_keywords:
- LNK1561
ms.assetid: cb0b709b-7c9c-4496-8a4e-9e1e4aefe447
ms.openlocfilehash: ad216c7b7a09b8dd5d2ca2b86bc3a386fa18a552
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62161030"
---
# <a name="linker-tools-error-lnk1561"></a>Errore degli strumenti del linker LNK1561

punto di ingresso deve essere definito

Il linker non è stata trovata un' *punto di ingresso*, la funzione da chiamare nell'eseguibile iniziale. Per impostazione predefinita, il linker cerca un `main` oppure `wmain` funzione per un'app console, un `WinMain` o `wWinMain` funzione per un'app di Windows, o `DllMain` per una DLL che richiede l'inizializzazione. È possibile specificare un'altra funzione utilizzando il [/ENTRY](../../build/reference/entry-entry-point-symbol.md) l'opzione del linker.

Questo errore può avere cause diverse:
- Si potrebbe non sono inclusi i file che definisce il punto di ingresso nell'elenco dei file da collegare. Verificare che il file che contiene la funzione di punto di ingresso è collegato all'app.
- Potrebbe aver definito il punto di ingresso usando la firma della funzione errato. ad esempio, si potrebbe hanno digitato correttamente o utilizzata nel caso non corretto per il nome della funzione o specificato il tipo restituito o i tipi di parametro in modo non corretto.
- Non è stato specificato il [/DLL](../../build/reference/dll-build-a-dll.md) durante la compilazione di una DLL.
- Era possibile specificare il nome della funzione di punto di ingresso in modo non corretto quando si è usato il [/ENTRY](../../build/reference/entry-entry-point-symbol.md) l'opzione del linker.
- Se si usa la [LIB](../../build/reference/lib-reference.md) strumento per compilare una DLL, era possibile specificare un file def. In questo caso, rimuovere il file con estensione def dalla compilazione.

Quando si compila un'app, il linker cerca una funzione di punto di ingresso da chiamare per avviare il codice. Questa è la funzione che viene chiamata dopo che l'app viene caricata e viene inizializzato il runtime. È necessario fornire una funzione di punto di ingresso per un'app o non è possibile eseguire l'app. Un punto di ingresso è facoltativo per una DLL. Per impostazione predefinita, il linker cerca una funzione di punto di ingresso con uno dei diversi nomi specifici e le firme, ad esempio `int main(int, char**)`. È possibile specificare un altro nome di funzione come voce punto con l'opzione del linker /ENTRY.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore LNK1561:

```cpp
// LNK1561.cpp
// LNK1561 expected
int i;
// add a main function to resolve this error
```