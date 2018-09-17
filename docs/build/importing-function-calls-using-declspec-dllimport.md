---
title: Importazione di chiamate di funzione tramite declspec | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
f1_keywords:
- __declspec
- dllimport
dev_langs:
- C++
helpviewer_keywords:
- importing function calls [C++]
- dllimport attribute [C++], function call imports
- __declspec(dllimport) keyword [C++]
- function calls [C++], importing
ms.assetid: 6b53c616-0c6d-419a-8e2a-d2fff20510b3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a3f7c1bf81b94eebbe32b40053fc5ce3aeaa0bd7
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45715793"
---
# <a name="importing-function-calls-using-declspecdllimport"></a>Importazione di chiamate di funzione tramite __declspec(dllimport)

Esempio di codice seguente viene illustrato come utilizzare **_declspec(dllimport)** per importare le chiamate di funzione da una DLL in un'applicazione. Si supponga che `func1` è una funzione che si trova in una DLL separata dal file .exe che contiene il **principale** (funzione).

Senza **declspec**, dato il seguente codice:

```
int main(void)
{
   func1();
}
```

il compilatore genera codice che si presenta come segue:

```
call func1
```

e il linker Converte la chiamata in qualcosa di simile al seguente:

```
call 0x4000000         ; The address of 'func1'.
```

Se `func1` presente in un'altra DLL, il linker non è possibile risolvere questo direttamente perché non contiene alcun modo per sapere quali l'indirizzo del `func1` è. In ambienti a 16 bit, il linker aggiunge questo indirizzo di codice per un elenco di file .exe il caricatore corregge fase di esecuzione con l'indirizzo corretto. Negli ambienti a 32 e 64 bit, il linker genera un thunk di cui conosce l'indirizzo. In un ambiente a 32 bit il thunk simile:

```
0x40000000:    jmp DWORD PTR __imp_func1
```

Di seguito `imp_func1` è l'indirizzo per il `func1` slot nella tabella di indirizzi di importazione del file .exe. Pertanto, tutti gli indirizzi sono noti al linker. Il caricatore deve solo aggiornare tabella IAT .exe del file in fase di caricamento per tutto il corretto funzionamento.

Pertanto, l'utilizzo **declspec** è migliore perché il linker genera un thunk se non è obbligatorio. Thunk rendere il codice più grandi (nei sistemi RISC, è possibile utilizzare diverse istruzioni) e può ridurre le prestazioni della cache. Se si indica al compilatore che la funzione è in una DLL, è possibile generare una chiamata indiretta per l'utente.

A questo punto, il codice:

```
__declspec(dllimport) void func1(void);
int main(void)
{
   func1();
}
```

Genera l'istruzione in questione:

```
call DWORD PTR __imp_func1
```

C'è nessun thunk e no `jmp` (istruzione), in modo che il codice è più piccolo e più veloci.

D'altra parte, per le chiamate di funzione all'interno di una DLL, si preferisce non dover usare una chiamata indiretta. Si conosce già l'indirizzo della funzione. Poiché sono necessari tempo e lo spazio per caricare e archiviare l'indirizzo della funzione prima di una chiamata indiretta, una chiamata diretta è sempre più veloce e più piccoli. Si vuole solo usare **declspec** quando si chiamano le funzioni DLL dall'esterno della DLL stessa. Non utilizzare **declspec** sulle funzioni all'interno di una DLL durante la compilazione di tale DLL.

## <a name="see-also"></a>Vedere anche

[Importazione in un'applicazione](../build/importing-into-an-application.md)