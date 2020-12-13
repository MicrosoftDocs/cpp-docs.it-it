---
description: 'Altre informazioni su: avvisi degli strumenti del linker LNK4217'
title: Avviso degli strumenti del linker LNK4217
ms.date: 07/23/2019
f1_keywords:
- LNK4217
helpviewer_keywords:
- LNK4217
ms.assetid: 280dc03e-5933-4e8d-bb8c-891fbe788738
ms.openlocfilehash: d3ace3586cf11da4dd87f00a58543c6d60fc1a10
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97150592"
---
# <a name="linker-tools-warning-lnk4217"></a>Avviso degli strumenti del linker LNK4217

> il simbolo '*Symbol*' definito in '*filename_1. obj*' viene importato da'*filename_2. obj*' nella funzione '*Function*'

per un simbolo è stato specificato [__declspec (dllimport)](../../cpp/dllexport-dllimport.md) anche se il simbolo è definito in un file oggetto nella stessa immagine. Rimuovere il `__declspec(dllimport)` modificatore per risolvere questo avviso.

## <a name="remarks"></a>Commenti

*Symbol* è il nome del simbolo definito all'interno dell'immagine. *Function* è la funzione che importa il simbolo.

Questo avviso non viene visualizzato quando si esegue la compilazione con l'opzione [/CLR](../../build/reference/clr-common-language-runtime-compilation.md) .

LNK4217 può anche verificarsi se si tenta di collegare due moduli insieme, quando invece è necessario compilare il secondo modulo con la libreria di importazione del primo modulo.

```cpp
// main.cpp
__declspec(dllimport) void func();

int main()
{
    func();
    return 0;
}

```

E quindi,

```cpp
// tt.cpp
// compile with: /c
void func() {}
```

Il tentativo di compilare questi due moduli come illustrato di seguito determinerà LNK4217:

```cmd
cl.exe /c main.cpp tt.cpp
link.exe main.obj tt.obj
```

Per correggere l'errore, dopo la compilazione dei due file, passare TT. obj a lib.exe per creare un file con estensione LIB, quindi collegare Main. obj con TT. lib, come illustrato di seguito:

```cmd
cl.exe /c main.cpp tt.cpp
lib.exe tt.obj /export:func /def
link.exe main.obj tt.lib
```

## <a name="see-also"></a>Vedi anche

[Avviso degli strumenti del linker LNK4049](linker-tools-warning-lnk4049.md) \
[Avviso degli strumenti del linker LNK4286](linker-tools-warning-lnk4286.md) \
[dllexport, dllimport](../../cpp/dllexport-dllimport.md)
