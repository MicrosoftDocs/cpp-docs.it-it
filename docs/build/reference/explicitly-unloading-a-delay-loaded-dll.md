---
title: Scaricamento esplicito di una DLL a caricamento ritardato
ms.date: 11/04/2016
helpviewer_keywords:
- /DELAY:UNLOAD linker option
- DELAY:UNLOAD linker option
- __FUnloadDelayLoadedDLL2
- delayed loading of DLLs, unloading
ms.assetid: 1c4c5172-fd06-45d3-9e4f-f12343176b3c
ms.openlocfilehash: f661694dd791ed8db3cd9f5b72a021c7470d17f3
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57420453"
---
# <a name="explicitly-unloading-a-delay-loaded-dll"></a>Scaricamento esplicito di una DLL a caricamento ritardato

Il [/Delay](../../build/reference/delay-delay-load-import-settings.md): l'opzione del linker unload consente di scaricare una DLL con caricata ritardato. Per impostazione predefinita, quando il codice Scarica la DLL (/Delay: unload di utilizzo e **FUnloadDelayLoadedDLL2**), le importazioni a caricamento ritardato restano nella tabella di indirizzi di importazione (IAT). Tuttavia, se si usa /delay: unload nella riga di comando del linker, la funzione helper supporterà anche lo scaricamento esplicito della DLL, reimpostare la tabella IAT nel formato originale; i puntatori di ora non valido verranno sovrascritto. La tabella IAT è un campo la [ImgDelayDescr](../../build/reference/calling-conventions-parameters-and-return-type.md) che contiene l'indirizzo di una copia della tabella IAT originale (se presente).

## <a name="example"></a>Esempio

### <a name="code"></a>Codice

```
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

Note importanti relative allo scaricamento di una DLL a caricamento ritardato:

- È possibile trovare l'implementazione del **FUnloadDelayLoadedDLL2** funzione nel file \VC7\INCLUDE\DELAYHLP. CPP.

- Il parametro name del **FUnloadDelayLoadedDLL2** funzione deve corrispondere esattamente (tra cui caso) quali la libreria di importazione contiene (ovvero stringa anche nella tabella IAT nell'immagine). È possibile visualizzare il contenuto della libreria di importazione con [DUMPBIN /DEPENDENTS](../../build/reference/dependents.md). Se si desidera usare una corrispondenza tra maiuscole e minuscole stringa, è possibile aggiornare **FUnloadDelayLoadedDLL2** usare una delle funzioni CRT stringa o una chiamata all'API di Windows.

Visualizzare [lo scaricamento di una DLL a caricamento ritardato](../../build/reference/unloading-a-delay-loaded-dll.md) per altre informazioni.

## <a name="see-also"></a>Vedere anche

[Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md)
