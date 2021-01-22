---
description: 'Altre informazioni su: scaricamento esplicito di una DLL a caricamento ritardato'
title: Scarica in modo esplicito una DLL a caricamento ritardato
ms.date: 01/19/2021
helpviewer_keywords:
- /DELAY:UNLOAD linker option
- DELAY:UNLOAD linker option
- __FUnloadDelayLoadedDLL2
- delayed loading of DLLs, unloading
ms.openlocfilehash: b4e137f293c6497e234a7bb93bd16b5bb6887741
ms.sourcegitcommit: 3d9cfde85df33002e3b3d7f3509ff6a8dc4c0a21
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/21/2021
ms.locfileid: "98666888"
---
# <a name="explicitly-unload-a-delay-loaded-dll"></a>Scarica in modo esplicito una DLL a caricamento ritardato

L' [`/delay:unload`](delay-delay-load-import-settings.md) opzione del linker consente al codice di scaricare in modo esplicito una dll a caricamento ritardato. Per impostazione predefinita, quando il codice Scarica la DLL, le importazioni a caricamento ritardato rimangono nella tabella di indirizzi di importazione (IAT). Tuttavia, se si usa **`/delay:unload`** nella riga di comando del linker, la funzione helper supporta lo scaricamento esplicito della dll tramite una `__FUnloadDelayLoadedDLL2` chiamata e reimposta la tabella IAT sul formato originale. I puntatori Now-non validi vengono sovrascritti. La tabella IAT è un campo della [`ImgDelayDescr`](calling-conventions-parameters-and-return-type.md) struttura che contiene l'indirizzo di una copia della IAT originale, se disponibile.

## <a name="example"></a>Esempio

### <a name="code"></a>Codice

```C
// link with /link /DELAYLOAD:MyDLL.dll /DELAY:UNLOAD
#include <windows.h>
#include <delayimp.h>
#include "MyDll.h"
#include <stdio.h>

#pragma comment(lib, "delayimp")
#pragma comment(lib, "MyDll")
int main()
{
    BOOL TestReturn;
    // MyDLL.DLL will load at this point
    fnMyDll();

    //MyDLL.dll will unload at this point
    TestReturn = __FUnloadDelayLoadedDLL2("MyDll.dll");

    if (TestReturn)
        printf_s("\nDLL was unloaded");
    else
        printf_s("\nDLL was not unloaded");
}
```

### <a name="comments"></a>Commenti

Note importanti per lo scaricamento di una DLL a caricamento ritardato:

- È possibile trovare l'implementazione della `__FUnloadDelayLoadedDLL2` funzione nel file *`delayhlp.cpp`* , nella *`include`* Directory VC.

- Il *`name`* parametro della `__FUnloadDelayLoadedDLL2` funzione deve corrispondere esattamente a quello contenuto nella libreria di importazione. (Tale stringa si trova anche nella tabella Import dell'immagine). È possibile visualizzare il contenuto della libreria di importazione usando [`DUMPBIN /DEPENDENTS`](dependents.md) . Se si preferisce una corrispondenza di stringa senza distinzione tra maiuscole e minuscole, è possibile `__FUnloadDelayLoadedDLL2` eseguire l'aggiornamento per usare una delle funzioni stringa CRT senza distinzione tra maiuscole e minuscole o una chiamata API Windows.

Per altre informazioni, vedere [scaricare una dll a caricamento ritardato](unloading-a-delay-loaded-dll.md).

## <a name="see-also"></a>Vedi anche

[Supporto per le DLL a caricamento ritardato nel linker](linker-support-for-delay-loaded-dlls.md)
