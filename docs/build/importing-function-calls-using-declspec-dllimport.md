---
title: Importazione di chiamate di funzione tramite __declspec(dllimport)
ms.date: 11/04/2016
helpviewer_keywords:
- importing function calls [C++]
- dllimport attribute [C++], function call imports
- __declspec(dllimport) keyword [C++]
- function calls [C++], importing
ms.assetid: 6b53c616-0c6d-419a-8e2a-d2fff20510b3
ms.openlocfilehash: 1743cbba8c3046ef844f16be8e78d43c61f62606
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79442516"
---
# <a name="importing-function-calls-using-__declspecdllimport"></a>Importazione di chiamate di funzione tramite __declspec(dllimport)

Nell'esempio di codice seguente viene illustrato come utilizzare **_declspec (dllimport)** per importare chiamate di funzioni da una dll in un'applicazione. Si supponga che `func1` sia una funzione che risiede in una DLL separata dal file exe che contiene la funzione **Main** .

Senza **__declspec (dllimport)** , dato questo codice:

```
int main(void)
{
   func1();
}
```

il compilatore genera codice simile al seguente:

```
call func1
```

il linker converte la chiamata in un tipo simile al seguente:

```
call 0x4000000         ; The address of 'func1'.
```

Se `func1` è presente in un'altra DLL, il linker non è in grado di risolverlo direttamente perché non è in grado di conoscere l'indirizzo del `func1`. Negli ambienti a 16 bit il linker aggiunge questo indirizzo di codice a un elenco nel file con estensione exe che verrà patchato dal caricatore in fase di esecuzione con l'indirizzo corretto. Negli ambienti a 32 bit e a 64 bit, il linker genera un thunk di cui conosce l'indirizzo. In un ambiente a 32 bit il thunk ha un aspetto simile al seguente:

```
0x40000000:    jmp DWORD PTR __imp_func1
```

Qui `imp_func1` è l'indirizzo dello slot di `func1` nella tabella degli indirizzi di importazione del file con estensione exe. Tutti gli indirizzi sono quindi noti al linker. Il caricatore deve solo aggiornare la tabella degli indirizzi di importazione del file con estensione exe in fase di caricamento affinché tutto funzioni correttamente.

Pertanto, l'utilizzo di **__declspec (dllimport)** è migliore perché il linker non genera un thunk se non è obbligatorio. I thunk rendono il codice più grande (nei sistemi RISC, possono essere diverse istruzioni) e possono peggiorare le prestazioni della cache. Se si indica al compilatore che la funzione si trova in una DLL, può generare una chiamata indiretta.

A questo punto, questo codice:

```
__declspec(dllimport) void func1(void);
int main(void)
{
   func1();
}
```

genera questa istruzione:

```
call DWORD PTR __imp_func1
```

Non sono disponibili thunk e istruzioni `jmp`, quindi il codice è più piccolo e più veloce.

D'altra parte, per le chiamate di funzione all'interno di una DLL, non è necessario usare una chiamata indiretta. Si conosce già l'indirizzo di una funzione. Poiché il tempo e lo spazio sono necessari per caricare e archiviare l'indirizzo della funzione prima di una chiamata indiretta, una chiamata diretta è sempre più veloce e più piccola. Si desidera utilizzare solo **__declspec (dllimport)** quando si richiamano funzioni DLL dall'esterno della dll. Non utilizzare **__declspec (dllimport)** sulle funzioni all'interno di una dll durante la compilazione di tale dll.

## <a name="see-also"></a>Vedere anche

[Importazione in un'applicazione](importing-into-an-application.md)
