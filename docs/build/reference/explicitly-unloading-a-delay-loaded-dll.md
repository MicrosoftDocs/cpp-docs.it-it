---
description: 'Altre informazioni su: scaricamento esplicito di una DLL di Delay-Loaded'
title: Scaricamento esplicito di una DLL a caricamento ritardato
ms.date: 11/04/2016
helpviewer_keywords:
- /DELAY:UNLOAD linker option
- DELAY:UNLOAD linker option
- __FUnloadDelayLoadedDLL2
- delayed loading of DLLs, unloading
ms.assetid: 1c4c5172-fd06-45d3-9e4f-f12343176b3c
ms.openlocfilehash: 03df08487acc1be05226021d6b7c1593eb0f031b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97192382"
---
# <a name="explicitly-unloading-a-delay-loaded-dll"></a>Scaricamento esplicito di una DLL a caricamento ritardato

L'opzione del linker [/delay](delay-delay-load-import-settings.md): Unload consente di scaricare una dll che è stata caricata in ritardo. Per impostazione predefinita, quando il codice Scarica la DLL (usando/Delay: Unload e **__FUnloadDelayLoadedDLL2**), le importazioni a caricamento ritardato rimangono nella tabella di indirizzi di importazione (IAT). Tuttavia, se si usa/Delay: Unload nella riga di comando del linker, la funzione di supporto supporterà lo scaricamento esplicito della DLL, reimpostando la tabella IAT sul formato originale; i puntatori ora non validi verranno sovrascritti. La tabella IAT è un campo nel [ImgDelayDescr](calling-conventions-parameters-and-return-type.md) che contiene l'indirizzo di una copia della IAT originale (se esistente).

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

Note importanti per lo scaricamento di una DLL a caricamento ritardato:

- È possibile trovare l'implementazione della funzione **__FUnloadDelayLoadedDLL2** nel file \VC7\INCLUDE\DELAYHLP. CPP.

- Il parametro Name della funzione **__FUnloadDelayLoadedDLL2** deve corrispondere esattamente a quello contenuto nella libreria di importazione. tale stringa è anche inclusa nella tabella Import dell'immagine. È possibile visualizzare il contenuto della libreria di importazione con [DUMPBIN/DEPENDENTS](dependents.md). Se si desidera una corrispondenza di stringa senza distinzione tra maiuscole e minuscole, è possibile aggiornare **__FUnloadDelayLoadedDLL2** per usare una delle funzioni stringa CRT o una chiamata API Windows.

Per ulteriori informazioni, vedere [scaricamento di una DLL Delay-Loaded](unloading-a-delay-loaded-dll.md) .

## <a name="see-also"></a>Vedi anche

[Supporto del linker per le DLL di Delay-Loaded](linker-support-for-delay-loaded-dlls.md)
