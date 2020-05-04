---
title: Importazione di chiamate di funzione tramite __declspec(dllimport)
description: Come e perché usare __declspec (dllimport) quando si chiamano i dati e le funzioni DLL.
ms.date: 05/03/2020
helpviewer_keywords:
- importing function calls [C++]
- dllimport attribute [C++], function call imports
- __declspec(dllimport) keyword [C++]
- function calls [C++], importing
ms.assetid: 6b53c616-0c6d-419a-8e2a-d2fff20510b3
ms.openlocfilehash: 515fbdb2824c1eaf41e822adeae1a16d3072eec4
ms.sourcegitcommit: 8a01ae145bc65f5bc90d6e47b4a1bdf47b073ee7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2020
ms.locfileid: "82765721"
---
# <a name="importing-function-calls-using-__declspecdllimport"></a>Importazione di chiamate di funzione tramite`__declspec(dllimport)`

L'annotazione delle **`__declspec(dllimport)`** chiamate tramite può renderle più veloci. **`__declspec(dllimport)`** è sempre necessario per accedere ai dati DLL esportati.

## <a name="import-a-function-from-a-dll"></a>Importare una funzione da una DLL

Nell'esempio di codice riportato di seguito viene **`__declspec(dllimport)`** illustrato come utilizzare per importare chiamate di funzioni da una dll in un'applicazione. Si supponga `func1` che sia una funzione che si trova in una DLL separata dal file eseguibile che contiene la funzione **Main** .

Senza **`__declspec(dllimport)`**, dato questo codice:

```C
int main(void)
{
   func1();
}
```

il compilatore genera codice simile al seguente:

```asm
call func1
```

il linker converte la chiamata in un tipo simile al seguente:

```asm
call 0x4000000         ; The address of 'func1'.
```

Se `func1` è presente in un'altra DLL, il linker non è in grado di risolvere direttamente questo indirizzo perché non ha modo di `func1` conoscere l'indirizzo di. Negli ambienti a 32 bit e a 64 bit, il linker genera un thunk in un indirizzo noto. In un ambiente a 32 bit il thunk ha un aspetto simile al seguente:

```asm
0x40000000:    jmp DWORD PTR __imp_func1
```

Di `__imp_func1` seguito è riportato l'indirizzo `func1` per lo slot nella tabella di indirizzi di importazione del file eseguibile. Tutti questi indirizzi sono noti al linker. Il caricatore deve solo aggiornare la tabella degli indirizzi di importazione del file eseguibile in fase di caricamento affinché tutto funzioni correttamente.

Questo è il motivo **`__declspec(dllimport)`** per cui l'uso di è migliore: perché il linker non genera un thunk se non è obbligatorio. I thunk rendono il codice più grande (nei sistemi RISC, possono essere diverse istruzioni) e possono peggiorare le prestazioni della cache. Se si indica al compilatore che la funzione si trova in una DLL, può generare una chiamata indiretta.

A questo punto, questo codice:

```C
__declspec(dllimport) void func1(void);
int main(void)
{
   func1();
}
```

genera questa istruzione:

```asm
call DWORD PTR __imp_func1
```

Non esiste alcun thunk e nessuna `jmp` istruzione, quindi il codice è più piccolo e più veloce. È anche possibile ottenere lo stesso effetto senza **`__declspec(dllimport)`** usare l'ottimizzazione dell'intero programma. Per altre informazioni, vedere [/GL (Ottimizzazione intero programma)](reference/gl-whole-program-optimization.md).

Per le chiamate di funzione in una DLL, non è necessario usare una chiamata indiretta. Il linker conosce già l'indirizzo della funzione. Impiega più tempo e spazio per caricare e archiviare l'indirizzo della funzione prima di una chiamata indiretta. Una chiamata diretta è sempre più veloce e più piccola. Si desidera utilizzare **`__declspec(dllimport)`** solo quando si chiamano le funzioni DLL dall'esterno della dll. Non usare **`__declspec(dllimport)`** sulle funzioni all'interno di una dll durante la compilazione della dll.

## <a name="see-also"></a>Vedere anche

[Importazione in un'applicazione](importing-into-an-application.md)
